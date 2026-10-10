#pragma once

namespace weveCore
{
    class ModeService {
        public:
            void SetMode(int Mode);
            int GetActiveMode() const;

        private:
            int ActiveMode = 0;
    };
}
