#include "settingsmaker.h"
#include <QDir>
#include <QCoreApplication>
#include <QDebug>
#include <QFileDialog>


SettingsMaker::SettingsMaker(QWidget *parent) :
    QWidget(parent)
{
    if (this->objectName().isEmpty())
        this->setObjectName(QStringLiteral("Dialog"));
    this->resize(530, 565);
    this->setMinimumSize(QSize(530, 565));
    this->setMaximumSize(QSize(530, 565));
    frame = new QFrame(this);
    frame->setObjectName(QStringLiteral("frame"));
    frame->setGeometry(QRect(10, 10, 511, 551));
    horizontalLayout_2 = new QHBoxLayout(frame);
    horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
    verticalLayout_10 = new QVBoxLayout();
    verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
    mylabel = new QLabel(frame);
    mylabel->setObjectName(QStringLiteral("mylabel"));

    verticalLayout_10->addWidget(mylabel);

    label = new QLabel(frame);
    label->setObjectName(QStringLiteral("label"));
    label->setMaximumSize(QSize(16777215, 60));

    verticalLayout_10->addWidget(label);

    line_4 = new QFrame(frame);
    line_4->setObjectName(QStringLiteral("line_4"));
    line_4->setFrameShape(QFrame::HLine);
    line_4->setFrameShadow(QFrame::Sunken);

    verticalLayout_10->addWidget(line_4);

    horizontalLayout_8 = new QHBoxLayout();
    horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
    verticalLayout = new QVBoxLayout();
    verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
    radio = new QCheckBox(frame);
    radio->setObjectName(QStringLiteral("radio"));

    verticalLayout->addWidget(radio);

    bar = new QCheckBox(frame);
    bar->setObjectName(QStringLiteral("bar"));

    verticalLayout->addWidget(bar);

    demo = new QCheckBox(frame);
    demo->setObjectName(QStringLiteral("demo"));
    demo->setChecked(true);

    verticalLayout->addWidget(demo);

    dvd = new QCheckBox(frame);
    dvd->setObjectName(QStringLiteral("dvd"));
    dvd->setChecked(true);

    verticalLayout->addWidget(dvd);


    horizontalLayout_8->addLayout(verticalLayout);

    verticalLayout_2 = new QVBoxLayout();
    verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
    cscreen = new QCheckBox(frame);
    cscreen->setObjectName(QStringLiteral("cscreen"));

    verticalLayout_2->addWidget(cscreen);

    curtains = new QCheckBox(frame);
    curtains->setObjectName(QStringLiteral("curtains"));
    curtains->setChecked(true);

    verticalLayout_2->addWidget(curtains);

    dstation = new QCheckBox(frame);
    dstation->setObjectName(QStringLiteral("dstation"));

    verticalLayout_2->addWidget(dstation);

    espresso = new QCheckBox(frame);
    espresso->setObjectName(QStringLiteral("espresso"));

    verticalLayout_2->addWidget(espresso);


    horizontalLayout_8->addLayout(verticalLayout_2);


    verticalLayout_10->addLayout(horizontalLayout_8);

    line_3 = new QFrame(frame);
    line_3->setObjectName(QStringLiteral("line_3"));
    line_3->setFrameShape(QFrame::HLine);
    line_3->setFrameShadow(QFrame::Sunken);

    verticalLayout_10->addWidget(line_3);

    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
    verticalLayout_12 = new QVBoxLayout();
    verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
    label_5 = new QLabel(frame);
    label_5->setObjectName(QStringLiteral("label_5"));

    verticalLayout_12->addWidget(label_5);

    label_6 = new QLabel(frame);
    label_6->setObjectName(QStringLiteral("label_6"));

    verticalLayout_12->addWidget(label_6);

    label_7 = new QLabel(frame);
    label_7->setObjectName(QStringLiteral("label_7"));

    verticalLayout_12->addWidget(label_7);

    label_8 = new QLabel(frame);
    label_8->setObjectName(QStringLiteral("label_8"));

    verticalLayout_12->addWidget(label_8);


    horizontalLayout->addLayout(verticalLayout_12);

    verticalLayout_9 = new QVBoxLayout();
    verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
    actype_val = new QComboBox(frame);
    actype_val->setObjectName(QStringLiteral("actype_val"));

    verticalLayout_9->addWidget(actype_val);

    tvtype_val = new QComboBox(frame);
    tvtype_val->setObjectName(QStringLiteral("tvtype_val"));

    verticalLayout_9->addWidget(tvtype_val);

    mplayertype_val = new QComboBox(frame);
    mplayertype_val->setObjectName(QStringLiteral("mplayertype_val"));

    verticalLayout_9->addWidget(mplayertype_val);

    defaultlang_val = new QComboBox(frame);
    defaultlang_val->setObjectName(QStringLiteral("defaultlang_val"));

    verticalLayout_9->addWidget(defaultlang_val);


    horizontalLayout->addLayout(verticalLayout_9);


    verticalLayout_10->addLayout(horizontalLayout);


    horizontalLayout_2->addLayout(verticalLayout_10);

    line_8 = new QFrame(frame);
    line_8->setObjectName(QStringLiteral("line_8"));
    line_8->setFrameShape(QFrame::VLine);
    line_8->setFrameShadow(QFrame::Sunken);

    horizontalLayout_2->addWidget(line_8);

    verticalLayout_11 = new QVBoxLayout();
    verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
    horizontalLayout_11 = new QHBoxLayout();
    horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
    verticalLayout_3 = new QVBoxLayout();
    verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
    twodoor = new QCheckBox(frame);
    twodoor->setObjectName(QStringLiteral("twodoor"));

    verticalLayout_3->addWidget(twodoor);

    regrigerator = new QCheckBox(frame);
    regrigerator->setObjectName(QStringLiteral("regrigerator"));

    verticalLayout_3->addWidget(regrigerator);

    intro = new QCheckBox(frame);
    intro->setObjectName(QStringLiteral("intro"));
    intro->setChecked(true);

    verticalLayout_3->addWidget(intro);

    sidelights = new QCheckBox(frame);
    sidelights->setObjectName(QStringLiteral("sidelights"));
    sidelights->setChecked(true);

    verticalLayout_3->addWidget(sidelights);


    horizontalLayout_11->addLayout(verticalLayout_3);

    verticalLayout_4 = new QVBoxLayout();
    verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
    sbox = new QCheckBox(frame);
    sbox->setObjectName(QStringLiteral("sbox"));

    verticalLayout_4->addWidget(sbox);

    pstation = new QCheckBox(frame);
    pstation->setObjectName(QStringLiteral("pstation"));

    verticalLayout_4->addWidget(pstation);

    sunroof = new QCheckBox(frame);
    sunroof->setObjectName(QStringLiteral("sunroof"));

    verticalLayout_4->addWidget(sunroof);

    amp = new QCheckBox(frame);
    amp->setObjectName(QStringLiteral("amp"));
    amp->setChecked(true);

    verticalLayout_4->addWidget(amp);


    horizontalLayout_11->addLayout(verticalLayout_4);


    verticalLayout_11->addLayout(horizontalLayout_11);

    line_6 = new QFrame(frame);
    line_6->setObjectName(QStringLiteral("line_6"));
    line_6->setFrameShape(QFrame::HLine);
    line_6->setFrameShadow(QFrame::Sunken);

    verticalLayout_11->addWidget(line_6);

    gridLayout = new QGridLayout();
    gridLayout->setObjectName(QStringLiteral("gridLayout"));
    line_7 = new QFrame(frame);
    line_7->setObjectName(QStringLiteral("line_7"));
    line_7->setFrameShape(QFrame::HLine);
    line_7->setFrameShadow(QFrame::Sunken);

    gridLayout->addWidget(line_7, 1, 0, 1, 1);

    verticalLayout_7 = new QVBoxLayout();
    verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
    label_13 = new QLabel(frame);
    label_13->setObjectName(QStringLiteral("label_13"));

    verticalLayout_7->addWidget(label_13);

    cooling3 = new QCheckBox(frame);
    cooling3->setObjectName(QStringLiteral("cooling3"));

    verticalLayout_7->addWidget(cooling3);

    heating3 = new QCheckBox(frame);
    heating3->setObjectName(QStringLiteral("heating3"));

    verticalLayout_7->addWidget(heating3);

    massage3 = new QCheckBox(frame);
    massage3->setObjectName(QStringLiteral("massage3"));

    verticalLayout_7->addWidget(massage3);

    drawer3 = new QCheckBox(frame);
    drawer3->setObjectName(QStringLiteral("drawer3"));

    verticalLayout_7->addWidget(drawer3);

    thigh3 = new QCheckBox(frame);
    thigh3->setObjectName(QStringLiteral("thigh3"));

    verticalLayout_7->addWidget(thigh3);


    gridLayout->addLayout(verticalLayout_7, 2, 0, 1, 1);

    verticalLayout_8 = new QVBoxLayout();
    verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
    label_12 = new QLabel(frame);
    label_12->setObjectName(QStringLiteral("label_12"));

    verticalLayout_8->addWidget(label_12);

    cooling4 = new QCheckBox(frame);
    cooling4->setObjectName(QStringLiteral("cooling4"));

    verticalLayout_8->addWidget(cooling4);

    heating4 = new QCheckBox(frame);
    heating4->setObjectName(QStringLiteral("heating4"));

    verticalLayout_8->addWidget(heating4);

    massage4 = new QCheckBox(frame);
    massage4->setObjectName(QStringLiteral("massage4"));

    verticalLayout_8->addWidget(massage4);

    drawer4 = new QCheckBox(frame);
    drawer4->setObjectName(QStringLiteral("drawer4"));

    verticalLayout_8->addWidget(drawer4);

    thigh4 = new QCheckBox(frame);
    thigh4->setObjectName(QStringLiteral("thigh4"));

    verticalLayout_8->addWidget(thigh4);


    gridLayout->addLayout(verticalLayout_8, 2, 2, 1, 1);

    verticalLayout_5 = new QVBoxLayout();
    verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
    label_10 = new QLabel(frame);
    label_10->setObjectName(QStringLiteral("label_10"));

    verticalLayout_5->addWidget(label_10);

    cooling1 = new QCheckBox(frame);
    cooling1->setObjectName(QStringLiteral("cooling1"));

    verticalLayout_5->addWidget(cooling1);

    heating1 = new QCheckBox(frame);
    heating1->setObjectName(QStringLiteral("heating1"));

    verticalLayout_5->addWidget(heating1);

    massage1 = new QCheckBox(frame);
    massage1->setObjectName(QStringLiteral("massage1"));

    verticalLayout_5->addWidget(massage1);

    drawer1 = new QCheckBox(frame);
    drawer1->setObjectName(QStringLiteral("drawer1"));

    verticalLayout_5->addWidget(drawer1);

    thigh1 = new QCheckBox(frame);
    thigh1->setObjectName(QStringLiteral("thigh1"));

    verticalLayout_5->addWidget(thigh1);


    gridLayout->addLayout(verticalLayout_5, 0, 0, 1, 1);

    verticalLayout_6 = new QVBoxLayout();
    verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
    label_11 = new QLabel(frame);
    label_11->setObjectName(QStringLiteral("label_11"));

    verticalLayout_6->addWidget(label_11);

    cooling2 = new QCheckBox(frame);
    cooling2->setObjectName(QStringLiteral("cooling2"));

    verticalLayout_6->addWidget(cooling2);

    heating2 = new QCheckBox(frame);
    heating2->setObjectName(QStringLiteral("heating2"));

    verticalLayout_6->addWidget(heating2);

    massage2 = new QCheckBox(frame);
    massage2->setObjectName(QStringLiteral("massage2"));

    verticalLayout_6->addWidget(massage2);

    drawer2 = new QCheckBox(frame);
    drawer2->setObjectName(QStringLiteral("drawer2"));

    verticalLayout_6->addWidget(drawer2);

    thigh2 = new QCheckBox(frame);
    thigh2->setObjectName(QStringLiteral("thigh2"));

    verticalLayout_6->addWidget(thigh2);


    gridLayout->addLayout(verticalLayout_6, 0, 2, 1, 1);

    line_2 = new QFrame(frame);
    line_2->setObjectName(QStringLiteral("line_2"));
    line_2->setFrameShape(QFrame::VLine);
    line_2->setFrameShadow(QFrame::Sunken);

    gridLayout->addWidget(line_2, 0, 1, 1, 1);

    line_9 = new QFrame(frame);
    line_9->setObjectName(QStringLiteral("line_9"));
    line_9->setFrameShape(QFrame::HLine);
    line_9->setFrameShadow(QFrame::Sunken);

    gridLayout->addWidget(line_9, 1, 2, 1, 1);

    line_10 = new QFrame(frame);
    line_10->setObjectName(QStringLiteral("line_10"));
    line_10->setFrameShape(QFrame::VLine);
    line_10->setFrameShadow(QFrame::Sunken);

    gridLayout->addWidget(line_10, 2, 1, 1, 1);


    verticalLayout_11->addLayout(gridLayout);

    horizontalLayout_10 = new QHBoxLayout();
    horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
    horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    horizontalLayout_10->addItem(horizontalSpacer);

    button = new QPushButton(frame);
    button->setObjectName(QStringLiteral("button"));

    horizontalLayout_10->addWidget(button);


    verticalLayout_11->addLayout(horizontalLayout_10);


    horizontalLayout_2->addLayout(verticalLayout_11);


    QMetaObject::connectSlotsByName(this);

    this->setWindowTitle(QApplication::translate("SettingMaker", "SettingMaker", Q_NULLPTR));
    mylabel->setText(QApplication::translate("SettingsMaker", "<html><head/><body><p align=\"center\"><img width=275 height=250 src=\":/design/logo.png\"/></p></body></html>", Q_NULLPTR));
    label->setText(QApplication::translate("SettingsMaker", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">SETTINGS CONFIG MAKER</span></p><p align=\"center\"><span style=\" font-size:8pt;\">Dizaynvip Embedded System Team</span></p></body></html>", nullptr));
    radio->setText(QApplication::translate("SettingMaker", "Radio", Q_NULLPTR));
    bar->setText(QApplication::translate("SettingMaker", "Bar", Q_NULLPTR));
    demo->setText(QApplication::translate("SettingMaker", "Demo Mode", Q_NULLPTR));
    dvd->setText(QApplication::translate("SettingMaker", "DVD Player", Q_NULLPTR));
    cscreen->setText(QApplication::translate("SettingMaker", "Ceiling Screen", Q_NULLPTR));
    curtains->setText(QApplication::translate("SettingMaker", "Curtains", Q_NULLPTR));
    dstation->setText(QApplication::translate("SettingMaker", "Docking Station", Q_NULLPTR));
    espresso->setText(QApplication::translate("SettingMaker", "Espresso", Q_NULLPTR));
    label_5->setText(QApplication::translate("SettingMaker", "Air Condition Type:", Q_NULLPTR));
    label_6->setText(QApplication::translate("SettingMaker", "TV Type:", Q_NULLPTR));
    label_7->setText(QApplication::translate("SettingMaker", "Media Player Type: ", Q_NULLPTR));
    label_8->setText(QApplication::translate("SettingMaker", "Default Language", Q_NULLPTR));
    actype_val->clear();
    actype_val->insertItems(0, QStringList()
     << QApplication::translate("SettingMaker", "None", Q_NULLPTR)
     << QApplication::translate("SettingMaker", "1", Q_NULLPTR)
     << QApplication::translate("SettingMaker", "2", Q_NULLPTR)
    );
    tvtype_val->clear();
    tvtype_val->insertItems(0, QStringList()
     << QApplication::translate("SettingMaker", "None", Q_NULLPTR)
     << QApplication::translate("SettingMaker", "1", Q_NULLPTR)
     << QApplication::translate("SettingMaker", "2", Q_NULLPTR)
     << QApplication::translate("SettingMaker", "3", Q_NULLPTR)
     << QApplication::translate("SettingMaker", "4", Q_NULLPTR)
     << QApplication::translate("SettingMaker", "5", Q_NULLPTR)
     << QApplication::translate("SettingMaker", "6", Q_NULLPTR)
    );
    mplayertype_val->clear();
    mplayertype_val->insertItems(0, QStringList()
     << QApplication::translate("SettingMaker", "None", Q_NULLPTR)
     << QApplication::translate("SettingMaker", "Kodi Player", Q_NULLPTR)
     << QApplication::translate("SettingMaker", "Apple TV", Q_NULLPTR)
    );
    defaultlang_val->clear();
    defaultlang_val->insertItems(0, QStringList()
     << QApplication::translate("SettingMaker", "English", Q_NULLPTR)
     << QApplication::translate("SettingMaker", "Turkish", Q_NULLPTR)
     << QApplication::translate("SettingMaker", "China", Q_NULLPTR)
    );
    twodoor->setText(QApplication::translate("SettingMaker", "Two Door", Q_NULLPTR));
    regrigerator->setText(QApplication::translate("SettingMaker", "Regrigerator", Q_NULLPTR));
    intro->setText(QApplication::translate("SettingMaker", "Intro", Q_NULLPTR));
    sidelights->setText(QApplication::translate("SettingMaker", "Side Lights", Q_NULLPTR));
    sbox->setText(QApplication::translate("SettingMaker", "Safe Box", Q_NULLPTR));
    pstation->setText(QApplication::translate("SettingMaker", "Playstation", Q_NULLPTR));
    sunroof->setText(QApplication::translate("SettingMaker", "Sunroof", Q_NULLPTR));
    amp->setText(QApplication::translate("SettingMaker", "Amplifier", Q_NULLPTR));
    label_13->setText(QApplication::translate("SettingMaker", "Seat Three:", Q_NULLPTR));
    cooling3->setText(QApplication::translate("SettingMaker", "Cooling", Q_NULLPTR));
    heating3->setText(QApplication::translate("SettingMaker", "Heating", Q_NULLPTR));
    massage3->setText(QApplication::translate("SettingMaker", "Massage", Q_NULLPTR));
    drawer3->setText(QApplication::translate("SettingMaker", "Drawer", Q_NULLPTR));
    thigh3->setText(QApplication::translate("SettingMaker", "Thigh", Q_NULLPTR));
    label_12->setText(QApplication::translate("SettingMaker", "Seat Four.", Q_NULLPTR));
    cooling4->setText(QApplication::translate("SettingMaker", "Cooling", Q_NULLPTR));
    heating4->setText(QApplication::translate("SettingMaker", "Heating", Q_NULLPTR));
    massage4->setText(QApplication::translate("SettingMaker", "Massage", Q_NULLPTR));
    drawer4->setText(QApplication::translate("SettingMaker", "Drawer", Q_NULLPTR));
    thigh4->setText(QApplication::translate("SettingMaker", "Thigh", Q_NULLPTR));
    label_10->setText(QApplication::translate("SettingMaker", "Seat One:", Q_NULLPTR));
    cooling1->setText(QApplication::translate("SettingMaker", "Cooling", Q_NULLPTR));
    heating1->setText(QApplication::translate("SettingMaker", "Heating", Q_NULLPTR));
    massage1->setText(QApplication::translate("SettingMaker", "Massage", Q_NULLPTR));
    drawer1->setText(QApplication::translate("SettingMaker", "Drawer", Q_NULLPTR));
    thigh1->setText(QApplication::translate("SettingMaker", "Thigh", Q_NULLPTR));
    label_11->setText(QApplication::translate("SettingMaker", "Seat Two:", Q_NULLPTR));
    cooling2->setText(QApplication::translate("SettingMaker", "Cooling", Q_NULLPTR));
    heating2->setText(QApplication::translate("SettingMaker", "Heating", Q_NULLPTR));
    massage2->setText(QApplication::translate("SettingMaker", "Massage", Q_NULLPTR));
    drawer2->setText(QApplication::translate("SettingMaker", "Drawer", Q_NULLPTR));
    thigh2->setText(QApplication::translate("SettingMaker", "Thigh", Q_NULLPTR));
    button->setText(QApplication::translate("SettingMaker", "Save", Q_NULLPTR));




    connect(button, &QAbstractButton::clicked, this, &SettingsMaker::buttonClicked);
}

