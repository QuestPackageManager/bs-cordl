#pragma once
// IWYU pragma private; include "OVR/OpenVR/VREvent_HapticVibration_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_HapticVibration_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_HapticVibration_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_HapticVibration_t);
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.VREvent_HapticVibration_t
struct CORDL_TYPE VREvent_HapticVibration_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VREvent_HapticVibration_t();

  // Ctor Parameters [CppParam { name: "containerHandle", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "componentHandle", ty: "uint64_t", modifiers: "", def_value: None },
  // CppParam { name: "fDurationSeconds", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fFrequency", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "fAmplitude", ty: "float_t", modifiers: "", def_value: None }]
  constexpr VREvent_HapticVibration_t(uint64_t containerHandle, uint64_t componentHandle, float_t fDurationSeconds, float_t fFrequency, float_t fAmplitude) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9005 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field containerHandle, offset: 0x0, size: 0x8, def value: None
  uint64_t containerHandle;

  /// @brief Field componentHandle, offset: 0x8, size: 0x8, def value: None
  uint64_t componentHandle;

  /// @brief Field fDurationSeconds, offset: 0x10, size: 0x4, def value: None
  float_t fDurationSeconds;

  /// @brief Field fFrequency, offset: 0x14, size: 0x4, def value: None
  float_t fFrequency;

  /// @brief Field fAmplitude, offset: 0x18, size: 0x4, def value: None
  float_t fAmplitude;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::VREvent_HapticVibration_t, containerHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_HapticVibration_t, componentHandle) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_HapticVibration_t, fDurationSeconds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_HapticVibration_t, fFrequency) == 0x14, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_HapticVibration_t, fAmplitude) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_HapticVibration_t, 0x20>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_HapticVibration_t, "OVR.OpenVR", "VREvent_HapticVibration_t");
