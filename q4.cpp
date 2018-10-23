//the library file
#include<iostream>
using namespace std;
//to merge the 2 arrays
void f(int a[],int b[], int c[])
{

	for(int i=0; i<12; i++)
	{
	if(i<7)	c[i]=a[i];
	else	c[i]=b[i-7];
	
	cout << c[i] << "   ";
	}

}

//the main function
int main()
{

int a[7] = {2,82,13,41,35,67,72};
int b[5] = {81,60,22,61,44};
int c[12];

f(a,b,c);

cout << endl;

return 0;
}
