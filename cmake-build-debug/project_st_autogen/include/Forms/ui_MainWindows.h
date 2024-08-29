/********************************************************************************
** Form generated from reading UI file 'mainwindows.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWS_H
#define UI_MAINWINDOWS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindows
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QCheckBox *chkBold;
    QCheckBox *chkUnderLine;
    QCheckBox *chkItalic;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *RbBlack;
    QRadioButton *RbRed;
    QRadioButton *RbBlue;
    QPlainTextEdit *plainTextEdit;
    QPushButton *btnout;
    QPushButton *btnClear;
    QPushButton *btnExit;

    void setupUi(QWidget *MainWindows)
    {
        if (MainWindows->objectName().isEmpty())
            MainWindows->setObjectName("MainWindows");
        MainWindows->resize(506, 312);
        verticalLayout = new QVBoxLayout(MainWindows);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(MainWindows);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        chkBold = new QCheckBox(MainWindows);
        chkBold->setObjectName("chkBold");

        horizontalLayout->addWidget(chkBold);

        chkUnderLine = new QCheckBox(MainWindows);
        chkUnderLine->setObjectName("chkUnderLine");
        chkUnderLine->setChecked(false);

        horizontalLayout->addWidget(chkUnderLine);

        chkItalic = new QCheckBox(MainWindows);
        chkItalic->setObjectName("chkItalic");

        horizontalLayout->addWidget(chkItalic);


        verticalLayout->addLayout(horizontalLayout);

        label_2 = new QLabel(MainWindows);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        RbBlack = new QRadioButton(MainWindows);
        RbBlack->setObjectName("RbBlack");

        horizontalLayout_3->addWidget(RbBlack);

        RbRed = new QRadioButton(MainWindows);
        RbRed->setObjectName("RbRed");

        horizontalLayout_3->addWidget(RbRed);

        RbBlue = new QRadioButton(MainWindows);
        RbBlue->setObjectName("RbBlue");

        horizontalLayout_3->addWidget(RbBlue);


        verticalLayout->addLayout(horizontalLayout_3);

        plainTextEdit = new QPlainTextEdit(MainWindows);
        plainTextEdit->setObjectName("plainTextEdit");
        QFont font;
        font.setPointSize(24);
        plainTextEdit->setFont(font);

        verticalLayout->addWidget(plainTextEdit);

        btnout = new QPushButton(MainWindows);
        btnout->setObjectName("btnout");
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../images/out.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnout->setIcon(icon);

        verticalLayout->addWidget(btnout);

        btnClear = new QPushButton(MainWindows);
        btnClear->setObjectName("btnClear");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../images/clean.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnClear->setIcon(icon1);

        verticalLayout->addWidget(btnClear);

        btnExit = new QPushButton(MainWindows);
        btnExit->setObjectName("btnExit");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../images/right.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnExit->setIcon(icon2);

        verticalLayout->addWidget(btnExit);


        retranslateUi(MainWindows);
        QObject::connect(btnout, &QPushButton::clicked, MainWindows, qOverload<>(&QWidget::close));
        QObject::connect(btnExit, &QPushButton::clicked, MainWindows, qOverload<>(&QWidget::close));
        QObject::connect(btnClear, &QPushButton::clicked, plainTextEdit, qOverload<>(&QPlainTextEdit::clear));

        QMetaObject::connectSlotsByName(MainWindows);
    } // setupUi

    void retranslateUi(QWidget *MainWindows)
    {
        MainWindows->setWindowTitle(QCoreApplication::translate("MainWindows", "MainWindows", nullptr));
        label->setText(QCoreApplication::translate("MainWindows", "\345\255\227\344\275\223", nullptr));
        chkBold->setText(QCoreApplication::translate("MainWindows", "\345\212\240\347\262\227", nullptr));
        chkUnderLine->setText(QCoreApplication::translate("MainWindows", "\344\270\213\345\210\222\347\272\277", nullptr));
        chkItalic->setText(QCoreApplication::translate("MainWindows", "\346\226\234\344\275\223", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindows", "\351\242\234\350\211\262", nullptr));
        RbBlack->setText(QCoreApplication::translate("MainWindows", "\351\273\221\350\211\262", nullptr));
        RbRed->setText(QCoreApplication::translate("MainWindows", "\347\272\242\350\211\262", nullptr));
        RbBlue->setText(QCoreApplication::translate("MainWindows", "\350\223\235\350\211\262", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("MainWindows", "Qt 6 C++\n"
"\345\274\200\345\217\221\346\214\207\345\215\227\n"
"", nullptr));
        btnout->setText(QCoreApplication::translate("MainWindows", "\351\200\200\345\207\272", nullptr));
        btnClear->setText(QCoreApplication::translate("MainWindows", "\346\270\205\347\251\272", nullptr));
        btnExit->setText(QCoreApplication::translate("MainWindows", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindows: public Ui_MainWindows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWS_H
