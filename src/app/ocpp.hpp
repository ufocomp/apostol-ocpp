/*++

Program name:

  ocpp

Module Name:

  ocpp.hpp

Notices:

  OCPP Central System Service

Author:

  Copyright (c) Prepodobny Alen

  mailto: alienufo@inbox.ru
  mailto: ufocomp@gmail.com

--*/

#ifndef APOSTOL_APOSTOL_HPP
#define APOSTOL_APOSTOL_HPP

#include "../../version.h"
//----------------------------------------------------------------------------------------------------------------------

#define APP_VERSION      AUTO_VERSION
#define APP_VER          APP_NAME "/" APP_VERSION
//----------------------------------------------------------------------------------------------------------------------

#include "Header.hpp"
//----------------------------------------------------------------------------------------------------------------------

extern "C++" {

namespace Apostol {

    namespace Ocpp {

        class COCPP: public CApplication {
        protected:

            void ParseCmdLine() override;
            void ShowVersionInfo() override;

            void StartProcess() override;

        public:

            COCPP(int argc, char *const *argv): CApplication(argc, argv) {

            };

            ~COCPP() override = default;

            static class COCPP *Create(int argc, char *const *argv) {
                return new COCPP(argc, argv);
            };

            inline void Destroy() override { delete this; };

            void Run() override;

        };
    }
}

using namespace Apostol::Ocpp;
}

#endif //APOSTOL_APOSTOL_HPP
