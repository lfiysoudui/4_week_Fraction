#include <iostream>
using namespace std; //使用library中的標準命名空間
class Fraction{
    private:
        double numerator;
        double denominator;

    public:
        void setNumerator(double num){
            numerator = num;
        }
        void setDenominator(double a){
            denominator = a;
        }
        void getDouble(){
            cout << numerator/denominator<< endl;
        }
        void outputReducedFraction(){
            int a,mn;
            if(numerator<denominator)a = numerator;
            else a = denominator;
            for(int i =a;i>0;i--){
                if((int)numerator%i==0 && (int)denominator%i==0){
                    mn = i;
                    break;
                    };
            }
            if((int)numerator%(int)denominator==0)cout<< numerator/denominator<< endl;
            else cout<< numerator/mn<< "/"<<denominator/mn<< endl;
        }
};

int main()
{
	Fraction f1, f2;
	f1.setNumerator(4);
	f1.setDenominator(2);
	f1.getDouble();
	f1.outputReducedFraction();	

	f2.setNumerator(20);
	f2.setDenominator(60);
	f2.getDouble();
	f2.outputReducedFraction();
	return 0;
}
