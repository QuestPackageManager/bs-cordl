#pragma once
// IWYU pragma private; include "OVR/OpenVR/VREvent_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__VREvent_Data_t_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_t);
// Dependencies OVR.OpenVR.VREvent_Data_t
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.VREvent_t
struct CORDL_TYPE VREvent_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VREvent_t();

  // Ctor Parameters [CppParam { name: "eventType", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "trackedDeviceIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam
  // { name: "eventAgeSeconds", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::OVR::OpenVR::VREvent_Data_t", modifiers: "", def_value: None }]
  constexpr VREvent_t(uint32_t eventType, uint32_t trackedDeviceIndex, float_t eventAgeSeconds, ::OVR::OpenVR::VREvent_Data_t data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8491 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field eventType, offset: 0x0, size: 0x4, def value: None
  uint32_t eventType;

  /// @brief Field trackedDeviceIndex, offset: 0x4, size: 0x4, def value: None
  uint32_t trackedDeviceIndex;

  /// @brief Field eventAgeSeconds, offset: 0x8, size: 0x4, def value: None
  float_t eventAgeSeconds;

  /// @brief Field data, offset: 0x10, size: 0x20, def value: None
  ::OVR::OpenVR::VREvent_Data_t data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::VREvent_t, eventType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_t, trackedDeviceIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_t, eventAgeSeconds) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_t, data) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_t, 0x30>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_t, "OVR.OpenVR", "VREvent_t");
