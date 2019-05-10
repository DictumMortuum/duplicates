#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
  set<string> s;

  for (string line; getline(cin, line);) {
    if (s.insert(line).second == false) {
      cout << line << endl;
    }
  }

  return 0;
}
