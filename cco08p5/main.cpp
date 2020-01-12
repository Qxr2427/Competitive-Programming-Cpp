#include <bits/stdc++.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
using namespace std;

bool T[10000007];
int S[10000007];
int subsetSum( int sum, int x)
    {



        T[0]=true;

        for (int i = 0; i <=x; i++)
        {
            for (int j = sum/2; j >= S[i];j--)
            {
                if(!T[j]) {
                    T[j]=T[j-S[i]];
                }
            }
        }
        int diff = 99999999;


        for (int j = sum / 2; j >= 0; j--)
        {
            if (T[j])
            {
                diff = sum - 2 * j;
                break;
            }
        }
        return diff;
    }


int main()
            {
    int x;
            scan(x);
            int cur=0;
            int sum=0;
            int num=0;
            for(int i=1;i<=x;i++) {
                int aa,bb;
                scan(aa);scan(bb);
                num+=aa;
                sum+=aa*bb;
                int d=0;
                for(int j=cur;j<cur+aa;j++){
                    S[j]=bb;
                    d=j;
                }
                cur=d+1;
            }
            /*for(int i=0;i<num;i++) {
              System.out.println(S[i]);
            }*/
            cout<<subsetSum(sum,num);

            }


