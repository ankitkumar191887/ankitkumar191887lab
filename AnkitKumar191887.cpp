#include<iostream>
using namespace std ;
void read(int arr[5][5],int x,int y)
{
 int i,j;
 for(i=0;i<x;i++)
 {
 for (j=0;j<y;j++)
 {
  cout<< "arr["<<i<<"]["<<j<<"]=";
  cin >> arr[i][j];
 }
 }
 }
void dspl(int arr[5][5],int x,int y)
{
 int i,j;
 for(i=0;i<x;i++)
{
 for(j=0;j<y;j++)
{
 cout << arr[i][j] << "\t";
}
cout << endl;
}
}
int main()
{
 int x,y;
 int arr[5] [5] ;
 cout << "Enter no. of rows= ";
   cin >> x;
  cout<<"Enter no. of column =";
  cin>> y;

   cout<<"matrix element are::"<<"\n";

 read(arr,x,y);
   cout<<"matrix is ::"<<"\n";
   dspl(arr,x,y);
   return 0;
}
