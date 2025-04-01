#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaRedefine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaExternal_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaRedefine)
namespace System::Xml::Schema {
class XmlSchemaAnnotation;
}
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
namespace System::Xml::Schema {
class XmlSchemaObjectTable;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaRedefine;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaRedefine);
// Dependencies System.Xml.Schema.XmlSchemaExternal
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaRedefine
class CORDL_TYPE XmlSchemaRedefine : public ::System::Xml::Schema::XmlSchemaExternal {
public:
  // Declarations
  __declspec(property(get = get_AttributeGroups)) ::System::Xml::Schema::XmlSchemaObjectTable* AttributeGroups;

  __declspec(property(get = get_Groups)) ::System::Xml::Schema::XmlSchemaObjectTable* Groups;

  __declspec(property(get = get_Items)) ::System::Xml::Schema::XmlSchemaObjectCollection* Items;

  __declspec(property(get = get_SchemaTypes)) ::System::Xml::Schema::XmlSchemaObjectTable* SchemaTypes;

  /// @brief Field attributeGroups, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeGroups, put = __cordl_internal_set_attributeGroups)) ::System::Xml::Schema::XmlSchemaObjectTable* attributeGroups;

  /// @brief Field groups, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_groups, put = __cordl_internal_set_groups)) ::System::Xml::Schema::XmlSchemaObjectTable* groups;

  /// @brief Field items, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_items, put = __cordl_internal_set_items)) ::System::Xml::Schema::XmlSchemaObjectCollection* items;

  /// @brief Field types, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_types, put = __cordl_internal_set_types)) ::System::Xml::Schema::XmlSchemaObjectTable* types;

  /// @brief Method AddAnnotation, addr 0x42bce80, size 0x1c, virtual true, abstract: false, final false
  inline void AddAnnotation(::System::Xml::Schema::XmlSchemaAnnotation* annotation);

  static inline ::System::Xml::Schema::XmlSchemaRedefine* New_ctor();

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& __cordl_internal_get_attributeGroups() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& __cordl_internal_get_attributeGroups();

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& __cordl_internal_get_groups() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& __cordl_internal_get_groups();

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection* const& __cordl_internal_get_items() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection*& __cordl_internal_get_items();

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& __cordl_internal_get_types() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& __cordl_internal_get_types();

  constexpr void __cordl_internal_set_attributeGroups(::System::Xml::Schema::XmlSchemaObjectTable* value);

  constexpr void __cordl_internal_set_groups(::System::Xml::Schema::XmlSchemaObjectTable* value);

  constexpr void __cordl_internal_set_items(::System::Xml::Schema::XmlSchemaObjectCollection* value);

  constexpr void __cordl_internal_set_types(::System::Xml::Schema::XmlSchemaObjectTable* value);

  /// @brief Method .ctor, addr 0x42bcd9c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AttributeGroups, addr 0x42bce68, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectTable* get_AttributeGroups();

  /// @brief Method get_Groups, addr 0x42bce78, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectTable* get_Groups();

  /// @brief Method get_Items, addr 0x42bce60, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectCollection* get_Items();

  /// @brief Method get_SchemaTypes, addr 0x42bce70, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectTable* get_SchemaTypes();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaRedefine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaRedefine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaRedefine(XmlSchemaRedefine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaRedefine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaRedefine(XmlSchemaRedefine const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7718 };

  /// @brief Field items, offset: 0x68, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectCollection* ___items;

  /// @brief Field attributeGroups, offset: 0x70, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectTable* ___attributeGroups;

  /// @brief Field types, offset: 0x78, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectTable* ___types;

  /// @brief Field groups, offset: 0x80, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectTable* ___groups;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaRedefine, ___items) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaRedefine, ___attributeGroups) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaRedefine, ___types) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaRedefine, ___groups) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaRedefine, 0x88>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaRedefine);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaRedefine*, "System.Xml.Schema", "XmlSchemaRedefine");
