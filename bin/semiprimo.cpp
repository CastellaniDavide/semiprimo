/**
 * @file semiprimo.cpp
 *
 * @version 01.01 202155
 *
 * @brief https://training.olinfo.it/#/task/semiprimo/statement
 *
 * @ingroup semiprimo
 * (Note: this needs exactly one @defgroup somewhere)
 *
 * @author Castellani Davide
 *
 * Contact: contacts@castellanidavide.it
 *
 */

// Includes
#include <bits/stdc++.h>
using namespace std;

// Variabiles
int N, n, divisors, d1, d2;

// Main code
int main()
{
    // Cncomment the following lines if you want to read/write from files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // Input
    cin >> N;
    n = N;
    divisors = 0;
    size_t i;

    for (i = 2; i < N / 2; ++i)
    {
        if (n % i == 0)
        {
            switch (divisors)
            {
            case 0:
                divisors = 1;
                d1 = i;
                break;
            case 1:
                divisors = 2;
                d2 = i;
                break;
            case 2:
                cout << -1 << endl;
                return 0;
            }

            n /= i;
            --i;
        }
    }

    // Output
    if (divisors == 2)
        cout << d1 << " " << d2 << endl;
    else
        cout << -1 << endl;

    // End
    return 0;
}
