/*
 * Filename: simple_peripheral_bidirectional_audio.h
 *
 * Description: This is the simple_peripheral example modified to send
 * audio data over BLE.
 *
 *
 * Copyright (C) 2016 Texas Instruments Incorporated - http://www.ti.com/
 *
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

/*********************************************************************
 * INCLUDES
 */

/*********************************************************************
 * CONSTANTS
 */

/*********************************************************************
 * TYPEDEFS
 */

/*********************************************************************
 * GLOBAL VARIABLES
 */

/*********************************************************************
 * LOCAL VARIABLES
 */

/*********************************************************************
 * LOCAL FUNCTIONS
 */

/*********************************************************************
 * PROFILE CALLBACKS
 */

/*********************************************************************
 * PUBLIC FUNCTIONS
 */

extern void SimpleBLEPeripheral_createTask(void);

/*********************************************************************
 * @fn      SimpleBLEPeripheral_setEvent
 *
 * @brief   Function to set event in the Simple BLE Peripheral task.
 *
 * @param   None.
 *
 * @return  None.
 */
void SimpleBLEPeripheral_setEvent(uint8_t newEvents);

/*********************************************************************
 * @fn      SimpleBLEPeripheral_clearEvent
 *
 * @brief   Function to clear event in the Simple BLE Peripheral task.
 *
 * @param   None.
 *
 * @return  None.
 */
void SimpleBLEPeripheral_clearEvent(uint16_t clearEvents);

/*********************************************************************
 * @fn      SimpleBLEPeripheral_isConnected
 *
 * @brief   Function to set event in the Simple BLE Peripheral task.
 *
 * @param   None.
 *
 * @return  TRUE if connected, FALSE if not.
 */
uint8_t SimpleBLEPeripheral_isConnected(void);

/*********************************************************************
*********************************************************************/