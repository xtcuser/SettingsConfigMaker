/********************************************************************************
** Form generated from reading UI file 'settingsmaker.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

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

QT_BEGIN_NAMESPACE

class Ui_SettingsMaker
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QFrame *leftone;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_11;
    QLabel *label;
    QLabel *label_14;
    QFrame *line_10;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QCheckBox *cscreen;
    QCheckBox *dvd;
    QCheckBox *demo;
    QCheckBox *bar;
    QCheckBox *espresso;
    QCheckBox *autoconnect;
    QCheckBox *dockingstation;
    QCheckBox *curtains;
    QFrame *line_8;
    QGridLayout *gridLayout_2;
    QSpinBox *mindiff_val;
    QSpinBox *hourdiff_val;
    QLabel *label_5;
    QLabel *label_4;
    QSpinBox *autoconnect_val;
    QLabel *label_3;
    QFrame *line_9;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QLabel *label_8;
    QComboBox *tvtype_val;
    QComboBox *actype_val;
    QComboBox *mplayer_val;
    QComboBox *defaultlang_val;
    QLabel *label_6;
    QLabel *label_7;
    QFrame *line;
    QFrame *righone;
    QVBoxLayout *verticalLayout_10;
    QGridLayout *gridLayout_5;
    QCheckBox *twodoor;
    QCheckBox *sidelight;
    QCheckBox *sunroof;
    QCheckBox *sbox;
    QCheckBox *amp;
    QCheckBox *pstation;
    QCheckBox *intro;
    QCheckBox *regrigerator;
    QFrame *line_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QLineEdit *mediaurl_val;
    QFrame *line_6;
    QGridLayout *gridLayout_4;
    QFrame *line_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_12;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *cooling3;
    QCheckBox *heating3;
    QCheckBox *massage3;
    QCheckBox *drawer3;
    QCheckBox *thigh3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *cooling1;
    QCheckBox *heating1;
    QCheckBox *massage1;
    QCheckBox *drawer1;
    QCheckBox *thigh1;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_13;
    QVBoxLayout *verticalLayout_8;
    QCheckBox *cooling4;
    QCheckBox *heating4;
    QCheckBox *massage4;
    QCheckBox *drawer4;
    QCheckBox *thigh4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_11;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *cooling2;
    QCheckBox *heating2;
    QCheckBox *massage2;
    QCheckBox *drawer2;
    QCheckBox *thigh2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *button;

    void setupUi(QMainWindow *SettingsMaker)
    {
        if (SettingsMaker->objectName().isEmpty())
            SettingsMaker->setObjectName(QStringLiteral("SettingsMaker"));
        SettingsMaker->resize(640, 625);
        SettingsMaker->setMinimumSize(QSize(640, 625));
        SettingsMaker->setMaximumSize(QSize(640, 625));
        centralWidget = new QWidget(SettingsMaker);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 617, 609));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        leftone = new QFrame(layoutWidget);
        leftone->setObjectName(QStringLiteral("leftone"));
        leftone->setMinimumSize(QSize(300, 0));
        leftone->setMaximumSize(QSize(300, 16777215));
        verticalLayout_12 = new QVBoxLayout(leftone);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label = new QLabel(leftone);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_11->addWidget(label);

        label_14 = new QLabel(leftone);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMaximumSize(QSize(16777215, 50));

        verticalLayout_11->addWidget(label_14);


        horizontalLayout->addLayout(verticalLayout_11);


        verticalLayout_12->addLayout(horizontalLayout);

        line_10 = new QFrame(leftone);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);

        verticalLayout_12->addWidget(line_10);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        cscreen = new QCheckBox(leftone);
        cscreen->setObjectName(QStringLiteral("cscreen"));
        cscreen->setChecked(false);

        gridLayout->addWidget(cscreen, 0, 1, 1, 1);

        dvd = new QCheckBox(leftone);
        dvd->setObjectName(QStringLiteral("dvd"));
        dvd->setChecked(true);

        gridLayout->addWidget(dvd, 3, 0, 1, 1);

        demo = new QCheckBox(leftone);
        demo->setObjectName(QStringLiteral("demo"));
        demo->setChecked(true);

        gridLayout->addWidget(demo, 2, 0, 1, 1);

        bar = new QCheckBox(leftone);
        bar->setObjectName(QStringLiteral("bar"));
        bar->setChecked(false);

        gridLayout->addWidget(bar, 1, 0, 1, 1);

        espresso = new QCheckBox(leftone);
        espresso->setObjectName(QStringLiteral("espresso"));

        gridLayout->addWidget(espresso, 3, 1, 1, 1);

        autoconnect = new QCheckBox(leftone);
        autoconnect->setObjectName(QStringLiteral("autoconnect"));
        autoconnect->setChecked(true);

        gridLayout->addWidget(autoconnect, 0, 0, 1, 1);

        dockingstation = new QCheckBox(leftone);
        dockingstation->setObjectName(QStringLiteral("dockingstation"));

        gridLayout->addWidget(dockingstation, 2, 1, 1, 1);

        curtains = new QCheckBox(leftone);
        curtains->setObjectName(QStringLiteral("curtains"));
        curtains->setChecked(true);

        gridLayout->addWidget(curtains, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        line_8 = new QFrame(leftone);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_8);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mindiff_val = new QSpinBox(leftone);
        mindiff_val->setObjectName(QStringLiteral("mindiff_val"));
        mindiff_val->setMinimum(-59);
        mindiff_val->setMaximum(59);

        gridLayout_2->addWidget(mindiff_val, 2, 1, 1, 1);

        hourdiff_val = new QSpinBox(leftone);
        hourdiff_val->setObjectName(QStringLiteral("hourdiff_val"));
        hourdiff_val->setMinimum(-23);
        hourdiff_val->setMaximum(23);

        gridLayout_2->addWidget(hourdiff_val, 1, 1, 1, 1);

        label_5 = new QLabel(leftone);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        label_4 = new QLabel(leftone);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        autoconnect_val = new QSpinBox(leftone);
        autoconnect_val->setObjectName(QStringLiteral("autoconnect_val"));
        autoconnect_val->setMaximum(10000);
        autoconnect_val->setValue(5000);

        gridLayout_2->addWidget(autoconnect_val, 0, 1, 1, 1);

        label_3 = new QLabel(leftone);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        line_9 = new QFrame(leftone);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_9);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_2 = new QLabel(leftone);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        label_8 = new QLabel(leftone);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 3, 0, 1, 1);

        tvtype_val = new QComboBox(leftone);
        tvtype_val->setObjectName(QStringLiteral("tvtype_val"));

        gridLayout_3->addWidget(tvtype_val, 1, 1, 1, 1);

        actype_val = new QComboBox(leftone);
        actype_val->setObjectName(QStringLiteral("actype_val"));

        gridLayout_3->addWidget(actype_val, 0, 1, 1, 1);

        mplayer_val = new QComboBox(leftone);
        mplayer_val->setObjectName(QStringLiteral("mplayer_val"));

        gridLayout_3->addWidget(mplayer_val, 2, 1, 1, 1);

        defaultlang_val = new QComboBox(leftone);
        defaultlang_val->setObjectName(QStringLiteral("defaultlang_val"));

        gridLayout_3->addWidget(defaultlang_val, 3, 1, 1, 1);

        label_6 = new QLabel(leftone);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        label_7 = new QLabel(leftone);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_3);


        verticalLayout_12->addLayout(verticalLayout);


        horizontalLayout_4->addWidget(leftone);

        line = new QFrame(layoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line);

        righone = new QFrame(layoutWidget);
        righone->setObjectName(QStringLiteral("righone"));
        righone->setMinimumSize(QSize(300, 0));
        righone->setMaximumSize(QSize(300, 16777215));
        verticalLayout_10 = new QVBoxLayout(righone);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        twodoor = new QCheckBox(righone);
        twodoor->setObjectName(QStringLiteral("twodoor"));

        gridLayout_5->addWidget(twodoor, 2, 0, 1, 1);

        sidelight = new QCheckBox(righone);
        sidelight->setObjectName(QStringLiteral("sidelight"));
        sidelight->setChecked(true);

        gridLayout_5->addWidget(sidelight, 7, 0, 1, 1);

        sunroof = new QCheckBox(righone);
        sunroof->setObjectName(QStringLiteral("sunroof"));

        gridLayout_5->addWidget(sunroof, 5, 1, 1, 1);

        sbox = new QCheckBox(righone);
        sbox->setObjectName(QStringLiteral("sbox"));

        gridLayout_5->addWidget(sbox, 2, 1, 1, 1);

        amp = new QCheckBox(righone);
        amp->setObjectName(QStringLiteral("amp"));
        amp->setChecked(true);

        gridLayout_5->addWidget(amp, 7, 1, 1, 1);

        pstation = new QCheckBox(righone);
        pstation->setObjectName(QStringLiteral("pstation"));

        gridLayout_5->addWidget(pstation, 3, 1, 1, 1);

        intro = new QCheckBox(righone);
        intro->setObjectName(QStringLiteral("intro"));
        intro->setChecked(true);

        gridLayout_5->addWidget(intro, 5, 0, 1, 1);

        regrigerator = new QCheckBox(righone);
        regrigerator->setObjectName(QStringLiteral("regrigerator"));

        gridLayout_5->addWidget(regrigerator, 3, 0, 1, 1);


        verticalLayout_10->addLayout(gridLayout_5);

        line_7 = new QFrame(righone);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout_10->addWidget(line_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_9 = new QLabel(righone);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_2->addWidget(label_9);

        mediaurl_val = new QLineEdit(righone);
        mediaurl_val->setObjectName(QStringLiteral("mediaurl_val"));
        mediaurl_val->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_2->addWidget(mediaurl_val);


        verticalLayout_10->addLayout(horizontalLayout_2);

        line_6 = new QFrame(righone);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_10->addWidget(line_6);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        line_3 = new QFrame(righone);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_3, 1, 2, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_12 = new QLabel(righone);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_7->addWidget(label_12);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        cooling3 = new QCheckBox(righone);
        cooling3->setObjectName(QStringLiteral("cooling3"));

        verticalLayout_6->addWidget(cooling3);

        heating3 = new QCheckBox(righone);
        heating3->setObjectName(QStringLiteral("heating3"));

        verticalLayout_6->addWidget(heating3);

        massage3 = new QCheckBox(righone);
        massage3->setObjectName(QStringLiteral("massage3"));

        verticalLayout_6->addWidget(massage3);

        drawer3 = new QCheckBox(righone);
        drawer3->setObjectName(QStringLiteral("drawer3"));

        verticalLayout_6->addWidget(drawer3);

        thigh3 = new QCheckBox(righone);
        thigh3->setObjectName(QStringLiteral("thigh3"));

        verticalLayout_6->addWidget(thigh3);


        verticalLayout_7->addLayout(verticalLayout_6);


        gridLayout_4->addLayout(verticalLayout_7, 2, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_10 = new QLabel(righone);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_3->addWidget(label_10);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        cooling1 = new QCheckBox(righone);
        cooling1->setObjectName(QStringLiteral("cooling1"));

        verticalLayout_2->addWidget(cooling1);

        heating1 = new QCheckBox(righone);
        heating1->setObjectName(QStringLiteral("heating1"));

        verticalLayout_2->addWidget(heating1);

        massage1 = new QCheckBox(righone);
        massage1->setObjectName(QStringLiteral("massage1"));

        verticalLayout_2->addWidget(massage1);

        drawer1 = new QCheckBox(righone);
        drawer1->setObjectName(QStringLiteral("drawer1"));

        verticalLayout_2->addWidget(drawer1);

        thigh1 = new QCheckBox(righone);
        thigh1->setObjectName(QStringLiteral("thigh1"));

        verticalLayout_2->addWidget(thigh1);


        verticalLayout_3->addLayout(verticalLayout_2);


        gridLayout_4->addLayout(verticalLayout_3, 0, 0, 1, 1);

        line_4 = new QFrame(righone);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_4, 2, 1, 1, 1);

        line_5 = new QFrame(righone);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_5, 0, 1, 1, 1);

        line_2 = new QFrame(righone);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_2, 1, 0, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_13 = new QLabel(righone);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_9->addWidget(label_13);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        cooling4 = new QCheckBox(righone);
        cooling4->setObjectName(QStringLiteral("cooling4"));

        verticalLayout_8->addWidget(cooling4);

        heating4 = new QCheckBox(righone);
        heating4->setObjectName(QStringLiteral("heating4"));

        verticalLayout_8->addWidget(heating4);

        massage4 = new QCheckBox(righone);
        massage4->setObjectName(QStringLiteral("massage4"));

        verticalLayout_8->addWidget(massage4);

        drawer4 = new QCheckBox(righone);
        drawer4->setObjectName(QStringLiteral("drawer4"));

        verticalLayout_8->addWidget(drawer4);

        thigh4 = new QCheckBox(righone);
        thigh4->setObjectName(QStringLiteral("thigh4"));

        verticalLayout_8->addWidget(thigh4);


        verticalLayout_9->addLayout(verticalLayout_8);


        gridLayout_4->addLayout(verticalLayout_9, 2, 2, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_11 = new QLabel(righone);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_5->addWidget(label_11);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        cooling2 = new QCheckBox(righone);
        cooling2->setObjectName(QStringLiteral("cooling2"));

        verticalLayout_4->addWidget(cooling2);

        heating2 = new QCheckBox(righone);
        heating2->setObjectName(QStringLiteral("heating2"));

        verticalLayout_4->addWidget(heating2);

        massage2 = new QCheckBox(righone);
        massage2->setObjectName(QStringLiteral("massage2"));

        verticalLayout_4->addWidget(massage2);

        drawer2 = new QCheckBox(righone);
        drawer2->setObjectName(QStringLiteral("drawer2"));

        verticalLayout_4->addWidget(drawer2);

        thigh2 = new QCheckBox(righone);
        thigh2->setObjectName(QStringLiteral("thigh2"));

        verticalLayout_4->addWidget(thigh2);


        verticalLayout_5->addLayout(verticalLayout_4);


        gridLayout_4->addLayout(verticalLayout_5, 0, 2, 1, 1);


        verticalLayout_10->addLayout(gridLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        button = new QPushButton(righone);
        button->setObjectName(QStringLiteral("button"));
        button->setMinimumSize(QSize(200, 0));
        button->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(button);


        verticalLayout_10->addLayout(horizontalLayout_3);


        horizontalLayout_4->addWidget(righone);

        SettingsMaker->setCentralWidget(centralWidget);

        retranslateUi(SettingsMaker);

        button->setDefault(true);


        QMetaObject::connectSlotsByName(SettingsMaker);
    } // setupUi

    void retranslateUi(QMainWindow *SettingsMaker)
    {
        SettingsMaker->setWindowTitle(QApplication::translate("SettingsMaker", "SettingsMaker", 0));
        label->setText(QApplication::translate("SettingsMaker", "<html><head/><body><p align=\"center\"><img src=\":/design/logo.svg\"/></p></body></html>", 0));
        label_14->setText(QApplication::translate("SettingsMaker", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">SETTINGS CONFIG MAKER</span></p><p align=\"center\"><span style=\" font-size:8pt;\">Dizaynvip Embedded System Team</span></p></body></html>", 0));
        cscreen->setText(QApplication::translate("SettingsMaker", "Ceiling Screen", 0));
        dvd->setText(QApplication::translate("SettingsMaker", "DVD Player", 0));
        demo->setText(QApplication::translate("SettingsMaker", "Demo Mode", 0));
        bar->setText(QApplication::translate("SettingsMaker", "Bar", 0));
        espresso->setText(QApplication::translate("SettingsMaker", "Espresso", 0));
        autoconnect->setText(QApplication::translate("SettingsMaker", "Auto Connect", 0));
        dockingstation->setText(QApplication::translate("SettingsMaker", "Docking Station", 0));
        curtains->setText(QApplication::translate("SettingsMaker", "Curtains", 0));
        label_5->setText(QApplication::translate("SettingsMaker", "Minute Difference:", 0));
        label_4->setText(QApplication::translate("SettingsMaker", "Hour Difference:", 0));
        label_3->setText(QApplication::translate("SettingsMaker", "Auto Connect Timeout:", 0));
        label_2->setText(QApplication::translate("SettingsMaker", "Air Condition Type:", 0));
        label_8->setText(QApplication::translate("SettingsMaker", "Default Language:", 0));
        tvtype_val->clear();
        tvtype_val->insertItems(0, QStringList()
         << QApplication::translate("SettingsMaker", "None", 0)
         << QApplication::translate("SettingsMaker", "1", 0)
         << QApplication::translate("SettingsMaker", "2", 0)
         << QApplication::translate("SettingsMaker", "3", 0)
         << QApplication::translate("SettingsMaker", "4", 0)
         << QApplication::translate("SettingsMaker", "5", 0)
         << QApplication::translate("SettingsMaker", "6", 0)
        );
        tvtype_val->setCurrentText(QApplication::translate("SettingsMaker", "None", 0));
        actype_val->clear();
        actype_val->insertItems(0, QStringList()
         << QApplication::translate("SettingsMaker", "None", 0)
         << QApplication::translate("SettingsMaker", "1", 0)
         << QApplication::translate("SettingsMaker", "2", 0)
        );
        actype_val->setCurrentText(QApplication::translate("SettingsMaker", "None", 0));
        mplayer_val->clear();
        mplayer_val->insertItems(0, QStringList()
         << QApplication::translate("SettingsMaker", "Kodi Player", 0)
         << QApplication::translate("SettingsMaker", "Apple TV", 0)
        );
        mplayer_val->setCurrentText(QApplication::translate("SettingsMaker", "Kodi Player", 0));
        defaultlang_val->clear();
        defaultlang_val->insertItems(0, QStringList()
         << QApplication::translate("SettingsMaker", "English", 0)
         << QApplication::translate("SettingsMaker", "Turkish", 0)
         << QApplication::translate("SettingsMaker", "Chinese", 0)
        );
        label_6->setText(QApplication::translate("SettingsMaker", "TV Type:", 0));
        label_7->setText(QApplication::translate("SettingsMaker", "Media Player Type:", 0));
        twodoor->setText(QApplication::translate("SettingsMaker", "Two door", 0));
        sidelight->setText(QApplication::translate("SettingsMaker", "Side Lights", 0));
        sunroof->setText(QApplication::translate("SettingsMaker", "Sunroof", 0));
        sbox->setText(QApplication::translate("SettingsMaker", "Safebox", 0));
        amp->setText(QApplication::translate("SettingsMaker", "Amplifier", 0));
        pstation->setText(QApplication::translate("SettingsMaker", "Playstation", 0));
        intro->setText(QApplication::translate("SettingsMaker", "Intro", 0));
        regrigerator->setText(QApplication::translate("SettingsMaker", "Regrigerator", 0));
        label_9->setText(QApplication::translate("SettingsMaker", "Media URL:", 0));
#ifndef QT_NO_TOOLTIP
        mediaurl_val->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        mediaurl_val->setText(QString());
        mediaurl_val->setPlaceholderText(QApplication::translate("SettingsMaker", "ws://192.168.1.38:9090", 0));
        label_12->setText(QApplication::translate("SettingsMaker", "Seat Three:", 0));
        cooling3->setText(QApplication::translate("SettingsMaker", "Cooling", 0));
        heating3->setText(QApplication::translate("SettingsMaker", "Heating", 0));
        massage3->setText(QApplication::translate("SettingsMaker", "Massage", 0));
        drawer3->setText(QApplication::translate("SettingsMaker", "Drawer", 0));
        thigh3->setText(QApplication::translate("SettingsMaker", "Thigh", 0));
        label_10->setText(QApplication::translate("SettingsMaker", "Seat One:", 0));
        cooling1->setText(QApplication::translate("SettingsMaker", "Cooling", 0));
        heating1->setText(QApplication::translate("SettingsMaker", "Heating", 0));
        massage1->setText(QApplication::translate("SettingsMaker", "Massage", 0));
        drawer1->setText(QApplication::translate("SettingsMaker", "Drawer", 0));
        thigh1->setText(QApplication::translate("SettingsMaker", "Thigh", 0));
        label_13->setText(QApplication::translate("SettingsMaker", "Seat Four:", 0));
        cooling4->setText(QApplication::translate("SettingsMaker", "Cooling", 0));
        heating4->setText(QApplication::translate("SettingsMaker", "Heating", 0));
        massage4->setText(QApplication::translate("SettingsMaker", "Massage", 0));
        drawer4->setText(QApplication::translate("SettingsMaker", "Drawer", 0));
        thigh4->setText(QApplication::translate("SettingsMaker", "Thigh", 0));
        label_11->setText(QApplication::translate("SettingsMaker", "Seat Two:", 0));
        cooling2->setText(QApplication::translate("SettingsMaker", "Cooling", 0));
        heating2->setText(QApplication::translate("SettingsMaker", "Heating", 0));
        massage2->setText(QApplication::translate("SettingsMaker", "Massage", 0));
        drawer2->setText(QApplication::translate("SettingsMaker", "Drawer", 0));
        thigh2->setText(QApplication::translate("SettingsMaker", "Thigh", 0));
        button->setText(QApplication::translate("SettingsMaker", "Proceed", 0));
    } // retranslateUi

};

namespace Ui {
    class SettingsMaker: public Ui_SettingsMaker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSMAKER_H
