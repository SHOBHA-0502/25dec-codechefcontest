#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long int t ;
    cin>>t;
    while(t--){
        long long int n ;
        long long int count =0;
         long long int max =0;
        string s;
        cin>>n ;
        cin>>s;
        for(int i =0 ; i< n; i++){
        
            if(s[i]=='0'){
                count++;
            
            }
            
            else if(s[i]=='1'){
                max++;
                
            }
        }
        if (count <2 || max <2) 
        cout << '0' << endl;
        
        
        else{
        cout<< min(count ,max) -1<<endl ;
    }
}
}