#ifndef H_FIXED
# define H_FIXED
#include <iostream>
#include <string>
#include <math.h>

class Fixed
{
private:
    int _i;
    static const int f_bit = 8;
public:
    Fixed();
    Fixed(const int param);
    Fixed(const float param);
    Fixed(const Fixed &other);
    ~Fixed();
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    float   toFloat( void ) const;
    int     toInt( void ) const;
    Fixed   &operator=(const Fixed &other);
};
    std::ostream &operator<<(std::ostream &ret, const Fixed &other);

#endif