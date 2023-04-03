#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;
    int ostatok;
    int evenCount = 0;
    int oddCount = 0;
    int count = 0;

    do
    {
        ostatok = number % 10;
        number = number / 10;

        if (ostatok % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
        count++;
        
    } while (number > 0);
    
    cout << oddCount << " " << evenCount << endl;
    return 0;
}
