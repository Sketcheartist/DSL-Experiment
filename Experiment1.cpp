#include<iostream>
using namespace std;
int main(){
  int a[5],i;
int x;
int ch;
int sum,sub,max,min;
{
do{
cout<<"\n 1.create array";
cout<<"\n 2.display array";
cout<<"\n 3.sum;
cout<<"\n 4.difference;
cout<<"\n 5.maximun;
cout<<"\n 6.minimum;
cout<<"\n enter your choice"
  switch(ch){
case1:
cout<<"enter 5 elements:"<<endl;
for(i=0;i<5;i++){
cinn>>a[i]
  }
break;
case 2:
cout<<"array elements:"<<endl;
for(i=0;i<5;i++){
cout<<a[i]
  }
break;
case 3:
sum=0;
for(i=0;i<5;i++){
sum+=a[i];
}
cout<<"sum="<<sum<<endl;
break;
case 4:
sub
  for(i=0;i<5;i++){
sub+=a[i]
  }
cout<<"subtraction"<<sub<<endl;
break;
case 5;
max=a[0];
  for(i=0;i<5;i++){
if(a[i]>max)
  max=a[i];
  }
cout<<"maximum="<<max<<endl;
break;
case 6:
min=a[0];
for(i=1;i<5;i++){
if(a[i]<min)
  min=a[i];
}
cout<<"minimum"<<min<<endl;
break;
}
cout<<"\n Do you want to continue:";
cin>>x;
}
  while(x=='y'//x=='y');
  return 0;
}
