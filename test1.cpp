#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    vector<long long>div{0,0,1};
    vector<long long>divi{0,1,2};
    div.resize(21);
    divi.resize(21);
    for(int i=3;i<21;++i)
    {
        div[i]=(i-1)*(div[i-1]+div[i-2]);//����ʹ�ô��������
        divi[i]=i*divi[i-1];//n!
    }
    while(cin>>n)
    {
        //fixedʵ���Զ���0
        //setprecision(2)����С�����2λ
        cout<<fixed<<setprecision(2)<<1.0*div[n]/divi[n]*100<<"%"<<endl;
    }
    return 0;
}