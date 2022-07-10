#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <fstream>

class Admin
{
public:
    Admin();    
    void signUp();  // Ϊ�����˰���ע��
    void load();    // ���н�������Ϣ���빦��(��Ϣ���ļ�����)
    void del();     // ��������Ϣ��ע����ɾ����
    void modify();  // ��������Ϣ�޸�
    void quary_id();// ��ѧ�Ų�ѯ
    void quary_name();// ��������ѯ
    void save();    // ��������Ϣ���湦��
private:
    int ID;         // ѧ�ţ��Զ����ɣ�
    std::string Name;// ����
    std::string Sex;// �Ա�
    int Max;        // �ɽ�������
};

class Book
{
public:
    Book();
    void add();     // �½�ͼ�����ӹ���
    void load();    // ����ͼ����Ϣ���빦��(ͼ����Ϣ���ļ�����)
    void list();    // ͼ����Ϣ������ܡ������
    void del();     // ͼ����Ϣ��ɾ��
    void modify();  // ͼ����Ϣ�޸�
    void query_title();   // ��������ѯ
    void query_author();  // ����������ѯ
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


class User
{
public:
    User() {
        menu();
    };
    void menu();    // ��ʼ�˵� 
    void load();    // �����û���Ϣ
    void add();     // ����û���Ϣ
    void del();     // ɾ���û���Ϣ
    void modify();  // �޸��û���Ϣ
    void quary();   // ��ѯ�û���Ϣ
    void save();    // �����û���Ϣ
private:
    std::string Account;    // �û��˻�
    std::string Password;   // �û�����
    int ID;                 // ѧ�ţ��Զ����ɣ�
    std::string Name;       // ����
    std::string Sex;        // �Ա�
    std::string Vip;        // ��Ա�ȼ�
    int Max;                // �ɽ�������
    // vector<std::string> list;// ��ǰ����Ŀ¼��ͼ���š��������ڡ�����
};