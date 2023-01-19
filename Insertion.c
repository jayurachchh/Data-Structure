#include<stdio.h>
#include<time.h>
void main(int argc, char const *argv[])
{
    FILE *fptr1,*fptr2,*fptr3,*fptr4,*fptr5,*fptr6;
    int n,a[100000],i=0,j=0,temp=0,ch,x;
     clock_t start,end;
    double cpu_time_used;
    printf("Enter the number");
    scanf("%d",&n);
    printf("1.Best case 2.Avg case 3.Worst case");
    scanf("%d",&ch);
     start = clock();
    switch (ch)
    {
    case 1: // Raed the data
            // Best case
            fptr1=fopen("Best.txt","r");
            fptr4=fopen("Best1.txt","w");
            for(i=0;i<n;i++)
            {
                fscanf(fptr1,"%d",&a[i]); 
            }            
                for(i=0;i<n;i++)
                    {
                        x=a[i];
                        j=i-1;
                        while (x<a[j] && j>=0)
                        {
                            a[j+1]=a[j];
                            j=j-1;            
                        }
                        a[j+1]=x;     
                    }
            for(i=0;i<n;i++)
            {
            fprintf(fptr4,"%d\n",a[i]);   
            }
            fclose(fptr1);
            fclose(fptr4);
            break;
    case 2: // Raed the data
            // Avg case
            fptr2=fopen("ag.txt","r");
            fptr4=fopen("Best1.txt","w");
            for(i=0;i<n;i++)
            {
                fscanf(fptr2,"%d",&a[i]); 
            }            
             for(i=0;i<n;i++)
                    {
                        x=a[i];
                        j=i-1;
                        while (x<a[j] && j>=0)
                        {
                            a[j+1]=a[j];
                            j=j-1;            
                        }
                        a[j+1]=x;     
                    }
            
            for(i=0;i<n;i++)
            {
            fprintf(fptr4,"%d\n",a[i]);   
            }
            fclose(fptr2);
             fclose(fptr4);
            break;   
    case 3: // Raed the data
            //Worst case
            fptr3=fopen("wost.txt","r");
            fptr4=fopen("Best1.txt","w");
            for(i=0;i<n;i++)
            {
                fscanf(fptr3,"%d",&a[i]); 
            }          
            for(i=0;i<n;i++)
                    {
                        x=a[i];
                        j=i-1;
                        while (x<a[j] && j>=0)
                        {
                            a[j+1]=a[j];
                            j=j-1;            
                        }
                        a[j+1]=x;     
                    }
             for(i=0;i<n;i++)
            {
            fprintf(fptr4,"%d\n",a[i]);   
            }
            fclose(fptr3);
            fclose(fptr4);
            break;             
    default:printf("Please enter the valid case");
            break;
    }
    end = clock();
    cpu_time_used = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("\n Time is %lf",cpu_time_used);
}