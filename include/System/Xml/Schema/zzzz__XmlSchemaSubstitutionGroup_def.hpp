#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaSubstitutionGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaObject_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaSubstitutionGroup)
namespace System::Collections {
class ArrayList;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaSubstitutionGroup;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaSubstitutionGroup);
// Dependencies System.Xml.Schema.XmlSchemaObject
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaSubstitutionGroup
class CORDL_TYPE XmlSchemaSubstitutionGroup : public ::System::Xml::Schema::XmlSchemaObject {
public:
  // Declarations
  __declspec(property(get = get_Examplar, put = set_Examplar)) ::System::Xml::XmlQualifiedName* Examplar;

  __declspec(property(get = get_Members)) ::System::Collections::ArrayList* Members;

  /// @brief Field examplar, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_examplar, put = __cordl_internal_set_examplar)) ::System::Xml::XmlQualifiedName* examplar;

  /// @brief Field membersList, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_membersList, put = __cordl_internal_set_membersList)) ::System::Collections::ArrayList* membersList;

  static inline ::System::Xml::Schema::XmlSchemaSubstitutionGroup* New_ctor();

  constexpr ::System::Xml::XmlQualifiedName* const& __cordl_internal_get_examplar() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_examplar();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_membersList() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_membersList();

  constexpr void __cordl_internal_set_examplar(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_membersList(::System::Collections::ArrayList* value);

  /// @brief Method .ctor, addr 0x42c87e8, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Examplar, addr 0x42c87d8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* get_Examplar();

  /// @brief Method get_Members, addr 0x42c87d0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* get_Members();

  /// @brief Method set_Examplar, addr 0x42c87e0, size 0x8, virtual false, abstract: false, final false
  inline void set_Examplar(::System::Xml::XmlQualifiedName* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaSubstitutionGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSubstitutionGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaSubstitutionGroup(XmlSchemaSubstitutionGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSubstitutionGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaSubstitutionGroup(XmlSchemaSubstitutionGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7724 };

  /// @brief Field membersList, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___membersList;

  /// @brief Field examplar, offset: 0x40, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___examplar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaSubstitutionGroup, ___membersList) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSubstitutionGroup, ___examplar) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaSubstitutionGroup, 0x48>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaSubstitutionGroup);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaSubstitutionGroup*, "System.Xml.Schema", "XmlSchemaSubstitutionGroup");
