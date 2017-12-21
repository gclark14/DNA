#ifndef STRINGALGORITHMS_H
#define STRINGALGORITHMS_H

#include <QDialog>

namespace Ui {
class StringAlgorithms;
}

class StringAlgorithms : public QDialog
{
    Q_OBJECT

public:
    explicit StringAlgorithms(QWidget *parent = 0);
    ~StringAlgorithms();

private:
    Ui::StringAlgorithms *ui;
};

#endif // STRINGALGORITHMS_H
