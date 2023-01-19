 #include <stdio.h>
 #include<stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *fptr1,*fptr2,*fptr3;
    long int i,n;
    fptr1=fopen("best.txt","w");
    fptr2=fopen("ag.txt","w");
    fptr3=fopen("wost.txt","w");
    printf("Enter the number");
    scanf("%ld",&n);
    for(i=1;i<=n;i++)
    {
        fprintf(fptr1,"%d\n",i);
        fprintf(fptr2,"%d\n",rand());
        fprintf(fptr3,"%d\n",n-i+1);
    }    
    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);
     return 0;
}