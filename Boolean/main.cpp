#include <iostream>

using namespace std;

int main()
{
    string a;
    std::getline (std::cin,a);
    int s=a.length();
    int count=0;
    for(int i=0;i<a.length()-3;i++){
        if(a.substr(i,3)=="not"){
            count++;
        }
    }
    if(a.at(s-4)=='T'){
        if(count%2==0){
            cout<<"True"<<endl;
        }
        else{
            cout<<"False";
        }
    }
    else{
        if(count%2==0){
            cout<<"False"<<endl;
        }
        else{
            cout<<"True";
        }
    }

    return 0;
}
