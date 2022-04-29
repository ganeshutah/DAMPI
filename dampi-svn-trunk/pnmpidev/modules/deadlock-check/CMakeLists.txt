# TODO Martin please add the copyright statment of your choice, as well as 
#      a reference to the license or license file!
#
# @authors Tobias Hilbrich, Martin Schulz
# @date 07-07-2009

#Use macro to: add target for module, version it, install it, patch it
PNMPI_MAC_ADD_MODULE (deadlock-check "deadlock-check.cxx")

#Add header to intermediate include dir
CONFIGURE_FILE(deadlock-check.h "${INCLUDE_OUTPUT_PATH}/deadlock-check.h" COPYONLY)
