#include <iostream>
#include <cmath>
using namespace std;

double stdev(double x[], int n)
{
    double mean = 0, sum = 0;

    for(int i = 0; i < n; i++)
        mean += x[i];

    mean = mean / n;

    for(int i = 0; i < n; i++)
        sum += pow(x[i] - mean, 2);

    return sqrt(sum / (n - 1));
}

int main()
{
    double arr[8] = {2,4,4,4,5,5,7,9};

    cout << "Standard Deviation = " << stdev(arr, 8);

    return 0;
}
