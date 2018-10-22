#include "simpleencrypt.h"



std::string xor_data(const char* message)
{   
    std::string encrypted = "";
    for (int i = 0; i < sizeof(message); i++ ) 
    {
        encrypted.append(1, (char)((message[i] ^ key[i % 64])));
    }
    //printf("%d\n", encrypted.length());
    return encrypted;
}