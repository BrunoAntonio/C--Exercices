#include <iostream>

class Log
{
public:
    const int logLevelError = 0; // valor de logLevelError nunca muda ao longo do programa
    const int logLevelWarning = 1;
    const int logLevelInfo = 2;

private:
    int m_logLevel = logLevelInfo; // por defeito m_logLevel = logLevelInfo

public:
    void setLevel(int level)
    {
        m_logLevel = level;
    }

    void error(const char *message)
    {
        if (m_logLevel >= logLevelError)
        {
            std::cout << "[Error]: " << message << std::endl;
        }
    }

    void warn(const char *message)
    {
        if (m_logLevel >= logLevelWarning)
        {
            std::cout << "[Warning]: " << message << std::endl;
        }
    }

    void info(const char *message)
    {
        if (m_logLevel >= logLevelInfo)
        {
            std::cout << "[Info]: " << message << std::endl;
        }
    }
};

int main()
{
    Log log;
    log.setLevel(log.logLevelWarning);
    log.warn("Hello");
    log.error("Hello");
    log.info("Hello");
}