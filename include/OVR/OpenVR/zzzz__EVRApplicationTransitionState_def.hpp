#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRApplicationTransitionState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRApplicationTransitionState)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRApplicationTransitionState;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRApplicationTransitionState);
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.EVRApplicationTransitionState
struct CORDL_TYPE EVRApplicationTransitionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EVRApplicationTransitionState_Unwrapped
  enum struct __EVRApplicationTransitionState_Unwrapped : int32_t {
    __E_VRApplicationTransition_None = static_cast<int32_t>(0x0),
    __E_VRApplicationTransition_OldAppQuitSent = static_cast<int32_t>(0xa),
    __E_VRApplicationTransition_WaitingForExternalLaunch = static_cast<int32_t>(0xb),
    __E_VRApplicationTransition_NewAppLaunched = static_cast<int32_t>(0x14),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EVRApplicationTransitionState_Unwrapped() const noexcept {
    return static_cast<__EVRApplicationTransitionState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EVRApplicationTransitionState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EVRApplicationTransitionState(int32_t value__) noexcept;

  /// @brief Field VRApplicationTransition_NewAppLaunched value: I32(20)
  static ::OVR::OpenVR::EVRApplicationTransitionState const VRApplicationTransition_NewAppLaunched;

  /// @brief Field VRApplicationTransition_None value: I32(0)
  static ::OVR::OpenVR::EVRApplicationTransitionState const VRApplicationTransition_None;

  /// @brief Field VRApplicationTransition_OldAppQuitSent value: I32(10)
  static ::OVR::OpenVR::EVRApplicationTransitionState const VRApplicationTransition_OldAppQuitSent;

  /// @brief Field VRApplicationTransition_WaitingForExternalLaunch value: I32(11)
  static ::OVR::OpenVR::EVRApplicationTransitionState const VRApplicationTransition_WaitingForExternalLaunch;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8936 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::EVRApplicationTransitionState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRApplicationTransitionState, 0x4>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRApplicationTransitionState, "OVR.OpenVR", "EVRApplicationTransitionState");
