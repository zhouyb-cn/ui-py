#ifndef KQ_H
#define KQ_H

#include <QMainWindow>

namespace Ui {
class kq;
}

class kq : public QMainWindow
{
    Q_OBJECT

public:
    explicit kq(QWidget *parent = 0);
    ~kq();

private:
    Ui::kq *ui;
};

#endif // KQ_H
