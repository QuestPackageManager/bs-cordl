#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDerivationMethod_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlSchemaType)
namespace System::Xml::Schema {
class SchemaElementDecl;
}
namespace System::Xml::Schema {
class XmlSchemaComplexType;
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
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 148, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaType*
class CORDL_TYPE XmlSchemaType : public ::System::Xml::Schema::XmlSchemaAnnotated {
public:
  // Declarations
  __declspec(property(get = get_BaseXmlSchemaType))::System::Xml::Schema::XmlSchemaType* BaseXmlSchemaType;

  __declspec(property(get = get_Datatype))::System::Xml::Schema::XmlSchemaDatatype* Datatype;

  __declspec(property(get = get_DerivedBy))::System::Xml::Schema::XmlSchemaDerivationMethod DerivedBy;

  __declspec(property(get = get_ElementDecl, put = set_ElementDecl))::System::Xml::Schema::SchemaElementDecl* ElementDecl;

  __declspec(property(get = get_Final, put = set_Final))::System::Xml::Schema::XmlSchemaDerivationMethod Final;

  __declspec(property(get = get_FinalResolved))::System::Xml::Schema::XmlSchemaDerivationMethod FinalResolved;

  __declspec(property(get = get_IsMixed, put = set_IsMixed)) bool IsMixed;

  __declspec(property(get = get_Name, put = set_Name))::StringW Name;

  __declspec(property(get = get_NameAttribute, put = set_NameAttribute))::StringW NameAttribute;

  __declspec(property(get = get_QualifiedName))::System::Xml::XmlQualifiedName* QualifiedName;

  __declspec(property(get = get_Redefined, put = set_Redefined))::System::Xml::Schema::XmlSchemaType* Redefined;

  __declspec(property(get = get_SchemaContentType))::System::Xml::Schema::XmlSchemaContentType SchemaContentType;

  __declspec(property(get = get_TypeCode))::System::Xml::Schema::XmlTypeCode TypeCode;

  __declspec(property(get = get_ValueConverter))::System::Xml::Schema::XmlValueConverter* ValueConverter;

  /// @brief Field baseSchemaType, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_baseSchemaType, put = __cordl_internal_set_baseSchemaType))::System::Xml::Schema::XmlSchemaType* baseSchemaType;

  /// @brief Field contentType, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_contentType, put = __cordl_internal_set_contentType))::System::Xml::Schema::XmlSchemaContentType contentType;

  /// @brief Field datatype, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_datatype, put = __cordl_internal_set_datatype))::System::Xml::Schema::XmlSchemaDatatype* datatype;

  /// @brief Field derivedBy, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_derivedBy, put = __cordl_internal_set_derivedBy))::System::Xml::Schema::XmlSchemaDerivationMethod derivedBy;

  /// @brief Field elementDecl, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_elementDecl, put = __cordl_internal_set_elementDecl))::System::Xml::Schema::SchemaElementDecl* elementDecl;

  /// @brief Field final, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_final, put = __cordl_internal_set_final))::System::Xml::Schema::XmlSchemaDerivationMethod final;

  /// @brief Field finalResolved, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_finalResolved, put = __cordl_internal_set_finalResolved))::System::Xml::Schema::XmlSchemaDerivationMethod finalResolved;

  /// @brief Field name, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  /// @brief Field qname, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_qname, put = __cordl_internal_set_qname))::System::Xml::XmlQualifiedName* qname;

  /// @brief Field redefined, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_redefined, put = __cordl_internal_set_redefined))::System::Xml::Schema::XmlSchemaType* redefined;

  /// @brief Method GetBuiltInComplexType, addr 0x2d1fe88, size 0x24c, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlSchemaComplexType* GetBuiltInComplexType(::System::Xml::XmlQualifiedName* qualifiedName);

  /// @brief Method GetBuiltInSimpleType, addr 0x2d1fd54, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlSchemaSimpleType* GetBuiltInSimpleType(::System::Xml::XmlQualifiedName* qualifiedName);

