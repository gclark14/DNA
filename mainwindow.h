#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "topicsenum.h"
#include <QtDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_topics_editTextChanged(const QString &arg1);
    void setFunctionsData();

private:
    Ui::MainWindow *ui;
    static Topics topics;
    QString currentTopic;

    // Update the functions combobox as a new topic is selected from topicsCombobox
    void updateFunctionWhenTopicChanges();

};

#endif // MAINWINDOW_H
