#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QDesktopWidget"
#include "QDebug"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->mShowFullScreenButton, &QPushButton::pressed,[this]() {

        auto desktopGeometry = QApplication::desktop()->geometry();

        qDebug() << "Geometry" << desktopGeometry;

        setGeometry(desktopGeometry);
        QWidget::show();

    } );
}

MainWindow::~MainWindow()
{
    delete ui;
}