  /// @brief Method GetBuiltInSimpleType, addr 0x2d1fe30, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlSchemaSimpleType* GetBuiltInSimpleType(::System::Xml::Schema::XmlTypeCode typeCode);

  /// @brief Method IsDerivedFrom, addr 0x2d202ec, size 0x1f8, virtual false, abstract: false, final false
  static inline bool IsDerivedFrom(::System::Xml::Schema::XmlSchemaType* derivedType, ::System::Xml::Schema::XmlSchemaType* baseType, ::System::Xml::Schema::XmlSchemaDerivationMethod except);

  /// @brief Method IsDerivedFromDatatype, addr 0x2d204e4, size 0xd4, virtual false, abstract: false, final false
  static inline bool IsDerivedFromDatatype(::System::Xml::Schema::XmlSchemaDatatype* derivedDataType, ::System::Xml::Schema::XmlSchemaDatatype* baseDataType,
                                           ::System::Xml::Schema::XmlSchemaDerivationMethod except);

  static inline ::System::Xml::Schema::XmlSchemaType* New_ctor();

  /// @brief Method SetBaseSchemaType, addr 0x2d20280, size 0x8, virtual false, abstract: false, final false
  inline void SetBaseSchemaType(::System::Xml::Schema::XmlSchemaType* value);

  /// @brief Method SetContentType, addr 0x2d202e4, size 0x8, virtual false, abstract: false, final false
  inline void SetContentType(::System::Xml::Schema::XmlSchemaContentType value);

  /// @brief Method SetDatatype, addr 0x2d20290, size 0x8, virtual false, abstract: false, final false
  inline void SetDatatype(::System::Xml::Schema::XmlSchemaDatatype* value);