SettingsMaker::~SettingsMaker()
{
}

void SettingsMaker::buttonClicked(){

    QString setFile = QFileDialog::getSaveFileName(this,tr("Save settings.ini"), "settings.ini",tr("Settings File (settings.ini)"));

    QSettings *mySettings = new QSettings(setFile,QSettings::IniFormat);

    mySettings->beginGroup("main");
    if(defaultlang_val->currentIndex()==0)
    {
        mySettings->setValue("lang",31); //31:ingilizce 125:türkçe 25:çince
    }else if(defaultlang_val->currentIndex()==1)
    {
         mySettings->setValue("lang",125);
    }else{
        mySettings->setValue("lang",25);
    }
    mySettings->setValue("actype",actype_val->currentIndex());
    mySettings->setValue("mindiff",0);
    mySettings->setValue("hourdiff",0);
    mySettings->setValue("mediaplayertype",mplayertype_val->currentIndex()); //0:none 1:Kodi Player 2:Apple TV
    mySettings->setValue("tvtype",tvtype_val->currentIndex());
    mySettings->setValue("playstation",pstation->isChecked());
    mySettings->setValue("dockingstation",dstation->isChecked());
    mySettings->setValue("twodoor",twodoor->isChecked());
    mySettings->setValue("regrigerator",regrigerator->isChecked());
    mySettings->setValue("radio",radio->isChecked());
    mySettings->setValue("sunroof",sunroof->isChecked());
    mySettings->setValue("espresso",espresso->isChecked());
    mySettings->setValue("bar",bar->isChecked());
    mySettings->setValue("ceilingscreen",cscreen->isChecked());
    mySettings->setValue("safebox",sbox->isChecked());
    mySettings->setValue("dvdplayer",dvd->isChecked());
    mySettings->setValue("curtains",curtains->isChecked());
    mySettings->setValue("auto_connect",true);
    mySettings->setValue("auto_connect_timeout",5000);
    mySettings->setValue("demo_mode",demo->isChecked());
    mySettings->setValue("intro",intro->isChecked());
    mySettings->endGroup();

    mySettings->beginGroup("media");
    mySettings->setValue("url","ws://192.168.1.38:9090");
    mySettings->setValue("amp",amp->isChecked());
    mySettings->endGroup();

    mySettings->beginGroup("serial");
    mySettings->setValue("baud_rate", 3 );
    mySettings->setValue("port_name", 3 );
    mySettings->setValue("databits",8);
    mySettings->setValue("parity",0);
    mySettings->setValue("stopbits",1);
    mySettings->setValue("flowcontrol",0);
    mySettings->endGroup();


    mySettings->beginGroup("seatone");
    mySettings->setValue("heating", heating1->isChecked() );
    mySettings->setValue("cooling", cooling1->isChecked() );
    mySettings->setValue("massage", massage1->isChecked() );
    mySettings->setValue("thigh", thigh1->isChecked() );
    mySettings->setValue("drawer", drawer1->isChecked() );
    mySettings->endGroup();


    mySettings->beginGroup("seattwo");
    mySettings->setValue("heating", heating2->isChecked() );
    mySettings->setValue("cooling", cooling2->isChecked() );
    mySettings->setValue("massage", massage2->isChecked() );
    mySettings->setValue("thigh", thigh2->isChecked() );
    mySettings->setValue("drawer", drawer2->isChecked() );
    mySettings->endGroup();

    mySettings->beginGroup("seatthree");
    mySettings->setValue("heating", heating3->isChecked() );
    mySettings->setValue("cooling", cooling3->isChecked() );
    mySettings->setValue("massage", massage3->isChecked() );
    mySettings->setValue("thigh", thigh3->isChecked() );
    mySettings->setValue("drawer", drawer3->isChecked() );
    mySettings->endGroup();

    mySettings->beginGroup("seatfour");
    mySettings->setValue("heating", heating4->isChecked() );
    mySettings->setValue("cooling", cooling4->isChecked() );
    mySettings->setValue("massage", massage4->isChecked() );
    mySettings->setValue("thigh", thigh4->isChecked() );
    mySettings->setValue("drawer", drawer4->isChecked() );
    mySettings->endGroup();

    mySettings->beginGroup("lights");
    mySettings->setValue("mem1_ceiling","#FFFFFF");
    mySettings->setValue("mem2_ceiling","#FFFFFF");
    mySettings->setValue("mem3_ceiling","#FFFFFF");
    mySettings->setValue("mem1_side","#FFFFFF");
    mySettings->setValue("mem2_side","#FFFFFF");
    mySettings->setValue("mem3_side","#FFFFFF");
    mySettings->setValue("mem1_inside","#FFFFFF");
    mySettings->setValue("mem2_inside","#FFFFFF");
    mySettings->setValue("mem3_inside","#FFFFFF");
    mySettings->setValue("white","#FFFFFF");
    mySettings->setValue("sunlight","#FF9B2E");
    mySettings->setValue("sidelight",sidelights->isChecked());
    mySettings->endGroup();

    mySettings->beginGroup("logging");
    mySettings->setValue("fileName", "dizaynvip.log");
    mySettings->setValue("maxSize", 1024);
    mySettings->setValue("maxBackups", 2);
    mySettings->setValue("msgFormat", "{timestamp} {type} {msg}");
    mySettings->setValue("timestampFormat", "yyyy-MM-dd hh:mm:ss.zzz");
    mySettings->setValue("minLevel", 0);
    mySettings->endGroup();

    mySettings->beginGroup("update");
    mySettings->setValue("password", "password");
    mySettings->setValue("update_server", "server.com");
    mySettings->setValue("username", "username");
    mySettings->setValue("version", "1.0");
    mySettings->endGroup();

    qDebug()<<"Config file saved to: " + setFile + ".";

}
