#pragma once
// IWYU pragma private; include "OVR/OpenVR/VRControllerAxis_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(VRControllerAxis_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VRControllerAxis_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VRControllerAxis_t);
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.VRControllerAxis_t
struct CORDL_TYPE VRControllerAxis_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRControllerAxis_t();

  // Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }]
  constexpr VRControllerAxis_t(float_t x, float_t y) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8490 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  float_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  float_t y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::VRControllerAxis_t, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VRControllerAxis_t, y) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VRControllerAxis_t, 0x8>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VRControllerAxis_t, "OVR.OpenVR", "VRControllerAxis_t");
