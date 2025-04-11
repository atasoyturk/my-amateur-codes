#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void insertTemparature(stack<int>& s, int temp) {
	vector <int> v;
	cout << "Enter the temperatures for 7 days: \n";
	for (int i = 0; i < 7; i++) {
		cin >> temp;
		v.push_back(temp);
	}
	for (int j = v.size() - 1; j >= 0; j--) {
		s.push(v[j]);
	}

}

void information(stack<int> s) {
	int today= 0;
	int otherDay = 0;
	int days = 1;
	
	stack<int> s2;
	while (!s.empty()) {
		int cnt = 1;

		today = s.top(); s.pop();
		if (!s.empty()) {
			otherDay = s.top();
			while (!s.empty() && today >= s.top()) {
				if (today == s.top()) {
					cout << "For day " << days << ", the temperature was " << today << " and temperature remains same with next day.\n";
					days++;
					s.pop();
					continue;
				}
				cnt++;
				int a = s.top(); s.pop();
				s2.push(a);
			}
			cout << "For day " << days << ", the temperature was " << today << " and it took " << cnt << " days to get a warmer temperature.\n";
		}
		days++;
		cnt = 1;
		while (!s2.empty()) {
			int b = s2.top(); s2.pop();
			s.push(b);
		}
		
	}

}
int main() {
	stack<int> temperatures;
	int temp=0;
	insertTemparature(temperatures, temp);
	information(temperatures);
	
	return 0;
}