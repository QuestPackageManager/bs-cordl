#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaDatatype)
namespace System::Xml::Schema {
class FacetsChecker;
}
namespace System::Xml::Schema {
class RestrictionFacets;
}
namespace System::Xml::Schema {
struct XmlSchemaDatatypeVariety;
}
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
struct XmlTokenizedType;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaDatatype);
// Type: System.Xml.Schema::XmlSchemaDatatype
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaDatatype*
class CORDL_TYPE XmlSchemaDatatype : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BuiltInWhitespaceFacet))::System::Xml::Schema::XmlSchemaWhiteSpace BuiltInWhitespaceFacet;

  __declspec(property(get = get_FacetsChecker))::System::Xml::Schema::FacetsChecker* FacetsChecker;

  __declspec(property(get = get_Restriction))::System::Xml::Schema::RestrictionFacets* Restriction;

  __declspec(property(get = get_TokenizedType))::System::Xml::XmlTokenizedType TokenizedType;

  __declspec(property(get = get_TypeCode))::System::Xml::Schema::XmlTypeCode TypeCode;

  __declspec(property(get = get_TypeCodeString))::StringW TypeCodeString;

  __declspec(property(get = get_ValueConverter))::System::Xml::Schema::XmlValueConverter* ValueConverter;

  __declspec(property(get = get_ValueType))::System::Type* ValueType;

  __declspec(property(get = get_Variety))::System::Xml::Schema::XmlSchemaDatatypeVariety Variety;

  /// @brief Method Compare, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t Compare(::System::Object* value1, ::System::Object* value2);

  /// @brief Method FromXmlTokenizedType, addr 0x29ae13c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlSchemaDatatype* FromXmlTokenizedType(::System::Xml::XmlTokenizedType token);

  /// @brief Method IsEqual, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsEqual(::System::Object* o1, ::System::Object* o2);

  static inline ::System::Xml::Schema::XmlSchemaDatatype* New_ctor();

  /// @brief Method ParseValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* ParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr);

  /// @brief Method TryParseValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Exception* TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ByRef<::System::Object*> typedValue);

  /// @brief Method TypeCodeToString, addr 0x29b1870, size 0x4ac, virtual false, abstract: false, final false
  inline ::StringW TypeCodeToString(::System::Xml::Schema::XmlTypeCode typeCode);

  /// @brief Method .ctor, addr 0x29b1d1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BuiltInWhitespaceFacet, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet();

  /// @brief Method get_FacetsChecker, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::Schema::FacetsChecker* get_FacetsChecker();

  /// @brief Method get_Restriction, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::Schema::RestrictionFacets* get_Restriction();

  /// @brief Method get_TokenizedType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::XmlTokenizedType get_TokenizedType();

  /// @brief Method get_TypeCode, addr 0x29b1868, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlTypeCode get_TypeCode();

  /// @brief Method get_TypeCodeString, addr 0x29aae08, size 0x128, virtual false, abstract: false, final false
  inline ::StringW get_TypeCodeString();

  /// @brief Method get_ValueConverter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::Schema::XmlValueConverter* get_ValueConverter();

  /// @brief Method get_ValueType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* get_ValueType();

  /// @brief Method get_Variety, addr 0x29b1860, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaDatatypeVariety get_Variety();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaDatatype();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaDatatype", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaDatatype(XmlSchemaDatatype&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaDatatype", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaDatatype(XmlSchemaDatatype const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaDatatype, 0x10>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaDatatype);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaDatatype*, "System.Xml.Schema", "XmlSchemaDatatype");
