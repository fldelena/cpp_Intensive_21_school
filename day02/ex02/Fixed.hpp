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
    Fixed   operator+(const Fixed &other) const;
    Fixed   operator-(const Fixed &other) const;
    Fixed   operator*(const Fixed &other) const;
    Fixed   operator/(const Fixed &other) const;
    bool    operator==(const Fixed &other) const;
    bool    operator!=(const Fixed &other) const;
    bool    operator>(const Fixed &other) const;
    bool    operator<(const Fixed &other) const;
    bool    operator>=(const Fixed &other) const;
    bool    operator<=(const Fixed &other) const;
    Fixed   &operator++();
    Fixed   operator++(int value);
    Fixed   &operator--();
    Fixed   operator--(int value);
    static Fixed   &max(Fixed &a, Fixed &b);
    const static Fixed   &max(const Fixed &a, const Fixed &b);
    static Fixed   &min(Fixed &a, Fixed &b);
    const static Fixed   &min(const Fixed &a, const Fixed &b);
};
    std::ostream &operator<<(std::ostream &ret, const Fixed &other);

#endif