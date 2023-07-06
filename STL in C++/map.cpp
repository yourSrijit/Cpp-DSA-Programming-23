#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
  // Creation
  map<string, int> m;
  // Insertion
  //  1.
  pair<string, int> p1 = make_pair("srijit", 1);
  m.insert(p1);
  // 2.
  pair<string, int> p2("kamalika", 2);
  m.insert(p2);
  // 3.
  m["rumi"] = 3;

  // Search
  cout << m["rumi"] << endl;
  cout << m.at("rumi") << endl;
  cout << m["babu"] << endl; // if not find inser a 0 at babu
  cout << m.at("babu") << endl;

  // Size
  cout << m.size() << endl;

  // find
  cout << m.count("babu") << endl; // return 1 if found or 0
  cout << endl;
  // Travers
  // 1.
  for (auto x : m) {
    cout << x.first << x.second << endl;
  }
  cout << endl;
  // 2.
  map<string, int>::iterator it = m.begin();
  while (it != m.end()) {
    cout << it->first << it->second << endl;
    it++;
  }
  // erase
  m.erase("rumi");
  cout << "Size is " << m.size() << endl;

  return 0;
}