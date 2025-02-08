#pragma once
// IWYU pragma private; include "System/Xml/Schema/FacetType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FacetType)
// Forward declare root types
namespace System::Xml::Schema {
struct FacetType;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::FacetType);
// Dependencies
namespace System::Xml::Schema {
// Is value type: true
// CS Name: System.Xml.Schema.FacetType
struct CORDL_TYPE FacetType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FacetType_Unwrapped
  enum struct __FacetType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Length = static_cast<int32_t>(0x1),
    __E_MinLength = static_cast<int32_t>(0x2),
    __E_MaxLength = static_cast<int32_t>(0x3),
    __E_Pattern = static_cast<int32_t>(0x4),
    __E_Whitespace = static_cast<int32_t>(0x5),
    __E_Enumeration = static_cast<int32_t>(0x6),
    __E_MinExclusive = static_cast<int32_t>(0x7),
    __E_MinInclusive = static_cast<int32_t>(0x8),
    __E_MaxExclusive = static_cast<int32_t>(0x9),
    __E_MaxInclusive = static_cast<int32_t>(0xa),
    __E_TotalDigits = static_cast<int32_t>(0xb),
    __E_FractionDigits = static_cast<int32_t>(0xc),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FacetType_Unwrapped() const noexcept {
    return static_cast<__FacetType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FacetType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FacetType(int32_t value__) noexcept;

  /// @brief Field Enumeration value: I32(6)
  static ::System::Xml::Schema::FacetType const Enumeration;

  /// @brief Field FractionDigits value: I32(12)
  static ::System::Xml::Schema::FacetType const FractionDigits;

  /// @brief Field Length value: I32(1)
  static ::System::Xml::Schema::FacetType const Length;

  /// @brief Field MaxExclusive value: I32(9)
  static ::System::Xml::Schema::FacetType const MaxExclusive;

  /// @brief Field MaxInclusive value: I32(10)
  static ::System::Xml::Schema::FacetType const MaxInclusive;

  /// @brief Field MaxLength value: I32(3)
  static ::System::Xml::Schema::FacetType const MaxLength;

  /// @brief Field MinExclusive value: I32(7)
  static ::System::Xml::Schema::FacetType const MinExclusive;

  /// @brief Field MinInclusive value: I32(8)
  static ::System::Xml::Schema::FacetType const MinInclusive;

  /// @brief Field MinLength value: I32(2)
  static ::System::Xml::Schema::FacetType const MinLength;

  /// @brief Field None value: I32(0)
  static ::System::Xml::Schema::FacetType const None;

  /// @brief Field Pattern value: I32(4)
  static ::System::Xml::Schema::FacetType const Pattern;

  /// @brief Field TotalDigits value: I32(11)
  static ::System::Xml::Schema::FacetType const TotalDigits;

  /// @brief Field Whitespace value: I32(5)
  static ::System::Xml::Schema::FacetType const Whitespace;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7677 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::FacetType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::FacetType, 0x4>, "Size mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::FacetType, "System.Xml.Schema", "FacetType");
