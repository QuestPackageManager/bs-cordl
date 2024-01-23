#pragma once
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
// Type: UnityEngine::EventModifiers
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14602))
// CS Name: ::UnityEngine::EventModifiers
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EventModifiers(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventModifiers();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::EventModifiers const None;

  /// @brief Field Shift value: static_cast<int32_t>(0x1)
  static ::UnityEngine::EventModifiers const Shift;

  /// @brief Field Control value: static_cast<int32_t>(0x2)
  static ::UnityEngine::EventModifiers const Control;

  /// @brief Field Alt value: static_cast<int32_t>(0x4)
  static ::UnityEngine::EventModifiers const Alt;

  /// @brief Field Command value: static_cast<int32_t>(0x8)
  static ::UnityEngine::EventModifiers const Command;

  /// @brief Field Numeric value: static_cast<int32_t>(0x10)
  static ::UnityEngine::EventModifiers const Numeric;

  /// @brief Field CapsLock value: static_cast<int32_t>(0x20)
  static ::UnityEngine::EventModifiers const CapsLock;

  /// @brief Field FunctionKey value: static_cast<int32_t>(0x40)
  static ::UnityEngine::EventModifiers const FunctionKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventModifiers, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::EventModifiers, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventModifiers, "UnityEngine", "EventModifiers");
