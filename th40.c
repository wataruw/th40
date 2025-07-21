/* Copyright 2025 EPOMAKER
 * Copyright 2025 EPOMAKER <https://github.com/Epomaker>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "quantum.h"
#include "tmk_core/protocol/usb_device_state.h"
#include "tmk_core/protocol/usb_descriptor.h"

typedef enum {
    USB_STATE_UNATTACHED = 0,
    USB_STATE_POWERED,
    USB_STATE_DEFAULT,
    USB_STATE_ADDRESS,
    USB_STATE_CONFIGURED,
    USB_STATE_SUSPENDED
} usb_state_t;

// Empty implementation of required functions

void matrix_io_delay(void) {
}

void matrix_output_select_delay(void) {
}

void matrix_output_unselect_delay(uint8_t line, bool key_pressed) {
}

led_config_t g_led_config = { {
    { 0        , NO_LED   , NO_LED   , NO_LED   , NO_LED   , NO_LED   , NO_LED   , NO_LED   , NO_LED   , NO_LED   , NO_LED   , NO_LED   },
    { NO_LED   , 1        , 2        , 3        , 4        , 5        , 6        , 7        , 8        , 9        , 10       , 11       },
    { 12       , 13       , 14       , 15       , 16       , 17       , 18       , 19       , 20       , 21       , 22       , NO_LED   },
    { 23       , 24       , 25       , 26       , 27       , 28       , 29       , 30       , 31       , 32       , 33       , 34       },
    { 35       , NO_LED   , 36       , 37       , NO_LED   , NO_LED   , 38       , NO_LED   , NO_LED   , NO_LED   , NO_LED   , NO_LED   }
},{
    {  5, 10}, { 24, 10}, { 42, 10}, { 60, 10}, { 78, 10}, { 96, 10}, {114, 10}, {132, 10}, {150, 10}, {168, 10}, {186, 10},
    {  5, 20}, { 27, 20}, { 45, 20}, { 63, 20}, { 81, 20}, { 99, 20}, {117, 20}, {135, 20}, {153, 20}, {171, 20}, {199, 20},
    {  0, 30}, { 18, 30}, { 36, 30}, { 54, 30}, { 72, 30}, { 90, 30}, {108, 30}, {126, 30}, {144, 30}, {162, 30}, {180, 30},
    {  0, 40}, { 18, 40}, { 36, 40}, { 70, 40}, { 99, 40}
}, {
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  // First row
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  // Second row
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  // Third row
    1, 1, 1, 1, 1                      // Fourth row
} };

void matrix_scan_user(void) {
    // Empty implementation
}

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    return false;  // Use default RGB matrix behavior
}

/*void notify_usb_device_state_change_user(struct usb_device_state usb_device_state) {
    // USB state change handling
    if (usb_device_state == USB_DEVICE_STATE_CONFIGURED) {
        rgb_matrix_set_suspend_state(false);
    } else {
        rgb_matrix_set_suspend_state(true);
    }
} */

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}
