#pragma once
// IWYU pragma private; include "System/Xml/Schema/RestrictionFacets.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__RestrictionFlags_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaWhiteSpace_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RestrictionFacets)
namespace System::Collections {
class ArrayList;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class RestrictionFacets;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::RestrictionFacets);
// Dependencies System.Object, System.Xml.Schema.RestrictionFlags, System.Xml.Schema.XmlSchemaWhiteSpace
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.RestrictionFacets
class CORDL_TYPE RestrictionFacets : public ::System::Object {
public:
  // Declarations
  /// @brief Field Enumeration, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Enumeration, put = __cordl_internal_set_Enumeration)) ::System::Collections::ArrayList* Enumeration;

  /// @brief Field FixedFlags, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_FixedFlags, put = __cordl_internal_set_FixedFlags)) ::System::Xml::Schema::RestrictionFlags FixedFlags;

  /// @brief Field Flags, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_Flags, put = __cordl_internal_set_Flags)) ::System::Xml::Schema::RestrictionFlags Flags;

  /// @brief Field FractionDigits, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_FractionDigits, put = __cordl_internal_set_FractionDigits)) int32_t FractionDigits;

  /// @brief Field Length, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_Length, put = __cordl_internal_set_Length)) int32_t Length;

  /// @brief Field MaxExclusive, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_MaxExclusive, put = __cordl_internal_set_MaxExclusive)) ::System::Object* MaxExclusive;

  /// @brief Field MaxInclusive, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_MaxInclusive, put = __cordl_internal_set_MaxInclusive)) ::System::Object* MaxInclusive;

  /// @brief Field MaxLength, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_MaxLength, put = __cordl_internal_set_MaxLength)) int32_t MaxLength;

  /// @brief Field MinExclusive, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_MinExclusive, put = __cordl_internal_set_MinExclusive)) ::System::Object* MinExclusive;

  /// @brief Field MinInclusive, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_MinInclusive, put = __cordl_internal_set_MinInclusive)) ::System::Object* MinInclusive;

  /// @brief Field MinLength, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_MinLength, put = __cordl_internal_set_MinLength)) int32_t MinLength;

  /// @brief Field Patterns, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Patterns, put = __cordl_internal_set_Patterns)) ::System::Collections::ArrayList* Patterns;

  /// @brief Field TotalDigits, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_TotalDigits, put = __cordl_internal_set_TotalDigits)) int32_t TotalDigits;

  /// @brief Field WhiteSpace, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_WhiteSpace, put = __cordl_internal_set_WhiteSpace)) ::System::Xml::Schema::XmlSchemaWhiteSpace WhiteSpace;

  static inline ::System::Xml::Schema::RestrictionFacets* New_ctor();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_Enumeration() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_Enumeration();

  constexpr ::System::Xml::Schema::RestrictionFlags const& __cordl_internal_get_FixedFlags() const;

  constexpr ::System::Xml::Schema::RestrictionFlags& __cordl_internal_get_FixedFlags();

  constexpr ::System::Xml::Schema::RestrictionFlags const& __cordl_internal_get_Flags() const;

  constexpr ::System::Xml::Schema::RestrictionFlags& __cordl_internal_get_Flags();

  constexpr int32_t const& __cordl_internal_get_FractionDigits() const;

  constexpr int32_t& __cordl_internal_get_FractionDigits();

  constexpr int32_t const& __cordl_internal_get_Length() const;

  constexpr int32_t& __cordl_internal_get_Length();

  constexpr ::System::Object* const& __cordl_internal_get_MaxExclusive() const;

  constexpr ::System::Object*& __cordl_internal_get_MaxExclusive();

  constexpr ::System::Object* const& __cordl_internal_get_MaxInclusive() const;

  constexpr ::System::Object*& __cordl_internal_get_MaxInclusive();

  constexpr int32_t const& __cordl_internal_get_MaxLength() const;

  constexpr int32_t& __cordl_internal_get_MaxLength();

  constexpr ::System::Object* const& __cordl_internal_get_MinExclusive() const;

  constexpr ::System::Object*& __cordl_internal_get_MinExclusive();

  constexpr ::System::Object* const& __cordl_internal_get_MinInclusive() const;

  constexpr ::System::Object*& __cordl_internal_get_MinInclusive();

  constexpr int32_t const& __cordl_internal_get_MinLength() const;

