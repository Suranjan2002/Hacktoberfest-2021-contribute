#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    int array[T];
    for(int i=0; i<T; i++)
    {
        cin>>array[i];
    }
    for(int j=0; j<T; j++)
    {
        int output = pow(array[j], 0.5);
        cout<< output<<"\n";
    }
    return 0;
}
