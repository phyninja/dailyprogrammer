//https://www.reddit.com/r/dailyprogrammer/comments/3q9vpn/20151026_challenge_238_easy_consonants_and_vowels/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
 const char consonantArray[21] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
 const char vowelArray[5] = {'a','e','i','o','u'};
 string Str;
 cout<<"Enter your string: ";
 cin >> Str;
 srand (time(NULL));
 for (unsigned int i=0; i<Str.length(); i++)
 {
	 if (Str[i] == *"c")
	 {
		int randIndex = rand()%22;
		Str[i] = consonantArray[randIndex];
	 }
     else if (Str[i]==*"v")
     {
		int randIndex = rand()%6;
		Str[i] = vowelArray[randIndex];
	 }
 }
cout<<Str;

}
