#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/InternalArrayTypeE.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InternalArrayTypeE)
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalArrayTypeE;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE);
// Dependencies
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: true
// CS Name: System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE
struct CORDL_TYPE InternalArrayTypeE {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InternalArrayTypeE_Unwrapped
  enum struct __InternalArrayTypeE_Unwrapped : int32_t {
    __E_Empty = static_cast<int32_t>(0x0),
    __E_Single = static_cast<int32_t>(0x1),
    __E_Jagged = static_cast<int32_t>(0x2),
    __E_Rectangular = static_cast<int32_t>(0x3),
    __E_Base64 = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InternalArrayTypeE_Unwrapped() const noexcept {
    return static_cast<__InternalArrayTypeE_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalArrayTypeE();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InternalArrayTypeE(int32_t value__) noexcept;

  /// @brief Field Base64 value: I32(4)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE const Base64;

  /// @brief Field Empty value: I32(0)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE const Empty;

  /// @brief Field Jagged value: I32(2)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE const Jagged;

  /// @brief Field Rectangular value: I32(3)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE const Rectangular;

  /// @brief Field Single value: I32(1)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE const Single;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3250 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE, 0x4>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE, "System.Runtime.Serialization.Formatters.Binary", "InternalArrayTypeE");
