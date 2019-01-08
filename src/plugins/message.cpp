#include "message.hpp"

#include <ostream>

message::message( std::string_view msg ) : content{ msg } {}

std::ostream & message::print( std::ostream &stream ) const noexcept
{
  return stream << "fancy message arriving...\n" << content << '\n';
}

std::ostream & operator << ( std::ostream &stream, const message &msg) noexcept
{
  return msg.print( stream );
}
