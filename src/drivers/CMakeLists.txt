INCLUDE(../../cmake/macros.cmake)

# Official robots.
SD_ADD_SUBDIRECTORY(human)
SD_ADD_SUBDIRECTORY(dandroid)
SD_ADD_SUBDIRECTORY(kilo2008)
SD_ADD_SUBDIRECTORY(networkhuman)
SD_ADD_SUBDIRECTORY(simplix)
SD_ADD_SUBDIRECTORY(usr)
SD_ADD_SUBDIRECTORY(LaneDriver)
SD_ADD_SUBDIRECTORY(DeepDriver)

# Work-in-progress / unofficial robots.
IF(NOT OPTION_OFFICIAL_ONLY)

  # Work-in-progress.
  SD_ADD_SUBDIRECTORY(shadow)

  IF(OPTION_3RDPARTY_SQLITE3)
  	SD_ADD_SUBDIRECTORY(replay)
  ENDIF()

  # Obsolete (as robot samples).
  #SD_ADD_SUBDIRECTORY(bt)
  #SD_ADD_SUBDIRECTORY(hymie)
  #SD_ADD_SUBDIRECTORY(K1999)

ENDIF()
