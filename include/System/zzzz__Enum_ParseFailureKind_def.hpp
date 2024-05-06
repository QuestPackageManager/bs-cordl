#pragma once
// IWYU pragma private; include "System/Enum_ParseFailureKind.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Enum_ParseFailureKind)
// Forward declare root types
namespace System {
struct __Enum__ParseFailureKind;
}
// Write type traits
MARK_VAL_T(::System::__Enum__ParseFailureKind);
// Type: ::ParseFailureKind
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::Enum::ParseFailureKind
struct CORDL_TYPE __Enum__ParseFailureKind {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Enum__ParseFailureKind_Unwrapped
  enum struct ____Enum__ParseFailureKind_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Argument = static_cast<int32_t>(0x1),
    __E_ArgumentNull = static_cast<int32_t>(0x2),
    __E_ArgumentWithParameter = static_cast<int32_t>(0x3),
    __E_UnhandledException = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Enum__ParseFailureKind_Unwrapped() const noexcept {
    return static_cast<____Enum__ParseFailureKind_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Enum__ParseFailureKind();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Enum__ParseFailureKind(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Argument value: static_cast<int32_t>(0x1)
  static ::System::__Enum__ParseFailureKind const Argument;

  /// @brief Field ArgumentNull value: static_cast<int32_t>(0x2)
  static ::System::__Enum__ParseFailureKind const ArgumentNull;

  /// @brief Field ArgumentWithParameter value: static_cast<int32_t>(0x3)
  static ::System::__Enum__ParseFailureKind const ArgumentWithParameter;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::__Enum__ParseFailureKind const None;

  /// @brief Field UnhandledException value: static_cast<int32_t>(0x4)
  static ::System::__Enum__ParseFailureKind const UnhandledException;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__Enum__ParseFailureKind, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::__Enum__ParseFailureKind, value__) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::__Enum__ParseFailureKind, "System", "Enum/ParseFailureKind");
