#include<bits/stdc++.h>
using namespace std;
int main(){
    int row=3,column=3,k=row;
    int Matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int Matrix2[3][3]={{7,8,9},{4,5,6},{1,2,3}};
    int sum[3][3];
    for(int i=0;i<column;i++){
        for(int j=0;j<row;j++){
            sum[j][i]=Matrix[j][i]+Matrix2[j][i];
        }
    } 
    int result[3][3];
   for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            result[i][j]=0;
            for(int k=0;k<row;k++){
            result[j][i]+=Matrix[j][k]*Matrix2[k][j];
            }
        }
    } 
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<sum[i][j]<<" ";
    
        }
        cout<<endl;
    }
     for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<result[i][j]<<" ";
    
        }
        cout<<endl;
    }
    
    

    return 0;

}