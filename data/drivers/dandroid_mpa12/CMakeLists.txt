INCLUDE(../../../cmake/macros.cmake)

# The data for the MPA12 clone of the ubiquitous dandroid robot module.

SET(ROBOT_SUBDIRS 0 mpa12-murasama tracks)

ROBOT_DATA(NAME dandroid_mpa12
           FILES dandroid_mpa12.xml default.xml logo.rgb readme.txt
           SUBDIRS ${ROBOT_SUBDIRS} PATTERNS *.xml logo.rgb *.png *.jpg *.csv)
