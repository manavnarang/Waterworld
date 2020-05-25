#include<bits/stdc++.h>

using namespace std;

void testfun(map<string, int> mp){
    map<string, int>::iterator it = mp.begin();
    for(; it!=mp.end(); it++){
        cout<<it->first<<":"<<it->second<<" ";
    }
    cout<<endl;
}

int main()
{
    int no, add=0;
    cin>>no;
    int var;
    cin>>var;
    map<string, int> d, h;
    h["F"] = 0;
    while(var--){
        string naam;
        int a, b;
        cin>>naam>>a>>b;
        d[naam] = b/a;
        h[naam] = b;
        add+=b;
    }
    cin>>var;
    while(var--){
        string naam, c1="", c2="";
        cin>>naam;
        int meflux=0;
        while(meflux<naam.length()){
            if(naam[meflux]=='_'){
                c1 = c2;
                c2 = "";
                meflux++;
                continue;
            }
            c2+=naam[meflux++];
        }
        h[c2]+= h[c1];
    }
    //print(days);
    //print(storage);
    map<string, int>::reverse_iterator a= d.rbegin();
    int multiply = 1;
    for(; a!=d.rend(); a++ ){
        int temperature = a->second*multiply;
        if(temperature<no){
            add+=(h[a->first]*(no-temperature));
            multiply++;
        }
    }
    cout<<add;
}
