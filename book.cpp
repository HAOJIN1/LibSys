#include "main.h"
using namespace std;

class Book
{
public:
    Book();
    void add();     // �½�ͼ�����ӹ���
    void load();    // ����ͼ����Ϣ���빦��(ͼ����Ϣ���ļ�����)
    void list();    // ͼ����Ϣ������ܡ������
    void del();     // ͼ����Ϣ��ɾ��
    void modify();  // ͼ����Ϣ�޸�
    void query();   // ��ѯ���ܣ������㷨
                    // - ��������ѯ
                    // - ����������ѯ
    void save();    // ͼ����Ϣ���湦�� 
private:
    int Number;         // ��ţ��Զ����ɣ�
    std::string Title;  // ����
    std::string Author; // ������
    std::string ISBN;   // �����
    std::string Pub;    // ���浥λ
    std::string Pub_Time;// ����ʱ��
    std::string Price;  // �۸�
    std::string State;  // ����״̬
};