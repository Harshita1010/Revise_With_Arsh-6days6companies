#include<iostream>
using namsepace std;


class Solution {
public:
    string getHint(string secret, string guess) 
    {
        vector<int> s(10);
        vector<int> g(10);
        
        string ans="";

        int bull=0;
        int cows=0;

        for(int i=0;i<secret.length();i++)
        {
            if(secret[i]==guess[i])
              {
                 bull++;
              }
            else
              {
                 s[secret[i]-'0']++;
                 g[guess[i]-'0']++;
              }
              
        }
        for(int i=0;i<10;i++)
        {
            cows=cows+min(s[i],g[i]);
        }

        ans+=to_string(bull);
        ans+='A';
        ans+=to_string(cows);
        ans+='B';
        
        return ans;
    }
};