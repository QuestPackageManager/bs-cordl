#pragma once
// IWYU pragma private; include "OVR/OpenVR/HmdQuaternionf_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HmdQuaternionf_t)
// Forward declare root types
namespace OVR::OpenVR {
struct HmdQuaternionf_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::HmdQuaternionf_t);
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.HmdQuaternionf_t
struct CORDL_TYPE HmdQuaternionf_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr HmdQuaternionf_t();

  // Ctor Parameters [CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None }]
  constexpr HmdQuaternionf_t(float_t w, float_t x, float_t y, float_t z) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8451 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field w, offset: 0x0, size: 0x4, def value: None
  float_t w;

  /// @brief Field x, offset: 0x4, size: 0x4, def value: None
  float_t x;

  /// @brief Field y, offset: 0x8, size: 0x4, def value: None
  float_t y;

  /// @brief Field z, offset: 0xc, size: 0x4, def value: None
  float_t z;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::HmdQuaternionf_t, w) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdQuaternionf_t, x) == 0x4, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdQuaternionf_t, y) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdQuaternionf_t, z) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::HmdQuaternionf_t, 0x10>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::HmdQuaternionf_t, "OVR.OpenVR", "HmdQuaternionf_t");
