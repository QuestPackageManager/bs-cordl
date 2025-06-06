#pragma once
// IWYU pragma private; include "OVR/OpenVR/HmdMatrix44_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HmdMatrix44_t)
// Forward declare root types
namespace OVR::OpenVR {
struct HmdMatrix44_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::HmdMatrix44_t);
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.HmdMatrix44_t
struct CORDL_TYPE HmdMatrix44_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr HmdMatrix44_t();

  // Ctor Parameters [CppParam { name: "m0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m2", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "m3", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m4", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "m5", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m6", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m7", ty: "float_t", modifiers:
  // "", def_value: None }, CppParam { name: "m8", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m9", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m10", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "m11", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m12", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "m13", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m14", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m15", ty: "float_t", modifiers:
  // "", def_value: None }]
  constexpr HmdMatrix44_t(float_t m0, float_t m1, float_t m2, float_t m3, float_t m4, float_t m5, float_t m6, float_t m7, float_t m8, float_t m9, float_t m10, float_t m11, float_t m12, float_t m13,
                          float_t m14, float_t m15) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8964 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field m0, offset: 0x0, size: 0x4, def value: None
  float_t m0;

  /// @brief Field m1, offset: 0x4, size: 0x4, def value: None
  float_t m1;

  /// @brief Field m2, offset: 0x8, size: 0x4, def value: None
  float_t m2;

  /// @brief Field m3, offset: 0xc, size: 0x4, def value: None
  float_t m3;

  /// @brief Field m4, offset: 0x10, size: 0x4, def value: None
  float_t m4;

  /// @brief Field m5, offset: 0x14, size: 0x4, def value: None
  float_t m5;

  /// @brief Field m6, offset: 0x18, size: 0x4, def value: None
  float_t m6;

  /// @brief Field m7, offset: 0x1c, size: 0x4, def value: None
  float_t m7;

  /// @brief Field m8, offset: 0x20, size: 0x4, def value: None
  float_t m8;

  /// @brief Field m9, offset: 0x24, size: 0x4, def value: None
  float_t m9;

  /// @brief Field m10, offset: 0x28, size: 0x4, def value: None
  float_t m10;

  /// @brief Field m11, offset: 0x2c, size: 0x4, def value: None
  float_t m11;

  /// @brief Field m12, offset: 0x30, size: 0x4, def value: None
  float_t m12;

  /// @brief Field m13, offset: 0x34, size: 0x4, def value: None
  float_t m13;

  /// @brief Field m14, offset: 0x38, size: 0x4, def value: None
  float_t m14;

  /// @brief Field m15, offset: 0x3c, size: 0x4, def value: None
  float_t m15;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::HmdMatrix44_t, m0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdMatrix44_t, m1) == 0x4, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdMatrix44_t, m2) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdMatrix44_t, m3) == 0xc, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdMatrix44_t, m4) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdMatrix44_t, m5) == 0x14, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdMatrix44_t, m6) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdMatrix44_t, m7) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdMatrix44_t, m8) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdMatrix44_t, m9) == 0x24, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdMatrix44_t, m10) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdMatrix44_t, m11) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdMatrix44_t, m12) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdMatrix44_t, m13) == 0x34, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdMatrix44_t, m14) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdMatrix44_t, m15) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::HmdMatrix44_t, 0x40>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::HmdMatrix44_t, "OVR.OpenVR", "HmdMatrix44_t");
