#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {

    vector<int> counta;
    vector<int> countb;

    for (int i=0;i<26;i++)
    {
        counta.push_back(0);
        countb.push_back(0);
    }

    for (int i=0;i<a.size();i++)
    {
        counta[a[i]-97]++;
    }

    for (int i = 0; i < b.size(); i++) 
    {
        countb[b[i] - 97]++;
    }

    int deletions=0;

    for (int i=0;i<26;i++)
    {
        deletions = deletions + abs(counta[i]-countb[i]);
    }
    
    return deletions;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
