#include<iostream>
using namespace std;
int main(){
    int matrix[5][5]={{-1,-2,-3,0,0},
                      {0,0,0,2,3},
                      {3,2,0,0,0},
                      {1,2,3,-100,98},
                      {0,0,0,0,0}};
    int sparse[25][3];
    int i,j,k=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(matrix[i][j]!=0){
                sparse[k][0]=i+1;
                sparse[k][1]=j+1;
                sparse[k][2]=matrix[i][j];
                k++;
            }
        }
    }
    for(i=0;i<k;i++){
        for(j=0;j<3;j++)
            cout<<sparse[i][j]<<" ";
        cout<<"\n";
        }
        
    return 0;
}