#pragma once
// IWYU pragma private; include "OVR/OpenVR/ImuSample_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__HmdVector3d_t_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ImuSample_t)
// Forward declare root types
namespace OVR::OpenVR {
struct ImuSample_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::ImuSample_t);
// Dependencies OVR.OpenVR.HmdVector3d_t
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.ImuSample_t
struct CORDL_TYPE ImuSample_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImuSample_t();

  // Ctor Parameters [CppParam { name: "fSampleTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "vAccel", ty: "::OVR::OpenVR::HmdVector3d_t", modifiers: "", def_value: None },
  // CppParam { name: "vGyro", ty: "::OVR::OpenVR::HmdVector3d_t", modifiers: "", def_value: None }, CppParam { name: "unOffScaleFlags", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr ImuSample_t(double_t fSampleTime, ::OVR::OpenVR::HmdVector3d_t vAccel, ::OVR::OpenVR::HmdVector3d_t vGyro, uint32_t unOffScaleFlags) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8497 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field fSampleTime, offset: 0x0, size: 0x8, def value: None
  double_t fSampleTime;

  /// @brief Field vAccel, offset: 0x8, size: 0x18, def value: None
  ::OVR::OpenVR::HmdVector3d_t vAccel;

  /// @brief Field vGyro, offset: 0x20, size: 0x18, def value: None
  ::OVR::OpenVR::HmdVector3d_t vGyro;

  /// @brief Field unOffScaleFlags, offset: 0x38, size: 0x4, def value: None
  uint32_t unOffScaleFlags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::ImuSample_t, fSampleTime) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::ImuSample_t, vAccel) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::ImuSample_t, vGyro) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::ImuSample_t, unOffScaleFlags) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::ImuSample_t, 0x40>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::ImuSample_t, "OVR.OpenVR", "ImuSample_t");
