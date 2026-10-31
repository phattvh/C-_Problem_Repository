#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

vector<string> v;
string s;

int main(){
    fastio;

    getline(cin, s);

    stringstream ss(s);
    string word;
    while(ss >> word){
        word[0] = toupper(word[0]);
        for(int i = 1; i < word.length(); i += 1) word[i] = tolower(word[i]);
        cout << word << " ";
    }


    return 0;
}
/*
in
hOa         phaT

out
Hoa Phat
*/
