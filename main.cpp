#include<stdio.h>
//#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include <cstdlib>
//#include<windows.h>
int main()
{
             int queue[5000],t[100],head,prev,seek=0,n,i,j,temp;
             float avg;
             // clrscr();
             printf("\n\n\n\t\t\t*** SSTF Disk Scheduling Algorithm ***\n\n");
             printf("------------------------------------------------------\n\n");
             printf("---------------------OS PROJECT 2017------------------*\n\n");
             printf("---------------------VIKASH VISHWAKARMA---------------*\n\n");
             printf("--------------------------K17PD-----------------------*\n\n");
             printf("\n\t\t\tEnter the size of Queue\t\t");
       Input:
       {      scanf("%d",&n);
             if(n<0)
             {
             printf("\nInvalid Input: Enter Again:\t");
             goto Input;
             }

        }
             printf("\n\t\t\tEnter the values of Queue\t");
            // scanf("%d",&n);


    for(int i=0;i<n;i++)
      {
      Queue1:
      {
        printf("\n\t\t\tEnter Q[%d] values of Queue\t",i);
        scanf("%d",&queue[i]);
        if(queue[i]<0)
         {
            printf("\nOOps : entered Invalid value\n");
            goto Queue1;
        }
            }

    }



   int Cpos;
   int Ppos;
  // system("cls");
   //system("clear");
printf("\n\t\t\tEnter current position of Head : ");

Cposition:
{
   scanf("%d",&Cpos);
    if(Cpos<0 || Cpos >5000)
      {      printf("\nOOps : entered Invalid value ; Try again \t");
        goto Cposition;
    }
}


  printf("\n\t\t\tEnter previous position of Head : ");

Pposition :
{
   scanf("%d",&Ppos);
    if(Ppos<0 || Ppos >5000)
      {      printf("\nOOps : entered Invalid value ; Try again :\t");
        goto Pposition;
    }
}

system("clear");

             for(i=1;i<n;i++)
             t[i]=abs(Cpos-queue[i]);
             for(i=0;i<n;i++)
             {
                          for(j=i+1;j<n;j++)
                          {
                                       if(t[i]>t[j])
                                       {
                                                    temp=t[i];
                                                    t[i]=t[j];
                                                    t[j]=temp;
                                                    temp=queue[i];
                                                    queue[i]=queue[j];
                                                    queue[j]=temp;
                                       }
                         }
             }
             for(i=1;i<n-1;i++)
             {
                          seek=seek+abs(Cpos-queue[i]);
                          Cpos=queue[i];
             }
            system("clear");
        printf("--------------------------------------------------------------------------------\n\n");

        for(int i=0;i<n;i++)
        printf("--%d--> ",queue[i]);
        printf("\n\n");
        printf("--------------------------------------------------------------------------------\n");
        printf("\n\t\t\tCurrent Position of Head \t[ %d ]",Cpos);
      //  printf("\nCurrent Position of Head.....%d...|",Cpos);
             printf("\n\t\t\tTotal Seek Time \t\t\[  %d ]",seek);
             avg=seek/(float)n;
             printf("\n\t\t\tAverage Seek Time \t\t[ %f ]",avg);
        printf("\n------------------------------------------------------------------------------\n");
printf("\n\n");

printf("\n-----------------------THANKYOU-------------------------------------\n\n");
}

































/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int NoC;
   printf("Enter number of Cylinders : ");
   int count=0;
   char c;
   for(int i=0;i<5000;i++)
   {
        count++;
        scanf("%d",&NoC);
        if(NoC<0 || NoC >5000)
            printf("\nOOps : entered Invalid value\n");
        else if(count==10|| count==15||count==20||count ==50||count==100)
                {
                    printf("Do You want to exit : press Y");
                    scanf("%c",&c);
                    if(c=='Y'|| c=='y')
                        break;

                }
                else
                {
                continue;
                }

 }


 //.............................................................................

   int Cpos;
   int Ppos;
printf("Enter current position of Head : ");

Cposition:
{
   scanf("%d",&Cpos);
    if(Cpos<0 || Cpos >5000)
      {      printf("\nOOps : entered Invalid value ; Try again\n");
        goto Cposition;
    }
}


  printf("Enter previous position of Head : ");

Pposition :
{
   scanf("%d",&Cpos);
    if(Cpos<0 || Cpos >5000)
      {      printf("\nOOps : entered Invalid value ; Try again\n");
        goto Pposition;
    }
}



}

*/
