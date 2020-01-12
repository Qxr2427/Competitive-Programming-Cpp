#include<bits/stdc++.h>
using namespace std;
int R, C;
int a[305][305];
int psa[305][305];

void prefixSum2D()
{
    //psa[0][0] = a[0][0];



    for (int i = 1; i <=R; i++) {
        for (int j = 1; j <=C; j++) {

            psa[i][j] = psa[i - 1][j] + psa[i][j - 1]
                        - psa[i - 1][j - 1] + a[i][j];
        }
    }

}
int query(int x1, int y1, int x2, int y2){
    return (psa[x2][y2]-psa[x2][y1-1]-psa[x1-1][y2]+psa[x1-1][y1-1]);
}
int main() {
    int n;
    scanf("%d%d%d",&R,&C,&n);
    for(int i=1;i<=R;i++){
        for(int j=1;j<=C;j++){
            int s;
            scanf("%d",&s);
            a[j][i]=s;
        }
    }
    prefixSum2D();
  /*  for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cout<<psa[i][j]<<" ";
        }
    }*/
    int max1=-1;
    for(int i=1;i<=n;i++){
           int j=n/i;
         //    cout<<i<<" "<<j<<endl;
           for(int r=1;r<=R;r++) {
               for (int c = 1; c <=C; c++) {
                   if(r+i-1<=R&&c+j-1<=C) {
                       int ss = query(r,  c, r + i - 1,c + j - 1);
                       //  cout<<r<<" "<<c<<" "<<r+i-1<<" "<<c+j-1<<endl;

                       if (ss > max1) {
                           max1 = ss;
                           //   cout<<r<<" "<<c<<" "<<r+i-1<<" "<<c+j-1<<endl;
                       }
                   }
                   else{
                       break;
                   }
               }
           }

    }
    cout<<max1;
    return 0;
}