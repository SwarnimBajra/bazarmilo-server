#include <iostream>
#include "./headers/database.h"

int main(int argc, char **argv)
{
    int result = dbConnection();
    if (result >= 0)
    {
        std::cout << "conneced" << std::endl;
    }
    return 0;
}
