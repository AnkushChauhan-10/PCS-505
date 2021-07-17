#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n,t,ans,i;
    cin>>t;
    while(t){
        cin>>n;
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>ans;
        for(i=0;i<n;i++){
            if(ans==arr[i]){
                cout<<"Present";
                break;
            }
        }
        if(i==n){
            cout<<"Not Present";
        }
        cout<<" "<<i+1<<endl;
        t--;
    }
    return 0;
}