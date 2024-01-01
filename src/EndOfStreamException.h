#include "GenericIncludes.h"

class EndOfStreamException : public std::exception {
public:
    // intializes the message passed as the argument to the m_exceptionMessage member variable
    EndOfStreamException(const std::string& message);
    // returns the m_exceptionMessage member variable
    const char* what() const noexcept override;
private:
    // stores a custom exception message
    std::string m_exceptionMessage;
};
