﻿#include <windows.h>
#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    setlocale(LC_ALL, "rus");
    std::vector<char> text = {};
    std::vector<char> tempWord;
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
            
            char c = file.get();
            std::cout << c;
            /*while (c != ' ')
            {
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
                        if (c == '-') {}
                        else
                        {
                            tempWord.push_back(c);
                            size++;
                            c = file.get();
                        }
                    }
                    else
                    {
                        tempWord.push_back(c);
                        size++;
                        c = file.get();
                    }
                }
                else
                {
                    tempWord.push_back(c);
                    size++;
                    c = file.get();
                }
            }*/
            for (int j = 0; j < size; j++)
            {
                std::cout << tempWord[j];
            }
        }

        file.close();
    }
    
    return 0;
}