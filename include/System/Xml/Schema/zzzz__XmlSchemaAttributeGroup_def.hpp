#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaAttributeGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaAttributeGroup)
namespace System::Xml::Schema {
class XmlSchemaAnyAttribute;
}
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
namespace System::Xml::Schema {
class XmlSchemaObjectTable;
}
namespace System::Xml::Schema {
class XmlSchemaObject;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaAttributeGroup;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaAttributeGroup);
// Dependencies System.Xml.Schema.XmlSchemaAnnotated
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaAttributeGroup
class CORDL_TYPE XmlSchemaAttributeGroup : public ::System::Xml::Schema::XmlSchemaAnnotated {
public:
  // Declarations
  __declspec(property(get = get_AnyAttribute, put = set_AnyAttribute)) ::System::Xml::Schema::XmlSchemaAnyAttribute* AnyAttribute;

  __declspec(property(get = get_AttributeUses)) ::System::Xml::Schema::XmlSchemaObjectTable* AttributeUses;

  __declspec(property(get = get_AttributeWildcard, put = set_AttributeWildcard)) ::System::Xml::Schema::XmlSchemaAnyAttribute* AttributeWildcard;

  __declspec(property(get = get_Attributes)) ::System::Xml::Schema::XmlSchemaObjectCollection* Attributes;

  __declspec(property(get = get_Name, put = set_Name)) ::StringW Name;

  __declspec(property(get = get_NameAttribute, put = set_NameAttribute)) ::StringW NameAttribute;

  __declspec(property(get = get_QualifiedName)) ::System::Xml::XmlQualifiedName* QualifiedName;

  __declspec(property(get = get_Redefined, put = set_Redefined)) ::System::Xml::Schema::XmlSchemaAttributeGroup* Redefined;

  __declspec(property(get = get_RedefinedAttributeGroup)) ::System::Xml::Schema::XmlSchemaAttributeGroup* RedefinedAttributeGroup;

  __declspec(property(get = get_SelfReferenceCount, put = set_SelfReferenceCount)) int32_t SelfReferenceCount;

  /// @brief Field anyAttribute, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_anyAttribute, put = __cordl_internal_set_anyAttribute)) ::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute;

  /// @brief Field attributeUses, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeUses, put = __cordl_internal_set_attributeUses)) ::System::Xml::Schema::XmlSchemaObjectTable* attributeUses;

  /// @brief Field attributeWildcard, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeWildcard, put = __cordl_internal_set_attributeWildcard)) ::System::Xml::Schema::XmlSchemaAnyAttribute* attributeWildcard;

  /// @brief Field attributes, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_attributes, put = __cordl_internal_set_attributes)) ::System::Xml::Schema::XmlSchemaObjectCollection* attributes;

  /// @brief Field name, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field qname, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_qname, put = __cordl_internal_set_qname)) ::System::Xml::XmlQualifiedName* qname;

  /// @brief Field redefined, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_redefined, put = __cordl_internal_set_redefined)) ::System::Xml::Schema::XmlSchemaAttributeGroup* redefined;

  /// @brief Field selfReferenceCount, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_selfReferenceCount, put = __cordl_internal_set_selfReferenceCount)) int32_t selfReferenceCount;

  /// @brief Method Clone, addr 0x42ba664, size 0xf4, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObject* Clone();

  static inline ::System::Xml::Schema::XmlSchemaAttributeGroup* New_ctor();

  /// @brief Method SetQualifiedName, addr 0x42ba65c, size 0x8, virtual false, abstract: false, final false
  inline void SetQualifiedName(::System::Xml::XmlQualifiedName* value);

  constexpr ::System::Xml::Schema::XmlSchemaAnyAttribute* const& __cordl_internal_get_anyAttribute() const;

  constexpr ::System::Xml::Schema::XmlSchemaAnyAttribute*& __cordl_internal_get_anyAttribute();

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& __cordl_internal_get_attributeUses() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& __cordl_internal_get_attributeUses();

  constexpr ::System::Xml::Schema::XmlSchemaAnyAttribute* const& __cordl_internal_get_attributeWildcard() const;

  constexpr ::System::Xml::Schema::XmlSchemaAnyAttribute*& __cordl_internal_get_attributeWildcard();

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection* const& __cordl_internal_get_attributes() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection*& __cordl_internal_get_attributes();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::System::Xml::XmlQualifiedName* const& __cordl_internal_get_qname() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_qname();

