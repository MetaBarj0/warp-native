#ifndef _MESSAGE_HPP_
#define _MESSAGE_HPP_

#include <string_view>
#include <string>
#include <iosfwd>

class message
{
public :
  explicit message( std::string_view msg );

  friend std::ostream & operator << ( std::ostream &stream,
                                      const message &msg) noexcept;

private :
  std::ostream & print( std::ostream &stream ) const noexcept;

private :
  std::string content;
};

#endif // _MESSAGE_HPP_
