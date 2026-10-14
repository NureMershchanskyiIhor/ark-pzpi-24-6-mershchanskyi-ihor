#include <iostream>

bool isEvenNumber(int number)
{
    if (number % 2 == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    for (int i = 0; i < 3; i++)
    {
        std::cout << "Is number " << i << " even: "
                  << (isEvenNumber(i) ? "yes" : "no") << "\n";
    }

    return 0;
}