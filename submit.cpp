#include<bits/stdc++.h>
using namespace std;
int grass[5000][5000];
const int MAX=10000000;
int main(){
    freopen("mowing.in","r",stdin);
    freopen("mowing.out","w",stdout);
    
    int n;cin>>n;
    //initiall cut at (2000,2000)
    int curx,cury;  curx=cury=2000; grass[curx][cury]=1;
    int max_value=MAX,curtime=2;
    
    for(int i=0;i<n;i++){
        char c;cin>>c;
        if(c=='N'){
            int k;cin>>k;
            for(int j=0;j<k;j++){
                --cury;
                if(grass[curx][cury]!=0)    max_value=min(max_value,curtime-grass[curx][cury]);
                grass[curx][cury]=curtime;
                curtime++;
            }
        }
        
        else if(c=='S'){
            int k;cin>>k;
            for(int j=0;j<k;j++){
                ++cury;
                if(grass[curx][cury]!=0)    max_value=min(max_value,curtime-grass[curx][cury]);
                grass[curx][cury]=curtime;
                curtime++;
            }
        }
        
        else if(c=='W'){
            int k;cin>>k;
            for(int j=0;j<k;j++){
                --curx;
                if(grass[curx][cury]!=0)    max_value=min(max_value,curtime-grass[curx][cury]);
                grass[curx][cury]=curtime;
                curtime++;
            }
        }
        
        else if(c=='E'){
            int k;cin>>k;
            for(int j=0;j<k;j++){
                ++curx;
                if(grass[curx][cury]!=0)    max_value=min(max_value,curtime-grass[curx][cury]);
                grass[curx][cury]=curtime;
                curtime++;
            }
        }
    }
    
    if(max_value==MAX)  cout<<-1;
    else    cout<<max_value;
    return 0;
}