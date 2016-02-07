#include <iostream>
#include <QApplication>
#include <arithmetic.h>

using namespace std;

int main(int argc, char *argv[]) {
    QApplication app (argc, argv);
    arithmetic am = new arithmetic();
    cout << "Voilà : " << am->getOperator() << endl;
    return app.exec();
}

