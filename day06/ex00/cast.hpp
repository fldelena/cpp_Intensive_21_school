#ifndef CAST_HPP
#define CAST_HPP
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>

class Cast
{
private:
    char    char_val;
    int     int_val;
    float   float_val;
    double  double_val;

public:
    Cast();
    Cast(double value);
    Cast(const Cast &other);
    ~Cast();

    Cast &operator=(const Cast &other);


    char   GetChar();
    int    GetInt();
    float  GetFloat();
    double GetDouble();

    void   SetChar(char value);
    void   SetInt(int value);
    void   SetFloat(float value);
    void   SetDouble(double value);

    char   ConvChar(double value);
    int    ConvInt(double value);
    float  ConvFloat(double value);
    double ConvDouble(double value);

    
};


#endif