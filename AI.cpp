//#include <iostream>
//#include <map>
//#include <string>
#include <bits/stdc++.h>
using namespace std;

map<string, int> wordIndex;
int counter = 1;

void generate(string word, char lastChar) {
    if (!word.empty()) {
        wordIndex[word] = counter++;
    }

    if (word.size() == 5)
        return;

    for (char c = lastChar + 1; c <= 'z'; ++c) {
        generate(word + c, c);
    }
}

int main() {
    for (char c = 'a'; c <= 'z'; ++c) {
        generate(string(1, c), c);
    }

    string input;
    while (cin >> input) {
        cout << (wordIndex.count(input) ? wordIndex[input] : 0) << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

 map<string, int> wordIndex;
 int counter = 1;

 void generate(string word, char lastChar) {
    if (!word.empty()) {
        wordIndex[word] = counter++;
    }

    if (word.size() == 5)
        return;

    for (char c = lastChar + 1; c <= 'z'; c++) {
        generate(word + c, c);
    }
}

  int main() {
    generate("", '`');
    string input;
    while (cin >> input) {
        cout << (wordIndex.count(input) ? wordIndex[input] : 0) << endl;
    }

    return 0;
}


