#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string a = "m111a1l11111h111a1r";
string b = "mal2h222ar";

int lss(int i, int j) {
	if (i>=a.size() || j>=b.size()) return 0;
	if (a[i] == b[j]) return 1+lss(i+1,j+1);
	int lss1 = lss(i+1,j);
	int lss2 = lss(i, j+1);
	int lss3 = lss(i+1, j+1);
	return std::max(lss1, std::max(lss2, lss3));
}

int main() {
	cout<<lss(0,0)<<endl;
	return 0;
}
