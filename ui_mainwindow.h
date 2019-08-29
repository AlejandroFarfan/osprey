/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QCheckBox *checkBox;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *resultCvt;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QLabel *resultSqrt;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QWidget *tab_3;
    QGridLayout *gridLayout_4;
    QTextEdit *textEdit;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *comboBox;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(413, 221);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 2);

        checkBox = new QCheckBox(tab);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout_2->addWidget(checkBox, 0, 2, 1, 1);

        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 2, 1, 1, 2);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_2->addWidget(pushButton, 4, 2, 1, 1);

        resultCvt = new QLabel(tab);
        resultCvt->setObjectName(QStringLiteral("resultCvt"));
        resultCvt->setLayoutDirection(Qt::LeftToRight);
        resultCvt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(resultCvt, 3, 1, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 5, 0, 1, 3);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_3->addWidget(pushButton_2, 4, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 5, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 4, 0, 1, 1);

        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_5, 3, 0, 1, 1);

        resultSqrt = new QLabel(tab_2);
        resultSqrt->setObjectName(QStringLiteral("resultSqrt"));
        resultSqrt->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(resultSqrt, 3, 1, 1, 1);

        lineEdit_3 = new QLineEdit(tab_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout_3->addWidget(lineEdit_3, 2, 1, 1, 1);

        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 2, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_4 = new QGridLayout(tab_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        textEdit = new QTextEdit(tab_3);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout_4->addWidget(textEdit, 2, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        comboBox = new QComboBox(tab_3);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_4->addWidget(comboBox, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(tab_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout_4->addWidget(pushButton_3, 0, 1, 1, 1);

        pushButton_4 = new QPushButton(tab_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout_4->addWidget(pushButton_4, 1, 1, 1, 1);

        pushButton_5 = new QPushButton(tab_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout_4->addWidget(pushButton_5, 3, 1, 1, 1);

        tabWidget->addTab(tab_3, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Interface", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "If the value is an String, indicated us: ", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "Is String", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Result:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Data to be converted:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Convert", Q_NULLPTR));
        resultCvt->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Converter", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Calculate", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Result:", Q_NULLPTR));
        resultSqrt->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Insert a number to calculate the square root here:", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Square", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Browser...", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Show file data", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "Clear", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "File Reader", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
