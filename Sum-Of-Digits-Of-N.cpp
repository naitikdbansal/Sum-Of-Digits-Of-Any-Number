#include <iostream>
using namespace std;

int main(){

long long a;

long long sum=0;
long long j;
long long i;
cout<<"Enter number : ";
cin>>i;

while((j=i%10)!=0)
{
a=i/10;
sum=sum+j;
i=a;
}

cout<<"Your sum is : "<<sum<<endl;

return 0;

}


// SAME CODE USING 'FOR' LOOP : ->

// #include <iostream>
// using namespace std;

// int main(){


// int a;
// int i;
// int sum=0;
// int j;

// cout<<"Enter number : ";
// cin>>i;

// for(i ; (j=i%10)!=0 ;(i=a) )
// {
// a = i/10;
// sum = sum + j;
// }

// cout<<"Your sum is : "<<sum<<endl;

// return 0;
// }

//add 'LONG LONG' instead of 'int' in above code to increase value handling of larger numbers
