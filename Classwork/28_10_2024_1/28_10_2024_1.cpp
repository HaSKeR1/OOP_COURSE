#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>

int main()
{
    setlocale(LC_ALL, "rus");
    unsigned size{ 0 };
    typedef std::istreambuf_iterator<char> buf_iter;

    std::ifstream file;
    file.open("file.txt");
    if (!file.is_open())
        std::cout << "Файл не может быть открыт!";
    else
    {
        for (buf_iter i(file), e; i != e; ++i)
        {
            char c = *i;
            size++;
        }

        char* text = new char[size];
        int h = 0;
        for (buf_iter i(file), e; i != e; ++i)
        {
            char c = *i;
            text[h] = c;
            h++;
        }

        file.close();

        for (int i = 0; i < size; i++) {
            std::cout << text[i];
        }
    }
    return 0;
}