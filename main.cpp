#include <QApplication>
#include <QPushButton>
 
int main(int argc, char *argv[ ]) 
{
QApplication app(argc, argv);
 
QPushButton button("Hello, World!");
button.resize(200, 60);50444
button.show( );
 
return app.exec( );
}
