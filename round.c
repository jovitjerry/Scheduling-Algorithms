#include<stdio.h>
void main(){
float awt =0.0,atat=0.0;
int i,complete=0,n,w[30]={0},tat[30],bt[30],rbt[30],qt,time=0;
printf("Enter the number of Processes: ");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("Enter Burst Time: ");
scanf("%d",&bt[i]);
rbt[i]=bt[i];}
printf("Enter Quantum Time: ");
scanf("%d",&qt);

while(complete<n){
for(i=0;i<n;i++){
if(rbt[i]>0){
if(rbt[i]>qt){
time+=qt;
rbt[i]-=qt;}
else{
time+=rbt[i];
w[i]=time-bt[i];
rbt[i]=0;
complete++;}}}}

for(i=0;i<n;i++){
tat[i]=w[i]+bt[i];
awt+=w[i];
atat+=tat[i];}
awt/=n;
atat/=n;
printf("Avg waiting time: %f\n",awt);
printf("Avg turnaround time: %f\n",atat);}

