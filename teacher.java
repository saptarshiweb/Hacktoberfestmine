import java.util.Scanner; class teacher { 
 
    String n;     int id; 
    String sub; 
 
 teacher() 
    { 
        Scanner sc = new Scanner(System.in); 
 
        System.out.print("\nEnter the n: ");         n=sc.nextLine(); 
        System.out.print("\nEnter teacher id: ");         id=sc.nextInt(); 
        System.out.print("\nChoose the type\n1. Programming\n2.Theory\n");         int opt=sc.nextInt();         if(opt==1)             sub="Java";         else 
            sub="DM"; 
    } 
 
    void display() 
    { 
        System.out.println("Name: "+n); 
        System.out.println("Teacher ID: "+id); 
        System.out.println("Subject: "+sub); 
    } 
    public static void main(String[] a) 
{ 
        Scanner sc = new Scanner(System.in);         teacher t[]=new teacher[100];         System.out.println("Enter number of teachers (maximum 100): ");         int nt=sc.nextInt();         for(int i=0;i<nt;i++)             t[i]=new teacher();         for(int i=0;i<nt;i++)             t[i].display(); 
    } 
} 
