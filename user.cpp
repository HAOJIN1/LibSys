#include "main.h"
using namespace std;

class User
{
public:
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
    vector<std::string> list;// ��ǰ����Ŀ¼��ͼ���š��������ڡ�����
};