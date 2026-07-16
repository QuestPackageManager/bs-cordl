#pragma once
// IWYU pragma private; include "GlobalNamespace/XRSystemEventType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRSystemEventType)
// Forward declare root types
namespace GlobalNamespace {
struct XRSystemEventType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRSystemEventType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRSystemEventType, "", "XRSystemEventType");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: XRSystemEventType
struct CORDL_TYPE XRSystemEventType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XRSystemEventType_Unwrapped
  enum struct __XRSystemEventType_Unwrapped : int32_t {
    __E_InputFocusLost = static_cast<int32_t>(0x0),
    __E_InputFocusAcquired = static_cast<int32_t>(0x1),
    __E_VRFocusLost = static_cast<int32_t>(0x2),
    __E_VRFocusAcquired = static_cast<int32_t>(0x3),
    __E_HmdUnmounted = static_cast<int32_t>(0x4),
    __E_HmdMounted = static_cast<int32_t>(0x5),
    __E_ControllersDidChangeReference = static_cast<int32_t>(0x6),
    __E_ControllersDidDisconnect = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XRSystemEventType_Unwrapped() const noexcept {
    return static_cast<__XRSystemEventType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XRSystemEventType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XRSystemEventType(int32_t value__) noexcept;

  /// @brief Field ControllersDidChangeReference value: I32(6)
  static ::GlobalNamespace::XRSystemEventType const ControllersDidChangeReference;

  /// @brief Field ControllersDidDisconnect value: I32(7)
  static ::GlobalNamespace::XRSystemEventType const ControllersDidDisconnect;

  /// @brief Field HmdMounted value: I32(5)
  static ::GlobalNamespace::XRSystemEventType const HmdMounted;

  /// @brief Field HmdUnmounted value: I32(4)
  static ::GlobalNamespace::XRSystemEventType const HmdUnmounted;

  /// @brief Field InputFocusAcquired value: I32(1)
  static ::GlobalNamespace::XRSystemEventType const InputFocusAcquired;

  /// @brief Field InputFocusLost value: I32(0)
  static ::GlobalNamespace::XRSystemEventType const InputFocusLost;

  /// @brief Field VRFocusAcquired value: I32(3)
  static ::GlobalNamespace::XRSystemEventType const VRFocusAcquired;

  /// @brief Field VRFocusLost value: I32(2)
  static ::GlobalNamespace::XRSystemEventType const VRFocusLost;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21400 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRSystemEventType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRSystemEventType) == 0x4, "Size mismatch!");

} // namespace GlobalNamespace
