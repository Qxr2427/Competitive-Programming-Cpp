#include <iostream>

using namespace std;

int main()
{
    string happy=":-)";
    string sad=":-(";
    int counth=0;
    int counts=0;
    string a;
std::getline (std::cin,a);    int s=a.length();
    for(int i=0;i+3<a.length();i++){
        if(a.substr(i,3)==happy){
            counth=counth+1;
        }
        if(a.substr(i,3)==sad){
            counts=counts+1;
        }
}
if(counth==0&&counts==0){
    cout<<"none"<<endl;
}
else if(counth>counts){
    cout<<"happy"<<endl;
}
else if(counth==counts){
    cout<<"unsure"<<endl;
}
else if(counts>counth){
    cout<<"sad"<<endl;
}
}
