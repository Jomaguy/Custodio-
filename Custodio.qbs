import qbs.FileInfo

QtApplication {
    Depends { name: "Qt.widgets" }

    cpp.defines: [
        // You can make your code fail to compile if it uses deprecated APIs.
        // In order to do so, uncomment the following line.
        //"QT_DISABLE_DEPRECATED_BEFORE=0x060000" // disables all the APIs deprecated before Qt 6.0.0
    ]

    files: [
        "Custodio/folderscan.cpp",
        "Custodio/folderscan.h",
        "Custodio/folderscan.ui",
        "Custodio/fullscan.cpp",
        "Custodio/fullscan.h",
        "Custodio/fullscan.ui",
        "Custodio/historypage.cpp",
        "Custodio/historypage.h",
        "Custodio/historypage.ui",
        "Custodio/main.cpp",
        "Custodio/mainwindow.cpp",
        "Custodio/mainwindow.h",
        "Custodio/mainwindow.ui",
        "Custodio/menu.cpp",
        "Custodio/menu.h",
        "Custodio/menu.ui",
        "Custodio/scanpage.cpp",
        "Custodio/scanpage.h",
        "Custodio/scanpage.ui",
        "Custodio/scheduledscan.cpp",
        "Custodio/scheduledscan.h",
        "Custodio/scheduledscan.ui",
        "folderscan.cpp",
        "folderscan.h",
        "folderscan.ui",
        "fullscan.cpp",
        "fullscan.h",
        "fullscan.ui",
        "historypage.cpp",
        "historypage.h",
        "historypage.ui",
        "main.cpp",
        "mainwindow.cpp",
        "mainwindow.h",
        "mainwindow.ui",
        "menu.cpp",
        "menu.h",
        "menu.ui",
        "scanpage.cpp",
        "scanpage.h",
        "scanpage.ui",
        "scheduledscan.cpp",
        "scheduledscan.h",
        "scheduledscan.ui",
    ]

    install: true
    installDir: qbs.targetOS.contains("qnx") ? FileInfo.joinPaths("/tmp", name, "bin") : base
}
