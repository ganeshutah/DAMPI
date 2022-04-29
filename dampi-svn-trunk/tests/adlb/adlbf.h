
      ! these must match the values in adlb.h
      integer, parameter ::  ADLB_SUCCESS            =          1
      integer, parameter ::  ADLB_ERROR              =         -1
      integer, parameter ::  ADLB_NO_MORE_WORK       = -999999999
      integer, parameter ::  ADLB_DONE_BY_EXHAUSTION = -999999998
      integer, parameter ::  ADLB_NO_CURRENT_WORK    = -999999997
      integer, parameter ::  ADLB_PUT_REJECTED       = -999999996

      ! for Info_get;  MUST match adlb.h
      integer, parameter ::  ADLB_INFO_MALLOC_HWM             =  1
      integer, parameter ::  ADLB_INFO_AVG_TIME_ON_RQ         =  2
      integer, parameter ::  ADLB_INFO_NPUSHED_FROM_HERE      =  3
      integer, parameter ::  ADLB_INFO_NPUSHED_TO_HERE        =  4
      integer, parameter ::  ADLB_INFO_NREJECTED_PUTS         =  5
      integer, parameter ::  ADLB_INFO_LOOP_TOP_TIME          =  6
      integer, parameter ::  ADLB_INFO_MAX_QMSTAT_TRIP_TIME   =  7
      integer, parameter ::  ADLB_INFO_AVG_QMSTAT_TRIP_TIME   =  8
      integer, parameter ::  ADLB_INFO_NUM_QMS_EXCEED_INT     =  9
      integer, parameter ::  ADLB_INFO_NUM_RESERVES           = 10
      integer, parameter ::  ADLB_INFO_NUM_RESERVES_PUT_ON_RQ = 11
      integer, parameter ::  ADLB_INFO_MAX_WQ_COUNT           = 12

      integer, parameter ::  ADLB_RESERVE_REQUEST_ANY = -1
      integer, parameter ::  ADLB_RESERVE_EOL         = -1
      integer, parameter ::  ADLB_HANDLE_SIZE         =  5

      character(99), parameter ::  ADLB_VERSION_TEXT =                        &
     &  "ADLBM413 - 02 Dec 2009"
      character(4) , parameter ::  ADLB_VERSION = 'M413'
