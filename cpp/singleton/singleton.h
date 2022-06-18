#pragma once

class Singleton {
public:
    static Singleton* getInstance();

private:
    static Singleton* _instance;
    Singleton ();
    ~Singleton();
    Singleton (const Singleton& obj) = delete;
    Singleton (Singleton&& obj) = delete;
    Singleton* operator= (const Singleton& obj) = delete;
    Singleton* operator= (Singleton&& obj) = delete; 

public:
    int getValue();
    void setValue(int val);

private:
    int _val;
};
