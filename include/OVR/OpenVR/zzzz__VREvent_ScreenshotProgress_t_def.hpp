#pragma once
// IWYU pragma private; include "OVR/OpenVR/VREvent_ScreenshotProgress_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(VREvent_ScreenshotProgress_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_ScreenshotProgress_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_ScreenshotProgress_t);
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.VREvent_ScreenshotProgress_t
struct CORDL_TYPE VREvent_ScreenshotProgress_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VREvent_ScreenshotProgress_t();

  // Ctor Parameters [CppParam { name: "progress", ty: "float_t", modifiers: "", def_value: None }]
  constexpr VREvent_ScreenshotProgress_t(float_t progress) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8994 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field progress, offset: 0x0, size: 0x4, def value: None
  float_t progress;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::VREvent_ScreenshotProgress_t, progress) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_ScreenshotProgress_t, 0x4>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_ScreenshotProgress_t, "OVR.OpenVR", "VREvent_ScreenshotProgress_t");
