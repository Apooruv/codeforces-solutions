#include<bits/stdc++.h>
using namespace std;

void build(int x,int y,int k){
    if(x==y){
        tree[x]=arr[x];
    }
    else{
        
    }
}

int sum(int a, int b, int x, int y, int k,vector<int> &seg){
    if(b< x || a > y) return 0;
    if(a>=x && b<=y) return seg[k];
    int mid = (a+b)/2;
    return sum(a, mid, x, y, 2*k, seg) + sum(mid+1, b, x, y, 2*k+1, seg);
}
int main(){

}