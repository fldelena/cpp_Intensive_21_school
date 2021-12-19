#ifndef H_KAREN
# define H_KAREN
# include <iostream>
# include <string>

class Karen
{
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    void bad( void );
public:
    void complain( std::string level );
};

#endif