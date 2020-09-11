/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *numberlineEdit;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *namelineEdit;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *majorlineEdit;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *gradelineEdit;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *timelineEdit;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *phonelineEdit;
    QFrame *line;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *chooseButton;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(457, 705);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(Dialog);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(105, 0));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        numberlineEdit = new QLineEdit(widget);
        numberlineEdit->setObjectName(QStringLiteral("numberlineEdit"));

        horizontalLayout->addWidget(numberlineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(388, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(105, 0));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        namelineEdit = new QLineEdit(widget);
        namelineEdit->setObjectName(QStringLiteral("namelineEdit"));

        horizontalLayout_2->addWidget(namelineEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(388, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(105, 0));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_3);

        majorlineEdit = new QLineEdit(widget);
        majorlineEdit->setObjectName(QStringLiteral("majorlineEdit"));

        horizontalLayout_3->addWidget(majorlineEdit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalSpacer_3 = new QSpacerItem(388, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(105, 0));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_4);

        gradelineEdit = new QLineEdit(widget);
        gradelineEdit->setObjectName(QStringLiteral("gradelineEdit"));

        horizontalLayout_4->addWidget(gradelineEdit);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalSpacer_4 = new QSpacerItem(388, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(105, 0));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_5);

        timelineEdit = new QLineEdit(widget);
        timelineEdit->setObjectName(QStringLiteral("timelineEdit"));

        horizontalLayout_5->addWidget(timelineEdit);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalSpacer_5 = new QSpacerItem(388, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(105, 0));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_6);

        phonelineEdit = new QLineEdit(widget);
        phonelineEdit->setObjectName(QStringLiteral("phonelineEdit"));

        horizontalLayout_6->addWidget(phonelineEdit);


        verticalLayout_2->addLayout(horizontalLayout_6);

        line = new QFrame(widget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        chooseButton = new QPushButton(widget);
        chooseButton->setObjectName(QStringLiteral("chooseButton"));

        horizontalLayout_11->addWidget(chooseButton);

        okButton = new QPushButton(widget);
        okButton->setObjectName(QStringLiteral("okButton"));

        horizontalLayout_11->addWidget(okButton);

        cancelButton = new QPushButton(widget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout_11->addWidget(cancelButton);


        verticalLayout_2->addLayout(horizontalLayout_11);


        verticalLayout->addWidget(widget);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog", "\345\255\246\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog", "\345\247\223\345\220\215", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog", "\344\270\223\344\270\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialog", "\347\217\255\347\272\247", Q_NULLPTR));
        label_5->setText(QApplication::translate("Dialog", "\345\205\245\345\255\246\345\271\264\344\273\275", Q_NULLPTR));
        label_6->setText(QApplication::translate("Dialog", "\350\201\224\347\263\273\347\224\265\350\257\235", Q_NULLPTR));
        chooseButton->setText(QApplication::translate("Dialog", "\346\267\273\345\212\240\346\210\220\347\273\251", Q_NULLPTR));
        okButton->setText(QApplication::translate("Dialog", "OK", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("Dialog", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
