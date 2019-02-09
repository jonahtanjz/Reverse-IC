#include <iostream>

using namespace std;

int main()
{
    char l1, l2, e;
    int d1, d2, d3, d4, d5, d6, d7, h1, t1, t2, c1;
while (e != 'n')
{
    cout << "SG citizen? y/n" << endl;
    cin >> l1;

    if (l1 == 'y')
    {

    cout << "Do you have the last 3 or 4 digits?" << endl;
    cin >> h1;

    cout << "Enter the last letter" << endl;
    cin >> l2;
        switch (l2)
        {
        case 'J':
        case 'j':
            c1 = 0;
            break;
        case 'Z':
        case 'z':
            c1 = 1;
            break;
        case 'I':
        case 'i':
            c1 = 2;
            break;
        case 'H':
        case 'h':
            c1 = 3;
            break;
        case 'G':
        case 'g':
            c1 = 4;
            break;
        case 'F':
        case 'f':
            c1 = 5;
            break;
        case 'E':
        case 'e':
            c1 = 6;
            break;
        case 'D':
        case 'd':
            c1 = 7;
            break;
        case 'C':
        case 'c':
            c1 = 8;
            break;
        case 'B':
        case 'b':
            c1 = 9;
            break;
        case 'A':
        case 'a':
            c1 = 10;
            break;
        default :
            cout << "Invalid letter" << endl;
        }

    if (h1==3)
    {
        cout << "Enter third last digit" << endl;
        cin >> d5;
        cout << "Enter second last digit" << endl;
        cin >> d6;
        cout << "Enter last digit" << endl;
        cin >> d7;
            for (d1=0; d1<10; ++d1)
            {
                for (d2=0; d2<10; ++d2)
                {
                    for (d3=0; d3<10; ++d3)
                    {
                        for (d4=0; d4<10; ++d4)
                        {
                            t1 = (d1*2 + d2*7 + d3*6 + d4*5 + d5*4 + d6*3 + d7*2)% 11;
                            if (t1 == c1)
                            {
                                cout << "Possible Number: S" << d1 << d2 << d3 << d4 << d5 << d6 << d7 << l2 << endl;
                            }

                            t2 = ((d1*2 + d2*7 + d3*6 + d4*5 + d5*4 + d6*3 + d7*2)+4)% 11;
                            if (t2 == c1 && d1 < 2)
                            {
                                cout << "Possible Number: T" << d1 << d2 << d3 << d4 << d5 << d6 << d7 << l2 << endl;
                            }
                        }
                    }
                }
            }
    }
    else if (h1==4)
    {
        cout << "Enter fourth last digit" << endl;
        cin >> d4;
        cout << "Enter third last digit" << endl;
        cin >> d5;
        cout << "Enter second last digit" << endl;
        cin >> d6;
        cout << "Enter last digit" << endl;
        cin >> d7;
            for (d1=0; d1<10; ++d1)
                {
                    for (d2=0; d2<10; ++d2)
                    {
                        for (d3=0; d3<10; ++d3)
                        {
                            t1 = (d1*2 + d2*7 + d3*6 + d4*5 + d5*4 + d6*3 + d7*2)% 11;
                            if (t1 == c1)
                            {
                                cout << "Possible Number: S" << d1 << d2 << d3 << d4 << d5 << d6 << d7 << l2 << endl;
                            }
                            t2 = ((d1*2 + d2*7 + d3*6 + d4*5 + d5*4 + d6*3 + d7*2)+4)% 11;
                            if (t2 == c1 && d1 < 2)
                            {
                                cout << "Possible Number: T" << d1 << d2 << d3 << d4 << d5 << d6 << d7 << l2 << endl;
                            }
                        }
                    }
                }
    }
    else
    {
        cout << "Please only enter only 3 or 4" << endl;
    }
    }
    else if (l1 == 'n')
    {

    cout << "Last 3 or 4 digits?" << endl;
    cin >> h1;

    cout << "Enter the last letter" << endl;
    cin >> l2;
        switch (l2)
        {
        case 'X':
        case 'x':
            c1 = 0;
            break;
        case 'W':
        case 'w':
            c1 = 1;
            break;
        case 'U':
        case 'u':
            c1 = 2;
            break;
        case 'T':
        case 't':
            c1 = 3;
            break;
        case 'R':
        case 'r':
            c1 = 4;
            break;
        case 'Q':
        case 'q':
            c1 = 5;
            break;
        case 'P':
        case 'p':
            c1 = 6;
            break;
        case 'N':
        case 'n':
            c1 = 7;
            break;
        case 'M':
        case 'm':
            c1 = 8;
            break;
        case 'L':
        case 'l':
            c1 = 9;
            break;
        case 'K':
        case 'k':
            c1 = 10;
            break;
        default :
            cout << "Invalid letter" << endl;
        }

    if (h1==3)
    {
        cout << "Enter third last digit" << endl;
        cin >> d5;
        cout << "Enter second last digit" << endl;
        cin >> d6;
        cout << "Enter last digit" << endl;
        cin >> d7;
            for (d1=0; d1<10; ++d1)
            {
                for (d2=0; d2<10; ++d2)
                {
                    for (d3=0; d3<10; ++d3)
                    {
                        for (d4=0; d4<10; ++d4)
                        {
                            t1 = (d1*2 + d2*7 + d3*6 + d4*5 + d5*4 + d6*3 + d7*2)% 11;
                            if (t1 == c1)
                            {
                                cout << "Possible Number: F" << d1 << d2 << d3 << d4 << d5 << d6 << d7 << l2 << endl;
                            }

                            t2 = ((d1*2 + d2*7 + d3*6 + d4*5 + d5*4 + d6*3 + d7*2)+4)% 11;
                            if (t2 == c1)
                            {
                                cout << "Possible Number: G" << d1 << d2 << d3 << d4 << d5 << d6 << d7 << l2 << endl;
                            }
                        }
                    }
                }
            }
    }
    else if (h1==4)
    {
        cout << "Enter fourth last digit" << endl;
        cin >> d4;
        cout << "Enter third last digit" << endl;
        cin >> d5;
        cout << "Enter second last digit" << endl;
        cin >> d6;
        cout << "Enter last digit" << endl;
        cin >> d7;
            for (d1=0; d1<10; ++d1)
                {
                    for (d2=0; d2<10; ++d2)
                    {
                        for (d3=0; d3<10; ++d3)
                        {
                            t1 = (d1*2 + d2*7 + d3*6 + d4*5 + d5*4 + d6*3 + d7*2)% 11;
                            if (t1 == c1)
                            {
                                cout << "Possible Number: F" << d1 << d2 << d3 << d4 << d5 << d6 << d7 << l2 << endl;
                            }
                            t2 = ((d1*2 + d2*7 + d3*6 + d4*5 + d5*4 + d6*3 + d7*2)+4)% 11;
                            if (t2 == c1)
                            {
                                cout << "Possible Number: G" << d1 << d2 << d3 << d4 << d5 << d6 << d7 << l2 << endl;
                            }
                        }
                    }
                }
    }
    else
    {
        cout << "Please only enter only 3 or 4" << endl;
    }
    }
    else {cout << "Please enter only small y or n" << endl;}

    cout << "Press any key to try again or n to exit" << endl;
    cin >> e;
}
}
