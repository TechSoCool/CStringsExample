#include<iostream>
#include<string>
using namespace std;

int main()
{
	string x;
	getline(cin, x);
	cout << x << endl;

	string s1("joe");
	string s2;
	string s3;

	s2 = s1;
	s3.assign(s1);

	cout << s1 << s2 << s3 << endl;
	cout << s1.at(2) << endl;

	for (int x = 0; x < s1.length(); x++) 
	{
		cout << s1.at(x);
	}
	return 0;
}