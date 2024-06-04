#pragma once
// IWYU pragma private; include "System/Xml/Schema/Datatype_normalizedString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_string_def.hpp"
CORDL_MODULE_EXPORT(Datatype_normalizedString)
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_normalizedString;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_normalizedString);
// Type: System.Xml.Schema::Datatype_normalizedString
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::Datatype_normalizedString*
class CORDL_TYPE Datatype_normalizedString : public ::System::Xml::Schema::Datatype_string {
public:
  // Declarations
  __declspec(property(get = get_BuiltInWhitespaceFacet))::System::Xml::Schema::XmlSchemaWhiteSpace BuiltInWhitespaceFacet;

  __declspec(property(get = get_HasValueFacets)) bool HasValueFacets;

  __declspec(property(get = get_TypeCode))::System::Xml::Schema::XmlTypeCode TypeCode;

  static inline ::System::Xml::Schema::Datatype_normalizedString* New_ctor();

  /// @brief Method .ctor, addr 0x2f25e20, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BuiltInWhitespaceFacet, addr 0x2f2d998, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet();

  /// @brief Method get_HasValueFacets, addr 0x2f2d9a0, size 0x8, virtual true, abstract: false, final false
  inline bool get_HasValueFacets();

  /// @brief Method get_TypeCode, addr 0x2f2d990, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlTypeCode get_TypeCode();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_normalizedString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Datatype_normalizedString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_normalizedString(Datatype_normalizedString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_normalizedString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_normalizedString(Datatype_normalizedString const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_normalizedString, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_normalizedString);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_normalizedString*, "System.Xml.Schema", "Datatype_normalizedString");
