/***********************************||
/***********************************||
/**   BISMILLAHIR RAHMANIR RAHEEM   ||
/**              Nadim              ||
/**         Dept of ICE,NSTU        ||
/***********************************||
/************************************/
#include<bits/stdc++.h>
using namespace std;

//*****************Data type**********************//
typedef long long ll;
typedef long long int lli;
typedef unsigned long long  ull;
typedef unsigned long long int ulli;

//****************SET**************************//
typedef set<int> SI;
typedef set<string> SS;
typedef set<char>SC;
typedef multiset<int>MSI;

//*****************Map****************************//
typedef map<int, int> mp;
typedef map<int, string> mps;
typedef map<int, char>mpc;
typedef map<string, int>mpsi;
typedef map<char, int>mpci;

//****************Pair****************************//
typedef pair<int, int> pii;
typedef pair<string, string> pss;
typedef pair<char, char> pcc;
typedef pair<int, string> pis;
typedef pair<int, char> pic;

//*****************Vector************************//
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<double> VD;
typedef vector<lli> VLLI;
typedef vector<VI> VVI;
typedef vector<pii> VPI;

int main()
{
    int n;cin>>n;
    int a[n];
    float pos,neg,zer;
    pos=neg=zer=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>0)
            pos++;
        else if(a[i]<0)
            neg++;
        else
            zer++;
    }
    cout<<fixed<<setprecision(6)<<pos/n<<endl;
    cout<<fixed<<setprecision(6)<<neg/n<<endl;
    cout<<fixed<<setprecision(6)<<zer/n<<endl;
    ///cout<<pos/n<<"\t"<<neg/n<<"\t"<<zer/n<<endl;
    return 0;
}
///Alhamdulillah............

