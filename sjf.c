#include<stdio.h>
void main(){
float awt=0.0,atat=0.0;
int w[30],bt[30],i,j,n,t,tat[30];
printf("Enter the number of Processes: ");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("Enter Burst Time: ");
scanf("%d",&bt[i]);}
for(i=0;i<n;i++){
for(j=0;j<n-i-1;j++){
if(bt[j]>bt[j+1]){
t=bt[j];
bt[j]=bt[j+1];
bt[j+1]=t;}}}
w[0]=0;
for(i=1;i<n;i++){
w[i]=w[i-1]+bt[i-1];}
for(i=0;i<n;i++){
tat[i]=bt[i]+w[i];
awt+=w[i];
atat+=tat[i];}
awt/=n;
atat/=n;
printf("Avg waiting time: %f\n",awt);
printf("Avg turnaround time: %f\n",atat);}
