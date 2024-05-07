#pragma once
// IWYU pragma private; include "OVR/OpenVR/InputAnalogActionData_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputAnalogActionData_t)
// Forward declare root types
namespace OVR::OpenVR {
struct InputAnalogActionData_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::InputAnalogActionData_t);
// Type: OVR.OpenVR::InputAnalogActionData_t
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::InputAnalogActionData_t
struct CORDL_TYPE InputAnalogActionData_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputAnalogActionData_t();

  // Ctor Parameters [CppParam { name: "bActive", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "activeOrigin", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "x",
  // ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "deltaX", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "deltaY", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "deltaZ", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "fUpdateTime", ty: "float_t", modifiers: "", def_value: None }]
  constexpr InputAnalogActionData_t(bool bActive, uint64_t activeOrigin, float_t x, float_t y, float_t z, float_t deltaX, float_t deltaY, float_t deltaZ, float_t fUpdateTime) noexcept;

  /// @brief Field bActive, offset: 0x0, size: 0x1, def value: None
  bool bActive;

  /// @brief Field activeOrigin, offset: 0x8, size: 0x8, def value: None
  uint64_t activeOrigin;

  /// @brief Field x, offset: 0x10, size: 0x4, def value: None
  float_t x;

  /// @brief Field y, offset: 0x14, size: 0x4, def value: None
  float_t y;

  /// @brief Field z, offset: 0x18, size: 0x4, def value: None
  float_t z;

  /// @brief Field deltaX, offset: 0x1c, size: 0x4, def value: None
  float_t deltaX;

  /// @brief Field deltaY, offset: 0x20, size: 0x4, def value: None
  float_t deltaY;

  /// @brief Field deltaZ, offset: 0x24, size: 0x4, def value: None
  float_t deltaZ;

  /// @brief Field fUpdateTime, offset: 0x28, size: 0x4, def value: None
  float_t fUpdateTime;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::InputAnalogActionData_t, 0x30>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputAnalogActionData_t, bActive) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputAnalogActionData_t, activeOrigin) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputAnalogActionData_t, x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputAnalogActionData_t, y) == 0x14, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputAnalogActionData_t, z) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputAnalogActionData_t, deltaX) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputAnalogActionData_t, deltaY) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputAnalogActionData_t, deltaZ) == 0x24, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputAnalogActionData_t, fUpdateTime) == 0x28, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::InputAnalogActionData_t, "OVR.OpenVR", "InputAnalogActionData_t");
