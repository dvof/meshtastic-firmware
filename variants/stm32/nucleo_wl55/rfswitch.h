static const RADIOLIB_PIN_TYPE rfswitch_pins[5] = {PC4, PC5, PC3, RADIOLIB_NC, RADIOLIB_NC};

static const Module::RfSwitchMode_t rfswitch_table[4] = {
    { STM32WLx::MODE_IDLE,   { LOW, LOW, LOW } },
    { STM32WLx::MODE_RX,     { HIGH, LOW, LOW } },
    { STM32WLx::MODE_TX_HP,  { LOW, HIGH, LOW } },
    END_OF_MODE_TABLE
};
