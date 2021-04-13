/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "QVTKOpenGLNativeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpenFile;
    QAction *actionExit;
    QAction *actionExportToText;
    QAction *actionElements;
    QAction *actionResults;
    QAction *actionZoomOnArea;
    QAction *actionInteractWithObject;
    QAction *actionShowNodes;
    QAction *actionResetCamera;
    QWidget *centralwidget;
    QListView *informationListView;
    QLabel *informationLabel;
    QGridLayout *gridLayout;
    QVTKOpenGLNativeWidget *qvtkWidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuElements;
    QMenu *menuResults;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1600, 1200);
        actionOpenFile = new QAction(MainWindow);
        actionOpenFile->setObjectName(QString::fromUtf8("actionOpenFile"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionExportToText = new QAction(MainWindow);
        actionExportToText->setObjectName(QString::fromUtf8("actionExportToText"));
        actionElements = new QAction(MainWindow);
        actionElements->setObjectName(QString::fromUtf8("actionElements"));
        actionResults = new QAction(MainWindow);
        actionResults->setObjectName(QString::fromUtf8("actionResults"));
        actionZoomOnArea = new QAction(MainWindow);
        actionZoomOnArea->setObjectName(QString::fromUtf8("actionZoomOnArea"));
        actionInteractWithObject = new QAction(MainWindow);
        actionInteractWithObject->setObjectName(QString::fromUtf8("actionInteractWithObject"));
        actionShowNodes = new QAction(MainWindow);
        actionShowNodes->setObjectName(QString::fromUtf8("actionShowNodes"));
        actionShowNodes->setCheckable(true);
        actionResetCamera = new QAction(MainWindow);
        actionResetCamera->setObjectName(QString::fromUtf8("actionResetCamera"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        informationListView = new QListView(centralwidget);
        informationListView->setObjectName(QString::fromUtf8("informationListView"));
        informationListView->setGeometry(QRect(10, 35, 70, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu Mono"));
        informationListView->setFont(font);
        informationListView->setLayoutDirection(Qt::LeftToRight);
        informationListView->setAutoFillBackground(true);
        informationListView->setProperty("isWrapping", QVariant(true));
        informationListView->setResizeMode(QListView::Adjust);
        informationListView->setLayoutMode(QListView::SinglePass);
        informationListView->setSpacing(2);
        informationListView->setWordWrap(true);
        informationLabel = new QLabel(centralwidget);
        informationLabel->setObjectName(QString::fromUtf8("informationLabel"));
        informationLabel->setGeometry(QRect(80, 10, 110, 20));
        informationLabel->setFont(font);
        informationLabel->setAutoFillBackground(true);
        informationLabel->setAlignment(Qt::AlignCenter);
        informationLabel->setScaledContents(true);
        informationLabel->setWordWrap(false);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        qvtkWidget = new QVTKOpenGLNativeWidget(centralwidget);
        qvtkWidget->setObjectName(QString::fromUtf8("qvtkWidget"));

        gridLayout->addWidget(qvtkWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        qvtkWidget->raise();
        informationListView->raise();
        informationLabel->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1600, 30));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuElements = new QMenu(menubar);
        menuElements->setObjectName(QString::fromUtf8("menuElements"));
        menuResults = new QMenu(menubar);
        menuResults->setObjectName(QString::fromUtf8("menuResults"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuElements->menuAction());
        menubar->addAction(menuResults->menuAction());
        menuFile->addAction(actionOpenFile);
        menuFile->addSeparator();
        menuFile->addAction(actionExportToText);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuView->addAction(actionZoomOnArea);
        menuView->addAction(actionInteractWithObject);
        menuView->addSeparator();
        menuView->addAction(actionShowNodes);
        menuView->addSeparator();
        menuView->addAction(actionResetCamera);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpenFile->setText(QCoreApplication::translate("MainWindow", "Open File (.res)", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionExportToText->setText(QCoreApplication::translate("MainWindow", "Export (.msh)", nullptr));
        actionElements->setText(QCoreApplication::translate("MainWindow", "Elements", nullptr));
        actionResults->setText(QCoreApplication::translate("MainWindow", "Results", nullptr));
        actionZoomOnArea->setText(QCoreApplication::translate("MainWindow", "Zoom on Area", nullptr));
        actionInteractWithObject->setText(QCoreApplication::translate("MainWindow", "Interact with object", nullptr));
        actionShowNodes->setText(QCoreApplication::translate("MainWindow", "Show nodes", nullptr));
        actionResetCamera->setText(QCoreApplication::translate("MainWindow", "Reset Camera", nullptr));
        informationLabel->setText(QCoreApplication::translate("MainWindow", "Information", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuElements->setTitle(QCoreApplication::translate("MainWindow", "Elements", nullptr));
        menuResults->setTitle(QCoreApplication::translate("MainWindow", "Results", nullptr));
#if QT_CONFIG(statustip)
        statusbar->setStatusTip(QCoreApplication::translate("MainWindow", "Status: Nothing", nullptr));
#endif // QT_CONFIG(statustip)
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
