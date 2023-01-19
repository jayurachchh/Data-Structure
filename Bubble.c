#include<stdio.h>
#include<time.h>
void main(int argc, char const *argv[])
{
    FILE *fptr1,*fptr2,*fptr3,*fptr4,*fptr5,*fptr6;
    int n,a[100000],i=0,j=0,temp=0,ch;
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
            for(i=0;i<n-1;i++)
            {
                for(j=0;j<n-i;j++)
                {
                    if(a[j]>a[j+1])
                    {
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }   
                }
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
            for(i=0;i<n-1;i++)
            {
                for(j=0;j<n-i;j++)
                {
                    if(a[j]>a[j+1])
                    {
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }   
                }
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
            for(i=0;i<n-1;i++)
            {
                for(j=0;j<n-i;j++)
                {
                    if(a[j]>a[j+1])
                    {
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }   
                }
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






    // for(i=0;i<n;i++)
    // {
    //   fscanf(fptr1,"%d",&a[i]); 
    //   fscanf(fptr2,"%d",&a[i]);  
    //   fscanf(fptr3,"%d",&a[i]);   
    // }
    //    for(i=0;i<n-1;i++)
    // {
    //      for(j=0;j<n-i;j++)
    //     {
    //         if(a[j]>a[j+1])
    //         {
    //             temp=a[j];
    //             a[j]=a[j+1];
    //             a[j+1]=temp;
    //         }   
    //     }
    // }
    // for(i=0;i<n;i++)
    // {
    //   fprintf(fptr4,"%d\n",a[i]);   
    // }
}