//the library file
#include <iostream>
using namespace std;
//to find the sum of the elements
void func(int arr[],int i,int sum)
{
        while(i<5){
        sum=sum+arr[i];
        i++;
        }

cout<<sum<<endl;
}
//the main function
int main()
{
   int arr[5]={2,7,78,3,99};
   func(arr,0,0);
   return 0;
}
