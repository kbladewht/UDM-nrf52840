#include "kb_nrf_keyboard.h"
#include "ble_service.h"
#include "kb_nrf_print.h"

bool kb_send_report(report_keyboard_t *report) {
    //kb_nrf_print("report %x", report->raw);

  //  uint64_t result =0;
  //  for (uint8_t i = 0; i < 8; i++) {
   //    result |= report->raw[i] << (8 * i);
   // }
   // kb_nrf_print("16xnumber is  %X", result);
    keys_send(8, report->raw);
   
    return true;
}
