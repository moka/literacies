#include <iostream.h>
#include <string.h>

class base_class
{
private:
    char chars[40];
    int num;
public:
    void set_chars(char* ss);    
    void set_num(int i);    
    void show();        
};

void base_class::set_chars(char* ss)    
{
    strcpy(chars,ss);
}

void base_class::set_num(int i)    
{
    (i<0)? num=0:num=i;
}

void base_class::show()        
{
    cout << "charsF" << chars << endl;
    cout << "numF" << num << endl;
}

int main()
{
    base_class test_object;
    test_object.set_chars("this is test");
    test_object.set_num(88);
    test_object.show();
    return 0;
}
