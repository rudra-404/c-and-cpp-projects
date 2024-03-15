#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    system("cls");
    int n;
    cout << "Enter a number of n for nxn Array : ";
    cin >> n;

    int total=0, myArray[n][n];
    int all[(n*2) + 2];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << "myArray[" << i << "][" << j << "]: ";
            cin >> myArray[i][j];
        }
    }

    cout << "----------ELEMENTS OF myArray----------" << endl;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << myArray[i][j] << "\t";
        }

        cout << endl;
    }

    cout << "--------SUM OF ELEMENTS PER ROW--------" << endl;

    for(int i=0; i<n; i++)
    {
        int sum = 0;

        cout << "ROW " << i+1 << ": ";

        for(int j=0; j<n; j++)
        {
            cout << myArray[i][j];

            if(j<n-1)
            {
                cout << " + ";
            }

            sum = sum+myArray[i][j];
        }

        all[total] = sum;
        total++;

        cout << " = " << sum << endl;
    }

    cout << "------SUM OF ELEMENTS PER  COLUMN------" << endl;
    
    for(int i=0; i<n; i++)
    {
        int sum = 0;
        
        cout << "COLUMN " << i+1 << ": ";
        
        for(int j=0; j<n; j++)
        {
            cout << myArray[j][i];
            
            if(j<n-1)
            {
                cout << " + ";
            }

            sum = sum+myArray[j][i];
        }

        all[total] = sum;
        total++;
        
        cout << " = " << sum << endl;
    }

    cout << "-----SUM OF ELEMENTS PER  DIAGONAL-----" << endl;
    
    int dg1=0, dg2=0;
    
    cout << "DIAGONAL 1: ";
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                cout << myArray[i][j];

                if(i<n-1)
                {
                    cout << " + ";
                }

                dg1 = dg1+myArray[i][j];
            }
        }
    }

    all[total] = dg1;
    total++;

    cout << " = " << dg1 << endl << "DIAGONAL 2: ";

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j==(n-i-1))
            {
                cout << myArray[i][j];

                if(i<(n-1))
                {
                    cout << " + ";
                }

                dg2 = dg2+myArray[i][j];
            }
        }
    }

    all[total] = dg2;
    total++;

    cout << " = " << dg2 << endl;

    cout << "--------HIGHEST ELEMENT PER ROW--------" << endl;

    for(int i=0; i<n; i++)
    {
        int max = 0;

        for(int j=0; j<n; j++)
        {
            if(myArray[i][j] > max)
            {
                max = myArray[i][j];
            }
        }

        cout << "ROW " << i+1 << ": " << max << endl;
    }

    cout << "------HIGHEST ELEMENTS PER COLUMN------" << endl;

    for(int i=0; i<n; i++)
    {
        int max = 0;

        for(int j=0; j<n; j++)
        {
            if(myArray[j][i] > max)
            {
                max = myArray[j][i];
            }
        }

        cout << "COLUMN " << i+1 << ": " << max << endl;
    }

    bool allSame = true;

    for(int i=0; i<total; i++)
    {
        if(all[0] != all[i])
        {
            allSame = false;
        }
    }

    if(allSame == (true))
    {
        cout << endl << "Magic Square: Yes" << endl << endl;
    }

    else
    {
        cout << endl << "Magic Square: No" << endl << endl;
    }

    return 0;
}