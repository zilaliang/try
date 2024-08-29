//
// Created by Administrator on 2024/7/21.
//

#ifndef MAINWINDOWS_H
#define MAINWINDOWS_H
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindows; }//一个名字空间,包含一个类
QT_END_NAMESPACE

class MainWindows : public QWidget {
Q_OBJECT

public:
    explicit MainWindows(QWidget *parent = nullptr);//构造函数
    ~MainWindows() override;//析构函数
private slots:
    void on_btnClear_clicked();
    void on_chkUnderLine_clicked(bool checked);
    void on_chkItalic_clicked(bool checked);
    void on_chkBold_clicked(bool checked);
    void do_FontColor();
private:
    Ui::MainWindows *ui;//定义对象指针
};
#endif //MAINWINDOWS_H
