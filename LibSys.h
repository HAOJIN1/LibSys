#include <iostream>
#include <string>
#define inf 7	// inf ֵΪ¼����Ϣ����

class Book
{
public:
	Book() {}
	void write();
	void display();
private:
	std::string book[inf];
};