#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{	
	while(true){
		int i,a;	
	bool isprime=true;
	cin>>a;


	for(i=2;i<=sqrt((double)a);i++)
		if((a%i)==0)
		{
			isprime=false;
			break;
		}
		if(isprime)
			cout<<"���"<<endl;
		else
			cout<<"�D���"<<endl;

	}
}