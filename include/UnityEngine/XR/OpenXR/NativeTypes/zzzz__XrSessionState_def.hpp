#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSessionState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSessionState)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSessionState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState);
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSessionState
struct CORDL_TYPE XrSessionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XrSessionState_Unwrapped
  enum struct __XrSessionState_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Idle = static_cast<int32_t>(0x1),
    __E_Ready = static_cast<int32_t>(0x2),
    __E_Synchronized = static_cast<int32_t>(0x3),
    __E_Visible = static_cast<int32_t>(0x4),
    __E_Focused = static_cast<int32_t>(0x5),
    __E_Stopping = static_cast<int32_t>(0x6),
    __E_LossPending = static_cast<int32_t>(0x7),
    __E_Exiting = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XrSessionState_Unwrapped() const noexcept {
    return static_cast<__XrSessionState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSessionState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XrSessionState(int32_t value__) noexcept;

  /// @brief Field Exiting value: I32(8)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState const Exiting;

  /// @brief Field Focused value: I32(5)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState const Focused;

  /// @brief Field Idle value: I32(1)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState const Idle;

  /// @brief Field LossPending value: I32(7)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState const LossPending;

  /// @brief Field Ready value: I32(2)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState const Ready;

  /// @brief Field Stopping value: I32(6)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState const Stopping;

  /// @brief Field Synchronized value: I32(3)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState const Synchronized;

  /// @brief Field Unknown value: I32(0)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState const Unknown;

  /// @brief Field Visible value: I32(4)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState const Visible;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18482 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState, "UnityEngine.XR.OpenXR.NativeTypes", "XrSessionState");
