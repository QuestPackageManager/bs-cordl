#pragma once
// IWYU pragma private; include "System/Xml/Schema/RestrictionFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RestrictionFlags)
// Forward declare root types
namespace System::Xml::Schema {
struct RestrictionFlags;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::RestrictionFlags);
// Dependencies
namespace System::Xml::Schema {
// Is value type: true
// CS Name: System.Xml.Schema.RestrictionFlags
struct CORDL_TYPE RestrictionFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RestrictionFlags_Unwrapped
  enum struct __RestrictionFlags_Unwrapped : int32_t {
    __E_Length = static_cast<int32_t>(0x1),
    __E_MinLength = static_cast<int32_t>(0x2),
    __E_MaxLength = static_cast<int32_t>(0x4),
    __E_Pattern = static_cast<int32_t>(0x8),
    __E_Enumeration = static_cast<int32_t>(0x10),
    __E_WhiteSpace = static_cast<int32_t>(0x20),
    __E_MaxInclusive = static_cast<int32_t>(0x40),
    __E_MaxExclusive = static_cast<int32_t>(0x80),
    __E_MinInclusive = static_cast<int32_t>(0x100),
    __E_MinExclusive = static_cast<int32_t>(0x200),
    __E_TotalDigits = static_cast<int32_t>(0x400),
    __E_FractionDigits = static_cast<int32_t>(0x800),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RestrictionFlags_Unwrapped() const noexcept {
    return static_cast<__RestrictionFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RestrictionFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RestrictionFlags(int32_t value__) noexcept;

  /// @brief Field Enumeration value: I32(16)
  static ::System::Xml::Schema::RestrictionFlags const Enumeration;

  /// @brief Field FractionDigits value: I32(2048)
  static ::System::Xml::Schema::RestrictionFlags const FractionDigits;

  /// @brief Field Length value: I32(1)
  static ::System::Xml::Schema::RestrictionFlags const Length;

  /// @brief Field MaxExclusive value: I32(128)
  static ::System::Xml::Schema::RestrictionFlags const MaxExclusive;

  /// @brief Field MaxInclusive value: I32(64)
  static ::System::Xml::Schema::RestrictionFlags const MaxInclusive;

  /// @brief Field MaxLength value: I32(4)
  static ::System::Xml::Schema::RestrictionFlags const MaxLength;

  /// @brief Field MinExclusive value: I32(512)
  static ::System::Xml::Schema::RestrictionFlags const MinExclusive;

  /// @brief Field MinInclusive value: I32(256)
  static ::System::Xml::Schema::RestrictionFlags const MinInclusive;

  /// @brief Field MinLength value: I32(2)
  static ::System::Xml::Schema::RestrictionFlags const MinLength;

  /// @brief Field Pattern value: I32(8)
  static ::System::Xml::Schema::RestrictionFlags const Pattern;

  /// @brief Field TotalDigits value: I32(1024)
  static ::System::Xml::Schema::RestrictionFlags const TotalDigits;

  /// @brief Field WhiteSpace value: I32(32)
  static ::System::Xml::Schema::RestrictionFlags const WhiteSpace;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7517 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::RestrictionFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::RestrictionFlags, 0x4>, "Size mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::RestrictionFlags, "System.Xml.Schema", "RestrictionFlags");
