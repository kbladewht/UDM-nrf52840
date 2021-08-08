
#include "ble_service.h"

#include "app_timer.h"
#include "log/kb_nrf_print.h"
#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "nrf_log_default_backends.h"
#include "nrf_pwr_mgmt.h"

#include "kb_nrf_driver.h"
#include "keyboard.h"

void idle_state_handle(void) {
  app_sched_execute();
  if (NRF_LOG_PROCESS() == false) {
    nrf_pwr_mgmt_run();
  }
}

static void keyboard_scan_handler(void *p_context) {
  //kb_nrf_print("scaning");
  keyboard_task();
}

APP_TIMER_DEF(m_keyboard_scan_timer_id);

void init_and_start_scan_timer(void) {
  ret_code_t err_code = app_timer_create(&m_keyboard_scan_timer_id,
      APP_TIMER_MODE_REPEATED,
      keyboard_scan_handler);
  APP_ERROR_CHECK(err_code);

  err_code = app_timer_start(m_keyboard_scan_timer_id, APP_TIMER_TICKS(10), NULL);
  APP_ERROR_CHECK(err_code);
}

void timers_init(void) {
  ret_code_t err_code;

  err_code = app_timer_init();
  APP_ERROR_CHECK(err_code);
}

int main(void) {

  bool erase_bonds;

  // Initialize.
  log_init();
  timers_init();

  power_management_init();

  ble_stack_init();
  scheduler_init();
  gap_params_init();
  gatt_init();
  advertising_init();
  services_init();

  conn_params_init();
  buffer_init();
  peer_manager_init();

   // Start execution.
    kb_nrf_print("HID Keyboard example started.");

  timers_start();

  advertising_start(erase_bonds);

  keyboard_init();
  host_set_driver(&kb_nrf_driver);

  init_and_start_scan_timer();

  // Enter main loop.
  for (;;) {
    idle_state_handle();
  }
}