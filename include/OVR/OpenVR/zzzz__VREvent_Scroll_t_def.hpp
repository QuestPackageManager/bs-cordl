#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_Scroll_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Scroll_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_Scroll_t);
// Type: OVR.OpenVR::VREvent_Scroll_t
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9437))
// CS Name: ::OVR.OpenVR::VREvent_Scroll_t
struct CORDL_TYPE VREvent_Scroll_t {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "xdelta", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ydelta", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "repeatCount", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr VREvent_Scroll_t(float_t xdelta, float_t ydelta, uint32_t repeatCount) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VREvent_Scroll_t();

  /// @brief Field xdelta, offset: 0x0, size: 0x4, def value: None
  float_t xdelta;

  /// @brief Field ydelta, offset: 0x4, size: 0x4, def value: None
  float_t ydelta;

  /// @brief Field repeatCount, offset: 0x8, size: 0x4, def value: None
  uint32_t repeatCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_Scroll_t, 0xc>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_Scroll_t, xdelta) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_Scroll_t, ydelta) == 0x4, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_Scroll_t, repeatCount) == 0x8, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_Scroll_t, "OVR.OpenVR", "VREvent_Scroll_t");
