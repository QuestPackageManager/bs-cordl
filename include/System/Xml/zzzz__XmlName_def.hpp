#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlName)
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System::Xml::Schema {
struct XmlSchemaValidity;
}
namespace System::Xml::Schema {
class XmlSchemaElement;
}
namespace System::Xml::Schema {
class IXmlSchemaInfo;
}
namespace System::Xml::Schema {
class XmlSchemaAttribute;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
// Forward declare root types
namespace System::Xml {
class XmlName;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlName);
// Type: System.Xml::XmlName
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11515))
// CS Name: ::System.Xml::XmlName*
class CORDL_TYPE XmlName : public ::System::Object {
public:
  // Declarations
  /// @brief Field prefix, offset 0x10, size 0x8
  __declspec(property(get = __get_prefix, put = __set_prefix))::StringW prefix;

  /// @brief Field localName, offset 0x18, size 0x8
  __declspec(property(get = __get_localName, put = __set_localName))::StringW localName;

  /// @brief Field ns, offset 0x20, size 0x8
  __declspec(property(get = __get_ns, put = __set_ns))::StringW ns;

  /// @brief Field name, offset 0x28, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::StringW name;

  /// @brief Field hashCode, offset 0x30, size 0x4
  __declspec(property(get = __get_hashCode, put = __set_hashCode)) int32_t hashCode;

  /// @brief Field ownerDoc, offset 0x38, size 0x8
  __declspec(property(get = __get_ownerDoc, put = __set_ownerDoc))::System::Xml::XmlDocument* ownerDoc;

  /// @brief Field next, offset 0x40, size 0x8
  __declspec(property(get = __get_next, put = __set_next))::System::Xml::XmlName* next;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_NamespaceURI))::StringW NamespaceURI;

  __declspec(property(get = get_Prefix))::StringW Prefix;

  __declspec(property(get = get_HashCode)) int32_t HashCode;

  __declspec(property(get = get_OwnerDocument))::System::Xml::XmlDocument* OwnerDocument;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_Validity))::System::Xml::Schema::XmlSchemaValidity Validity;

  __declspec(property(get = get_IsDefault)) bool IsDefault;

  __declspec(property(get = get_IsNil)) bool IsNil;

  __declspec(property(get = get_MemberType))::System::Xml::Schema::XmlSchemaSimpleType* MemberType;

  __declspec(property(get = get_SchemaType))::System::Xml::Schema::XmlSchemaType* SchemaType;

  __declspec(property(get = get_SchemaElement))::System::Xml::Schema::XmlSchemaElement* SchemaElement;

  __declspec(property(get = get_SchemaAttribute))::System::Xml::Schema::XmlSchemaAttribute* SchemaAttribute;

  /// @brief Convert operator to "::System::Xml::Schema::IXmlSchemaInfo"
  constexpr operator ::System::Xml::Schema::IXmlSchemaInfo*() noexcept;

  constexpr ::StringW& __get_prefix();

  constexpr ::StringW const& __get_prefix() const;

  constexpr void __set_prefix(::StringW value);

  constexpr ::StringW& __get_localName();

  constexpr ::StringW const& __get_localName() const;

  constexpr void __set_localName(::StringW value);

  constexpr ::StringW& __get_ns();

  constexpr ::StringW const& __get_ns() const;

  constexpr void __set_ns(::StringW value);

  constexpr ::StringW& __get_name();

  constexpr ::StringW const& __get_name() const;

  constexpr void __set_name(::StringW value);

  constexpr int32_t& __get_hashCode();

  constexpr int32_t const& __get_hashCode() const;

  constexpr void __set_hashCode(int32_t value);

  constexpr ::System::Xml::XmlDocument*& __get_ownerDoc();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlDocument*> const& __get_ownerDoc() const;

  constexpr void __set_ownerDoc(::System::Xml::XmlDocument* value);

  constexpr ::System::Xml::XmlName*& __get_next();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlName*> const& __get_next() const;

  constexpr void __set_next(::System::Xml::XmlName* value);

  /// @brief Method Create addr 0x288e184 size 0xf4 virtual false final false
  static inline ::System::Xml::XmlName* Create(::StringW prefix, ::StringW localName, ::StringW ns, int32_t hashCode, ::System::Xml::XmlDocument* ownerDoc, ::System::Xml::XmlName* next,
                                               ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo);

  static inline ::System::Xml::XmlName* New_ctor(::StringW prefix, ::StringW localName, ::StringW ns, int32_t hashCode, ::System::Xml::XmlDocument* ownerDoc, ::System::Xml::XmlName* next);

  /// @brief Method .ctor addr 0x288e278 size 0x58 virtual false final false
  inline void _ctor(::StringW prefix, ::StringW localName, ::StringW ns, int32_t hashCode, ::System::Xml::XmlDocument* ownerDoc, ::System::Xml::XmlName* next);

  /// @brief Method get_LocalName addr 0x288e69c size 0x8 virtual false final false
  inline ::StringW get_LocalName();

  /// @brief Method get_NamespaceURI addr 0x288e6a4 size 0x8 virtual false final false
  inline ::StringW get_NamespaceURI();

  /// @brief Method get_Prefix addr 0x288e6ac size 0x8 virtual false final false
  inline ::StringW get_Prefix();

  /// @brief Method get_HashCode addr 0x288e6b4 size 0x8 virtual false final false
  inline int32_t get_HashCode();

  /// @brief Method get_OwnerDocument addr 0x288e6bc size 0x8 virtual false final false
  inline ::System::Xml::XmlDocument* get_OwnerDocument();

  /// @brief Method get_Name addr 0x288897c size 0x1ac virtual false final false
  inline ::StringW get_Name();

  /// @brief Method get_Validity addr 0x288e6c4 size 0x8 virtual true final false
  inline ::System::Xml::Schema::XmlSchemaValidity get_Validity();

  /// @brief Method get_IsDefault addr 0x288e6cc size 0x8 virtual true final false
  inline bool get_IsDefault();

  /// @brief Method get_IsNil addr 0x288e6d4 size 0x8 virtual true final false
  inline bool get_IsNil();

  /// @brief Method get_MemberType addr 0x288e6dc size 0x8 virtual true final false
  inline ::System::Xml::Schema::XmlSchemaSimpleType* get_MemberType();

  /// @brief Method get_SchemaType addr 0x288e6e4 size 0x8 virtual true final false
  inline ::System::Xml::Schema::XmlSchemaType* get_SchemaType();

  /// @brief Method get_SchemaElement addr 0x288e6ec size 0x8 virtual true final false
  inline ::System::Xml::Schema::XmlSchemaElement* get_SchemaElement();

  /// @brief Method get_SchemaAttribute addr 0x288e6f4 size 0x8 virtual true final false
  inline ::System::Xml::Schema::XmlSchemaAttribute* get_SchemaAttribute();

  /// @brief Method Equals addr 0x288e6fc size 0xc virtual true final false
  inline bool Equals(::System::Xml::Schema::IXmlSchemaInfo* schemaInfo);

  /// @brief Method GetHashCode addr 0x288e708 size 0x64 virtual false final false
  static inline int32_t GetHashCode(::StringW name);

  // Ctor Parameters [CppParam { name: "", ty: "XmlName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlName(XmlName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlName(XmlName const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlName();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlName, 0x48>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlName);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlName*, "System.Xml", "XmlName");
