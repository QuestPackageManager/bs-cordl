#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HmdQuaternion_t)
// Forward declare root types
namespace OVR::OpenVR {
struct HmdQuaternion_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::HmdQuaternion_t);
// Type: OVR.OpenVR::HmdQuaternion_t
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::HmdQuaternion_t
struct CORDL_TYPE HmdQuaternion_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr HmdQuaternion_t();

  // Ctor Parameters [CppParam { name: "w", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "x", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "y", ty:
  // "double_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "double_t", modifiers: "", def_value: None }]
  constexpr HmdQuaternion_t(double_t w, double_t x, double_t y, double_t z) noexcept;

  /// @brief Field w, offset: 0x0, size: 0x8, def value: None
  double_t w;

  /// @brief Field x, offset: 0x8, size: 0x8, def value: None
  double_t x;

  /// @brief Field y, offset: 0x10, size: 0x8, def value: None
  double_t y;

  /// @brief Field z, offset: 0x18, size: 0x8, def value: None
  double_t z;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::HmdQuaternion_t, 0x20>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdQuaternion_t, w) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdQuaternion_t, x) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdQuaternion_t, y) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdQuaternion_t, z) == 0x18, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::HmdQuaternion_t, "OVR.OpenVR", "HmdQuaternion_t");
