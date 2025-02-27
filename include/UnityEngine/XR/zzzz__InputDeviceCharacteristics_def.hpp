#pragma once
// IWYU pragma private; include "UnityEngine/XR/InputDeviceCharacteristics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputDeviceCharacteristics)
// Forward declare root types
namespace UnityEngine::XR {
struct InputDeviceCharacteristics;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::InputDeviceCharacteristics);
// Dependencies
namespace UnityEngine::XR {
// Is value type: true
// CS Name: UnityEngine.XR.InputDeviceCharacteristics
struct CORDL_TYPE InputDeviceCharacteristics {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct __InputDeviceCharacteristics_Unwrapped
  enum struct __InputDeviceCharacteristics_Unwrapped : uint32_t {
    __E_None = static_cast<uint32_t>(0x0u),
    __E_HeadMounted = static_cast<uint32_t>(0x1u),
    __E_Camera = static_cast<uint32_t>(0x2u),
    __E_HeldInHand = static_cast<uint32_t>(0x4u),
    __E_HandTracking = static_cast<uint32_t>(0x8u),
    __E_EyeTracking = static_cast<uint32_t>(0x10u),
    __E_TrackedDevice = static_cast<uint32_t>(0x20u),
    __E_Controller = static_cast<uint32_t>(0x40u),
    __E_TrackingReference = static_cast<uint32_t>(0x80u),
    __E_Left = static_cast<uint32_t>(0x100u),
    __E_Right = static_cast<uint32_t>(0x200u),
    __E_Simulated6DOF = static_cast<uint32_t>(0x400u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InputDeviceCharacteristics_Unwrapped() const noexcept {
    return static_cast<__InputDeviceCharacteristics_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint32_t() const noexcept {
    return static_cast<uint32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputDeviceCharacteristics();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr InputDeviceCharacteristics(uint32_t value__) noexcept;

  /// @brief Field Camera value: U32(2)
  static ::UnityEngine::XR::InputDeviceCharacteristics const Camera;

  /// @brief Field Controller value: U32(64)
  static ::UnityEngine::XR::InputDeviceCharacteristics const Controller;

  /// @brief Field EyeTracking value: U32(16)
  static ::UnityEngine::XR::InputDeviceCharacteristics const EyeTracking;

  /// @brief Field HandTracking value: U32(8)
  static ::UnityEngine::XR::InputDeviceCharacteristics const HandTracking;

  /// @brief Field HeadMounted value: U32(1)
  static ::UnityEngine::XR::InputDeviceCharacteristics const HeadMounted;

  /// @brief Field HeldInHand value: U32(4)
  static ::UnityEngine::XR::InputDeviceCharacteristics const HeldInHand;

  /// @brief Field Left value: U32(256)
  static ::UnityEngine::XR::InputDeviceCharacteristics const Left;

  /// @brief Field None value: U32(0)
  static ::UnityEngine::XR::InputDeviceCharacteristics const None;

  /// @brief Field Right value: U32(512)
  static ::UnityEngine::XR::InputDeviceCharacteristics const Right;

  /// @brief Field Simulated6DOF value: U32(1024)
  static ::UnityEngine::XR::InputDeviceCharacteristics const Simulated6DOF;

  /// @brief Field TrackedDevice value: U32(32)
  static ::UnityEngine::XR::InputDeviceCharacteristics const TrackedDevice;

  /// @brief Field TrackingReference value: U32(128)
  static ::UnityEngine::XR::InputDeviceCharacteristics const TrackingReference;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18275 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::InputDeviceCharacteristics, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::InputDeviceCharacteristics, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::InputDeviceCharacteristics, "UnityEngine.XR", "InputDeviceCharacteristics");
