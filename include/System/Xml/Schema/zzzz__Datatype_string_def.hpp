#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Datatype_string)
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml::Schema {
class FacetsChecker;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System {
class Object;
}
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml {
struct XmlTokenizedType;
}
namespace System {
class Exception;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml {
class XmlNameTable;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_string;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_string);
// Type: System.Xml.Schema::Datatype_string
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11552))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11555))
// CS Name: ::System.Xml.Schema::Datatype_string*
class CORDL_TYPE Datatype_string : public ::System::Xml::Schema::Datatype_anySimpleType {
public:
  // Declarations
  __declspec(property(get = get_BuiltInWhitespaceFacet))::System::Xml::Schema::XmlSchemaWhiteSpace BuiltInWhitespaceFacet;

  __declspec(property(get = get_FacetsChecker))::System::Xml::Schema::FacetsChecker* FacetsChecker;

  __declspec(property(get = get_TypeCode))::System::Xml::Schema::XmlTypeCode TypeCode;

  __declspec(property(get = get_TokenizedType))::System::Xml::XmlTokenizedType TokenizedType;

  /// @brief Method CreateValueConverter addr 0x273994c size 0xc virtual true final false
  inline ::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method get_BuiltInWhitespaceFacet addr 0x2739958 size 0x8 virtual true final false
  inline ::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet();

  /// @brief Method get_FacetsChecker addr 0x2739960 size 0x58 virtual true final false
  inline ::System::Xml::Schema::FacetsChecker* get_FacetsChecker();

  /// @brief Method get_TypeCode addr 0x27399b8 size 0x8 virtual true final false
  inline ::System::Xml::Schema::XmlTypeCode get_TypeCode();

  /// @brief Method get_TokenizedType addr 0x27399c0 size 0x8 virtual true final false
  inline ::System::Xml::XmlTokenizedType get_TokenizedType();

  /// @brief Method TryParseValue addr 0x27399c8 size 0xd4 virtual true final false
  inline ::System::Exception* TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ByRef<::System::Object*> typedValue);

  static inline ::System::Xml::Schema::Datatype_string* New_ctor();

  /// @brief Method .ctor addr 0x2739a9c size 0x54 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_string", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_string(Datatype_string&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_string", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_string(Datatype_string const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_string();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_string, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_string);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_string*, "System.Xml.Schema", "Datatype_string");