  /// @brief Method SetDerivedBy, addr 0x2d20288, size 0x8, virtual false, abstract: false, final false
  inline void SetDerivedBy(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  /// @brief Method SetFinalResolved, addr 0x2d20278, size 0x8, virtual false, abstract: false, final false
  inline void SetFinalResolved(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  /// @brief Method SetQualifiedName, addr 0x2d20254, size 0x24, virtual false, abstract: false, final false
  inline void SetQualifiedName(::System::Xml::XmlQualifiedName* value);

  constexpr ::System::Xml::Schema::XmlSchemaType*& __cordl_internal_get_baseSchemaType();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaType*> const& __cordl_internal_get_baseSchemaType() const;

  constexpr ::System::Xml::Schema::XmlSchemaContentType const& __cordl_internal_get_contentType() const;

  constexpr ::System::Xml::Schema::XmlSchemaContentType& __cordl_internal_get_contentType();

  constexpr ::System::Xml::Schema::XmlSchemaDatatype*& __cordl_internal_get_datatype();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaDatatype*> const& __cordl_internal_get_datatype() const;

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod const& __cordl_internal_get_derivedBy() const;

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod& __cordl_internal_get_derivedBy();

  constexpr ::System::Xml::Schema::SchemaElementDecl*& __cordl_internal_get_elementDecl();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SchemaElementDecl*> const& __cordl_internal_get_elementDecl() const;

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod const& __cordl_internal_get_final() const;

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod& __cordl_internal_get_final();

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod const& __cordl_internal_get_finalResolved() const;

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod& __cordl_internal_get_finalResolved();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_qname();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_qname() const;

  constexpr ::System::Xml::Schema::XmlSchemaType*& __cordl_internal_get_redefined();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaType*> const& __cordl_internal_get_redefined() const;

  constexpr void __cordl_internal_set_baseSchemaType(::System::Xml::Schema::XmlSchemaType* value);

  constexpr void __cordl_internal_set_contentType(::System::Xml::Schema::XmlSchemaContentType value);

  constexpr void __cordl_internal_set_datatype(::System::Xml::Schema::XmlSchemaDatatype* value);

  constexpr void __cordl_internal_set_derivedBy(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  constexpr void __cordl_internal_set_elementDecl(::System::Xml::Schema::SchemaElementDecl* value);

  constexpr void __cordl_internal_set_final(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  constexpr void __cordl_internal_set_finalResolved(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_qname(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_redefined(::System::Xml::Schema::XmlSchemaType* value);

  /// @brief Method .ctor, addr 0x2d1f4e0, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BaseXmlSchemaType, addr 0x2d200fc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaType* get_BaseXmlSchemaType();

  /// @brief Method get_Datatype, addr 0x2d2010c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaDatatype* get_Datatype();

  /// @brief Method get_DerivedBy, addr 0x2d20104, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaDerivationMethod get_DerivedBy();

  /// @brief Method get_ElementDecl, addr 0x2d20298, size 0x18, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaElementDecl* get_ElementDecl();

  /// @brief Method get_Final, addr 0x2d200e4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaDerivationMethod get_Final();

  /// @brief Method get_FinalResolved, addr 0x2d200f4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaDerivationMethod get_FinalResolved();

  /// @brief Method get_IsMixed, addr 0x2d20114, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsMixed();

  /// @brief Method get_Name, addr 0x2d200d4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NameAttribute, addr 0x2d205b8, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_NameAttribute();

  /// @brief Method get_QualifiedName, addr 0x2d1f000, size 0x18, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* get_QualifiedName();

  /// @brief Method get_Redefined, addr 0x2d202d4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaType* get_Redefined();

  /// @brief Method get_SchemaContentType, addr 0x2d2024c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaContentType get_SchemaContentType();

  /// @brief Method get_TypeCode, addr 0x2d20120, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlTypeCode get_TypeCode();

  /// @brief Method get_ValueConverter, addr 0x2d201d4, size 0x78, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlValueConverter* get_ValueConverter();

  /// @brief Method set_ElementDecl, addr 0x2d202b0, size 0x24, virtual false, abstract: false, final false
  inline void set_ElementDecl(::System::Xml::Schema::SchemaElementDecl* value);

  /// @brief Method set_Final, addr 0x2d200ec, size 0x8, virtual false, abstract: false, final false
  inline void set_Final(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  /// @brief Method set_IsMixed, addr 0x2d2011c, size 0x4, virtual true, abstract: false, final false
  inline void set_IsMixed(bool value);

  /// @brief Method set_Name, addr 0x2d200dc, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_NameAttribute, addr 0x2d205c0, size 0x8, virtual true, abstract: false, final false
  inline void set_NameAttribute(::StringW value);

  /// @brief Method set_Redefined, addr 0x2d202dc, size 0x8, virtual false, abstract: false, final false
  inline void set_Redefined(::System::Xml::Schema::XmlSchemaType* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaType(XmlSchemaType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaType(XmlSchemaType const&) = delete;

  /// @brief Field name, offset: 0x50, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field final, offset: 0x58, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaDerivationMethod ___final;

  /// @brief Field derivedBy, offset: 0x5c, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaDerivationMethod ___derivedBy;

  /// @brief Field baseSchemaType, offset: 0x60, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaType* ___baseSchemaType;

  /// @brief Field datatype, offset: 0x68, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaDatatype* ___datatype;

  /// @brief Field finalResolved, offset: 0x70, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaDerivationMethod ___finalResolved;

  /// @brief Field elementDecl, offset: 0x78, size: 0x8, def value: None
  ::System::Xml::Schema::SchemaElementDecl* ___elementDecl;

  /// @brief Field qname, offset: 0x80, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___qname;

  /// @brief Field redefined, offset: 0x88, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaType* ___redefined;

  /// @brief Field contentType, offset: 0x90, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaContentType ___contentType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaType, 0x98>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaType, ___name) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaType, ___final) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaType, ___derivedBy) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaType, ___baseSchemaType) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaType, ___datatype) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaType, ___finalResolved) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaType, ___elementDecl) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaType, ___qname) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaType, ___redefined) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaType, ___contentType) == 0x90, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaType);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaType*, "System.Xml.Schema", "XmlSchemaType");
