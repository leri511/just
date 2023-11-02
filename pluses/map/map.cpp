#include <map>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main() {
    map<string, int> myMap;

    // myMap.insert(make_pair(22, "per"));

    // myMap.insert(pair<int, string>(2, "jup"));

	// // myMap.emplace(1, "vet");

    // auto it = myMap.find(22);

    // if (it != myMap.end()) {
    //     cout << it->second << endl;
    // } else {
    //     cout << "Key not found in the map." << endl;
    // }


	myMap.emplace("tap", 1);
	myMap.emplace("vet", 3);
	myMap["tap"] = 99;

	cout << myMap["tap"] << endl;
    return 0;
}