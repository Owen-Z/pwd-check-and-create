#ifndef PASSWORD_H

#define PASSWORD_H

class Password{
private:
    int minLength;
    int maxLength;
    bool hasNumber;
    bool hasLowcaseLetter;
    bool hasUppercaseLetter;
    bool hasSpecialChar;

public:
    Password();

    ~Password(){};

    void setAttributes(int, int, bool, bool, bool, bool);
    int getMin(){return minLength;};
    int getMax(){return maxLength;};
    bool hasNum(){return hasNumber;};
    bool hasLow(){return hasLowcaseLetter;};
    bool hasUpper(){return hasUppercaseLetter;};
    bool hasSpec(){return hasSpecialChar;};
};

#endif