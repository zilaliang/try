#include <QApplication>
#include"mainwindows.h"


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);//定义并创建应用程序
    MainWindows w;//定义并创建窗口对象
    w.show();//显示窗口
    return QApplication::exec();//运行应用程序，消息循环和时间处理
}
