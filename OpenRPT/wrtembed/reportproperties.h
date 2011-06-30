/*
 * Copyright (c) 2002-2006 by OpenMFG, LLC
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * If you do not wish to be bound by the terms of the GNU General Public
 * License, DO NOT USE THIS SOFTWARE.  Please contact OpenMFG, LLC at
 * info@openmfg.com for details on how to purchase a commercial license.
 */

#ifndef REPORTPROPERTIES_H
#define REPORTPROPERTIES_H

class QuerySourceList;

#include <QtGui/QDialog>

#include "ui_reportproperties.h"

class ReportProperties : public QDialog, public Ui::ReportProperties
{
    Q_OBJECT

public:
    ReportProperties(QWidget* parent = 0, const char* name = 0, bool modal = false, Qt::WFlags fl = 0);
    ~ReportProperties();

public slots:
    virtual void init();
    virtual QString getReportDescription();
    virtual QString getReportName();
    virtual QString getReportTitle();
    virtual void setReportDescription( QString str );
    virtual void setReportName( QString str );
    virtual void setReportTitle( QString str );
    virtual int getWatermarkOpacity();
    virtual void setWatermarkOpacity( int i );
    virtual void setWmFont( QFont fnt );
    virtual QFont getWmFont();
    virtual void SetUseBestWMFont( bool b );
    virtual bool getUseBestWmFont();
    virtual bool isWmTextStatic();
    virtual void setWmTextStatic( bool b );
    virtual QString getWmText();
    virtual void setWmText( QString str );
    virtual void setWmColumn( QString str );
    virtual QString getWmColumn();
    virtual void setWmQuery( QuerySourceList * qsl, QString query );
    virtual QString getWmQuery();
    virtual QString getBgColumn();
    virtual void setBgColumn( QString str );
    virtual QString getBgQuery();
    virtual void setBgQuery( QuerySourceList * qsl, QString query );
    virtual int getBgOpacity();
    virtual void setBgOpacity( int i );
    virtual bool isBgEnabled();
    virtual void setBgEnabled( bool b );
    virtual bool isBgStatic();
    virtual void setBgStatic( bool b );
    virtual QString getBgResizeMode();
    virtual void setBgResizeMode( QString m );
    virtual QString getBgImageData();
    virtual void setBgImageData( QString dat );
    virtual void setBgAlign( int f );
    virtual int getBgAlign();
    virtual int getBgBoundsX();
    virtual int getBgBoundsY();
    virtual int getBgBoundsWidth();
    virtual int getBgBoundsHeight();
    virtual void setBgBoundsX( int i );
    virtual void setBgBoundsY( int i );
    virtual void setBgBoundsWidth( int i );
    virtual void setBgBoundsHeight( int i );

protected:
    QString _uudata;

protected slots:
    virtual void languageChange();

    virtual void changeWmFont();
    virtual void sLoadBgImage();


};

#endif // REPORTPROPERTIES_H
