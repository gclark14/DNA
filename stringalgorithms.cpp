#include "stringalgorithms.h"
#include "ui_stringalgorithms.h"

StringAlgorithms::StringAlgorithms(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StringAlgorithms)
{
    ui->setupUi(this);
}

StringAlgorithms::~StringAlgorithms()
{
    delete ui;
}
