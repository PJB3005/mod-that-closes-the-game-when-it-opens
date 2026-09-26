#include <cstdlib>

#include "mods/service.hpp"
#include "mods/svc/log.h"

DEFINE_MOD();

IMPORT_SERVICE(LogService, svc_log);

extern "C" {
MOD_EXPORT ModResult mod_initialize(ModError*) {
    svc_log->info(mod_ctx, ":salute: emoji");

    std::_Exit(0);
}

MOD_EXPORT ModResult mod_update(ModError*) {
    return MOD_OK;
}

MOD_EXPORT ModResult mod_shutdown(ModError*) {
    return MOD_OK;
}

}
