#include "cast.hpp"

Cast::Cast()
{
    this->char_val = 0;
    this->int_val = 0;
    this->float_val = 0;
    this->double_val = 0;
}

Cast::Cast(double value)
{
    SetDouble(ConvDouble(value));
    SetChar(ConvChar(this->GetDouble()));
    SetInt(ConvInt(this->GetDouble()));
    SetFloat(ConvFloat(this->GetDouble()));
}

Cast::Cast(const Cast &other)
{
    this->char_val = other.char_val;
    this->int_val = other.int_val;
    this->float_val = other.float_val;
    this->double_val = other.double_val;
}

Cast::~Cast()
{}

Cast &Cast::operator=(const Cast &other)
{
    this->char_val = other.char_val;
    this->int_val = other.int_val;
    this->float_val = other.float_val;
    this->double_val = other.double_val;
    return (*this);
}

char   Cast::GetChar() { return(this->char_val); }
int    Cast::GetInt() { return(this->int_val); }
float  Cast::GetFloat() { return(this->float_val); }
double Cast::GetDouble() { return(this->double_val); }

void   Cast::SetChar(char value) { this->char_val = value; }
void   Cast::SetInt(int value) { this->int_val = value; }
void   Cast::SetFloat(float value) {this->float_val = value; }
void   Cast::SetDouble(double value) {this->double_val = value; }

char   Cast::ConvChar(double value)
{
    char ret;
    ret = static_cast<char>(value);
    return (ret);
}

int    Cast::ConvInt(double value)
{
    int ret;
    ret = static_cast<int>(value);
    return (ret);
}

float   Cast::ConvFloat(double value)
{
    float ret;
    ret = static_cast<float>(value);
    return (ret);
}

double  Cast::ConvDouble(double value)
{
    double ret;
    ret = static_cast<double>(value);
    return (ret);
}