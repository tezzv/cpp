#include <bits/stdc++.h>
using namespace std;

void decToBinary(int n)
{
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binaryNum[j];
    }
    cout<<endl;
}

void printbinary(int num){
    for(int i=10; i>=0; --i)
    {
        cout<<((num >> i) & 1);
    }
    cout<<endl;
}


int main() {
    int a = 1;
    unsigned int b = 1;
    // decToBinary(10);
    printbinary(10);

    return 0;
}
