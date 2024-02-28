#include<iostream>
using namespace std;
int main()
{
	int num,gussNum = 49,i;
	for(i=0;i<100;i++)
	{
		cout << "Enter You Gussing Number for(1 to 100) :-";
		cin >> num;
	    if(num > gussNum)
	    {
	    	cout << "Too High.....";
	    	continue;
		}
		if(num < gussNum)
		{
			cout << "Too Low......";
			continue;
		}
		else
		{
			cout << "Your Gussing Number is Correct..........";
			break;
			
		}
	    
	}
	return 0;
}
