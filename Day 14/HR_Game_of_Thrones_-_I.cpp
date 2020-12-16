#include <bits/stdc++.h>

using namespace std;

// Complete the gameOfThrones function below.
string gameOfThrones(string s) {
    int a[26]={}, odd=0, even=0;
    for(int i=0; i<s.length(); i++)
        a[s[i]-'a']++;
    for(int i=0; i<26; i++){
        if(!(a[i]%2)) even++;
        else odd++;
    }
    if(odd>1) return "NO";
    else return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

