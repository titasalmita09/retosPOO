#include <iostream>
#include <vector>
using namespace std;
int b;

vector<int> rotacion (vector <int> A, int k){
    vector<int> Acopy;
    for(int j=0;j<k;j++){
       Acopy=A;
    }
        for(int i=0;i<A.size();i++){
            if (i==0){
            A[i]=Acopy[A.size()-1];
            }else{
                A[i]=Acopy[i-1];
            }
        }
            return A;
}


int main(){
   vector<int> b;
    int k ;
    int number;
    int vari;
   cout<<"dame datos: ";
    cin>>number;
     vector<int> A;
    for(int i=0;i<number;i++){
        cout<<"array"<<i+1<< ": ";
        cin>>vari;
        A.push_back(vari);
    }
    cout<<"dame num de rotaciones: ";
    cin>>k;
    vector<int> copia;
    copia=rotacion(A,k);
    for(int i=0;i<A.size();i++){
     cout<<copia[i]<<endl;
    }

    cout<<"Enter value to 0 to 100"<< endl;
    cin>>k;

    k= k%b.size();
    cout <<"k"<< endl;
    vector<int> copia;
    copia=rotacion(A,k);
    for(int i=0;i<A.size();i++){
     cout<<copia[i]<<endl;
    }

}


