#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaNotation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlSchemaNotation)
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaNotation;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaNotation);
// Dependencies System.Xml.Schema.XmlSchemaAnnotated
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaNotation
class CORDL_TYPE XmlSchemaNotation : public ::System::Xml::Schema::XmlSchemaAnnotated {
public:
  // Declarations
  __declspec(property(get = get_Name, put = set_Name)) ::StringW Name;

  __declspec(property(get = get_NameAttribute, put = set_NameAttribute)) ::StringW NameAttribute;

  __declspec(property(get = get_Public, put = set_Public)) ::StringW Public;

  __declspec(property(get = get_QualifiedName, put = set_QualifiedName)) ::System::Xml::XmlQualifiedName* QualifiedName;

  __declspec(property(get = get_System, put = set_System)) ::StringW System;

  /// @brief Field name, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field publicId, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_publicId, put = __cordl_internal_set_publicId)) ::StringW publicId;

  /// @brief Field qname, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_qname, put = __cordl_internal_set_qname)) ::System::Xml::XmlQualifiedName* qname;

  /// @brief Field systemId, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_systemId, put = __cordl_internal_set_systemId)) ::StringW systemId;

  static inline ::System::Xml::Schema::XmlSchemaNotation* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::StringW const& __cordl_internal_get_publicId() const;

  constexpr ::StringW& __cordl_internal_get_publicId();

  constexpr ::System::Xml::XmlQualifiedName* const& __cordl_internal_get_qname() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_qname();

  constexpr ::StringW const& __cordl_internal_get_systemId() const;

  constexpr ::StringW& __cordl_internal_get_systemId();

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_publicId(::StringW value);

  constexpr void __cordl_internal_set_qname(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_systemId(::StringW value);

  /// @brief Method .ctor, addr 0x42bf628, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x42bf5d8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NameAttribute, addr 0x42bf618, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_NameAttribute();

  /// @brief Method get_Public, addr 0x42bf5e8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Public();

  /// @brief Method get_QualifiedName, addr 0x42bf608, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* get_QualifiedName();

  /// @brief Method get_System, addr 0x42bf5f8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_System();

  /// @brief Method set_Name, addr 0x42bf5e0, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_NameAttribute, addr 0x42bf620, size 0x8, virtual true, abstract: false, final false
  inline void set_NameAttribute(::StringW value);

  /// @brief Method set_Public, addr 0x42bf5f0, size 0x8, virtual false, abstract: false, final false
  inline void set_Public(::StringW value);

  /// @brief Method set_QualifiedName, addr 0x42bf610, size 0x8, virtual false, abstract: false, final false
  inline void set_QualifiedName(::System::Xml::XmlQualifiedName* value);

  /// @brief Method set_System, addr 0x42bf600, size 0x8, virtual false, abstract: false, final false
  inline void set_System(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaNotation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaNotation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaNotation(XmlSchemaNotation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaNotation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaNotation(XmlSchemaNotation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7705 };

  /// @brief Field name, offset: 0x50, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field publicId, offset: 0x58, size: 0x8, def value: None
  ::StringW ___publicId;

  /// @brief Field systemId, offset: 0x60, size: 0x8, def value: None
  ::StringW ___systemId;

  /// @brief Field qname, offset: 0x68, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___qname;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaNotation, ___name) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaNotation, ___publicId) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaNotation, ___systemId) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaNotation, ___qname) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaNotation, 0x70>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaNotation);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaNotation*, "System.Xml.Schema", "XmlSchemaNotation");
