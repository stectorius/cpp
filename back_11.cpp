#include <iostream>

using namespace std;

int n, x[11], viz[11], nrpare;

void afisare()
{
    for(int i = 1 ; i <= n ; i++)
        cout << x[i];

    cout << '\n';
}

bool valid(int k)
{
    if(k==1 && x[1] == 0) ///nu pot avea 0 pe pozitia 1
        return 0;
    if(k==n && nrpare <= n-nrpare) ///nrpare <= nrimpare la obtinerea solutiei este incorect
        return 0;
    
     return 1;
}

void back(int k)
{
    for(int i = 0 ; i <= 9 ; i++)
    {
        if(!viz[i])
        {
            x[k] = i;
            viz[i] = 1;
            if(i%2==0)nrpare++;
            if(valid(k))
            {
                if(k == n)
                    afisare();
                else
                    back(k + 1);
            }
            viz[i] = 0;
            if(i%2==0)nrpare--;
        }
    }
}

int main()
{
    cin >> n;

    back(1);

    return 0;
}
