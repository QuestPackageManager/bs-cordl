#pragma once
// IWYU pragma private; include "System/Enum_ParseFailureKind.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Enum_ParseFailureKind)
// Forward declare root types
namespace GlobalNamespace {
struct Enum_ParseFailureKind;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Enum_ParseFailureKind);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Enum/ParseFailureKind
struct CORDL_TYPE Enum_ParseFailureKind {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Enum_ParseFailureKind_Unwrapped
  enum struct __Enum_ParseFailureKind_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Argument = static_cast<int32_t>(0x1),
    __E_ArgumentNull = static_cast<int32_t>(0x2),
    __E_ArgumentWithParameter = static_cast<int32_t>(0x3),
    __E_UnhandledException = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Enum_ParseFailureKind_Unwrapped() const noexcept {
    return static_cast<__Enum_ParseFailureKind_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Enum_ParseFailureKind();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Enum_ParseFailureKind(int32_t value__) noexcept;

  /// @brief Field Argument value: I32(1)
  static ::GlobalNamespace::Enum_ParseFailureKind const Argument;

  /// @brief Field ArgumentNull value: I32(2)
  static ::GlobalNamespace::Enum_ParseFailureKind const ArgumentNull;

  /// @brief Field ArgumentWithParameter value: I32(3)
  static ::GlobalNamespace::Enum_ParseFailureKind const ArgumentWithParameter;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::Enum_ParseFailureKind const None;

  /// @brief Field UnhandledException value: I32(4)
  static ::GlobalNamespace::Enum_ParseFailureKind const UnhandledException;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2566 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Enum_ParseFailureKind, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Enum_ParseFailureKind, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Enum_ParseFailureKind, "System", "Enum/ParseFailureKind");
