#include "testdll.h"
#include "stdio.h"
#include "memory.h"
#include <QMessageBox>

#ifdef PLATFORM_WIN32

#include <qmfcapp.h>
#include <qwinwidget.h>
#include "windows.h"

#include <QDir>
#include <QStringList>
#include <QApplication>

#include <QtCore\qplugin.h>
Q_IMPORT_PLUGIN(QWindowsIntegrationPlugin)

BOOL WINAPI DllMain( HINSTANCE hInstance, DWORD dwReason, LPVOID   )
{
    QString BKE_CURRENT_DIR = QDir::currentPath();
    QStringList  libpath;
    libpath << BKE_CURRENT_DIR+QString::fromLocal8Bit("/plugins/platforms");
    libpath << BKE_CURRENT_DIR <<BKE_CURRENT_DIR+QString::fromLocal8Bit("/plugins/imageformats");
    libpath << BKE_CURRENT_DIR+QString::fromLocal8Bit("/plugins");
    libpath << QApplication::libraryPaths();
    QApplication::setLibraryPaths(libpath) ;

    static bool ownApplication = FALSE;

    if ( dwReason == DLL_PROCESS_ATTACH )
    ownApplication = QMfcApp::pluginInstance( hInstance );
    if ( dwReason == DLL_PROCESS_DETACH && ownApplication )
    delete qApp;

    return TRUE;
}
#endif


int    testAdd(ParamASt  &a, ParamBSt   &b)
{
    char *sdsd = "1223213213";
    memcpy(b.a, sdsd,10);
    b.e = 2;
    return 1;
}

int  testint(int a, int  b)
{
    char pbuffer[256];
    sprintf(pbuffer, "%d,%d",  a,  b);



    int result = a + b;
    return result;
}
