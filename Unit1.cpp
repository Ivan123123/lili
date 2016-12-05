#include <iostream>
#include <string.h>
#include <conio.h>
 
 
using namespace std;
 
using namespace std;
int main()
{
    char str[80];
    int sum = 0;
    bool kur = false;
    cout << "  Enter string  ";
    cin.getline(str, 80);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]) && !(kur))
        {
            sum++;
            kur = true;
        }
        if (!isalpha(str[i]))
            kur = false;
    }
    cout << sum << "\n";
    getch();
    return 0;
 
}
