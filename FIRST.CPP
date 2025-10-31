# include <iostream>
using namespace std;
int main ()
{
    cout<<"hello world"<<endl;
   int a[5];
   for(int i=0; i<5; i++)
   {
    cout<<"Enter value No "<<i+1<<" : ";
    cin>>a[i];
   cout<<"Your Entered Values are : "<<endl<<"\t\t\t";
   for(int i=0; i<5; i++)
   {
    cout<<" "<<a[i];
   }
    return 0;
}
