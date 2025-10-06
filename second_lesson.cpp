#include <bits/stdc++.h>
using namespace std;

int a[10][10];

/*void romb(int dimensiune)
{
    int spaces=2*(dimensiune-1);

    for (int i=1;i<=dimensiune*2;i+=2)
    {
        for (int j=1;j<=spaces;j++)
        {
            cout<<" ";
        }
        for (int j=1;j<=i;j++)
        {
            cout<<"x ";
        }
        cout<<endl;
        spaces-=2;
    }
    spaces=0;
    for (int i=dimensiune*2;i>1;i-=2)
    {
        for (int j=1;j<=spaces;j++)
        {
            cout<<" ";
        }
        for (int j=i;j>1;j--)
        {
            cout<<"x ";
        }
        spaces+=2;
        cout<<endl;
        
    }
}*/

void paralelipiped(int inaltime) 
{
    int spaces=inaltime;
    for (int i=1;i<=inaltime;i++)
    {
        
        for (int j=1;j<=spaces;j++)
        {
            cout<<" ";
        }
        for (int j=1;j<=inaltime;j++)
            {
                if (i==1 || i==(inaltime))
                {
                    cout<<"-";
                }
                else if ( j==1|| j==inaltime)
                {
                    cout<<"/";
                }
            else cout<<" ";
            }
        spaces--;
        cout<<endl;
    }
    
}
int main()
{
    int dimensiune,inaltime;
    /*cout<<"Cat de mare sa fie rombul?";
    cin>>dimensiune;
    romb(dimensiune);*/
    cout<<"Cat de inalt sa fie paralelipipedul?";
    cin>>inaltime;
    paralelipiped(inaltime);
    return 0;
}
/*  -- -- -- -- -- -- -- 
     -- -- -- -- -- -- --
      -- -- -- -- -- -- --
       -- -- -- -- -- -- --
        -- -- -- -- -- -- --
         -- -- -- -- -- -- --
  */