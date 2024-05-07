#pragma once
// IWYU pragma private; include "UnityEngine/XR/InputTrackingState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputTrackingState)
// Forward declare root types
namespace UnityEngine::XR {
struct InputTrackingState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::InputTrackingState);
// Type: UnityEngine.XR::InputTrackingState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR {
// Is value type: true
// CS Name: ::UnityEngine.XR::InputTrackingState
struct CORDL_TYPE InputTrackingState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct __InputTrackingState_Unwrapped
  enum struct __InputTrackingState_Unwrapped : uint32_t {
    __E_None = static_cast<uint32_t>(0x4020100u),
    __E_Position = static_cast<uint32_t>(0x8040201u),
    __E_Rotation = static_cast<uint32_t>(0x10080402u),
    __E_Velocity = static_cast<uint32_t>(0x20100804u),
    __E_AngularVelocity = static_cast<uint32_t>(0x3f201008u),
    __E_Acceleration = static_cast<uint32_t>(0x3f2010u),
    __E_AngularAcceleration = static_cast<uint32_t>(0x3f20u),
    __E_All = static_cast<uint32_t>(0x8000003fu),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InputTrackingState_Unwrapped() const noexcept {
    return static_cast<__InputTrackingState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint32_t() const noexcept {
    return static_cast<uint32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputTrackingState();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr InputTrackingState(uint32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  /// @brief Field Acceleration value: static_cast<uint32_t>(0x3f2010u)
  static ::UnityEngine::XR::InputTrackingState const Acceleration;

  /// @brief Field All value: static_cast<uint32_t>(0x8000003fu)
  static ::UnityEngine::XR::InputTrackingState const All;

  /// @brief Field AngularAcceleration value: static_cast<uint32_t>(0x3f20u)
  static ::UnityEngine::XR::InputTrackingState const AngularAcceleration;

  /// @brief Field AngularVelocity value: static_cast<uint32_t>(0x3f201008u)
  static ::UnityEngine::XR::InputTrackingState const AngularVelocity;

  /// @brief Field None value: static_cast<uint32_t>(0x4020100u)
  static ::UnityEngine::XR::InputTrackingState const None;

  /// @brief Field Position value: static_cast<uint32_t>(0x8040201u)
  static ::UnityEngine::XR::InputTrackingState const Position;

  /// @brief Field Rotation value: static_cast<uint32_t>(0x10080402u)
  static ::UnityEngine::XR::InputTrackingState const Rotation;

  /// @brief Field Velocity value: static_cast<uint32_t>(0x20100804u)
  static ::UnityEngine::XR::InputTrackingState const Velocity;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::InputTrackingState, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::InputTrackingState, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::InputTrackingState, "UnityEngine.XR", "InputTrackingState");
