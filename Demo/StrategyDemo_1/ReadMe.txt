========================================================================
                     Readme.Txt - Strategy Classes
========================================================================

This file ( Readme.txt ) contains the following

1. About this application
2. File List

1. About this application
=========================

This is a sample application accompanying my article "Applying Strategy Pattern in C++ 
Applications"

In this application, the Strategy pattern is explained using a simple "Progress Indicator" 
example.  Progress Indicators are used to indicate the progress of a lengthy operation by 
means of a filling.  

Application contains the following classes

a ) CProgressIndicator - Progress indicator class derived from CWnd, playing the role 
of the Context as described in the article.

b ) CFiller - Abstract filler class, playing the role of the Strategy. 

c ) CLToRFiller - Concrete Strategy, implementing left to right filling algorithm.

d ) CRToLFiller - Concrete Strategy, implementing right to left filling algorithm.

This application is developed using Visual C++ 5.0.

This file contains a summary of what you will find in each of the files that
make up your Strategy application.

2. File List
============

/////////////////////////////////////////////////////////////////////////////

Progress Indicator and Filler files:

ProgInd.h, ProgInd.cpp - Progress indicator class definition and implementation.

Filler.h, Filler.cpp - Filler class definition and implementation.

/////////////////////////////////////////////////////////////////////////////

Application files:

Strategy.h
    This is the main header file for the application.  It includes other
    project specific headers (including Resource.h) and declares the
    CStrategyApp application class.

Strategy.cpp
    This is the main application source file that contains the application
    class CStrategyApp.

Strategy.rc
    This is a listing of all of the Microsoft Windows resources that the
    program uses.  It includes the icons, bitmaps, and cursors that are stored
    in the RES subdirectory.  This file can be directly edited in Microsoft
	Developer Studio.

res\Strategy.ico
    This is an icon file, which is used as the application's icon.  This
    icon is included by the main resource file Strategy.rc.

res\Strategy.rc2
    This file contains resources that are not edited by Microsoft 
	Developer Studio.  You should place all resources not
	editable by the resource editor in this file.

Strategy.clw
    This file contains information used by ClassWizard to edit existing
    classes or add new classes.  ClassWizard also uses this file to store
    information needed to create and edit message maps and dialog data
    maps and to create prototype member functions.


/////////////////////////////////////////////////////////////////////////////

AppWizard creates one dialog class:

StrategyDlg.h, StrategyDlg.cpp - the dialog
    These files contain your CStrategyDlg class.  This class defines
    the behavior of your application's main dialog.  The dialog's
    template is in Strategy.rc, which can be edited in Microsoft
	Developer Studio.


/////////////////////////////////////////////////////////////////////////////
Other standard files:

StdAfx.h, StdAfx.cpp
    These files are used to build a precompiled header (PCH) file
    named Strategy.pch and a precompiled types file named StdAfx.obj.

Resource.h
    This is the standard header file, which defines new resource IDs.
    Microsoft Developer Studio reads and updates this file.

