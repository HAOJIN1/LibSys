#include "main.h"
using namespace std;

class Admin
{
public:
    Admin();    
    void signUp();  // Ϊ�����˰���ע��
    void load();    // ���н�������Ϣ���빦��(��Ϣ���ļ�����)
    void del();     // ��������Ϣ��ע����ɾ����
    void modify();  // ��������Ϣ�޸�
    void quary();   // ��ѯ���ܣ�
                    // - ��ѧ�Ų�ѯ
                    // - ����������ѯ
    void save();    // ��������Ϣ���湦��
private:
    int ID;         // ѧ�ţ��Զ����ɣ�
    std::string Name;// ����
    std::string Sex;// �Ա�
    int Max;        // �ɽ�������
};