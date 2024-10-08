#pragma once
// IWYU pragma private; include "OVR/OpenVR/DistortionCoordinates_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(DistortionCoordinates_t)
// Forward declare root types
namespace OVR::OpenVR {
struct DistortionCoordinates_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::DistortionCoordinates_t);
// Type: OVR.OpenVR::DistortionCoordinates_t
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::DistortionCoordinates_t
struct CORDL_TYPE DistortionCoordinates_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr DistortionCoordinates_t();

  // Ctor Parameters [CppParam { name: "rfRed0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rfRed1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "rfGreen0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rfGreen1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rfBlue0", ty: "float_t", modifiers:
  // "", def_value: None }, CppParam { name: "rfBlue1", ty: "float_t", modifiers: "", def_value: None }]
  constexpr DistortionCoordinates_t(float_t rfRed0, float_t rfRed1, float_t rfGreen0, float_t rfGreen1, float_t rfBlue0, float_t rfBlue1) noexcept;

  /// @brief Field rfRed0, offset: 0x0, size: 0x4, def value: None
  float_t rfRed0;

  /// @brief Field rfRed1, offset: 0x4, size: 0x4, def value: None
  float_t rfRed1;

  /// @brief Field rfGreen0, offset: 0x8, size: 0x4, def value: None
  float_t rfGreen0;

  /// @brief Field rfGreen1, offset: 0xc, size: 0x4, def value: None
  float_t rfGreen1;

  /// @brief Field rfBlue0, offset: 0x10, size: 0x4, def value: None
  float_t rfBlue0;

  /// @brief Field rfBlue1, offset: 0x14, size: 0x4, def value: None
  float_t rfBlue1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8939 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::DistortionCoordinates_t, 0x18>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::DistortionCoordinates_t, rfRed0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::DistortionCoordinates_t, rfRed1) == 0x4, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::DistortionCoordinates_t, rfGreen0) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::DistortionCoordinates_t, rfGreen1) == 0xc, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::DistortionCoordinates_t, rfBlue0) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::DistortionCoordinates_t, rfBlue1) == 0x14, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::DistortionCoordinates_t, "OVR.OpenVR", "DistortionCoordinates_t");
