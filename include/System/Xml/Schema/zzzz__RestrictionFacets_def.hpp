#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__RestrictionFlags_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaWhiteSpace_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RestrictionFacets)
namespace System {
class Object;
}
namespace System::Collections {
class ArrayList;
}
// Forward declare root types
namespace System::Xml::Schema {
class RestrictionFacets;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::RestrictionFacets);
// Type: System.Xml.Schema::RestrictionFacets
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 100, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(11617)), TypeDefinitionIndex(TypeDefinitionIndex(11618))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11619))
// CS Name: ::System.Xml.Schema::RestrictionFacets*
class CORDL_TYPE RestrictionFacets : public ::System::Object {
public:
  // Declarations
  /// @brief Field Length, offset 0x10, size 0x4
  __declspec(property(get = __get_Length, put = __set_Length)) int32_t Length;

  /// @brief Field MinLength, offset 0x14, size 0x4
  __declspec(property(get = __get_MinLength, put = __set_MinLength)) int32_t MinLength;

  /// @brief Field MaxLength, offset 0x18, size 0x4
  __declspec(property(get = __get_MaxLength, put = __set_MaxLength)) int32_t MaxLength;

  /// @brief Field Patterns, offset 0x20, size 0x8
  __declspec(property(get = __get_Patterns, put = __set_Patterns))::System::Collections::ArrayList* Patterns;

  /// @brief Field Enumeration, offset 0x28, size 0x8
  __declspec(property(get = __get_Enumeration, put = __set_Enumeration))::System::Collections::ArrayList* Enumeration;

  /// @brief Field WhiteSpace, offset 0x30, size 0x4
  __declspec(property(get = __get_WhiteSpace, put = __set_WhiteSpace))::System::Xml::Schema::XmlSchemaWhiteSpace WhiteSpace;

  /// @brief Field MaxInclusive, offset 0x38, size 0x8
  __declspec(property(get = __get_MaxInclusive, put = __set_MaxInclusive))::System::Object* MaxInclusive;

  /// @brief Field MaxExclusive, offset 0x40, size 0x8
  __declspec(property(get = __get_MaxExclusive, put = __set_MaxExclusive))::System::Object* MaxExclusive;

  /// @brief Field MinInclusive, offset 0x48, size 0x8
  __declspec(property(get = __get_MinInclusive, put = __set_MinInclusive))::System::Object* MinInclusive;

  /// @brief Field MinExclusive, offset 0x50, size 0x8
  __declspec(property(get = __get_MinExclusive, put = __set_MinExclusive))::System::Object* MinExclusive;

  /// @brief Field TotalDigits, offset 0x58, size 0x4
  __declspec(property(get = __get_TotalDigits, put = __set_TotalDigits)) int32_t TotalDigits;

  /// @brief Field FractionDigits, offset 0x5c, size 0x4
  __declspec(property(get = __get_FractionDigits, put = __set_FractionDigits)) int32_t FractionDigits;

  /// @brief Field Flags, offset 0x60, size 0x4
  __declspec(property(get = __get_Flags, put = __set_Flags))::System::Xml::Schema::RestrictionFlags Flags;

  constexpr int32_t& __get_Length();

  constexpr int32_t const& __get_Length() const;

  constexpr void __set_Length(int32_t value);

  constexpr int32_t& __get_MinLength();

  constexpr int32_t const& __get_MinLength() const;

  constexpr void __set_MinLength(int32_t value);

  constexpr int32_t& __get_MaxLength();

  constexpr int32_t const& __get_MaxLength() const;

  constexpr void __set_MaxLength(int32_t value);

  constexpr ::System::Collections::ArrayList*& __get_Patterns();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __get_Patterns() const;

  constexpr void __set_Patterns(::System::Collections::ArrayList* value);

  constexpr ::System::Collections::ArrayList*& __get_Enumeration();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __get_Enumeration() const;

  constexpr void __set_Enumeration(::System::Collections::ArrayList* value);

  constexpr ::System::Xml::Schema::XmlSchemaWhiteSpace& __get_WhiteSpace();

  constexpr ::System::Xml::Schema::XmlSchemaWhiteSpace const& __get_WhiteSpace() const;

  constexpr void __set_WhiteSpace(::System::Xml::Schema::XmlSchemaWhiteSpace value);

  constexpr ::System::Object*& __get_MaxInclusive();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_MaxInclusive() const;

  constexpr void __set_MaxInclusive(::System::Object* value);

  constexpr ::System::Object*& __get_MaxExclusive();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_MaxExclusive() const;

  constexpr void __set_MaxExclusive(::System::Object* value);

  constexpr ::System::Object*& __get_MinInclusive();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_MinInclusive() const;

  constexpr void __set_MinInclusive(::System::Object* value);

  constexpr ::System::Object*& __get_MinExclusive();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_MinExclusive() const;

  constexpr void __set_MinExclusive(::System::Object* value);

  constexpr int32_t& __get_TotalDigits();

  constexpr int32_t const& __get_TotalDigits() const;

  constexpr void __set_TotalDigits(int32_t value);

  constexpr int32_t& __get_FractionDigits();

  constexpr int32_t const& __get_FractionDigits() const;

  constexpr void __set_FractionDigits(int32_t value);

  constexpr ::System::Xml::Schema::RestrictionFlags& __get_Flags();

  constexpr ::System::Xml::Schema::RestrictionFlags const& __get_Flags() const;

  constexpr void __set_Flags(::System::Xml::Schema::RestrictionFlags value);

  // Ctor Parameters [CppParam { name: "", ty: "RestrictionFacets", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RestrictionFacets(RestrictionFacets&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RestrictionFacets", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RestrictionFacets(RestrictionFacets const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RestrictionFacets();

public:
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::RestrictionFacets, 0x68>, "Size mismatch!");

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

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::RestrictionFacets);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::RestrictionFacets*, "System.Xml.Schema", "RestrictionFacets");
