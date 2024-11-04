#include <vector>
#include <iostream>
#include <string>
#include <chrono>
#include <thread>

class WinRar
{
public:
    int zip()
    {
        // Deprecated. Use zipString() !!!
        std::chrono::milliseconds timespan(2000);
        std::this_thread::sleep_for(timespan);
        std::cout << "zip succesful" << std::endl;
        return 2000;
    }

    std::string zipString()
    {
        std::chrono::milliseconds timespan(500);
        std::this_thread::sleep_for(timespan);
        std::cout << "zip succesful" << std::endl;
        return "500";
    }
};

int main()
{
    WinRar rar;
    std::string timeZip = rar.zipString();
    std::cout << "Zip time: " << timeZip;
}