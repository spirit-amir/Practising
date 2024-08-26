#include<iostream>
using namespace std;

int fib(int n)
{
   if(n<=1)
   {
     return n; }
   int last =  fib(n-1);
   int secLast =  fib(n-2);
   return last + secLast; 
}

int main()
{
   int n;
   cin>>n;
   cout<< fib(n)<<endl;
return 0;
}
