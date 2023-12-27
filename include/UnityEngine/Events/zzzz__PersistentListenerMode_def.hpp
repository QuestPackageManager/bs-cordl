#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PersistentListenerMode)
// Forward declare root types
namespace UnityEngine::Events {
struct PersistentListenerMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Events::PersistentListenerMode);
// Type: UnityEngine.Events::PersistentListenerMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Events {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10447))
// CS Name: ::UnityEngine.Events::PersistentListenerMode
struct CORDL_TYPE PersistentListenerMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PersistentListenerMode_Unwrapped
  enum struct __PersistentListenerMode_Unwrapped : int32_t {
    __E_EventDefined = static_cast<int32_t>(0x0),
    __E_Void = static_cast<int32_t>(0x1),
    __E_Object = static_cast<int32_t>(0x2),
    __E_Int = static_cast<int32_t>(0x3),
    __E_Float = static_cast<int32_t>(0x4),
    __E_String = static_cast<int32_t>(0x5),
    __E_Bool = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PersistentListenerMode_Unwrapped() const noexcept {
    return static_cast<__PersistentListenerMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PersistentListenerMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PersistentListenerMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field EventDefined value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Events::PersistentListenerMode const EventDefined;

  /// @brief Field Void value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Events::PersistentListenerMode const Void;

  /// @brief Field Object value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Events::PersistentListenerMode const Object;

  /// @brief Field Int value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Events::PersistentListenerMode const Int;

  /// @brief Field Float value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Events::PersistentListenerMode const Float;

  /// @brief Field String value: static_cast<int32_t>(0x5)
  static ::UnityEngine::Events::PersistentListenerMode const String;

  /// @brief Field Bool value: static_cast<int32_t>(0x6)
  static ::UnityEngine::Events::PersistentListenerMode const Bool;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Events::PersistentListenerMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::PersistentListenerMode, "UnityEngine.Events", "PersistentListenerMode");
