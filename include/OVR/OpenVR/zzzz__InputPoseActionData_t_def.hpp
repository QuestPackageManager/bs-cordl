#pragma once
// IWYU pragma private; include "OVR/OpenVR/InputPoseActionData_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__TrackedDevicePose_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputPoseActionData_t)
// Forward declare root types
namespace OVR::OpenVR {
struct InputPoseActionData_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::InputPoseActionData_t);
// Dependencies OVR.OpenVR.TrackedDevicePose_t
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.InputPoseActionData_t
struct CORDL_TYPE InputPoseActionData_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputPoseActionData_t();

  // Ctor Parameters [CppParam { name: "bActive", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "activeOrigin", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name:
  // "pose", ty: "::OVR::OpenVR::TrackedDevicePose_t", modifiers: "", def_value: None }]
  constexpr InputPoseActionData_t(bool bActive, uint64_t activeOrigin, ::OVR::OpenVR::TrackedDevicePose_t pose) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9040 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field bActive, offset: 0x0, size: 0x1, def value: None
  bool bActive;

  /// @brief Field activeOrigin, offset: 0x8, size: 0x8, def value: None
  uint64_t activeOrigin;

  /// @brief Field pose, offset: 0x10, size: 0x50, def value: None
  ::OVR::OpenVR::TrackedDevicePose_t pose;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::InputPoseActionData_t, bActive) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputPoseActionData_t, activeOrigin) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputPoseActionData_t, pose) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::InputPoseActionData_t, 0x60>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::InputPoseActionData_t, "OVR.OpenVR", "InputPoseActionData_t");
