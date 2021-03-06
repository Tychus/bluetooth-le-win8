// See http://processors.wiki.ti.com/images/a/a8/BLE_SensorTag_GATT_Server.pdf
// DEFINE_CHARACTERISTIC_LONG(0xf0000000, 0x0451, 0x4000, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, "")
DEFINE_CHARACTERISTIC_LONG(0xf000aa01, 0x0451, 0x4000, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, IR_Temperature_Data)
DEFINE_CHARACTERISTIC_LONG(0xf000aa02, 0x0451, 0x4000, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, IR_Temperature_Config)
DEFINE_CHARACTERISTIC_LONG(0xf000aa03, 0x0451, 0x4000, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, IR_Temperature_Period)
DEFINE_CHARACTERISTIC_LONG(0xf000AA11, 0x0451, 0x4000, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, Accelerometer_Data)
DEFINE_CHARACTERISTIC_LONG(0xf000aa12, 0x0451, 0x4000, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, Accelerometer_Config)
DEFINE_CHARACTERISTIC_LONG(0xf000aa13, 0x0451, 0x4000, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, Accelerometer_Period)
DEFINE_CHARACTERISTIC_LONG(0xf000aa21, 0x0451, 0x4000, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, Humidity_Data)
DEFINE_CHARACTERISTIC_LONG(0xf000aa22, 0x0451, 0x4000, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, Humidity_Config)
DEFINE_CHARACTERISTIC_LONG(0xf000aa23, 0x0451, 0x4000, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, Humidity_Period)
DEFINE_CHARACTERISTIC_LONG(0xf000aa31, 0x0451, 0x4000, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, Magnetometer_Data)
DEFINE_CHARACTERISTIC_LONG(0xf000aa32, 0x0451, 0x4000, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, Magnetometer_Config)
DEFINE_CHARACTERISTIC_LONG(0xf000aa33, 0x0451, 0x4000, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, Magnetometer_Period)
DEFINE_CHARACTERISTIC_LONG(0xf000aa41, 0x0451, 0x4000, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, Barometer_Data)
DEFINE_CHARACTERISTIC_LONG(0xf000aa42, 0x0451, 0x4000, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, Barometer_Configuration)
DEFINE_CHARACTERISTIC_LONG(0xf000aa44, 0x0451, 0x4000, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, Barometer_Period)
DEFINE_CHARACTERISTIC_LONG(0xf000aa43, 0x0451, 0x4000, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, Barometer_Calibration)
DEFINE_CHARACTERISTIC_LONG(0xf000aa51, 0x0451, 0x4000, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, Gyroscope_Data)
DEFINE_CHARACTERISTIC_LONG(0xf000aa52, 0x0451, 0x4000, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, Gyroscope_Config)
DEFINE_CHARACTERISTIC_LONG(0xf000aa53, 0x0451, 0x4000, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, Gyroscope_Period)
DEFINE_CHARACTERISTIC_LONG(0xf000aa61, 0x0451, 0x4000, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, TestData)
DEFINE_CHARACTERISTIC_LONG(0xf000aa61, 0x0451, 0x4000, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, TestConfig)
DEFINE_CHARACTERISTIC_LONG(0xf000ccc1, 0x0451, 0x4000, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, Connection_Parameters)
DEFINE_CHARACTERISTIC_LONG(0xf000ccc2, 0x0451, 0x4000, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, Request_Connection_Parameters)
DEFINE_CHARACTERISTIC_LONG(0xf000ccc3, 0x0451, 0x4000, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, Disconnect_request)
DEFINE_CHARACTERISTIC_LONG(0xf000ffc1, 0x0451, 0x4000, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, OADImage_Identify)
DEFINE_CHARACTERISTIC_LONG(0xf000ffc2, 0x0451, 0x4000, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, OADImage_Block)
