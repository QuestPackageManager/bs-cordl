#pragma once
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
// Type: OVR.OpenVR::VREvent_ScreenshotProgress_t
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8681))
// CS Name: ::OVR.OpenVR::VREvent_ScreenshotProgress_t
struct CORDL_TYPE VREvent_ScreenshotProgress_t {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "progress", ty: "float_t", modifiers: "", def_value: None }]
  constexpr VREvent_ScreenshotProgress_t(float_t progress) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VREvent_ScreenshotProgress_t();

  /// @brief Field progress, offset: 0x0, size: 0x4, def value: None
  float_t progress;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_ScreenshotProgress_t, 0x4>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_ScreenshotProgress_t, progress) == 0x0, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_ScreenshotProgress_t, "OVR.OpenVR", "VREvent_ScreenshotProgress_t");
