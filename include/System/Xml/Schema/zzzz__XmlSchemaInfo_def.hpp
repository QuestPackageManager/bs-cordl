#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__IXmlSchemaInfo_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaValidity_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaInfo)
namespace System::Xml::Schema {
class XmlSchemaAttribute;
}
namespace System::Xml::Schema {
struct XmlSchemaContentType;
}
namespace System::Xml::Schema {
class XmlSchemaElement;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
struct XmlSchemaValidity;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaInfo);
// Dependencies System.Object, System.Xml.Schema.IXmlSchemaInfo, System.Xml.Schema.XmlSchemaContentType, System.Xml.Schema.XmlSchemaValidity
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaInfo
class CORDL_TYPE XmlSchemaInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ContentType)) ::System::Xml::Schema::XmlSchemaContentType ContentType;

  __declspec(property(get = get_HasDefaultValue)) bool HasDefaultValue;

  __declspec(property(get = get_IsDefault, put = set_IsDefault)) bool IsDefault;

  __declspec(property(get = get_IsNil, put = set_IsNil)) bool IsNil;

  __declspec(property(get = get_IsUnionType)) bool IsUnionType;

  __declspec(property(get = get_MemberType, put = set_MemberType)) ::System::Xml::Schema::XmlSchemaSimpleType* MemberType;

  __declspec(property(get = get_SchemaAttribute, put = set_SchemaAttribute)) ::System::Xml::Schema::XmlSchemaAttribute* SchemaAttribute;

  __declspec(property(get = get_SchemaElement, put = set_SchemaElement)) ::System::Xml::Schema::XmlSchemaElement* SchemaElement;

  __declspec(property(get = get_SchemaType, put = set_SchemaType)) ::System::Xml::Schema::XmlSchemaType* SchemaType;

  __declspec(property(get = get_Validity, put = set_Validity)) ::System::Xml::Schema::XmlSchemaValidity Validity;

  __declspec(property(get = get_XmlType)) ::System::Xml::Schema::XmlSchemaType* XmlType;

  /// @brief Field contentType, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_contentType, put = __cordl_internal_set_contentType)) ::System::Xml::Schema::XmlSchemaContentType contentType;

  /// @brief Field isDefault, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_isDefault, put = __cordl_internal_set_isDefault)) bool isDefault;

  /// @brief Field isNil, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_isNil, put = __cordl_internal_set_isNil)) bool isNil;

  /// @brief Field memberType, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_memberType, put = __cordl_internal_set_memberType)) ::System::Xml::Schema::XmlSchemaSimpleType* memberType;

  /// @brief Field schemaAttribute, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_schemaAttribute, put = __cordl_internal_set_schemaAttribute)) ::System::Xml::Schema::XmlSchemaAttribute* schemaAttribute;

  /// @brief Field schemaElement, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_schemaElement, put = __cordl_internal_set_schemaElement)) ::System::Xml::Schema::XmlSchemaElement* schemaElement;

  /// @brief Field schemaType, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_schemaType, put = __cordl_internal_set_schemaType)) ::System::Xml::Schema::XmlSchemaType* schemaType;

  /// @brief Field validity, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_validity, put = __cordl_internal_set_validity)) ::System::Xml::Schema::XmlSchemaValidity validity;

  /// @brief Convert operator to "::System::Xml::Schema::IXmlSchemaInfo"
  constexpr operator ::System::Xml::Schema::IXmlSchemaInfo*() noexcept;

  /// @brief Method Clear, addr 0x42bdaac, size 0x1c, virtual false, abstract: false, final false
  inline void Clear();

  static inline ::System::Xml::Schema::XmlSchemaInfo* New_ctor();

  static inline ::System::Xml::Schema::XmlSchemaInfo* New_ctor(::System::Xml::Schema::XmlSchemaValidity validity);

  constexpr ::System::Xml::Schema::XmlSchemaContentType const& __cordl_internal_get_contentType() const;

  constexpr ::System::Xml::Schema::XmlSchemaContentType& __cordl_internal_get_contentType();

  constexpr bool const& __cordl_internal_get_isDefault() const;

  constexpr bool& __cordl_internal_get_isDefault();

  constexpr bool const& __cordl_internal_get_isNil() const;

  constexpr bool& __cordl_internal_get_isNil();

  constexpr ::System::Xml::Schema::XmlSchemaSimpleType* const& __cordl_internal_get_memberType() const;

  constexpr ::System::Xml::Schema::XmlSchemaSimpleType*& __cordl_internal_get_memberType();

  constexpr ::System::Xml::Schema::XmlSchemaAttribute* const& __cordl_internal_get_schemaAttribute() const;

  constexpr ::System::Xml::Schema::XmlSchemaAttribute*& __cordl_internal_get_schemaAttribute();

  constexpr ::System::Xml::Schema::XmlSchemaElement* const& __cordl_internal_get_schemaElement() const;

  constexpr ::System::Xml::Schema::XmlSchemaElement*& __cordl_internal_get_schemaElement();

  constexpr ::System::Xml::Schema::XmlSchemaType* const& __cordl_internal_get_schemaType() const;

  constexpr ::System::Xml::Schema::XmlSchemaType*& __cordl_internal_get_schemaType();

  constexpr ::System::Xml::Schema::XmlSchemaValidity const& __cordl_internal_get_validity() const;

  constexpr ::System::Xml::Schema::XmlSchemaValidity& __cordl_internal_get_validity();

  constexpr void __cordl_internal_set_contentType(::System::Xml::Schema::XmlSchemaContentType value);

  constexpr void __cordl_internal_set_isDefault(bool value);

  constexpr void __cordl_internal_set_isNil(bool value);

  constexpr void __cordl_internal_set_memberType(::System::Xml::Schema::XmlSchemaSimpleType* value);

  constexpr void __cordl_internal_set_schemaAttribute(::System::Xml::Schema::XmlSchemaAttribute* value);

  constexpr void __cordl_internal_set_schemaElement(::System::Xml::Schema::XmlSchemaElement* value);

  constexpr void __cordl_internal_set_schemaType(::System::Xml::Schema::XmlSchemaType* value);

  constexpr void __cordl_internal_set_validity(::System::Xml::Schema::XmlSchemaValidity value);

  /// @brief Method .ctor, addr 0x42bda7c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x42bdac8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaValidity validity);

  /// @brief Method get_ContentType, addr 0x42bdba0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaContentType get_ContentType();

  /// @brief Method get_HasDefaultValue, addr 0x42bdbc4, size 0x34, virtual false, abstract: false, final false
  inline bool get_HasDefaultValue();

  /// @brief Method get_IsDefault, addr 0x42bdb14, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsDefault();

  /// @brief Method get_IsNil, addr 0x42bdb28, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsNil();

  /// @brief Method get_IsUnionType, addr 0x42bdbf8, size 0x38, virtual false, abstract: false, final false
  inline bool get_IsUnionType();

  /// @brief Method get_MemberType, addr 0x42bdb3c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Xml::Schema::XmlSchemaSimpleType* get_MemberType();

  /// @brief Method get_SchemaAttribute, addr 0x42bdb88, size 0x8, virtual true, abstract: false, final true
  inline ::System::Xml::Schema::XmlSchemaAttribute* get_SchemaAttribute();

  /// @brief Method get_SchemaElement, addr 0x42bdb70, size 0x8, virtual true, abstract: false, final true
  inline ::System::Xml::Schema::XmlSchemaElement* get_SchemaElement();

  /// @brief Method get_SchemaType, addr 0x42bdb4c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Xml::Schema::XmlSchemaType* get_SchemaType();

  /// @brief Method get_Validity, addr 0x42bdb04, size 0x8, virtual true, abstract: false, final true
  inline ::System::Xml::Schema::XmlSchemaValidity get_Validity();

  /// @brief Method get_XmlType, addr 0x42bdba8, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaType* get_XmlType();

  /// @brief Convert to "::System::Xml::Schema::IXmlSchemaInfo"
  constexpr ::System::Xml::Schema::IXmlSchemaInfo* i___System__Xml__Schema__IXmlSchemaInfo() noexcept;

  /// @brief Method set_IsDefault, addr 0x42bdb1c, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDefault(bool value);

  /// @brief Method set_IsNil, addr 0x42bdb30, size 0xc, virtual false, abstract: false, final false
  inline void set_IsNil(bool value);

  /// @brief Method set_MemberType, addr 0x42bdb44, size 0x8, virtual false, abstract: false, final false
  inline void set_MemberType(::System::Xml::Schema::XmlSchemaSimpleType* value);

  /// @brief Method set_SchemaAttribute, addr 0x42bdb90, size 0x10, virtual false, abstract: false, final false
  inline void set_SchemaAttribute(::System::Xml::Schema::XmlSchemaAttribute* value);

  /// @brief Method set_SchemaElement, addr 0x42bdb78, size 0x10, virtual false, abstract: false, final false
  inline void set_SchemaElement(::System::Xml::Schema::XmlSchemaElement* value);

  /// @brief Method set_SchemaType, addr 0x42bdb54, size 0x1c, virtual false, abstract: false, final false
  inline void set_SchemaType(::System::Xml::Schema::XmlSchemaType* value);

  /// @brief Method set_Validity, addr 0x42bdb0c, size 0x8, virtual false, abstract: false, final false
  inline void set_Validity(::System::Xml::Schema::XmlSchemaValidity value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaInfo(XmlSchemaInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaInfo(XmlSchemaInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7699 };

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
static_assert(offsetof(::System::Xml::Schema::XmlSchemaInfo, ___isDefault) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaInfo, ___isNil) == 0x11, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaInfo, ___schemaElement) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaInfo, ___schemaAttribute) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaInfo, ___schemaType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaInfo, ___memberType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaInfo, ___validity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaInfo, ___contentType) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaInfo, 0x40>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaInfo*, "System.Xml.Schema", "XmlSchemaInfo");
