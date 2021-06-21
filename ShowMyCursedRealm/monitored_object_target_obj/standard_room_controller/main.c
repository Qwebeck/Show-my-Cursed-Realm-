#include <activity.h>
#include <po_hi_task.h>
#include <po_hi_main.h>
#include <drivers/po_hi_driver_sockets.h>
#include <po_hi_time.h>
/*****************************************************/
/*  This file was automatically generated by Ocarina */
/*  Do NOT hand-modify this file, as your            */
/*  changes will be lost when you re-run Ocarina     */
/*****************************************************/

/*!
 * \fn __PO_HI_MAIN_TYPE __PO_HI_MAIN_NAME (void)
 * \brief Main function executed by the system
 *
 * Full function name and return types are available  in the PolyORB-HI-C 
 * runtime header files.
 */
__PO_HI_MAIN_TYPE __PO_HI_MAIN_NAME (void)
{
  extern void adainit (void);
  
/*!
 * \var period
 * \brief Variable for task period
 *
 * This variable is used to store the valueof the period of a task when we 
 * create it. The value put in the variable is set according to AADL model 
 * description
 */
  __po_hi_time_t period;

  __po_hi_initialize_early ();
  
/*!
 * Initialize the runtime
 */
  __po_hi_initialize ();
  __po_hi_driver_sockets_init (0);
  adainit ();
  
/*!
 * Store the period time for task the_video_thread
 */
  __po_hi_milliseconds (&(period), 30);
  
/*!
 * \brief Making Periodic Task the_video_thread
 *
 * Make a periodic task according to AADL model requirements. The first 
 * parameter is the task identifier defined in deployment.h 
 * (standard_room_controller_the_video_thread_k) the second is the period 
 * defined in the AADL model. Third is the task priority ( 4), fourth is the
 *  stack size ( 0 bytes) and last is the subprogram executed by the task
 */
  __po_hi_create_periodic_task (standard_room_controller_the_video_thread_k, &(period), 4, 0, 0, the_video_thread_job);
  
/*!
 * Store the period time for task the_door_sensor_thread
 */
  __po_hi_milliseconds (&(period), 30);
  
/*!
 * \brief Making Periodic Task the_door_sensor_thread
 *
 * Make a periodic task according to AADL model requirements. The first 
 * parameter is the task identifier defined in deployment.h 
 * (standard_room_controller_the_door_sensor_thread_k) the second is the 
 * period defined in the AADL model. Third is the task priority ( 7), fourth
 *  is the stack size ( 0 bytes) and last is the subprogram executed by the 
 * task
 */
  __po_hi_create_periodic_task (standard_room_controller_the_door_sensor_thread_k, &(period), 7, 0, 0, the_door_sensor_thread_job);
  
/*!
 * Store the period time for task the_window_sensor_thread
 */
  __po_hi_milliseconds (&(period), 30);
  
/*!
 * \brief Making Periodic Task the_window_sensor_thread
 *
 * Make a periodic task according to AADL model requirements. The first 
 * parameter is the task identifier defined in deployment.h 
 * (standard_room_controller_the_window_sensor_thread_k) the second is the 
 * period defined in the AADL model. Third is the task priority ( 8), fourth
 *  is the stack size ( 0 bytes) and last is the subprogram executed by the 
 * task
 */
  __po_hi_create_periodic_task (standard_room_controller_the_window_sensor_thread_k, &(period), 8, 0, 0, the_window_sensor_thread_job);
  
/*!
 * Store the period time for task the_pin_device_thread
 */
  __po_hi_milliseconds (&(period), 30);
  
/*!
 * \brief Making Periodic Task the_pin_device_thread
 *
 * Make a periodic task according to AADL model requirements. The first 
 * parameter is the task identifier defined in deployment.h 
 * (standard_room_controller_the_pin_device_thread_k) the second is the 
 * period defined in the AADL model. Third is the task priority ( 6), fourth
 *  is the stack size ( 0 bytes) and last is the subprogram executed by the 
 * task
 */
  __po_hi_create_periodic_task (standard_room_controller_the_pin_device_thread_k, &(period), 6, 0, 0, the_pin_device_thread_job);
  
/*!
 * Store the period time for task the_movement_sensor_thread
 */
  __po_hi_milliseconds (&(period), 30);
  
/*!
 * \brief Making Periodic Task the_movement_sensor_thread
 *
 * Make a periodic task according to AADL model requirements. The first 
 * parameter is the task identifier defined in deployment.h 
 * (standard_room_controller_the_movement_sensor_thread_k) the second is the
 *  period defined in the AADL model. Third is the task priority ( 5), 
 * fourth is the stack size ( 0 bytes) and last is the subprogram executed 
 * by the task
 */
  __po_hi_create_periodic_task (standard_room_controller_the_movement_sensor_thread_k, &(period), 5, 0, 0, the_movement_sensor_thread_job);
  
/*!
 * Store the period time for task the_access_control_thread
 */
  __po_hi_milliseconds (&(period), 30);
  
/*!
 * \brief Making Periodic Task the_access_control_thread
 *
 * Make a periodic task according to AADL model requirements. The first 
 * parameter is the task identifier defined in deployment.h 
 * (standard_room_controller_the_access_control_thread_k) the second is the 
 * period defined in the AADL model. Third is the task priority ( 10), 
 * fourth is the stack size ( 0 bytes) and last is the subprogram executed 
 * by the task
 */
  __po_hi_create_periodic_task (standard_room_controller_the_access_control_thread_k, &(period), 10, 0, 0, the_access_control_thread_job);
  
/*!
 * Waiting for other tasks initialization
 */
  __po_hi_wait_initialization ();
  
/*!
 * Used to switch the main task to sleep all the time
 */
  __po_hi_wait_for_tasks ();
  
/*!
 * Return Statement
 */
  return (__PO_HI_MAIN_RETURN);
}


