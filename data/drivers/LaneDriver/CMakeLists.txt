INCLUDE(../../../cmake/macros.cmake)

# The data for the RS clone of the ubiquitous USR robot module.

SET(ROBOT_SUBDIRS 
)

ROBOT_DATA(NAME LaneDriver
           FILES LaneDriver.xml default.xml readme.txt
           SUBDIRS ${ROBOT_SUBDIRS} PATTERNS *.xml logo.rgb *.png *.jpg)
