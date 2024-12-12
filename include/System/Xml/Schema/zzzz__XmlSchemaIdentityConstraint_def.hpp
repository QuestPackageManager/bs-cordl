#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaIdentityConstraint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlSchemaIdentityConstraint)
namespace System::Xml::Schema {
class CompiledIdentityConstraint;
}
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
namespace System::Xml::Schema {
class XmlSchemaXPath;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaIdentityConstraint;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaIdentityConstraint);
// Dependencies System.Xml.Schema.XmlSchemaAnnotated
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaIdentityConstraint
class CORDL_TYPE XmlSchemaIdentityConstraint : public ::System::Xml::Schema::XmlSchemaAnnotated {
public:
  // Declarations
  __declspec(property(get = get_CompiledConstraint, put = set_CompiledConstraint)) ::System::Xml::Schema::CompiledIdentityConstraint* CompiledConstraint;

  __declspec(property(get = get_Fields)) ::System::Xml::Schema::XmlSchemaObjectCollection* Fields;

  __declspec(property(get = get_Name, put = set_Name)) ::StringW Name;

  __declspec(property(get = get_NameAttribute, put = set_NameAttribute)) ::StringW NameAttribute;

  __declspec(property(get = get_QualifiedName)) ::System::Xml::XmlQualifiedName* QualifiedName;

  __declspec(property(get = get_Selector, put = set_Selector)) ::System::Xml::Schema::XmlSchemaXPath* Selector;

  /// @brief Field compiledConstraint, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_compiledConstraint, put = __cordl_internal_set_compiledConstraint)) ::System::Xml::Schema::CompiledIdentityConstraint* compiledConstraint;

  /// @brief Field fields, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_fields, put = __cordl_internal_set_fields)) ::System::Xml::Schema::XmlSchemaObjectCollection* fields;

  /// @brief Field name, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field qualifiedName, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_qualifiedName, put = __cordl_internal_set_qualifiedName)) ::System::Xml::XmlQualifiedName* qualifiedName;

  /// @brief Field selector, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_selector, put = __cordl_internal_set_selector)) ::System::Xml::Schema::XmlSchemaXPath* selector;

  static inline ::System::Xml::Schema::XmlSchemaIdentityConstraint* New_ctor();

  /// @brief Method SetQualifiedName, addr 0x42bd834, size 0x8, virtual false, abstract: false, final false
  inline void SetQualifiedName(::System::Xml::XmlQualifiedName* value);

  constexpr ::System::Xml::Schema::CompiledIdentityConstraint* const& __cordl_internal_get_compiledConstraint() const;

  constexpr ::System::Xml::Schema::CompiledIdentityConstraint*& __cordl_internal_get_compiledConstraint();

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection* const& __cordl_internal_get_fields() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection*& __cordl_internal_get_fields();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::System::Xml::XmlQualifiedName* const& __cordl_internal_get_qualifiedName() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_qualifiedName();

  constexpr ::System::Xml::Schema::XmlSchemaXPath* const& __cordl_internal_get_selector() const;

  constexpr ::System::Xml::Schema::XmlSchemaXPath*& __cordl_internal_get_selector();

  constexpr void __cordl_internal_set_compiledConstraint(::System::Xml::Schema::CompiledIdentityConstraint* value);

  constexpr void __cordl_internal_set_fields(::System::Xml::Schema::XmlSchemaObjectCollection* value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_qualifiedName(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_selector(::System::Xml::Schema::XmlSchemaXPath* value);

  /// @brief Method .ctor, addr 0x42bd85c, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CompiledConstraint, addr 0x42bd83c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::CompiledIdentityConstraint* get_CompiledConstraint();

  /// @brief Method get_Fields, addr 0x42bd824, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectCollection* get_Fields();

  /// @brief Method get_Name, addr 0x42bd804, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NameAttribute, addr 0x42bd84c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_NameAttribute();

  /// @brief Method get_QualifiedName, addr 0x42bd82c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* get_QualifiedName();

  /// @brief Method get_Selector, addr 0x42bd814, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaXPath* get_Selector();

  /// @brief Method set_CompiledConstraint, addr 0x42bd844, size 0x8, virtual false, abstract: false, final false
  inline void set_CompiledConstraint(::System::Xml::Schema::CompiledIdentityConstraint* value);

  /// @brief Method set_Name, addr 0x42bd80c, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_NameAttribute, addr 0x42bd854, size 0x8, virtual true, abstract: false, final false
  inline void set_NameAttribute(::StringW value);

  /// @brief Method set_Selector, addr 0x42bd81c, size 0x8, virtual false, abstract: false, final false
  inline void set_Selector(::System::Xml::Schema::XmlSchemaXPath* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaIdentityConstraint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaIdentityConstraint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaIdentityConstraint(XmlSchemaIdentityConstraint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaIdentityConstraint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaIdentityConstraint(XmlSchemaIdentityConstraint const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7692 };

  /// @brief Field name, offset: 0x50, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field selector, offset: 0x58, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaXPath* ___selector;

  /// @brief Field fields, offset: 0x60, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectCollection* ___fields;

  /// @brief Field qualifiedName, offset: 0x68, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___qualifiedName;

  /// @brief Field compiledConstraint, offset: 0x70, size: 0x8, def value: None
  ::System::Xml::Schema::CompiledIdentityConstraint* ___compiledConstraint;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaIdentityConstraint, ___name) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaIdentityConstraint, ___selector) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaIdentityConstraint, ___fields) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaIdentityConstraint, ___qualifiedName) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaIdentityConstraint, ___compiledConstraint) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaIdentityConstraint, 0x78>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaIdentityConstraint);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaIdentityConstraint*, "System.Xml.Schema", "XmlSchemaIdentityConstraint");
