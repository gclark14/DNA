#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString text = "Alignment";
    on_topics_editTextChanged(text);
    connect(ui->topicsComboBox, SIGNAL(activated(int)),this,SLOT(setFunctionsData()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_topics_editTextChanged(const QString &arg1)
{
    qDebug() << "Text changed\n";
}

void MainWindow::setFunctionsData()
{
    ui->functionsComboBox->addItem("test");
}

void MainWindow::updateFunctionWhenTopicChanges()
{
    on_topics_editTextChanged(currentTopic);
}
