#ifndef __PowerSupply_MODEL_H
#define __PowerSupply_MODEL_H

#include "Common/DataProc/DataProc.h"
#include "Common/HAL/HAL.h"

namespace Page
{

class PowerSupplyModel
{

public:
    typedef enum
    {
        PD_PDM_ON_OFF = 0,
        PD_PDM_ON_CONFIG = 1,
        PD_PDM_OFF_CONFIG = 2,             
    } PDSetUp_mode_t;

public:
    void Init();
    void Deinit();
    void PDSetUp(uint16_t voltage, uint16_t current, bool powctrl, PDSetUp_mode_t mode);

private:
    Account* account;

private:
    static int onEvent(Account *account, Account::EventParam_t *param);
};

}

#endif
