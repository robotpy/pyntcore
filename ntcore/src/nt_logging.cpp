#include <robotpy_build.h>
#include "nt_logging.h"

namespace pyntcore {

void attachLogging(NT_Inst instance) {
    py::module::import("ntcore._logutil").attr("_attach")(instance);
}

void detachLogging(NT_Inst instance) {
    py::module::import("ntcore._logutil").attr("_detach")(instance);
}

}; // namespace pyntcore