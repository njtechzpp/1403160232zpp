/********************************************************************************
** Form generated from reading UI file 'scorewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCOREWINDOW_H
#define UI_SCOREWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScoreWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *number;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *name;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *major;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *grade;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QLineEdit *GPA;
    QPushButton *writeButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioStName;
    QRadioButton *radioStNumber;
    QRadioButton *radioStAll;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *edtInput;
    QPushButton *btnQuery;
    QPushButton *exportButton;
    QPushButton *importButton;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ScoreWindow)
    {
        if (ScoreWindow->objectName().isEmpty())
            ScoreWindow->setObjectName(QStringLiteral("ScoreWindow"));
        ScoreWindow->resize(940, 681);
        centralWidget = new QWidget(ScoreWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(250, 0));
        widget->setMaximumSize(QSize(250, 1111));
        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 120, 226, 211));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 28, 201, 145));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        number = new QLineEdit(layoutWidget);
        number->setObjectName(QStringLiteral("number"));

        horizontalLayout_3->addWidget(number);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        name = new QLineEdit(layoutWidget);
        name->setObjectName(QStringLiteral("name"));

        horizontalLayout_4->addWidget(name);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        major = new QLineEdit(layoutWidget);
        major->setObjectName(QStringLiteral("major"));

        horizontalLayout_5->addWidget(major);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_6->addWidget(label_5);

        grade = new QLineEdit(layoutWidget);
        grade->setObjectName(QStringLiteral("grade"));

        horizontalLayout_6->addWidget(grade);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_9->addWidget(label_7);

        GPA = new QLineEdit(layoutWidget);
        GPA->setObjectName(QStringLiteral("GPA"));

        horizontalLayout_9->addWidget(GPA);


        verticalLayout_2->addLayout(horizontalLayout_9);

        writeButton = new QPushButton(groupBox_2);
        writeButton->setObjectName(QStringLiteral("writeButton"));
        writeButton->setGeometry(QRect(10, 180, 211, 31));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 231, 111));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioStName = new QRadioButton(groupBox);
        radioStName->setObjectName(QStringLiteral("radioStName"));
        radioStName->setEnabled(true);
        radioStName->setAutoFillBackground(true);
        radioStName->setChecked(true);

        horizontalLayout->addWidget(radioStName);

        radioStNumber = new QRadioButton(groupBox);
        radioStNumber->setObjectName(QStringLiteral("radioStNumber"));

        horizontalLayout->addWidget(radioStNumber);

        radioStAll = new QRadioButton(groupBox);
        radioStAll->setObjectName(QStringLiteral("radioStAll"));

        horizontalLayout->addWidget(radioStAll);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        edtInput = new QLineEdit(groupBox);
        edtInput->setObjectName(QStringLiteral("edtInput"));

        horizontalLayout_2->addWidget(edtInput);


        verticalLayout->addLayout(horizontalLayout_2);

        btnQuery = new QPushButton(groupBox);
        btnQuery->setObjectName(QStringLiteral("btnQuery"));

        verticalLayout->addWidget(btnQuery);

        exportButton = new QPushButton(widget);
        exportButton->setObjectName(QStringLiteral("exportButton"));
        exportButton->setGeometry(QRect(140, 350, 93, 31));
        importButton = new QPushButton(widget);
        importButton->setObjectName(QStringLiteral("importButton"));
        importButton->setGeometry(QRect(20, 350, 93, 31));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 380, 221, 231));
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/scorewindow_1.png);"));

        gridLayout->addWidget(widget, 0, 1, 1, 1);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setLineWrapMode(QTextEdit::WidgetWidth);

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        ScoreWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ScoreWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 940, 26));
        ScoreWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ScoreWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ScoreWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ScoreWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ScoreWindow->setStatusBar(statusBar);

        retranslateUi(ScoreWindow);

        QMetaObject::connectSlotsByName(ScoreWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ScoreWindow)
    {
        ScoreWindow->setWindowTitle(QApplication::translate("ScoreWindow", "ScoreWindow", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("ScoreWindow", "\350\257\246\347\273\206\344\277\241\346\201\257", Q_NULLPTR));
        label_2->setText(QApplication::translate("ScoreWindow", "\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("ScoreWindow", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("ScoreWindow", "\344\270\223\344\270\232\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("ScoreWindow", "\345\271\264\347\272\247\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("ScoreWindow", "\347\273\251\347\202\271\357\274\232", Q_NULLPTR));
        writeButton->setText(QApplication::translate("ScoreWindow", "\345\275\225\345\205\245", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ScoreWindow", "\346\237\245\350\257\242\351\200\211\351\241\271", Q_NULLPTR));
        radioStName->setText(QApplication::translate("ScoreWindow", "\345\247\223\345\220\215", Q_NULLPTR));
        radioStNumber->setText(QApplication::translate("ScoreWindow", "\345\255\246\345\217\267", Q_NULLPTR));
        radioStAll->setText(QApplication::translate("ScoreWindow", "\345\205\250\351\203\250", Q_NULLPTR));
        label->setText(QApplication::translate("ScoreWindow", "\350\276\223\345\205\245:", Q_NULLPTR));
        btnQuery->setText(QApplication::translate("ScoreWindow", "\346\237\245\350\257\242", Q_NULLPTR));
        exportButton->setText(QApplication::translate("ScoreWindow", "\345\257\274\345\207\272", Q_NULLPTR));
        importButton->setText(QApplication::translate("ScoreWindow", "\345\257\274\345\205\245", Q_NULLPTR));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ScoreWindow: public Ui_ScoreWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCOREWINDOW_H
