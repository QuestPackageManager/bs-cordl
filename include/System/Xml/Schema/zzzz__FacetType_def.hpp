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
// Type: System.Xml.Schema::FacetType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: true
// CS Name: ::System.Xml.Schema::FacetType
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

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Enumeration value: static_cast<int32_t>(0x6)
  static ::System::Xml::Schema::FacetType const Enumeration;

  /// @brief Field FractionDigits value: static_cast<int32_t>(0xc)
  static ::System::Xml::Schema::FacetType const FractionDigits;

  /// @brief Field Length value: static_cast<int32_t>(0x1)
  static ::System::Xml::Schema::FacetType const Length;

  /// @brief Field MaxExclusive value: static_cast<int32_t>(0x9)
  static ::System::Xml::Schema::FacetType const MaxExclusive;

  /// @brief Field MaxInclusive value: static_cast<int32_t>(0xa)
  static ::System::Xml::Schema::FacetType const MaxInclusive;

  /// @brief Field MaxLength value: static_cast<int32_t>(0x3)
  static ::System::Xml::Schema::FacetType const MaxLength;

  /// @brief Field MinExclusive value: static_cast<int32_t>(0x7)
  static ::System::Xml::Schema::FacetType const MinExclusive;

  /// @brief Field MinInclusive value: static_cast<int32_t>(0x8)
  static ::System::Xml::Schema::FacetType const MinInclusive;

  /// @brief Field MinLength value: static_cast<int32_t>(0x2)
  static ::System::Xml::Schema::FacetType const MinLength;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Xml::Schema::FacetType const None;

  /// @brief Field Pattern value: static_cast<int32_t>(0x4)
  static ::System::Xml::Schema::FacetType const Pattern;

  /// @brief Field TotalDigits value: static_cast<int32_t>(0xb)
  static ::System::Xml::Schema::FacetType const TotalDigits;

  /// @brief Field Whitespace value: static_cast<int32_t>(0x5)
  static ::System::Xml::Schema::FacetType const Whitespace;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::FacetType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::FacetType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::FacetType, "System.Xml.Schema", "FacetType");
