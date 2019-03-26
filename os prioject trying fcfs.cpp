#include<iostream>
 
using namespace std;
 
int main()
{
    int k,BT[20],WT[20],TAT[20],AVWT=0,AVTRT=0,i,j;
    cout<<"Enter the number of processes:";
    cin>>k;
    char c[10];
 
    cout<<"\nEnter the  Burst Time of the processes\n";
    for(i=0;i<k;i++)
    {
        cin>>c[i];
        cin>>BT[i];
    }
 
    WT[0]=0;    //waiting time for first process is 0
 
    //calculating waiting time
    for(i=1;i<k;i++)
    {
        WT[i]=0;
        for(j=0;j<i;j++)
            WT[i]+=BT[j];
    }
 
    cout<<"\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time";
 
    //calculating turnaround time
    for(i=0;i<k;i++)
    {
        TAT[i]=BT[i]+WT[i];
        AVWT+=WT[i];
        AVTRT+=TAT[i];
        cout<<"\nP["<<c[i]<<"]"<<"\t\t"<<BT[i]<<"\t\t"<<WT[i]<<"\t\t"<<TAT[i];
    }
 
    AVWT/=i;
    AVTRT/=i;
    cout<<"\n\nAverage Waiting Time:"<<AVWT;
    cout<<"\nAverage Turnaround Time:"<<AVTRT;
 
    return 0;
}
