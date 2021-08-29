#include <iostream>
using namespace std;

class A{
    private:
    int A1;
    float A2;
    public:

    int getA1(){
        return A1;
    }

    void setA1(int _A1){
        A1=_A1;
    }

    float getA2(){
        return A2;
    }

    void setA2(float _A2){
        A2=_A2;
    }

    void MA1(){
        cout << "MA1" << endl;
    }

    void MA2(){
        cout << "MA2" << endl;
    }
};


class B{
    private:
    int B1;
    float B2;
    public:

    int getB1(){
        return B1;
    }

    void setB1(int _B1){
        B1=_B1;
    }

    float getB2(){
        return B2;
    }

    void setB2(float _B2){
        B2=_B2; 
    }

    void MB1(){
        cout << "MB1" << endl;
    }

    void MB2(){
        cout << "MB2" << endl;
    }
    
    class D{
    private:
    int D1;
    float D2;
    public:

    int getD1(){
        return D1;
    }

    void setD1(int _D1){
        D1=_D1;
    }

    float getD2(){
        return D2;
    }

    void setD2(float _D2){
       D2=_D2; 
    }

    void MD1(){
        cout << "MD1" << endl;
    }

    void MD2(){
        cout << "MD2" << endl;
    }
        
    void MD4(){
        cout << "MD4" << endl;
    }    
};   

int main(){




}
