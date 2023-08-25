#include <iostream>

using namespace std;

//by default scope of class is private(access specifier can be used)
class example{
    private:
    int x,y;
    
    public:

    //add
    void add(int x,int y){
        cout << x+y << endl;
    }

    //subtract
    void subtract(int x,int y){
        cout << x-y << endl;
    }

    //multiply
    void multiply(int x,int y){
        cout << x*y << endl;
    }

    //division
    void division(int x,int y){
        if (y==0){
            cout << "Division by 0 Error! " << endl;
        }else{
            cout << x/y << endl;
        }
    }

};

int main(){
    example a;
    int option=0,x,y;

    while(1){
        
        cout << "enter option:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n0.Exit: ";
        cin >> option;

        if (option==0)
            exit(0);

        cout << "enter x and y: ";
        cin >> x >> y;

        switch (option){
            case 1:
                a.add(x,y);
                break;

            case 2:
                a.subtract(x,y);
                break;
        
            case 3:
                a.multiply(x,y);
                break;


            case 4:
                a.division(x,y);
                break;

            default:
                cout << "Wrong input!";
                break;
        }
    }

    return 0;
}