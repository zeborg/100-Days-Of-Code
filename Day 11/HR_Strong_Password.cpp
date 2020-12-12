#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    bool spl, dgt, up, low;
    spl=dgt=up=low=false;
    
    if(n<=3) return 6-n;
    else{
        for(int i=0; i<n && (!spl || !dgt || !up || !low); i++){
            if(password[i]>='0' && password[i]<='9') dgt=true;
            else if(password[i]>='a' && password[i]<='z') low=true;
            else if(password[i]>='A' && password[i]<='Z') up=true;
            else if(password[i] == '!' || password[i] == '@' || password[i] == '#' || password[i] == '$' || password[i] == '%' || password[i] == '^' || password[i] == '&' || password[i] == '*' || password[i] == '(' || password[i] == ')' || password[i] == '-' || password[i] == '+' ) spl=true;
        }
        if(!spl+!dgt+!low+!up + n >= 6) return !spl+!dgt+!low+!up;
        else return 6-n;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}

