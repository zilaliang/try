//
// Created by Administrator on 2024/7/21.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindows.h" resolved

#include "Headers/mainwindows.h"
#include "Forms/ui_MainWindows.h"

MainWindows::MainWindows(QWidget *parent) :
    QWidget(parent), ui(new Ui::MainWindows) {
    ui->setupUi(this);
    //在构造函数中进行连接
    QObject::connect(ui->RbBlack,SIGNAL(clicked()),this,SLOT(do_FontColor()));
    QObject::connect(ui->RbRed,SIGNAL(clicked()),this,SLOT(do_FontColor()));
    QObject::connect(ui->RbBlue,SIGNAL(clicked()),this,SLOT(do_FontColor()));

    //connect(ui->btnClear, &QPushButton::clicked, this, &MainWindows::on_btnClear_clicked);
}

MainWindows::~MainWindows() {
    delete ui;
}

void MainWindows::on_chkUnderLine_clicked(bool checked) {
    QFont font=ui->plainTextEdit->font();//创建一个字体对象，从当前ui的白板中获取
    font.setUnderline(checked);//修改这个字体
    ui->plainTextEdit->setFont(font);//将设置的font值放回
}
void MainWindows::on_chkItalic_clicked(bool checked) {
    QFont font=ui->plainTextEdit->font();
    font.setItalic(checked);
    ui->plainTextEdit->setFont(font);
}
void MainWindows::on_chkBold_clicked(bool checked) {
    QFont font=ui->plainTextEdit->font();
    font.setBold(checked);
    ui->plainTextEdit->setFont(font);
}

void MainWindows::do_FontColor() {//函数并不符合，未连接
    //先拿到调色板
    QPalette plet=ui->plainTextEdit->palette();
    if(ui->RbBlack->isChecked())
        plet.setColor(QPalette::Text,Qt::black);
    if(ui->RbRed->isChecked())
        plet.setColor(QPalette::Text,Qt::red);
    if(ui->RbBlue->isChecked())
        plet.setColor(QPalette::Text,Qt::blue);
    ui->plainTextEdit->setPalette(plet);
}

void MainWindows::on_btnClear_clicked() {
    ui->plainTextEdit->clear();
}



