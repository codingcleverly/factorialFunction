#include <iostream>
using namespace std;

factUsingForLoop(int num)
{
	int fact = 1;
	for(int i = 1; i<=num; i++)
	{
		//fact *= i;
		fact = fact * i;   //1*1    1*2   
	}
	return fact;
}

factUsingWhileLoop(int num)
{
	int i = 1;
	int fact = 1;
	while(i<=num)
	{
		fact = fact*i;
		i++;
	}
	return fact;
}


int factorialRecursion(int num, int fact=1)
{
	if(num<1)
	{
		return fact;
	}
	else
	{
		fact = fact*num;
		factorialRecursion(num-1, fact);
	}
	
}


int main()
{
	
	cout<<factUsingForLoop(5)<<endl;
	
	cout<<factUsingWhileLoop(4)<<endl;
	
	cout<<factorialRecursion(3)<<endl;
	
	return 0;
}
