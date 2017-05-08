#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <map>
#include <string>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

public slots:
    void onProgressChanged(std::map<std::string, std::string> map);
    void cpuChanged(std::map<std::string, std::string> map);

};

#endif // MAINWINDOW_H
