#include <iostream>
using namespace std;
int main()
{
	cout << "欢迎来到文字游戏" << endl;
	cout << "请输入你的名字" << endl;
    string name;
    cin >> name;
    cout << "欢迎" << name << "进入游戏" << endl;
    cout << "游戏开始" << endl;
    cout << "你来到了一个迷宫，你需要找到出口" << endl;
    cout << "你面前有三个门，一个红门，一个蓝门，一个绿门" << endl;
    cout << "请输入你选择的颜色门" << endl;
    string color;
    cin >> color;
    if (color == "红门") {
        cout << "恭喜你，你找到了出口" << endl;
        cout << "请前往下一关" << endl;
        cout << "现在，你的面前有一栋楼房，共有10层" << endl;
        cout << "请输入你选择的楼层" << endl;
        int floor;
        cin >> floor;
        if (floor == -2) {
            cout << "恭喜你，你找到了出口" << endl;
        }
        else {
            cout << "很遗憾，你选择了错误的楼层，游戏结束" << endl;
        }
    } else {
        cout << "很遗憾，你选择了错误的门，游戏结束" << endl;
    }


	return 0;
}