  constexpr int32_t& __cordl_internal_get_MinLength();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_Patterns() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_Patterns();

  constexpr int32_t const& __cordl_internal_get_TotalDigits() const;

  constexpr int32_t& __cordl_internal_get_TotalDigits();

  constexpr ::System::Xml::Schema::XmlSchemaWhiteSpace const& __cordl_internal_get_WhiteSpace() const;

  constexpr ::System::Xml::Schema::XmlSchemaWhiteSpace& __cordl_internal_get_WhiteSpace();

  constexpr void __cordl_internal_set_Enumeration(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_FixedFlags(::System::Xml::Schema::RestrictionFlags value);

  constexpr void __cordl_internal_set_Flags(::System::Xml::Schema::RestrictionFlags value);

  constexpr void __cordl_internal_set_FractionDigits(int32_t value);

  constexpr void __cordl_internal_set_Length(int32_t value);

  constexpr void __cordl_internal_set_MaxExclusive(::System::Object* value);

  constexpr void __cordl_internal_set_MaxInclusive(::System::Object* value);

  constexpr void __cordl_internal_set_MaxLength(int32_t value);

  constexpr void __cordl_internal_set_MinExclusive(::System::Object* value);

  constexpr void __cordl_internal_set_MinInclusive(::System::Object* value);

  constexpr void __cordl_internal_set_MinLength(int32_t value);

  constexpr void __cordl_internal_set_Patterns(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_TotalDigits(int32_t value);

  constexpr void __cordl_internal_set_WhiteSpace(::System::Xml::Schema::XmlSchemaWhiteSpace value);

  /// @brief Method .ctor, addr 0x43a6180, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RestrictionFacets();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RestrictionFacets", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RestrictionFacets(RestrictionFacets&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RestrictionFacets", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RestrictionFacets(RestrictionFacets const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7520 };

  /// @brief Field Length, offset: 0x10, size: 0x4, def value: None
  int32_t ___Length;

  /// @brief Field MinLength, offset: 0x14, size: 0x4, def value: None
  int32_t ___MinLength;

  /// @brief Field MaxLength, offset: 0x18, size: 0x4, def value: None
  int32_t ___MaxLength;

  /// @brief Field Patterns, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___Patterns;

  /// @brief Field Enumeration, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___Enumeration;

  /// @brief Field WhiteSpace, offset: 0x30, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaWhiteSpace ___WhiteSpace;

  /// @brief Field MaxInclusive, offset: 0x38, size: 0x8, def value: None
  ::System::Object* ___MaxInclusive;

  /// @brief Field MaxExclusive, offset: 0x40, size: 0x8, def value: None
  ::System::Object* ___MaxExclusive;

  /// @brief Field MinInclusive, offset: 0x48, size: 0x8, def value: None
  ::System::Object* ___MinInclusive;

  /// @brief Field MinExclusive, offset: 0x50, size: 0x8, def value: None
  ::System::Object* ___MinExclusive;

  /// @brief Field TotalDigits, offset: 0x58, size: 0x4, def value: None
  int32_t ___TotalDigits;

  /// @brief Field FractionDigits, offset: 0x5c, size: 0x4, def value: None
  int32_t ___FractionDigits;

  /// @brief Field Flags, offset: 0x60, size: 0x4, def value: None
  ::System::Xml::Schema::RestrictionFlags ___Flags;

  /// @brief Field FixedFlags, offset: 0x64, size: 0x4, def value: None
  ::System::Xml::Schema::RestrictionFlags ___FixedFlags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::RestrictionFacets, ___Length) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::RestrictionFacets, ___MinLength) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::RestrictionFacets, ___MaxLength) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::RestrictionFacets, ___Patterns) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::RestrictionFacets, ___Enumeration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::RestrictionFacets, ___WhiteSpace) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::RestrictionFacets, ___MaxInclusive) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::RestrictionFacets, ___MaxExclusive) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::RestrictionFacets, ___MinInclusive) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::RestrictionFacets, ___MinExclusive) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::RestrictionFacets, ___TotalDigits) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::RestrictionFacets, ___FractionDigits) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::RestrictionFacets, ___Flags) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::RestrictionFacets, ___FixedFlags) == 0x64, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::RestrictionFacets, 0x68>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::RestrictionFacets);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::RestrictionFacets*, "System.Xml.Schema", "RestrictionFacets");
