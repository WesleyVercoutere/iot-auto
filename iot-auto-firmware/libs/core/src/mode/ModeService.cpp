#include "weveCore/mode/ModeService.h"

namespace weveCore
{
    void ModeService::SetMode(int Mode)
    {
        ActiveMode = Mode;
    }

    int ModeService::GetActiveMode() const
    {
        return ActiveMode;
    }
}
