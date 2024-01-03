#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDerivationMethod_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaType)
namespace System::Xml::Schema {
class SchemaElementDecl;
}
namespace System::Xml::Schema {
struct XmlSchemaContentType;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Xml::Schema {
struct XmlSchemaDerivationMethod;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaType;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaType);
// Type: System.Xml.Schema::XmlSchemaType
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11714)), TypeDefinitionIndex(TypeDefinitionIndex(11722)), TypeDefinitionIndex(TypeDefinitionIndex(11724))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11742))
// CS Name: ::System.Xml.Schema::XmlSchemaType*
class CORDL_TYPE XmlSchemaType : public ::System::Xml::Schema::XmlSchemaAnnotated {
public:
  // Declarations
  /// @brief Field final, offset 0x10, size 0x4
  __declspec(property(get = __get_final, put = __set_final))::System::Xml::Schema::XmlSchemaDerivationMethod final;

  /// @brief Field derivedBy, offset 0x14, size 0x4
  __declspec(property(get = __get_derivedBy, put = __set_derivedBy))::System::Xml::Schema::XmlSchemaDerivationMethod derivedBy;

  /// @brief Field baseSchemaType, offset 0x18, size 0x8
  __declspec(property(get = __get_baseSchemaType, put = __set_baseSchemaType))::System::Xml::Schema::XmlSchemaType* baseSchemaType;

  /// @brief Field datatype, offset 0x20, size 0x8
  __declspec(property(get = __get_datatype, put = __set_datatype))::System::Xml::Schema::XmlSchemaDatatype* datatype;

  /// @brief Field elementDecl, offset 0x28, size 0x8
  __declspec(property(get = __get_elementDecl, put = __set_elementDecl))::System::Xml::Schema::SchemaElementDecl* elementDecl;

  /// @brief Field qname, offset 0x30, size 0x8
  __declspec(property(get = __get_qname, put = __set_qname))::System::Xml::XmlQualifiedName* qname;

  /// @brief Field contentType, offset 0x38, size 0x4
  __declspec(property(get = __get_contentType, put = __set_contentType))::System::Xml::Schema::XmlSchemaContentType contentType;

  __declspec(property(get = get_QualifiedName))::System::Xml::XmlQualifiedName* QualifiedName;

  __declspec(property(get = get_BaseXmlSchemaType))::System::Xml::Schema::XmlSchemaType* BaseXmlSchemaType;

  __declspec(property(get = get_Datatype))::System::Xml::Schema::XmlSchemaDatatype* Datatype;

  __declspec(property(put = set_IsMixed)) bool IsMixed;

  __declspec(property(get = get_TypeCode))::System::Xml::Schema::XmlTypeCode TypeCode;

  __declspec(property(get = get_ValueConverter))::System::Xml::Schema::XmlValueConverter* ValueConverter;

  __declspec(property(get = get_ElementDecl, put = set_ElementDecl))::System::Xml::Schema::SchemaElementDecl* ElementDecl;

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod& __get_final();

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod const& __get_final() const;

  constexpr void __set_final(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod& __get_derivedBy();

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod const& __get_derivedBy() const;

  constexpr void __set_derivedBy(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  constexpr ::System::Xml::Schema::XmlSchemaType*& __get_baseSchemaType();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaType*> const& __get_baseSchemaType() const;

  constexpr void __set_baseSchemaType(::System::Xml::Schema::XmlSchemaType* value);

  constexpr ::System::Xml::Schema::XmlSchemaDatatype*& __get_datatype();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaDatatype*> const& __get_datatype() const;

  constexpr void __set_datatype(::System::Xml::Schema::XmlSchemaDatatype* value);

  constexpr ::System::Xml::Schema::SchemaElementDecl*& __get_elementDecl();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SchemaElementDecl*> const& __get_elementDecl() const;

  constexpr void __set_elementDecl(::System::Xml::Schema::SchemaElementDecl* value);

  constexpr ::System::Xml::XmlQualifiedName*& __get_qname();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __get_qname() const;

  constexpr void __set_qname(::System::Xml::XmlQualifiedName* value);

  constexpr ::System::Xml::Schema::XmlSchemaContentType& __get_contentType();

  constexpr ::System::Xml::Schema::XmlSchemaContentType const& __get_contentType() const;

  constexpr void __set_contentType(::System::Xml::Schema::XmlSchemaContentType value);

  /// @brief Method GetBuiltInSimpleType, addr 0x28c92b0, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlSchemaSimpleType* GetBuiltInSimpleType(::System::Xml::Schema::XmlTypeCode typeCode);

  /// @brief Method get_QualifiedName, addr 0x28c9308, size 0x18, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* get_QualifiedName();

  /// @brief Method get_BaseXmlSchemaType, addr 0x28c9320, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaType* get_BaseXmlSchemaType();

  /// @brief Method get_Datatype, addr 0x28c9328, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaDatatype* get_Datatype();

  /// @brief Method set_IsMixed, addr 0x28c9330, size 0x4, virtual true, abstract: false, final false
  inline void set_IsMixed(bool value);

  /// @brief Method get_TypeCode, addr 0x28c6248, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlTypeCode get_TypeCode();

  /// @brief Method get_ValueConverter, addr 0x28c6880, size 0x78, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlValueConverter* get_ValueConverter();

  /// @brief Method SetQualifiedName, addr 0x28c7800, size 0x24, virtual false, abstract: false, final false
  inline void SetQualifiedName(::System::Xml::XmlQualifiedName* value);

  /// @brief Method SetBaseSchemaType, addr 0x28c9334, size 0x8, virtual false, abstract: false, final false
  inline void SetBaseSchemaType(::System::Xml::Schema::XmlSchemaType* value);

  /// @brief Method SetDerivedBy, addr 0x28c933c, size 0x8, virtual false, abstract: false, final false
  inline void SetDerivedBy(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  /// @brief Method SetDatatype, addr 0x28c9344, size 0x8, virtual false, abstract: false, final false
  inline void SetDatatype(::System::Xml::Schema::XmlSchemaDatatype* value);

  /// @brief Method get_ElementDecl, addr 0x28c7848, size 0x18, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaElementDecl* get_ElementDecl();

  /// @brief Method set_ElementDecl, addr 0x28c7824, size 0x24, virtual false, abstract: false, final false
  inline void set_ElementDecl(::System::Xml::Schema::SchemaElementDecl* value);

  /// @brief Method SetContentType, addr 0x28c934c, size 0x8, virtual false, abstract: false, final false
  inline void SetContentType(::System::Xml::Schema::XmlSchemaContentType value);

  static inline ::System::Xml::Schema::XmlSchemaType* New_ctor();

  /// @brief Method .ctor, addr 0x28c7c7c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaType(XmlSchemaType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaType(XmlSchemaType const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaType();

public:
  /// @brief Field final, offset: 0x10, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaDerivationMethod ___final;

  /// @brief Field derivedBy, offset: 0x14, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaDerivationMethod ___derivedBy;

  /// @brief Field baseSchemaType, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaType* ___baseSchemaType;

  /// @brief Field datatype, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaDatatype* ___datatype;

  /// @brief Field elementDecl, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Schema::SchemaElementDecl* ___elementDecl;

  /// @brief Field qname, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___qname;

  /// @brief Field contentType, offset: 0x38, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaContentType ___contentType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaType, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaType, ___final) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaType, ___derivedBy) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaType, ___baseSchemaType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaType, ___datatype) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaType, ___elementDecl) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaType, ___qname) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaType, ___contentType) == 0x38, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaType);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaType*, "System.Xml.Schema", "XmlSchemaType");
