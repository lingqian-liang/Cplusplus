
#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))
#define MAN(X, Y) (((X) < (Y)) ? (Y) : (X))

#include <stdio.h>
using namespace std;

vector<double> operator+(const vector<double>& V,const vector<double>& W)
{
    unsigned long l;
    if (V.size() == W.size())
        l= W.size();
    else{
        l= MIN(V.size(),W.size());
        cout<< "Caution: vector lengths do not match!"<<" V size = "<<V.size()<< " W size = "<<W.size()<< endl;
    }
    
    vector<double> S;
    S.resize(l);
    for(int i=0; i<l; i++){
        S[i]=V[i]+W[i];
    }
    return S;
    
}

vector<double> operator-(const vector<double>& V,const vector<double>& W)
{
    unsigned long l;
    if (V.size() == W.size())
        l= W.size();
    else{
        l= MIN(V.size(),W.size());
        cout<< "Caution: vector lengths do not match!"<<endl;
    }
    
    vector<double> S;
    S.resize(l);
    for(int i=0; i<l; i++){
        S[i]=V[i]-W[i];
    }
    return S;
    
}

vector<double> operator*(const vector<double>& V,const vector<double>& W)
{
    unsigned long l;
    if (V.size() == W.size())
        l= W.size();
    else{
        l= MIN(V.size(),W.size());
        cout<< "Caution: vector lengths do not match!"<<endl;
    }
    
    vector<double> S;
    S.resize(l);
    for(int i=0; i<l; i++){
        S[i]=V[i]*W[i];
    }
    return S;
    
}

vector<double> operator/(const vector<double>& V,const vector<double>& W)
{
    unsigned long l;
    if (V.size() == W.size())
        l= W.size();
    else{
        l= MIN(V.size(),W.size());
        cout<< "Caution: vector lengths do not match!"<<endl;
    }
    
    vector<double> S;
    S.resize(l);
    for(int i=0; i<l; i++){
        S[i]=V[i]/W[i];
    }
    return S;
    
}

// Overloaded operations for vector and number
vector<double> operator+(const vector<double>& V,const double& a)
{
    vector<double> S;
    S.resize(V.size());
    for(int i=0; i<V.size(); i++){
        S[i]=V[i]+a;
    }
    return S;
    
}

vector<double> operator-(const vector<double>& V,const double& a)
{
    vector<double> S;
    S.resize(V.size());
    for(int i=0; i<V.size(); i++){
        S[i]=V[i]-a;
    }
    return S;
    
}

vector<double> operator*(const vector<double>& V,const double& a)
{
    vector<double> S;
    S.resize(V.size());
    for(int i=0; i<V.size(); i++){
        S[i]=V[i]*a;
    }
    return S;
    
}

vector<double> operator/(const vector<double>& V,const double& a)
{
    vector<double> S;
    S.resize(V.size());
    for(int i=0; i<V.size(); i++){
        S[i]=V[i]/a;
    }
    return S;
    
}


