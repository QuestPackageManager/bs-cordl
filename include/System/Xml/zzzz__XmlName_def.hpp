#pragma once
// IWYU pragma private; include "System/Xml/XmlName.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__IXmlSchemaInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlName)
namespace System::Xml::Schema {
class IXmlSchemaInfo;
}
namespace System::Xml::Schema {
class XmlSchemaAttribute;
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
namespace System::Xml {
class XmlDocument;
}
// Forward declare root types
namespace System::Xml {
class XmlName;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlName);
// Dependencies System.Object, System.Xml.Schema.IXmlSchemaInfo
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlName
class CORDL_TYPE XmlName : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_HashCode)) int32_t HashCode;

  __declspec(property(get = get_IsDefault)) bool IsDefault;

  __declspec(property(get = get_IsNil)) bool IsNil;

  __declspec(property(get = get_LocalName)) ::StringW LocalName;

  __declspec(property(get = get_MemberType)) ::System::Xml::Schema::XmlSchemaSimpleType* MemberType;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_NamespaceURI)) ::StringW NamespaceURI;

  __declspec(property(get = get_OwnerDocument)) ::System::Xml::XmlDocument* OwnerDocument;

  __declspec(property(get = get_Prefix)) ::StringW Prefix;

  __declspec(property(get = get_SchemaAttribute)) ::System::Xml::Schema::XmlSchemaAttribute* SchemaAttribute;

  __declspec(property(get = get_SchemaElement)) ::System::Xml::Schema::XmlSchemaElement* SchemaElement;

  __declspec(property(get = get_SchemaType)) ::System::Xml::Schema::XmlSchemaType* SchemaType;

  __declspec(property(get = get_Validity)) ::System::Xml::Schema::XmlSchemaValidity Validity;

  /// @brief Field hashCode, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_hashCode, put = __cordl_internal_set_hashCode)) int32_t hashCode;

  /// @brief Field localName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_localName, put = __cordl_internal_set_localName)) ::StringW localName;

  /// @brief Field name, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field next, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_next, put = __cordl_internal_set_next)) ::System::Xml::XmlName* next;

  /// @brief Field ns, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ns, put = __cordl_internal_set_ns)) ::StringW ns;

  /// @brief Field ownerDoc, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_ownerDoc, put = __cordl_internal_set_ownerDoc)) ::System::Xml::XmlDocument* ownerDoc;

  /// @brief Field prefix, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_prefix, put = __cordl_internal_set_prefix)) ::StringW prefix;

  /// @brief Convert operator to "::System::Xml::Schema::IXmlSchemaInfo"
  constexpr operator ::System::Xml::Schema::IXmlSchemaInfo*() noexcept;

  /// @brief Method Create, addr 0x433f6dc, size 0xe8, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlName* Create(::StringW prefix, ::StringW localName, ::StringW ns, int32_t hashCode, ::System::Xml::XmlDocument* ownerDoc, ::System::Xml::XmlName* next,
                                               ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo);

  /// @brief Method Equals, addr 0x433fe04, size 0xc, virtual true, abstract: false, final false
  inline bool Equals(::System::Xml::Schema::IXmlSchemaInfo* schemaInfo);

  /// @brief Method GetHashCode, addr 0x433fe10, size 0x64, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::StringW name);

  static inline ::System::Xml::XmlName* New_ctor(::StringW prefix, ::StringW localName, ::StringW ns, int32_t hashCode, ::System::Xml::XmlDocument* ownerDoc, ::System::Xml::XmlName* next);

  constexpr int32_t const& __cordl_internal_get_hashCode() const;

  constexpr int32_t& __cordl_internal_get_hashCode();

  constexpr ::StringW const& __cordl_internal_get_localName() const;

  constexpr ::StringW& __cordl_internal_get_localName();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::System::Xml::XmlName* const& __cordl_internal_get_next() const;

  constexpr ::System::Xml::XmlName*& __cordl_internal_get_next();

  constexpr ::StringW const& __cordl_internal_get_ns() const;

  constexpr ::StringW& __cordl_internal_get_ns();

  constexpr ::System::Xml::XmlDocument* const& __cordl_internal_get_ownerDoc() const;

  constexpr ::System::Xml::XmlDocument*& __cordl_internal_get_ownerDoc();

  constexpr ::StringW const& __cordl_internal_get_prefix() const;

  constexpr ::StringW& __cordl_internal_get_prefix();

  constexpr void __cordl_internal_set_hashCode(int32_t value);

  constexpr void __cordl_internal_set_localName(::StringW value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_next(::System::Xml::XmlName* value);

  constexpr void __cordl_internal_set_ns(::StringW value);

  constexpr void __cordl_internal_set_ownerDoc(::System::Xml::XmlDocument* value);

  constexpr void __cordl_internal_set_prefix(::StringW value);

  /// @brief Method .ctor, addr 0x433f7c4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::StringW prefix, ::StringW localName, ::StringW ns, int32_t hashCode, ::System::Xml::XmlDocument* ownerDoc, ::System::Xml::XmlName* next);

  /// @brief Method get_HashCode, addr 0x433fc0c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_HashCode();

  /// @brief Method get_IsDefault, addr 0x433fdd4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsDefault();

  /// @brief Method get_IsNil, addr 0x433fddc, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsNil();

  /// @brief Method get_LocalName, addr 0x433fbf4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_MemberType, addr 0x433fde4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaSimpleType* get_MemberType();

  /// @brief Method get_Name, addr 0x433fc1c, size 0x1b0, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NamespaceURI, addr 0x433fbfc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NamespaceURI();

  /// @brief Method get_OwnerDocument, addr 0x433fc14, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlDocument* get_OwnerDocument();

  /// @brief Method get_Prefix, addr 0x433fc04, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_SchemaAttribute, addr 0x433fdfc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaAttribute* get_SchemaAttribute();

  /// @brief Method get_SchemaElement, addr 0x433fdf4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaElement* get_SchemaElement();

  /// @brief Method get_SchemaType, addr 0x433fdec, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaType* get_SchemaType();

  /// @brief Method get_Validity, addr 0x433fdcc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaValidity get_Validity();

  /// @brief Convert to "::System::Xml::Schema::IXmlSchemaInfo"
  constexpr ::System::Xml::Schema::IXmlSchemaInfo* i___System__Xml__Schema__IXmlSchemaInfo() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlName();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlName(XmlName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlName(XmlName const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7300 };

  /// @brief Field prefix, offset: 0x10, size: 0x8, def value: None
  ::StringW ___prefix;

  /// @brief Field localName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___localName;

  /// @brief Field ns, offset: 0x20, size: 0x8, def value: None
  ::StringW ___ns;

  /// @brief Field name, offset: 0x28, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field hashCode, offset: 0x30, size: 0x4, def value: None
  int32_t ___hashCode;

  /// @brief Field ownerDoc, offset: 0x38, size: 0x8, def value: None
  ::System::Xml::XmlDocument* ___ownerDoc;

  /// @brief Field next, offset: 0x40, size: 0x8, def value: None
  ::System::Xml::XmlName* ___next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlName, ___prefix) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlName, ___localName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlName, ___ns) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlName, ___name) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlName, ___hashCode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlName, ___ownerDoc) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlName, ___next) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlName, 0x48>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlName);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlName*, "System.Xml", "XmlName");
