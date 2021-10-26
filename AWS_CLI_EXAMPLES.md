# Methodology
aws <SERVICE> <ACTION> \
        --query <VALUES THAT GET RETURNED> \
        --filter <LIMIT VALUES BY THIS CRITERIA> \
        --output <json|text|table>

## Create an EC2 key pair
    aws ec2 create-key-pair --key-name my-ssh-key-2 --query=KeyMaterial --output=text > ./my-ssh-key-2.pem

## Tag multiple resources with multiple tags
    aws ec2 create-tags --resources ami-1a2b3c4d i-1234567890abcdef0 --tags Key=webserver,Value= Key=stack,Value=Production

## Create and run an EC2 instance
    aws ec2 run-instances --image-id ami-7f43f307 --count 1 --instance-type t2.micro --key-name MyKeyPair --security-group-ids sg-202eb15d

## Get all instances and list them with their private IP address
    aws ec2 describe-instances --query 'Reservations[].Instances[][].{Name: Tags[?Key==`Name`].Value[] | [0], PrivateIP: PrivateIpAddress}' --filters "Name=tag:Name,Values=*$1*" --output text

## Get the instance IDs for instances with their Name tag filtered by name
    aws ec2 describe-instances --query 'Reservations[].Instances[][].{Name: Tags[?Key==`Name`].Value[] | [0], Instances: InstanceId}' --filters "Name=tag:Name,Values=wifi*" --output text

## Get the instance IDs for instances by Name tag but just report the instance ID
    aws ec2 describe-instances --query 'Reservations[].Instances[][].{Instances: InstanceId}' --filters "Name=tag:Name,Values=wifi*" --output text

## Get all the volumes that are attached to an instance by searching on the instance Name tag.
  aws ec2 describe-instances --query 'Reservations[].Instances[][].{Name: Tags[?Key==`Name`].Value[] | [0], Volumes: BlockDeviceMappings}' --filters "Name=tag:Name,Values=mycommute*" --output text

## Get the newest AMI matching a search term: "base.dtss.rhel.7*"
  aws ec2 describe-images --query 'reverse(sort_by(Images,&CreationDate))[].{Name:Name, ImageID:ImageId, CreationDate:CreationDate}' --filters Name=name,Values=base.dtss.rhel.7\* --output table

## Get all instances that have the prod or non-prod in their environment tag.
  aws ec2 describe-instances --query 'Reservations[].Instances[][].{Name: Tags[?Key==`Name`].Value[] | [0]}' --filters '[ { "Name":"tag:environment","Values":["prod","non-prod"]} ]'

## Get all the tags for all instances with a subtring in their 'Name' tag
  aws ec2 describe-instances --query 'Reservations[].Instances[][].{Name: Tags[?Key==`Name`].Value[] | [0], Tags: Tags[]}' --filters "Name=tag:Name,Values=*prod*" --output json

## Get instance IDs for all instances along with their name tag
  aws ec2 describe-instances --query 'Reservations[].Instances[][].{Instances: InstanceId, Name: Tags[?Key==`Name`].Value[] | [0]}' --output text

## List all certificates hosted in AWS Certificate Manager
  aws acm list-certificates --query "CertificateSummaryList[].DomainName"

## List all certificates sorted by name
  aws acm list-certificates --query "sort_by(CertificateSummaryList,&DomainName)[].DomainName"

## List all RDS instances and their endpoints
  aws rds describe-db-instances --query "DBInstances[].{Name:DBInstanceIdentifier,Endpoint:Endpoint.Address}" --output json

## List all RDS instances and their instance class
  aws rds describe-db-instances --query "DBInstances[].{Name:DBInstanceIdentifier,Class:DBInstanceClass}" --output=table

## List all IAM users
  aws iam list-users

## List all buckets with their size and the number of objects
  for i in $(aws s3 ls | awk '{print $3}'); do echo $i; aws s3api list-objects --bucket "$i" --output json --query "[sum(Contents[].Size), length(Contents[])]"; done

## List all hosted zones, each zone on one line
  aws route53 list-hosted-zones --query 'HostedZones[].Id' --output table | grep hostedzone | cut -d/ -f 3 | awk '{print $1}'


## List all records in a hosted zone
  aws route53 list-resource-record-sets --hosted-zone-id ZONE_ID --query 'ResourceRecordSets[].Name'

## List all records in all zones
  for zone in $(aws route53 list-hosted-zones --query 'HostedZones[].Id' --output table | grep hostedzone | cut -d/ -f 3 | awk '{print $1}'); do echo $zone; aws route53 list-resource-record-sets --hosted-zone-id $zone --query 'ResourceRecordSets[].Name'; done

## List all A, CNAME, NS records
  aws route53 list-resource-record-sets --hosted-zone-id ZX32SGVESVDB6 --query="ResourceRecordSets[?Type == 'A']"
  aws route53 list-resource-record-sets --hosted-zone-id ZX32SGVESVDB6 --query="ResourceRecordSets[?Type == 'CNAME']"
  aws route53 list-resource-record-sets --hosted-zone-id ZX32SGVESVDB6 --query="ResourceRecordSets[?Type == 'NS']"

## List all A records along with their IPs (if they have one)
  aws route53 list-resource-record-sets --hosted-zone-id ZX32SGVESVDB6 --query "ResourceRecordSets[?Type == 'A'].{Name:Name, IP:ResourceRecords[0].Value}" --output=table

## Query for a specific IP address
    aws route53 list-resource-record-sets --hosted-zone-id ZX32SGVESVDB6 --query "ResourceRecordSets[?ResourceRecords[?Value == '10.116.141.51'] && Type == 'A'].{Name:Name, IP:ResourceRecords[0].Value}" --output=table

## List the subnet groups of a DB instance
    aws rds describe-db-instances --query "DBInstances[].DBSubnetGroup[].Subnets[].SubnetIdentifier " --db-instance-identifier=DB_INSTANCE_NAME

## Get the ARN for a load balancer based on part of the name (the describe command for loadbalancers does not support --filters?)
    aws elbv2 describe-load-balancers --query "LoadBalancers[].LoadBalancerArn" | jq '.[] | select(test("wifi-qa"))'
