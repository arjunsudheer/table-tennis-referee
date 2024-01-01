#include "EndOfStreamException.h"


// intializes the message passed as the argument to the m_exceptionMessage member variable
EndOfStreamException::EndOfStreamException(const std::string& message) : m_exceptionMessage(message) {};
// returns the m_exceptionMessage member variable
const char* EndOfStreamException::what() const noexcept {
    return m_exceptionMessage.c_str();
}