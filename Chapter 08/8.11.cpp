#include<iostream>
#include<vector>
#include<sstream>
#include<string>
using namespace std;
struct PersonInfo 
{
	string name;
	vector<string> phones;
};
int main()
{
	string line, word;
	vector<PersonInfo> people;
	istringstream record;
	while (getline(cin,line))
	{
		PersonInfo info;
		record.clear();
		record.str(line);
		record >> info.name;
		while (record >> word)
			info.phones.push_back(word);
		people.push_back(info);
	}
	for (auto& p : people)
	{
		cout << p.name << " ";
		for (auto& n : p.phones)
			cout << n <<"  ";
		cout << endl;
	}
	return 0;
}