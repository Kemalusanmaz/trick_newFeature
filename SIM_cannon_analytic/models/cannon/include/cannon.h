/*************************************************************************
PURPOSE: (Represent the state and initial conditions of a cannonball)
**************************************************************************/
#ifndef CANNON_H
#define CANNON_H
#include "../../failure/include/failure.h"


typedef struct {

    double vel0[2] ;    /* *i m Init velocity of cannonball */
    double pos0[2] ;    /* *i m Init position of cannonball */
    double init_speed ; /* *i m/s Init barrel speed */
    double init_angle ; /* *i rad Angle of cannon */


    double acc[2] ;     /* m/s2 xy-acceleration  */
    double vel[2] ;     /* m/s xy-velocity */
    double pos[2] ;     /* m xy-position */

    double time;        /* s Model time */

    int impact ;        /* -- Has impact occured? */
    double impactTime;  /* s Time of Impact */


} CANNON ;


#ifdef __cplusplus
extern "C" {
#endif
    int cannon_default_data(CANNON*,FAILURE*) ;
    int cannon_init(CANNON*,FAILURE*) ;
    int cannon_analytic(CANNON*, FAILURE*) ;
    int cannon_reset(CANNON*,FAILURE*) ;
    int cannon_shutdown(CANNON*) ;
#ifdef __cplusplus
}
#endif

#endif
