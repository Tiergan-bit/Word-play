#include <iostream>
using namespace std;
int main()
{
	cout << "��ӭ����������Ϸ" << endl;
	cout << "�������������" << endl;
    string name;
    cin >> name;
    cout << "��ӭ" << name << "������Ϸ" << endl;
    cout << "��Ϸ��ʼ" << endl;
    cout << "��������һ���Թ�������Ҫ�ҵ�����" << endl;
    cout << "����ǰ�������ţ�һ�����ţ�һ�����ţ�һ������" << endl;
    cout << "��������ѡ�����ɫ��" << endl;
    string color;
    cin >> color;
    if (color == "����") {
        cout << "��ϲ�㣬���ҵ��˳���" << endl;
        cout << "��ǰ����һ��" << endl;
        cout << "���ڣ������ǰ��һ��¥��������10��" << endl;
        cout << "��������ѡ���¥��" << endl;
        int floor;
        cin >> floor;
        if (floor == -2) {
            cout << "��ϲ�㣬���ҵ��˳���" << endl;
        }
        else {
            cout << "���ź�����ѡ���˴����¥�㣬��Ϸ����" << endl;
        }
    } else {
        cout << "���ź�����ѡ���˴�����ţ���Ϸ����" << endl;
    }


	return 0;
}