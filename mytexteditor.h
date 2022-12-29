#ifndef MYTEXTEDITOR_H
#define MYTEXTEDITOR_H

#include <QMainWindow>

namespace Ui {
class MyTextEditor;
}

class MyTextEditor : public QMainWindow
{
    Q_OBJECT

public:
    explicit MyTextEditor(QWidget *parent = 0);
    ~MyTextEditor();

private slots:
    void on_actionBold_triggered(bool checked);
    void on_actionColor_triggered(bool checked);
    void on_actionNormal_triggered(bool checked);
    void on_actionFont_triggered(bool checked);
    void on_actionItalic_triggered(bool checked);
    void on_actionUnderline_triggered(bool checked);
private:
    Ui::MyTextEditor *ui;
};

#endif // MYTEXTEDITOR_H
