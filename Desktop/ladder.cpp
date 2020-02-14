#include <iostream>

using namespace std;

int main()
{
int i=0;
int x;
while(true){
cout<<"how tall is your ladder:";
cin>>x;
if(x==0){
cout<<"the height can't be zero.\n";}
 
else if (x<0){
cout<<"invalid input\n";
return 0;
}


else
{
for(int i=0;i <=x;i++){
if(i%2==0)
{
cout<<"###\n";}
else if (i%2==1)
{
cout<<"# #\n";}}
}

cout<<"how tall is your ladder:\n";
cin>>x;
}
cout<<"how tall is your ladder:\n";
cin>>x;
return 0;
}



