#include <iostream>

class Log
{
public:
    enum Level
    {
        Error = 0,
        Warning = 1,
        Info = 2
    };

private:
    Level m_logLevel = Info; // por defeito m_logLevel = logLevelInfo

public:
    void setLevel(Level level)
    {
        m_logLevel = level;
    }

    void error(const char *message)
    {
        if (m_logLevel >= Error)
        {
            std::cout << "[Error]: " << message << std::endl;
        }
    }

    void warn(const char *message)
    {
        if (m_logLevel >= Warning)
        {
            std::cout << "[Warning]: " << message << std::endl;
        }
    }

    void info(const char *message)
    {
        if (m_logLevel >= Info)
        {
            std::cout << "[Info]: " << message << std::endl;
        }
    }
};

int main()
{
    Log log;
    log.setLevel(log.Warning);
    log.warn("Hello");
    log.error("Hello");
    log.info("Hello");
}