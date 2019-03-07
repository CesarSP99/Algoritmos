///Convertir de string binario a long int
#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    string s = "110";
    unsigned long int value = bitset<32>(s).to_ulong(); ///Unsigned Long Int tiene 8 bytes = 32 bits
    cout << value << endl;
}
