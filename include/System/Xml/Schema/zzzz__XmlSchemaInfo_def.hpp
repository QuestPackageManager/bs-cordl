#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaContentType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaValidity_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaInfo)
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
class XmlSchemaAttribute;
}
namespace System::Xml::Schema {
struct XmlSchemaValidity;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System::Xml::Schema {
class IXmlSchemaInfo;
}
namespace System::Xml::Schema {
class XmlSchemaElement;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaInfo);
// Type: System.Xml.Schema::XmlSchemaInfo
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11672)), TypeDefinitionIndex(TypeDefinitionIndex(11650)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11657))
// CS Name: ::System.Xml.Schema::XmlSchemaInfo*
class CORDL_TYPE XmlSchemaInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field isDefault, offset 0x10, size 0x1
  __declspec(property(get = __get_isDefault, put = __set_isDefault)) bool isDefault;

  /// @brief Field isNil, offset 0x11, size 0x1
  __declspec(property(get = __get_isNil, put = __set_isNil)) bool isNil;

  /// @brief Field schemaElement, offset 0x18, size 0x8
  __declspec(property(get = __get_schemaElement, put = __set_schemaElement))::System::Xml::Schema::XmlSchemaElement* schemaElement;

  /// @brief Field schemaAttribute, offset 0x20, size 0x8
  __declspec(property(get = __get_schemaAttribute, put = __set_schemaAttribute))::System::Xml::Schema::XmlSchemaAttribute* schemaAttribute;

  /// @brief Field schemaType, offset 0x28, size 0x8
  __declspec(property(get = __get_schemaType, put = __set_schemaType))::System::Xml::Schema::XmlSchemaType* schemaType;

  /// @brief Field memberType, offset 0x30, size 0x8
  __declspec(property(get = __get_memberType, put = __set_memberType))::System::Xml::Schema::XmlSchemaSimpleType* memberType;

  /// @brief Field validity, offset 0x38, size 0x4
  __declspec(property(get = __get_validity, put = __set_validity))::System::Xml::Schema::XmlSchemaValidity validity;

  /// @brief Field contentType, offset 0x3c, size 0x4
  __declspec(property(get = __get_contentType, put = __set_contentType))::System::Xml::Schema::XmlSchemaContentType contentType;

  __declspec(property(get = get_Validity))::System::Xml::Schema::XmlSchemaValidity Validity;

  __declspec(property(get = get_IsDefault)) bool IsDefault;

  __declspec(property(get = get_IsNil)) bool IsNil;

  __declspec(property(get = get_MemberType))::System::Xml::Schema::XmlSchemaSimpleType* MemberType;

  __declspec(property(get = get_SchemaType))::System::Xml::Schema::XmlSchemaType* SchemaType;

  __declspec(property(get = get_SchemaElement))::System::Xml::Schema::XmlSchemaElement* SchemaElement;

  __declspec(property(get = get_SchemaAttribute))::System::Xml::Schema::XmlSchemaAttribute* SchemaAttribute;

  /// @brief Convert operator to "::System::Xml::Schema::IXmlSchemaInfo"
  constexpr operator ::System::Xml::Schema::IXmlSchemaInfo*() noexcept;

  constexpr bool& __get_isDefault();

  constexpr bool const& __get_isDefault() const;

  constexpr void __set_isDefault(bool value);

  constexpr bool& __get_isNil();

  constexpr bool const& __get_isNil() const;

  constexpr void __set_isNil(bool value);

  constexpr ::System::Xml::Schema::XmlSchemaElement*& __get_schemaElement();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaElement*> const& __get_schemaElement() const;

  constexpr void __set_schemaElement(::System::Xml::Schema::XmlSchemaElement* value);

  constexpr ::System::Xml::Schema::XmlSchemaAttribute*& __get_schemaAttribute();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaAttribute*> const& __get_schemaAttribute() const;

  constexpr void __set_schemaAttribute(::System::Xml::Schema::XmlSchemaAttribute* value);

  constexpr ::System::Xml::Schema::XmlSchemaType*& __get_schemaType();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaType*> const& __get_schemaType() const;

  constexpr void __set_schemaType(::System::Xml::Schema::XmlSchemaType* value);

  constexpr ::System::Xml::Schema::XmlSchemaSimpleType*& __get_memberType();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaSimpleType*> const& __get_memberType() const;

  constexpr void __set_memberType(::System::Xml::Schema::XmlSchemaSimpleType* value);

  constexpr ::System::Xml::Schema::XmlSchemaValidity& __get_validity();

  constexpr ::System::Xml::Schema::XmlSchemaValidity const& __get_validity() const;

  constexpr void __set_validity(::System::Xml::Schema::XmlSchemaValidity value);

  constexpr ::System::Xml::Schema::XmlSchemaContentType& __get_contentType();

  constexpr ::System::Xml::Schema::XmlSchemaContentType const& __get_contentType() const;

  constexpr void __set_contentType(::System::Xml::Schema::XmlSchemaContentType value);

  static inline ::System::Xml::Schema::XmlSchemaInfo* New_ctor();

  /// @brief Method .ctor addr 0x274ab38 size 0x30 virtual false final false
  inline void _ctor();

  static inline ::System::Xml::Schema::XmlSchemaInfo* New_ctor(::System::Xml::Schema::XmlSchemaValidity validity);

  /// @brief Method .ctor addr 0x274ab84 size 0x3c virtual false final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaValidity validity);

  /// @brief Method get_Validity addr 0x274abc0 size 0x8 virtual true final true
  inline ::System::Xml::Schema::XmlSchemaValidity get_Validity();

  /// @brief Method get_IsDefault addr 0x274abc8 size 0x8 virtual true final true
  inline bool get_IsDefault();

  /// @brief Method get_IsNil addr 0x274abd0 size 0x8 virtual true final true
  inline bool get_IsNil();

  /// @brief Method get_MemberType addr 0x274abd8 size 0x8 virtual true final true
  inline ::System::Xml::Schema::XmlSchemaSimpleType* get_MemberType();

  /// @brief Method get_SchemaType addr 0x274abe0 size 0x8 virtual true final true
  inline ::System::Xml::Schema::XmlSchemaType* get_SchemaType();

  /// @brief Method get_SchemaElement addr 0x274abe8 size 0x8 virtual true final true
  inline ::System::Xml::Schema::XmlSchemaElement* get_SchemaElement();

  /// @brief Method get_SchemaAttribute addr 0x274abf0 size 0x8 virtual true final true
  inline ::System::Xml::Schema::XmlSchemaAttribute* get_SchemaAttribute();

  /// @brief Method Clear addr 0x274ab68 size 0x1c virtual false final false
  inline void Clear();

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaInfo(XmlSchemaInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaInfo(XmlSchemaInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaInfo();

public:
  /// @brief Field isDefault, offset: 0x10, size: 0x1, def value: None
  bool ___isDefault;

  /// @brief Field isNil, offset: 0x11, size: 0x1, def value: None
  bool ___isNil;

  /// @brief Field schemaElement, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaElement* ___schemaElement;

  /// @brief Field schemaAttribute, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaAttribute* ___schemaAttribute;

  /// @brief Field schemaType, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaType* ___schemaType;

  /// @brief Field memberType, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaSimpleType* ___memberType;

  /// @brief Field validity, offset: 0x38, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaValidity ___validity;

  /// @brief Field contentType, offset: 0x3c, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaContentType ___contentType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaInfo, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaInfo, ___isDefault) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaInfo, ___isNil) == 0x11, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaInfo, ___schemaElement) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaInfo, ___schemaAttribute) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaInfo, ___schemaType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaInfo, ___memberType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaInfo, ___validity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaInfo, ___contentType) == 0x3c, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaInfo*, "System.Xml.Schema", "XmlSchemaInfo");
