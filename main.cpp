#include <iostream>

using namespace std;

int main()
{
    int i;
    float a[5] = {1,2,3,4,5};

    float* bPtr = new float[5];
    for(i = 0; i < 5; i++)
    {
        bPtr[i] = i+1;
    }
    for(i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
        cout << bPtr[i] << " ";
    }


    delete bPtr;
    return 0;
}
