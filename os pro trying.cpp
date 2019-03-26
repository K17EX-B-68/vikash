#include<iostream>
 
using namespace std;
 
int main()
{
    int bt[20],wt[20],tat[20],pr[20],i,j,k,n,total=0,pos,temp,avg_wt,avg_tat;
    cout<<"Enter Total Number of Process:";
    cin>>n;
    char c[10];
 	cout<<"enter the processes"<<endl;
    cout<<"\nEnter Burst Time and Priority\n";
  
    for(i=0;i<n;i++)
    {
      
        cin>>c[i];
        
        cout<<"Burst Time:"<<endl;
        cin>>bt[i];
        cout<<"Priority:"<<endl;
        cin>>pr[i];
               
    }
 
    //sorting burst time, priority and process number in ascending order using selection sort
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(pr[j]<pr[pos])
                pos=j;
        }
 
        temp=pr[i];
        pr[i]=pr[pos];
        pr[pos]=temp;
 
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
 
        temp=c[i];
        c[i]=c[pos];
        c[pos]=temp;
       
    }
 	 cout<<"the process execution order is:"<<endl;
 	
    wt[0]=0;//waiting time for first process is zero
 
    //calculate waiting time
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
 
        total+=wt[i];
    }
 
    avg_wt=total/n;      //average waiting time
    total=0;
 
    cout<<"\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time";
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];     //calculate turnaround time
        total+=tat[i];
        cout<<"\nP["<<c[i]<<"]\t\t  "<<bt[i]<<"\t\t    "<<wt[i]<<"\t\t\t"<<tat[i];
    }
 
    avg_tat=total/n;     //average turnaround time
    cout<<"\n\nAverage Waiting Time="<<avg_wt;
    cout<<"\nAverage Turnaround Time="<<avg_tat;
    
 
    return 0;
}
