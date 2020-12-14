#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {
    int arr[26] = {0};
    for(int i=0; i<s.length(); i++)
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
            (s[i]<='Z')?arr[s[i]-'A']++:arr[s[i]-'a']++;
    for(int i=0; i<26; i++)
        if(arr[i]==0) return "not pangram";
    return "pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

