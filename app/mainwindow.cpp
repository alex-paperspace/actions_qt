#include "mainwindow.h"
#include "dependency.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    int life_meaning = meaning_of_life();
    m_meaning_of_life_lbl = new QLabel(QString::number(life_meaning), this);
    m_meaning_of_life_lbl->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);

    this->setCentralWidget(m_meaning_of_life_lbl);
}

MainWindow::~MainWindow()
{
}

