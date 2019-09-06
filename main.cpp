#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
  set<string> s, duplicates;

  for (string line; getline(cin, line);) {
    if (s.insert(line).second == false) {
      duplicates.insert(line);
    }
  }

  for (string line : duplicates) {
    cout << line << endl;
  }

  return 0;
}
