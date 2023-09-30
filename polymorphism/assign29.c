//assignment 29: program for string function
#include<stdio.h>
int main()
{
 char str[100],ch;
 int i,count=0;
 
 printf("enter  the charecter string:\n");
 fgets(str,sizeof(str),stdin);
 
 printf("enter the character of which occerence is check :\n");
 scanf("%c",&ch);
 
 for(i=0; i<sizeof(str); i++)
 {
    if(ch==str[i])
    {
     count++;
     }
}

printf("the no. of occerence of character %c is %d \n",ch,count);
count=0;

for(i=0; i<sizeof(str); i++)
{
   if(str[i]==' ')
   {
   count++;
   }
}
printf(" number of empty spaces are %d \n",count);

count++;

printf(" total number of words in string are %d \n",count);

count=0;

for(i=0; i<sizeof(str); i++)
{
   if(str[i]=='a' || str[i]=='i' || str[i]=='e' || str[i]=='u' || str[i]=='o')
   {
   count++;   
   }
}
printf(" number of vowels in the string are %d \n",count);   



return 0;
}
