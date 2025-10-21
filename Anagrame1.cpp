#include <fstream>
#include <cstring>
#include <algorithm>

using namespace std;

ifstream cin ("anagrame1.in");
ofstream cout("anagrame1.out");

char c[10];
int x[10],n,viz[10];

void afis(){
    for(int i = 1; i<= n;i++)
        cout<<c[x[i]];
    cout<<'\n';
}



void bkt(int k){
    for(int i = 0; i < n;i++){
        x[k] = i;
        if(!viz[i]){
            viz[i]=1;
            if (k == n) afis();
            else bkt(k+1);
            viz[i]=0;
        }

    }
}

int main()
{
    cin>>c;
    n = strlen(c);
    sort(c,c+n);
    bkt(1);
    return 0;
}
