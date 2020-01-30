#include <bits/stdc++.h>

using namespace std;

int main()
{
    int temp;
    clock_t start, end;

    start = clock();

    for (int i = 0; i < 100; i++)
    {
        temp = rand() % 100;

        cout << temp << endl;
    }

    end = clock();

    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}