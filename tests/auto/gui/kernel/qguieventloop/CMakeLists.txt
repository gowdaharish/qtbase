# Generated from qguieventloop.pro.

#####################################################################
## tst_qguieventloop Test:
#####################################################################

add_qt_test(tst_qguieventloop
    SOURCES
        ../../../corelib/kernel/qeventloop/tst_qeventloop.cpp
    PUBLIC_LIBRARIES
        Qt::CorePrivate
        Qt::Gui
        Qt::Network
)

## Scopes:
#####################################################################

extend_target(tst_qguieventloop CONDITION WIN32 AND NOT WINRT
    PUBLIC_LIBRARIES
        user32
)

extend_target(tst_qguieventloop CONDITION QT_FEATURE_glib
    DEFINES
        HAVE_GLIB
)
