#pragma once
// IWYU pragma private; include "OVR/OpenVR/VRTextureBounds_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(VRTextureBounds_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VRTextureBounds_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VRTextureBounds_t);
// Type: OVR.OpenVR::VRTextureBounds_t
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::VRTextureBounds_t
struct CORDL_TYPE VRTextureBounds_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRTextureBounds_t();

  // Ctor Parameters [CppParam { name: "uMin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "vMin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "uMax", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "vMax", ty: "float_t", modifiers: "", def_value: None }]
  constexpr VRTextureBounds_t(float_t uMin, float_t vMin, float_t uMax, float_t vMax) noexcept;

  /// @brief Field uMin, offset: 0x0, size: 0x4, def value: None
  float_t uMin;

  /// @brief Field vMin, offset: 0x4, size: 0x4, def value: None
  float_t vMin;

  /// @brief Field uMax, offset: 0x8, size: 0x4, def value: None
  float_t uMax;

  /// @brief Field vMax, offset: 0xc, size: 0x4, def value: None
  float_t vMax;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8947 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VRTextureBounds_t, 0x10>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::VRTextureBounds_t, uMin) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VRTextureBounds_t, vMin) == 0x4, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VRTextureBounds_t, uMax) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VRTextureBounds_t, vMax) == 0xc, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VRTextureBounds_t, "OVR.OpenVR", "VRTextureBounds_t");
