#include <map>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
using namespace std;

int main() {

	stack<int,list<int>> st;

	st.

	st.push(1);
	st.push(3);
	st.push(12);
	st.emplace(67);

	//st.top();
	//cout << st.top() << endl;
	// auto it = st.__get_container();
	// cout << it[2] << endl;

	while(!st.empty()){
		cout << st.top() << endl;
		st.pop();
	}

    return 0;
}