#include<bits/stdc++.h>
using namespace std;

vector<int> lps(string s){
    int n=s.size();
    vector<int> arr(n,0);
    for(int i=1;i<n;i++){
        int j=arr[i-1];
        while(j>0 && s[i]!=s[j]){
            j=arr[j-1];

        }
        if(s[i] == s[j]){
            j++;
        }
        arr[i]=j;
    }
    return arr;
}

int main(){
    string s="abcd";


    string s1="dabc";
    string t=s1+s1;


    vector <int> res=lps(s);

    int ans=-1;
    int i=0,j=0;
    while(i< t.size()){
        if(t[i] == s[j]){
            j++;
            i++;
        }
        else{
            if(j!=0){
                j=res[j-1];

            }
            else{
                i++;
            }
        }
        if(j==s.size()){
            ans=i-s.size();
            break;
        }
    }
    cout<<ans;



}