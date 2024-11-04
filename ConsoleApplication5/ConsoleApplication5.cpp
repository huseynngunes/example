// ConsoleApplication5.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
int main()
{
   
    srand(time(0));
    
    int x = rand()%10000;
    string k,l,m,n;

        cout << x << endl;
    cout << x % 10 << (x % 100) / 10 << (x % 1000) / 100 << x / 1000 << endl;

    switch (x % 10) {
    case 0: {
        k = "";
        break;
    }
    case 1: {
        k = "onethousand";
        break;
    }
    case 2: {
        k = "twothousand";
        break;
    }
    case 3: {
        k = "threethousand";
        break;
    }
    case 4: {
        k = "fourthousand";
        break;
    }
    case 5: {
        k = "fivethousand";
        break;
    }
    case 6: {
        k = "sixthousand";
        break;
    }
    case 7: {
        k = "seventhousand";
        break;
    }
    case 8: {
        k = "eightthousand";
        break;
    }
    case 9: {
        k = "ninethousand";
        break;
    }
          
    }
    switch ((x % 100) / 10) {
    case 0: {
        l = "";
        break;
    }
    case 1: {
        l = "onehundred";
        break;
    }
    case 2: {

        l = "twohundred";
        break;
    }
    case 3: {
        l = "threehundred";
        break;
    }
    case 4: {
        l = "threehundred";
        break;
    }
    case 5: {
        l = "fivehundred";
        break;
    }
    case 6: {
        l = "sixhundred";
        break;
    }
    case 7: {
        l = "sevenhundred";
        break;
    }
    case 8: {
        l = "eighthundred";
        break;
    }
    case 9: {
        l = "ninehundred";
        break;
    }
    }


        switch ((x % 1000) / 100) {
        case 0: {
            m = "";
            break;
        }
        case 1: {
            m = "ten";
            break;
        }
        case 2: {
            m = "twenty";
            break;
        }
        case 3: {
            m = "thirty";
            break;
        }
        case 4: {
            m = "fourty";
            break;
        }
        case 5: {
            m = "fifty";
            break;
        }
        case 6: {
            m = "sixty";
            break;
        }
        case 7: {
            m = "seventy";
            break;
        }
        case 8: {
            m = "eighty";
            break;
        }
        case 9: {
            m = "ninety";
            break;
        }
        }
    switch (x / 1000) {
    case 0: {
        n = "";
        break;
    }
    case 1: {
        n = "one";
        break;
    }
    case 2: {
        n = "two";
        break;
    }
    case 3: {
        n = "three";
        break;

    }
    case 4: {
        n = "four";
        break;
    }
    case 5: {
        n = "five";
        break;
    }
    case 6: {
        n = "six";
        break;
    }
    case 7: {
        n = "seven";
        break;
    }
    case 8: {
        n = "eight";
        break;
    }
    case 9: {
        n = "nine";
        break;
    }
          
    }
    cout << k << l << m << n << endl;
    
    
}



















    
   

   

    








