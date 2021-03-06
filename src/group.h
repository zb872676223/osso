////////////////////////////////////////
//  File      : group.h               //
//  Written by: g_cigala@virgilio.it  //
//  Copyright : GPL                   //
////////////////////////////////////////

#ifndef GROUP_H
#define GROUP_H

#include "defs.h"
#include "extension.h"

///////////////////////////////////////

class Group : public QGroupBox
{
    Q_OBJECT

public:
    Group(Extension *, QWidget * parent = 0);
    ~Group();
    void init();
    QGridLayout * get_layout();
    QStringList get_flags() const;

private slots:

private:
    QGridLayout *layout;
    Extension *ext;

};
#endif
