# Platform and MCU
PLATFORM = CHIBIOS
MCU = STM32F042

# Bootloader selection
BOOTLOADER = stm32-dfu

# Build Options
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no        # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = yes          # Enable USB N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
AUDIO_ENABLE = no          # Audio output

# RGB Matrix
RGB_MATRIX_ENABLE = yes     # Enable RGB matrix effects
RGB_MATRIX_DRIVER = ws2812  # Use the standard WS2812 driver

# EEPROM
EEPROM_DRIVER = wear_leveling
WEAR_LEVELING_DRIVER = embedded_flash

# Other features
CUSTOM_MATRIX = lite

# Reduce size
LTO_ENABLE = yes           # Link Time Optimization, reduces final size
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
MOUSEKEY_ENABLE = no
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no
MAGIC_ENABLE = no
MUSIC_ENABLE = no
