#include<iostream>
#include<vector>
#include<algorithm>
#include "Sales_data.h"
using namespace std;
int main()
{
	vector<Sales_data> v;
	Sales_data data1(cin);
	v.push_back(data1);
	Sales_data data2(cin);
	v.push_back(data2);
	Sales_data data3(cin);
	v.push_back(data3);
	sort(v.begin(), v.end(), compareIsbn);
	for (auto& i : v)
		print(cout, i);
	return 0;
}