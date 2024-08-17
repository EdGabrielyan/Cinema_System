#ifndef TASK14_USER_H
#define TASK14_USER_H

#include <iostream>

class User {
private:
    std::string m_name;
    std::string m_contactInfo;
public:
    User(const std::string& name, const std::string& contactInfo) 
    : m_name(name),
    m_contactInfo(contactInfo) {}
public:
    const std::string& getName() const {
        return m_name;
    }

    const std::string& getContactInfo() const {
        return m_contactInfo;
    }
};

#endif // TASK14_USER_H
