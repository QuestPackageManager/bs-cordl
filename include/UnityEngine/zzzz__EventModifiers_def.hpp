#pragma once
// IWYU pragma private; include "UnityEngine/EventModifiers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventModifiers)
// Forward declare root types
namespace UnityEngine {
struct EventModifiers;
}
// Write type traits
MARK_VAL_T(::UnityEngine::EventModifiers);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.EventModifiers
struct CORDL_TYPE EventModifiers {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EventModifiers_Unwrapped
  enum struct __EventModifiers_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Shift = static_cast<int32_t>(0x1),
    __E_Control = static_cast<int32_t>(0x2),
    __E_Alt = static_cast<int32_t>(0x4),
    __E_Command = static_cast<int32_t>(0x8),
    __E_Numeric = static_cast<int32_t>(0x10),
    __E_CapsLock = static_cast<int32_t>(0x20),
    __E_FunctionKey = static_cast<int32_t>(0x40),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EventModifiers_Unwrapped() const noexcept {
    return static_cast<__EventModifiers_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventModifiers();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EventModifiers(int32_t value__) noexcept;

  /// @brief Field Alt value: I32(4)
  static ::UnityEngine::EventModifiers const Alt;

  /// @brief Field CapsLock value: I32(32)
  static ::UnityEngine::EventModifiers const CapsLock;

  /// @brief Field Command value: I32(8)
  static ::UnityEngine::EventModifiers const Command;

  /// @brief Field Control value: I32(2)
  static ::UnityEngine::EventModifiers const Control;

  /// @brief Field FunctionKey value: I32(64)
  static ::UnityEngine::EventModifiers const FunctionKey;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::EventModifiers const None;

  /// @brief Field Numeric value: I32(16)
  static ::UnityEngine::EventModifiers const Numeric;

  /// @brief Field Shift value: I32(1)
  static ::UnityEngine::EventModifiers const Shift;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19559 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::EventModifiers, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::EventModifiers, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventModifiers, "UnityEngine", "EventModifiers");
