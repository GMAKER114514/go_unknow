#include<bits/stdc++.h>
using namespace std;
int a[30000],de[30000],mx[30000];
int ind,ret;
void out(){
    int stop=1;
    for(int i=0;stop;i++){
        if(i>29999 or a[i]==0){
            stop-=1;
            cout<<endl;
            continue;
        }cout<<a[i]<<' ';
    }
}

void init();

void crash(int first){
    init();
    a[ind]=first;
    mx[ind]=first;
    while(a[0]){
    	if(ret)return;
        if(ind !=  0 and a[ind]==1){
            a[ind]-=1;
            mx[ind]=0;
            de[ind]=1;
            ind-=1;
            continue;
        }
        a[ind]=mx[ind]-de[ind];
        a[ind+1]=de[ind];
        mx[ind+1]=de[ind];
        de[ind]+=1;
        ind+=1;
        out();
    }
}

void init(){
	ret=0;
    for(int i=0;i<30000;i++){
        a[i]=0;
        de[i]=1;
        mx[i]=0;
    }
}

int main(){
	int args;
	cin>>args;
	
    crash(args);
    return 0;
}
