#include<bits/stdc++.h>
using namespace std;
string str, p;
vector<int> lps(1e6);

void get_lps(){
    for(int i = 1, j = 0;i < p.size();i++){
        while(j >= 0 && p[i] != p[j]) {
            if(j > 0) j = lps[j - 1];
            else j = -1;
        }
        j++;
        lps[i] = j;
    }
}
int kmp() {
    int res = 0, j = 0;
    for(int i = 0; i < str.size(); i++) {    
        while(j >= 0 && p[j] != str[i])
            if(j >= 1) j = lps[j - 1];
            else j = -1;
        j++;
        if(j == p.size()) {
            j = lps[j - 1];
            res++;
        }
    }
    return res;
}
