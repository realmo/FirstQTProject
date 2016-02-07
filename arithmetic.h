#ifndef ARITHMETIC_H
#define ARITHMETIC_H

#include <QObject>
#include <QtMath>
#include <QChar>s

class arithmetic : public QObject
{
    Q_OBJECT
public:
    explicit arithmetic(QObject *parent = 0);
    QChar getOperator();

private:
    qreal operand;

signals:

public slots:

};

#endif // ARITHMETIC_H
