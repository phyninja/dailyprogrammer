//https://www.reddit.com/r/dailyprogrammer/comments/3r7wxz/20151102_challenge_239_easy_a_game_of_threes/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
int num;
cout<<"Enter your unreasonably large number here: "<<endl;
cin>> num;
do {
	if (num%3 == 0)
	{
		num/=3;
		cout<<"0 "<< num << endl;
	}
	else if (num % 3 == 1)
	{
		num = (num-1)/3;
		cout<<"-1 "<<num<<endl;
	}
	else 
	{
		num=(num+1)/3;
		cout<<"+1 "<<num<<endl;
	}
}
while(num>1);
}
