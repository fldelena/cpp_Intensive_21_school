#ifndef H_FIXED
# define H_FIXED
#include <iostream>
#include <string>

class Fixed
{
private:
    int _i;
    static const int f_bit = 8;
public:
    Fixed();
    Fixed(const Fixed &other);
    ~Fixed();
    Fixed &operator=(const Fixed &other);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif