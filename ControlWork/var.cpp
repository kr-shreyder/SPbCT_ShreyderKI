#include <iostream>

int main(int argc, char* argv[])
{
    FILE* ptrFile = fopen(argv[1], "r");
    int c = fgetc(ptrFile);
    std::string s = "";

    while (c != EOF)
    {
        s += c;
        s += ' ';
        c = fgetc(ptrFile);
    }

    fclose(ptrFile);
    std::cout << "\"" << s << "\"";

    return 0;
}
