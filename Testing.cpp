
#include <iostream>
#include <string>
#include <map>
#include <vector>

void printHist(std::map<char, int> h) {
    for (std::map<char, int>::const_iterator it = h.begin();
        it != h.end(); ++it)
    {
        std::cout << it->first << " " << it->second <<"\n";
    }
}
class TextUtility {
private:
    std::string text;
public:
    TextUtility(std::string _text) : text(_text) {}

    std::map<char, int> histogram() {
        std::map<char, int> hist;
        for (auto& x : text) {
            hist[x] = hist.count(x) == 0 ? 1 : hist[x] + 1; // check key existence 
        }
        return hist;
    }
};

int main()
{
    TextUtility tu1("Ivo is dummy"),tu2("BOSCH"),tu3("");
    std::cout << "Printed tu1\n";
    printHist(tu1.histogram());
    std::cout << "Printed tu2\n";
    printHist(tu2.histogram());
    std::cout << "Printed tu3\n";
    printHist(tu3.histogram());


}

