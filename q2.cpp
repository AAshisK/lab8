//include the library file
#include <iostream>
using namespace std;
//to find the largest element
void func(int arr[],int i,int a)
{
	while(i<7)
{	if(a<arr[i]){
	a=arr[i];}
	
	i++;



}
cout<<a<<endl;
}
//to find the smallest element
void low(int arr[],int i, int b)
{	while(i<7)
{
	if(b>arr[i])
{
	b=arr[i];
}
i++;
}
cout<<b<<endl;
}
//to find the mean
void mean(int arr[],int sum,int i)
{
while(i<7)
{
	sum=sum+arr[i];
	i++;
}	
	cout<<sum/7<<endl;
}
//to find the median and frequency
int median(int arr[])
{
for(int i=0;i<7;i++)
	{
	for(int j=i;j<7;j++)
	{
	if(arr[i]>arr[j])
		{
		int a=arr[i];
		arr[i]=arr[j];
		arr[j]=a;
}
}
}
cout<<arr[3]<<endl;
}
//the main function
int main()
{
int arr[7]={2,60,34,97,2,5,61};
func(arr,1,arr[0]);
low(arr,1,arr[0]);
mean(arr,0,0);
median(arr);
return 0;
}
