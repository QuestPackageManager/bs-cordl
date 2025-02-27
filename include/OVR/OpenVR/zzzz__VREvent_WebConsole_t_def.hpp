#pragma once
// IWYU pragma private; include "OVR/OpenVR/VREvent_WebConsole_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_WebConsole_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_WebConsole_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_WebConsole_t);
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.VREvent_WebConsole_t
struct CORDL_TYPE VREvent_WebConsole_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VREvent_WebConsole_t();

  // Ctor Parameters [CppParam { name: "webConsoleHandle", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr VREvent_WebConsole_t(uint64_t webConsoleHandle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9006 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field webConsoleHandle, offset: 0x0, size: 0x8, def value: None
  uint64_t webConsoleHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::VREvent_WebConsole_t, webConsoleHandle) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_WebConsole_t, 0x8>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_WebConsole_t, "OVR.OpenVR", "VREvent_WebConsole_t");
