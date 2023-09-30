//Multiplication of two user defined array: 

#include<stdio.h>

void accept(int mtx[][3], int i, int j)               // accept matrix values from user
{
for(i=0; i<3; i++)
{
    for(j=0; j<3; j++)
    {
    scanf("%d",&mtx[i][j]);
    }
}

}

void display(int (*mtx)[3],int  i, int j)           //display the user enter value in matrix form
{
for(i=0; i<3; i++)
{
    for(j=0; j<3; j++)
    {
    printf("%d  ",mtx[i][j]);
    }
    printf("\n");+
}
printf("\n");
}
int main()
{
int mtx[3][3],i,j,k;
int mtx2[3][3];
int mul[3][3]={0};
printf("enter the first matrix element \n");

accept(mtx,i,j);
display(mtx,i,j);
printf("enter the second matrix element \n");

accept(mtx2,i,j);
display(mtx2,i,j);

printf("multiplication of matrix is : \n");


for(i=0; i<3; i++)                                    //multiplication of matrix
{
    for(j=0; j<3; j++)
    {
      for(k=0; k<3; k++)
      {
        mul[i][j]=mul[i][j]+mtx[i][k]*mtx2[k][j];
        }
     }
}
for(i=0; i<3; i++)                                    //multiplication of matrix
{
    for(j=0; j<3; j++)
    {
    printf("%d  ",mul[i][j]);
    }
    printf("\n");
 }
printf("\n");

return 0;
}

 
