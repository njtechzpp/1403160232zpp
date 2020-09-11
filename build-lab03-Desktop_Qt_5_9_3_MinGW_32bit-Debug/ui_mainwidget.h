/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCharts/QChartView>
#include <QtCharts/chartsnamespace.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWidget
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QComboBox *comboCity;
    QPushButton *btnStart;
    QLabel *date;
    QtCharts::QChartView *chartview;
    QLabel *city;
    QComboBox *comboMonth;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *cbShowPoint;
    QCheckBox *cbLegendBold;
    QCheckBox *cbLegendItalic;
    QPushButton *btnLegendAlign;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QRadioButton *btnAQI;
    QRadioButton *btnWeather;
    QGroupBox *groupBox_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *mainWidget)
    {
        if (mainWidget->objectName().isEmpty())
            mainWidget->setObjectName(QStringLiteral("mainWidget"));
        mainWidget->resize(894, 702);
        gridLayout_2 = new QGridLayout(mainWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalSpacer = new QSpacerItem(1, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 7, 3, 1, 1);

        comboCity = new QComboBox(mainWidget);
        comboCity->setObjectName(QStringLiteral("comboCity"));

        gridLayout_2->addWidget(comboCity, 1, 3, 1, 1);

        btnStart = new QPushButton(mainWidget);
        btnStart->setObjectName(QStringLiteral("btnStart"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnStart->sizePolicy().hasHeightForWidth());
        btnStart->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(btnStart, 6, 3, 1, 1);

        date = new QLabel(mainWidget);
        date->setObjectName(QStringLiteral("date"));

        gridLayout_2->addWidget(date, 2, 3, 1, 1);

        chartview = new QtCharts::QChartView(mainWidget);
        chartview->setObjectName(QStringLiteral("chartview"));

        gridLayout_2->addWidget(chartview, 0, 0, 11, 1);

        city = new QLabel(mainWidget);
        city->setObjectName(QStringLiteral("city"));

        gridLayout_2->addWidget(city, 0, 3, 1, 1);

        comboMonth = new QComboBox(mainWidget);
        comboMonth->setObjectName(QStringLiteral("comboMonth"));

        gridLayout_2->addWidget(comboMonth, 3, 3, 1, 1);

        groupBox = new QGroupBox(mainWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        cbShowPoint = new QCheckBox(groupBox);
        cbShowPoint->setObjectName(QStringLiteral("cbShowPoint"));
        cbShowPoint->setChecked(true);

        verticalLayout_2->addWidget(cbShowPoint);

        cbLegendBold = new QCheckBox(groupBox);
        cbLegendBold->setObjectName(QStringLiteral("cbLegendBold"));

        verticalLayout_2->addWidget(cbLegendBold);

        cbLegendItalic = new QCheckBox(groupBox);
        cbLegendItalic->setObjectName(QStringLiteral("cbLegendItalic"));

        verticalLayout_2->addWidget(cbLegendItalic);

        btnLegendAlign = new QPushButton(groupBox);
        btnLegendAlign->setObjectName(QStringLiteral("btnLegendAlign"));

        verticalLayout_2->addWidget(btnLegendAlign);


        gridLayout_2->addWidget(groupBox, 4, 3, 1, 1);

        groupBox_2 = new QGroupBox(mainWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btnAQI = new QRadioButton(groupBox_2);
        btnAQI->setObjectName(QStringLiteral("btnAQI"));
        btnAQI->setAcceptDrops(false);
        btnAQI->setChecked(false);

        gridLayout->addWidget(btnAQI, 1, 0, 1, 1);

        btnWeather = new QRadioButton(groupBox_2);
        btnWeather->setObjectName(QStringLiteral("btnWeather"));
        btnWeather->setChecked(true);

        gridLayout->addWidget(btnWeather, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 5, 3, 1, 1);

        groupBox_3 = new QGroupBox(mainWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(115, 181));
        groupBox_3->setMaximumSize(QSize(16777213, 16777215));
        pushButton = new QPushButton(groupBox_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 40, 111, 51));
        pushButton->setMinimumSize(QSize(111, 51));
        pushButton->setMaximumSize(QSize(111, 51));
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/docs/images/logo_210.gif);"));
        pushButton_2 = new QPushButton(groupBox_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 110, 111, 51));
        pushButton_2->setMinimumSize(QSize(111, 51));
        pushButton_2->setMaximumSize(QSize(111, 51));
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/docs/images/tianqihoubao.jpg);"));

        gridLayout_2->addWidget(groupBox_3, 8, 2, 1, 3);


        retranslateUi(mainWidget);

        QMetaObject::connectSlotsByName(mainWidget);
    } // setupUi

    void retranslateUi(QWidget *mainWidget)
    {
        mainWidget->setWindowTitle(QApplication::translate("mainWidget", "\345\256\236\351\252\214\344\270\211 \347\275\221\347\273\234\346\225\260\346\215\256\350\216\267\345\217\226\344\270\216\346\230\276\347\244\272", Q_NULLPTR));
        btnStart->setText(QApplication::translate("mainWidget", "\345\274\200\345\247\213", Q_NULLPTR));
        date->setText(QApplication::translate("mainWidget", "\351\200\211\346\213\251\346\227\266\351\227\264", Q_NULLPTR));
        city->setText(QApplication::translate("mainWidget", "\351\200\211\346\213\251\345\237\216\345\270\202", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("mainWidget", "\346\230\276\347\244\272\351\200\211\351\241\271 ", Q_NULLPTR));
        cbShowPoint->setText(QApplication::translate("mainWidget", "\346\230\276\347\244\272\346\225\260\346\215\256\347\202\271", Q_NULLPTR));
        cbLegendBold->setText(QApplication::translate("mainWidget", "\345\233\276\346\263\250\347\262\227\344\275\223", Q_NULLPTR));
        cbLegendItalic->setText(QApplication::translate("mainWidget", "\345\233\276\346\263\250\346\226\234\344\275\223", Q_NULLPTR));
        btnLegendAlign->setText(QApplication::translate("mainWidget", "\345\233\276\346\263\250(\345\272\225)", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("mainWidget", "\346\237\245\350\257\242\351\200\211\351\241\271", Q_NULLPTR));
        btnAQI->setText(QApplication::translate("mainWidget", "\346\237\245\350\257\242AQI", Q_NULLPTR));
        btnWeather->setText(QApplication::translate("mainWidget", "\346\237\245\350\257\242\346\260\224\346\270\251", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("mainWidget", "\346\225\260\346\215\256\346\235\245\346\272\220", Q_NULLPTR));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mainWidget: public Ui_mainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
