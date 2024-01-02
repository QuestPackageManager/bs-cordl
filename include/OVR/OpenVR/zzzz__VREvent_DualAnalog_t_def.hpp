#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__EDualAnalogWhich_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(VREvent_DualAnalog_t)
namespace OVR::OpenVR {
struct EDualAnalogWhich;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_DualAnalog_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_DualAnalog_t);
// Type: OVR.OpenVR::VREvent_DualAnalog_t
// SizeInfo { instance_size: 20, native_size: 20, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8595))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8686))
// CS Name: ::OVR.OpenVR::VREvent_DualAnalog_t
struct CORDL_TYPE VREvent_DualAnalog_t {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "transformedX", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "transformedY", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "which", ty: "::OVR::OpenVR::EDualAnalogWhich",
  // modifiers: "", def_value: None }]
  constexpr VREvent_DualAnalog_t(float_t x, float_t y, float_t transformedX, float_t transformedY, ::OVR::OpenVR::EDualAnalogWhich which) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VREvent_DualAnalog_t();

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  float_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  float_t y;

  /// @brief Field transformedX, offset: 0x8, size: 0x4, def value: None
  float_t transformedX;

  /// @brief Field transformedY, offset: 0xc, size: 0x4, def value: None
  float_t transformedY;

  /// @brief Field which, offset: 0x10, size: 0x4, def value: None
  ::OVR::OpenVR::EDualAnalogWhich which;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_DualAnalog_t, 0x14>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_DualAnalog_t, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_DualAnalog_t, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_DualAnalog_t, transformedX) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_DualAnalog_t, transformedY) == 0xc, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_DualAnalog_t, which) == 0x10, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_DualAnalog_t, "OVR.OpenVR", "VREvent_DualAnalog_t");
