#include "settingsmaker.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SettingsMaker w;
	a.setStyle("Fusion");
    w.show();

    qDebug()<<"▒██   ██▒▄▄▄█████▓ ▄████▄   █    ██   ██████ ▓█████  ██▀███";
    qDebug()<<"▒▒ █ █ ▒░▓  ██▒ ▓▒▒██▀ ▀█   ██  ▓██▒▒██    ▒ ▓█   ▀ ▓██ ▒ ██▒";
    qDebug()<<"░░  █   ░▒ ▓██░ ▒░▒▓█    ▄ ▓██  ▒██░░ ▓██▄   ▒███   ▓██ ░▄█ ▒";
    qDebug()<<" ░ █ █ ▒ ░ ▓██▓ ░ ▒▓▓▄ ▄██▒▓▓█  ░██░  ▒   ██▒▒▓█  ▄ ▒██▀▀█▄";
    qDebug()<<"▒██▒ ▒██▒  ▒██▒ ░ ▒ ▓███▀ ░▒▒█████▓ ▒██████▒▒░▒████▒░██▓ ▒██▒";
    qDebug()<<"▒▒ ░ ░▓ ░  ▒ ░░   ░ ░▒ ▒  ░░▒▓▒ ▒ ▒ ▒ ▒▓▒ ▒ ░░░ ▒░ ░░ ▒▓ ░▒▓░";
    qDebug()<<"░░   ░▒ ░    ░      ░  ▒   ░░▒░ ░ ░ ░ ░▒  ░ ░ ░ ░  ░  ░▒ ░ ▒░";
    qDebug()<<" ░    ░    ░      ░         ░░░ ░ ░ ░  ░  ░     ░     ░░   ░";
    qDebug()<<" ░    ░           ░ ░         ░           ░     ░  ░   ░";
    qDebug()<<"                  ░";
    qDebug()<<"Application Started";
    qDebug()<<"DizaynVIP Settings.ini Config Maker v1.0b";

    return a.exec();
}
