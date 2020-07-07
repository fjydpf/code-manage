/********************************************************************************
** Form generated from reading UI file 'frmmain.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMMAIN_H
#define UI_FRMMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmMain
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *lay1;
    QLabel *labVideo1;
    QLabel *labVideo2;
    QHBoxLayout *lay2;
    QLabel *labVideo3;
    QLabel *labImage;
    QHBoxLayout *lay3;
    QLineEdit *txtUrl;
    QPushButton *btnOpen;
    QCheckBox *ckAll;
    QComboBox *cboxVideo;
    QPushButton *btnGetImage;

    void setupUi(QWidget *frmMain)
    {
        if (frmMain->objectName().isEmpty())
            frmMain->setObjectName(QString::fromUtf8("frmMain"));
        frmMain->resize(657, 410);
        verticalLayout = new QVBoxLayout(frmMain);
        verticalLayout->setSpacing(5);
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lay1 = new QHBoxLayout();
        lay1->setSpacing(5);
        lay1->setObjectName(QString::fromUtf8("lay1"));
        labVideo1 = new QLabel(frmMain);
        labVideo1->setObjectName(QString::fromUtf8("labVideo1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labVideo1->sizePolicy().hasHeightForWidth());
        labVideo1->setSizePolicy(sizePolicy);
        labVideo1->setFrameShape(QFrame::Box);
        labVideo1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        lay1->addWidget(labVideo1);

        labVideo2 = new QLabel(frmMain);
        labVideo2->setObjectName(QString::fromUtf8("labVideo2"));
        sizePolicy.setHeightForWidth(labVideo2->sizePolicy().hasHeightForWidth());
        labVideo2->setSizePolicy(sizePolicy);
        labVideo2->setFrameShape(QFrame::Box);

        lay1->addWidget(labVideo2);


        verticalLayout->addLayout(lay1);

        lay2 = new QHBoxLayout();
        lay2->setSpacing(5);
        lay2->setObjectName(QString::fromUtf8("lay2"));
        labVideo3 = new QLabel(frmMain);
        labVideo3->setObjectName(QString::fromUtf8("labVideo3"));
        sizePolicy.setHeightForWidth(labVideo3->sizePolicy().hasHeightForWidth());
        labVideo3->setSizePolicy(sizePolicy);
        labVideo3->setFrameShape(QFrame::Box);

        lay2->addWidget(labVideo3);

        labImage = new QLabel(frmMain);
        labImage->setObjectName(QString::fromUtf8("labImage"));
        sizePolicy.setHeightForWidth(labImage->sizePolicy().hasHeightForWidth());
        labImage->setSizePolicy(sizePolicy);
        labImage->setFrameShape(QFrame::Box);

        lay2->addWidget(labImage);


        verticalLayout->addLayout(lay2);

        lay3 = new QHBoxLayout();
        lay3->setSpacing(5);
        lay3->setObjectName(QString::fromUtf8("lay3"));
        txtUrl = new QLineEdit(frmMain);
        txtUrl->setObjectName(QString::fromUtf8("txtUrl"));

        lay3->addWidget(txtUrl);

        btnOpen = new QPushButton(frmMain);
        btnOpen->setObjectName(QString::fromUtf8("btnOpen"));
        btnOpen->setCursor(QCursor(Qt::PointingHandCursor));

        lay3->addWidget(btnOpen);

        ckAll = new QCheckBox(frmMain);
        ckAll->setObjectName(QString::fromUtf8("ckAll"));

        lay3->addWidget(ckAll);

        cboxVideo = new QComboBox(frmMain);
        cboxVideo->setObjectName(QString::fromUtf8("cboxVideo"));

        lay3->addWidget(cboxVideo);

        btnGetImage = new QPushButton(frmMain);
        btnGetImage->setObjectName(QString::fromUtf8("btnGetImage"));
        btnGetImage->setCursor(QCursor(Qt::PointingHandCursor));

        lay3->addWidget(btnGetImage);


        verticalLayout->addLayout(lay3);

        QWidget::setTabOrder(btnOpen, txtUrl);
        QWidget::setTabOrder(txtUrl, ckAll);
        QWidget::setTabOrder(ckAll, cboxVideo);
        QWidget::setTabOrder(cboxVideo, btnGetImage);

        retranslateUi(frmMain);

        QMetaObject::connectSlotsByName(frmMain);
    } // setupUi

    void retranslateUi(QWidget *frmMain)
    {
        frmMain->setWindowTitle(QApplication::translate("frmMain", "RTSP", 0, QApplication::UnicodeUTF8));
        labVideo1->setText(QString());
        labVideo2->setText(QString());
        labVideo3->setText(QString());
        labImage->setText(QString());
        txtUrl->setText(QApplication::translate("frmMain", "rtsp://admin:greenlive123@192.168.1.64:554/h264/ch1/sub/av_stream", 0, QApplication::UnicodeUTF8));
        btnOpen->setText(QApplication::translate("frmMain", "\346\211\223\345\274\200", 0, QApplication::UnicodeUTF8));
        ckAll->setText(QApplication::translate("frmMain", "\344\270\211\351\200\232\351\201\223\345\220\214\346\255\245", 0, QApplication::UnicodeUTF8));
        cboxVideo->clear();
        cboxVideo->insertItems(0, QStringList()
         << QApplication::translate("frmMain", "\351\200\232\351\201\2231", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("frmMain", "\351\200\232\351\201\2232", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("frmMain", "\351\200\232\351\201\2233", 0, QApplication::UnicodeUTF8)
        );
        btnGetImage->setText(QApplication::translate("frmMain", "\346\210\252\345\233\276", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class frmMain: public Ui_frmMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMMAIN_H
