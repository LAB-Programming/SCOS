#include <iostream>
#include <cmath>
using namespace std;

int main() {

    /* 
    clone computers 2012
    by Gio rescigno
    program: 0001
    vertion: 2.5 
    */ 

    string op;
    long add_1;
    long add_2;
    long sub_1;
    long sub_2;
    long sumsub;
    long sumadd;
    long mitp_1;
    long mitp_2;
    long mitpsum;

    
    cout << "simple calculator OS" <<endl;
    cout << "Clone Computers 2012" <<endl;
    cout << "v 2.5 " <<endl;
    
    startPoint:

    cout << "type here:";
    cin >> op;

    if  (op == "addition")  { // additon

        cout << "addition" <<endl;
        cin >> add_1;
        cout << "+" ;
        cin >> add_2;


        sumadd = add_1 + add_2;

        cout << sumadd <<endl;
        goto startPoint;
    }
    else if (op == "help"){

        cout << "addition" <<endl;    
        cout << "subtraction" <<endl;
        cout << "multiplication" <<endl;
        cout << "division" <<endl;
        cout << "distribution" <<endl;
        cout << "factorial" <<endl;
        cout << "exponents" <<endl;
        cout << "FOILing" <<endl;
        cout << "fraction" <<endl;
        cout << "help" <<endl;
        cout << "exit" <<endl;

    }

    else if (op == "subtraction") { // subtraction

        cout << "subtraction" <<endl;

        cin >> sub_1;
        cout << "-";
        cin >> sub_2;

        sumsub = sub_1 - sub_2;

        cout << sumsub <<endl;
        goto startPoint;
    }

    else if (op == "distribution") { // disto
        int n;
        int i;
        op5:
        cout << "enter in a number" << endl;
        cin >> n;


        i = 1;

        if (n == 1){

            cout << "pick a different number" << endl;
            goto op5;
        }

        while (i < n){


            cout << i << "+" << (n - i) <<endl;

            i++;
            
        }
        goto startPoint;
    }

    else if (op == "multiplication") { // miplication

        cout << "multiplication" <<endl;

        cin >> mitp_1; 
        cout<< "times";
        cin >> mitp_2;

        mitpsum =(mitp_1 * mitp_2);

        cout << mitpsum <<endl;
        goto startPoint;
    }

    else if (op == "division"){ //deviton 

        cout << "division" <<endl;

        long ab; //inp
        long ba; //inp 
        long abb;//outp

        cin >> ab; //this is when the frist number 
        cout<< "/";
        cin >> ba; 


        abb = (ab / ba); //this is when the intarger are devied althoou they are longs

        cout << abb <<endl; //the long is outp
        goto startPoint;
    }

    else if (op == "factorial"){

        int fm;
        int fa = 0;

        //fa = fm

        cout << "enter in a number to factorial" <<endl;
        cin >> fm;
        fa=fm;

        while (fm > 2) {

            fa = (fa * (--fm));
        }
        cout << fa <<endl;
        goto startPoint;
    }
    
    else if (op == "exit") {//type exit to exit

        cout << "bye bye" <<endl;

        return 0;
    }

    else if (op == "exponents"){ //exonets

        long fullnum; 
        long fullnum2;
        long powernum; 

        cout << "enter a number" << endl;
        cin >> fullnum; //input for the full number
        cout << "to the power of" <<endl;
        cin >> powernum;// the conter is defined heren 

        fullnum2 = fullnum; 

    
        while (powernum > 1){

            fullnum = (fullnum * fullnum2); //in the funtion we mtiyply the number by it self
            powernum = (powernum - 1); //this it the counter
        }

        cout << fullnum << endl;

    }

    else if (op == "FOILing") { //the is foil

        string fop;

        startPoint2: // this is for looping back 

        cout << "squaring x + a" <<endl;
        cout << "computing (x + a) (x - a)" <<endl;
        cout << "general FOILing" <<endl;
        cout << "exit foiling" <<endl;
        cout << "type here:";
        cin >> fop;

        if (fop == "squaring") {
            

            long y; //this is the "long" that you define when you type in a number
            long xco; //this is the x coefficient this equles "input" * 2
            long cco; //this has nothing to do with "x"

            cout << "(x + _)^2:";
            cin >> y;

            xco = (y * 2);
            cco = (y * y);
        

            cout << "x^2 + ";
            cout << xco;
            cout << "x + ";
            cout << cco <<endl;

            goto startPoint2;

        }

        else if (fop == "computing") { //this program is for if you what to foil (x + "a") (x - "a")

            long a; // this is the input 
            long outp; // this is the output

            cout <<"(x + _)(x - _):"; //this is when the example is displayed 
            cin >> a; // this is when the int is defined

            outp = (a * a); // all the math

            cout << "x^2 - ";
            cout << outp << endl;

            goto startPoint2;
        }

        else if (fop == "general") {// this program will (x + "a")(x + "b")

            long a;
            long b;
            long mab;
            long aab;

            cout << "(x + _)(x + b):"; // this is where the intager "a" is defined
            cin >> a;
            cout << "(x + a)(x + _):"; // this is where the intager "b" is defined
            cin >> b;

            mab = (a * b); //this is "a" and "b" are mautyplied
            aab = (a + b); //this is where "a" and "b" get added

            cout << "x^2 + ";
            cout << aab;
            cout << "x + ";
            cout << mab << endl;  // every thing is outp

            goto startPoint2; //this brings you back to the foiling menu
        }

        else if (fop == "exit") { // going to starpoint

            goto startPoint; // at the end of the prog u get looped back to the begning of the prog



        }

    }
    else if (op == "fraction"){

        opf:

        string opf;

        cout << "type here: ";
        cin >> opf;

        if (opf == "adding"){
            int a;
            int b;
            int c;
            int d;

            cout <<"fraction adding"<<endl;

            cout << "1st fraction" <<endl;
            cin >> a;
            cin >> b;

            cout << "2nd fraction" <<endl;
            cin >> c;
            cin >> d;

        
            if (b == d){

                a = (a + c);

                cout <<"your anwser" <<endl;
                cout << a << "/" << b <<endl;
            }
            else if (b != d){

                a = (d * a);
                b = (d * b);
                c = (b * c);
            

                a = (a + c);

                cout <<"your anwser" <<endl;
                cout << a << "/" << b <<endl;
                goto opf;
            

            }
        }
        else if (opf == "multiplication"){

            long a;
            long b;
            long c;
            long d;

            cout << "1st fraction" <<endl;
            cin >> a;
            cin >> b;

            cout << "2nd fraction" <<endl;
            cin >> c;
            cin >> d;

            a = (a * b);
            c = (c * d);

            cout << a << "/" << c <<endl;
            goto opf;


        }
        else if (opf == "deviton"){

            cout << "1st fraction" <<endl;
            cin >> a;
            cin >> b;

            cout << "2nd fraction" <<endl;
            cin >> c;
            cin >> d;




        }
        else if (opf == "help"){

            cout << "adding" <<endl;
            cout << "multiplication" <<endl;
            cout << "deviton" <<endl;

            goto opf;
        }
        else if (opf == "exit"){

            goto startPoint;
        }


    }



    else if (op == "about"){ //in case some one whats to know about the app they can type "about"

        cout <<"               clone computers 2012"<<endl;
        cout <<"SCOS is a simple calculator that is intergated in to you term so you "<<endl;
        cout<<"can do compex math becues we know that calculators all use "<<endl;
        cout<<"microcontroolers and are not that powerful. well this is the calculator "<<endl;
        cout<<"for the modorn comptuer."<<endl;

    }

    

    goto startPoint;
}  

