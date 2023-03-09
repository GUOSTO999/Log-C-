#include <iostream>

class Log
{
public:
    const int LogLevelError=0;
    const int LogLevelWarning=1;
    const int LogLevelInfo=2;
private:
    int m_LogLevel=LogLevelInfo;
public:
    void SetLevel(int level)
    {
        m_LogLevel=level;
    }
    void Warn(const char* message)
    {

    }
};
int main() {
    Log log;
    log.SetLevel(0);
    log.Warn("Hello!");
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
