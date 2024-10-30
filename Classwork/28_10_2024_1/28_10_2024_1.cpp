#include <windows.h>
#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    setlocale(LC_ALL, "rus");
    std::vector<char> text = {};
    size_t size = 0;
    int i = 0;

    std::ifstream file;
    file.open("file.txt");

    if (!file.is_open())
        std::cout << "Файл не может быть открыт!";
    else
    {
        while (!file.eof())
        {
            std::vector<char> tempWord;
            char c = file.get();
            if (c == '-')
            {
                tempWord.push_back(c);
                size++;
                c = file.get();
                if (c == '\n')
                {
                    tempWord.push_back(c);
                    size++;
                    c = file.get();
                    if (c == '-'){}
                    else
                    {
                        tempWord.push_back(c);
                        size++;
                    }
                }
                else
                {
                    i++;
                    size++;
                }
            }
            else
            {
                i++;
                size++;
            }
        }

        file.close();
    }
    for (int j = 0; j < size; j++)
    {
        std::cout << tempWord[j]
    }
    return 0;
}