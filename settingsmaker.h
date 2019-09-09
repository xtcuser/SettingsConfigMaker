#ifndef UI_SETTINGSMAKER_H
#define UI_SETTINGSMAKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QSettings>

QT_BEGIN_NAMESPACE

namespace Ui {
class SettingsMaker;
}

class SettingsMaker : public QWidget
{
    Q_OBJECT

public:
    SettingsMaker(QWidget *parent = nullptr);
    ~SettingsMaker();
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_10;
    QLabel *mylabel;
    QLabel *label;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout;
    QCheckBox *radio;
    QCheckBox *bar;
    QCheckBox *demo;
    QCheckBox *dvd;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *cscreen;
    QCheckBox *curtains;
    QCheckBox *dstation;
    QCheckBox *espresso;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_9;
    QComboBox *actype_val;
    QComboBox *tvtype_val;
    QComboBox *mplayertype_val;
    QComboBox *defaultlang_val;
    QFrame *line_8;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *twodoor;
    QCheckBox *regrigerator;
    QCheckBox *intro;
    QCheckBox *sidelights;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *sbox;
    QCheckBox *pstation;
    QCheckBox *sunroof;
    QCheckBox *amp;
    QFrame *line_6;
    QGridLayout *gridLayout;
    QFrame *line_7;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_13;
    QCheckBox *cooling3;
    QCheckBox *heating3;
    QCheckBox *massage3;
    QCheckBox *drawer3;
    QCheckBox *thigh3;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_12;
    QCheckBox *cooling4;
    QCheckBox *heating4;
    QCheckBox *massage4;
    QCheckBox *drawer4;
    QCheckBox *thigh4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_10;
    QCheckBox *cooling1;
    QCheckBox *heating1;
    QCheckBox *massage1;
    QCheckBox *drawer1;
    QCheckBox *thigh1;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_11;
    QCheckBox *cooling2;
    QCheckBox *heating2;
    QCheckBox *massage2;
    QCheckBox *drawer2;
    QCheckBox *thigh2;
    QFrame *line_2;
    QFrame *line_9;
    QFrame *line_10;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer;
    QPushButton *button;


public slots:
    void buttonClicked();
};
QT_END_NAMESPACE

#endif // UI_SETTINGSMAKER_H

