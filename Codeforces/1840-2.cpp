#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int n,k,q;
        cin>>n>>k>>q;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=q)count++;
        }
        if(count<k){
            cout<<0<<endl;
        }
        else{

            int k=0;
            int c=0;
            for(int i=0;i<n;i++){
            if(arr[i]>q){
                for(int j=k;j<i;j++){
                    


                }
            }
        }

        }

    }
}