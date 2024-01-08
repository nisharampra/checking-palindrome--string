//
//  main.cpp
//  checking palindrome -string
//
//  Created by Nisha Ramprasath on 4/11/23.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string str = "jaien";
    string rev = "";

    int len = (int)str.length();

    rev.resize(len);
    for (int i = 0, j = len - 1; i < len; i++, j--) {
        rev[i] = str[j];
    }

    if(str.compare(rev)==0)
        cout<<"palindrome"<<endl;
    else
        cout<<"not a pallindorme"<<endl;
    
    cout << rev << endl;

    return 0;
}