  constexpr ::System::Xml::Schema::XmlSchemaAttributeGroup* const& __cordl_internal_get_redefined() const;

  constexpr ::System::Xml::Schema::XmlSchemaAttributeGroup*& __cordl_internal_get_redefined();

  constexpr int32_t const& __cordl_internal_get_selfReferenceCount() const;

  constexpr int32_t& __cordl_internal_get_selfReferenceCount();

  constexpr void __cordl_internal_set_anyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* value);

  constexpr void __cordl_internal_set_attributeUses(::System::Xml::Schema::XmlSchemaObjectTable* value);

  constexpr void __cordl_internal_set_attributeWildcard(::System::Xml::Schema::XmlSchemaAnyAttribute* value);

  constexpr void __cordl_internal_set_attributes(::System::Xml::Schema::XmlSchemaObjectCollection* value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_qname(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_redefined(::System::Xml::Schema::XmlSchemaAttributeGroup* value);

  constexpr void __cordl_internal_set_selfReferenceCount(int32_t value);

  /// @brief Method .ctor, addr 0x42baae4, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AnyAttribute, addr 0x42ba598, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaAnyAttribute* get_AnyAttribute();

  /// @brief Method get_AttributeUses, addr 0x42ba5b0, size 0x64, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectTable* get_AttributeUses();

  /// @brief Method get_AttributeWildcard, addr 0x42ba614, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaAnyAttribute* get_AttributeWildcard();

  /// @brief Method get_Attributes, addr 0x42ba590, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectCollection* get_Attributes();

  /// @brief Method get_Name, addr 0x42ba580, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NameAttribute, addr 0x42ba64c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_NameAttribute();

  /// @brief Method get_QualifiedName, addr 0x42ba5a8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* get_QualifiedName();

  /// @brief Method get_Redefined, addr 0x42ba62c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaAttributeGroup* get_Redefined();

  /// @brief Method get_RedefinedAttributeGroup, addr 0x42ba624, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaAttributeGroup* get_RedefinedAttributeGroup();

  /// @brief Method get_SelfReferenceCount, addr 0x42ba63c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_SelfReferenceCount();

  /// @brief Method set_AnyAttribute, addr 0x42ba5a0, size 0x8, virtual false, abstract: false, final false
  inline void set_AnyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* value);

  /// @brief Method set_AttributeWildcard, addr 0x42ba61c, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributeWildcard(::System::Xml::Schema::XmlSchemaAnyAttribute* value);

  /// @brief Method set_Name, addr 0x42ba588, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_NameAttribute, addr 0x42ba654, size 0x8, virtual true, abstract: false, final false
  inline void set_NameAttribute(::StringW value);

  /// @brief Method set_Redefined, addr 0x42ba634, size 0x8, virtual false, abstract: false, final false
  inline void set_Redefined(::System::Xml::Schema::XmlSchemaAttributeGroup* value);

  /// @brief Method set_SelfReferenceCount, addr 0x42ba644, size 0x8, virtual false, abstract: false, final false
  inline void set_SelfReferenceCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaAttributeGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAttributeGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaAttributeGroup(XmlSchemaAttributeGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAttributeGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaAttributeGroup(XmlSchemaAttributeGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7657 };

  /// @brief Field name, offset: 0x50, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field attributes, offset: 0x58, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectCollection* ___attributes;

  /// @brief Field anyAttribute, offset: 0x60, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaAnyAttribute* ___anyAttribute;

  /// @brief Field qname, offset: 0x68, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___qname;

  /// @brief Field redefined, offset: 0x70, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaAttributeGroup* ___redefined;

  /// @brief Field attributeUses, offset: 0x78, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectTable* ___attributeUses;

  /// @brief Field attributeWildcard, offset: 0x80, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaAnyAttribute* ___attributeWildcard;

  /// @brief Field selfReferenceCount, offset: 0x88, size: 0x4, def value: None
  int32_t ___selfReferenceCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaAttributeGroup, ___name) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAttributeGroup, ___attributes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAttributeGroup, ___anyAttribute) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAttributeGroup, ___qname) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAttributeGroup, ___redefined) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAttributeGroup, ___attributeUses) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAttributeGroup, ___attributeWildcard) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAttributeGroup, ___selfReferenceCount) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaAttributeGroup, 0x90>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaAttributeGroup);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaAttributeGroup*, "System.Xml.Schema", "XmlSchemaAttributeGroup");
