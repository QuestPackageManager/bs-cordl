#pragma once
// IWYU pragma private; include "OVR/OpenVR/VREvent_SeatedZeroPoseReset_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(VREvent_SeatedZeroPoseReset_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_SeatedZeroPoseReset_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_SeatedZeroPoseReset_t);
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.VREvent_SeatedZeroPoseReset_t
struct CORDL_TYPE VREvent_SeatedZeroPoseReset_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VREvent_SeatedZeroPoseReset_t();

  // Ctor Parameters [CppParam { name: "bResetBySystemMenu", ty: "bool", modifiers: "", def_value: None }]
  constexpr VREvent_SeatedZeroPoseReset_t(bool bResetBySystemMenu) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8474 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field bResetBySystemMenu, offset: 0x0, size: 0x1, def value: None
  bool bResetBySystemMenu;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::VREvent_SeatedZeroPoseReset_t, bResetBySystemMenu) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_SeatedZeroPoseReset_t, 0x1>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_SeatedZeroPoseReset_t, "OVR.OpenVR", "VREvent_SeatedZeroPoseReset_t");
