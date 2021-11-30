#include<iostream>

using namespace std;

int main(){
	
	int i = 0, k,P[5000], result;
	while(i < 5000)
    {
		P[i] = 2*i+1;
		i++;
	}

	cout << "Please input k: " ;
	cin >> k ;
	
    if(k > 0)
	{
        result = 0;
		i = 0;
	}
	else
	{
       cout << "Invalid input!!!" ;
       return 0;
	}
	while(i < 5000){
		if(P[i]%k == 0)
		{
			result = result - P[i] ;
			i++;
		}
		else
		{
			result = result + P[i];
		     i++;
		}
		
	}
	cout << result ;

	return 0;
}
