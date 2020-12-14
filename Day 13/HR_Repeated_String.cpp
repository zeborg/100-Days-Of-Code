#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    int k = s.length();
    long c=0;
    if(n<=k){
        for(int i=0; i<n; i++)
            if(s[i]=='a') c++;
    } else {
        int t=0;
        for(int i=0; i<k; i++)
            if(s[i]=='a') t++;
        c = (n/k)*t;
        for(int i=0; i<n%k; i++)
            if(s[i]=='a') c++;
    }
    return c;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}

