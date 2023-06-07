#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){

    int t;
    cin>>t;
    for(int i=0;i<t;i++){

        int n;
        string s;
        cin>>n>>s;
        int x=0;
        char c=s[0];
        for(int j=1;j<n;j++){
            if(s[j]==c){
                cout<<c;
                c=s[j+1];
                j++;
            }
        }
        cout<<endl;

    }
}