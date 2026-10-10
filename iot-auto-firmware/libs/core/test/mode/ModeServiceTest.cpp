#include <gtest/gtest.h>
#include "weveCore/mode/ModeService.h"

using weveCore::ModeService;

TEST(ModeService, StartsInModeZero) {
    ModeService m;
    EXPECT_EQ(m.GetActiveMode(), 0);
}

TEST(ModeService, SetModeChangesActiveMode) {
    ModeService m;
    m.SetMode(2);
    EXPECT_EQ(m.GetActiveMode(), 2);
}
