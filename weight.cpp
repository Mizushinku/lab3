#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;

int main(void)
{
	int n, w;
	vector<int> v;
	ifstream infile("file.in", ios::in);
	if(!infile) {
		cerr << "Failed opening!" << endl;
		exit(1);
	}
	infile >> n;
	for(int i = 0; i < n; ++i) {
		infile >> w;
		v.push_back(w);
	}
	sort(v.begin(),v.end(),greater<int>());
	w = 0;
	for(int i = 0; i < 5; ++i) w += v.at(i);
	cout << w << endl;
	return 0;
}
