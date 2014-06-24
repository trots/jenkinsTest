#include <QCoreApplication>
#include <iostream>

#include <QFile>
#include <QTextStream>

using namespace std;

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  cout << "Hello, world" << endl;
  cout << "Hello, Jenkins" << endl;

  QFile file("TestFile.txt");
  file.open(QIODevice::ReadWrite);
  QTextStream out(&file);
  out << "Hello, man! Yo!" << endl;
  file.close();

  return 1;
}
