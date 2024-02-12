#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentProcessing_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlSchemaAnyAttribute)
namespace System::Xml::Schema {
class NamespaceList;
}
namespace System::Xml::Schema {
struct XmlSchemaContentProcessing;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaAnyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaAnyAttribute);
// Type: System.Xml.Schema::XmlSchemaAnyAttribute
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11612)), TypeDefinitionIndex(TypeDefinitionIndex(11619))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11614))
// CS Name: ::System.Xml.Schema::XmlSchemaAnyAttribute*
class CORDL_TYPE XmlSchemaAnyAttribute : public ::System::Xml::Schema::XmlSchemaAnnotated {
public:
  // Declarations
  /// @brief Field ns, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ns, put = __cordl_internal_set_ns))::StringW ns;

  /// @brief Field processContents, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_processContents, put = __cordl_internal_set_processContents))::System::Xml::Schema::XmlSchemaContentProcessing processContents;

  /// @brief Field namespaceList, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_namespaceList, put = __cordl_internal_set_namespaceList))::System::Xml::Schema::NamespaceList* namespaceList;

  __declspec(property(put = set_ProcessContents))::System::Xml::Schema::XmlSchemaContentProcessing ProcessContents;

  constexpr ::StringW& __cordl_internal_get_ns();

  constexpr ::StringW const& __cordl_internal_get_ns() const;

  constexpr void __cordl_internal_set_ns(::StringW value);

  constexpr ::System::Xml::Schema::XmlSchemaContentProcessing& __cordl_internal_get_processContents();

  constexpr ::System::Xml::Schema::XmlSchemaContentProcessing const& __cordl_internal_get_processContents() const;

  constexpr void __cordl_internal_set_processContents(::System::Xml::Schema::XmlSchemaContentProcessing value);

  constexpr ::System::Xml::Schema::NamespaceList*& __cordl_internal_get_namespaceList();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::NamespaceList*> const& __cordl_internal_get_namespaceList() const;

  constexpr void __cordl_internal_set_namespaceList(::System::Xml::Schema::NamespaceList* value);

  /// @brief Method set_ProcessContents, addr 0x28c98a4, size 0x8, virtual false, abstract: false, final false
  inline void set_ProcessContents(::System::Xml::Schema::XmlSchemaContentProcessing value);

  /// @brief Method BuildNamespaceList, addr 0x28c98ac, size 0x90, virtual false, abstract: false, final false
  inline void BuildNamespaceList(::StringW targetNamespace);

  static inline ::System::Xml::Schema::XmlSchemaAnyAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x28c993c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAnyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaAnyAttribute(XmlSchemaAnyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAnyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaAnyAttribute(XmlSchemaAnyAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaAnyAttribute();

public:
  /// @brief Field ns, offset: 0x10, size: 0x8, def value: None
  ::StringW ___ns;

  /// @brief Field processContents, offset: 0x18, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaContentProcessing ___processContents;

  /// @brief Field namespaceList, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Schema::NamespaceList* ___namespaceList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaAnyAttribute, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAnyAttribute, ___ns) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAnyAttribute, ___processContents) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAnyAttribute, ___namespaceList) == 0x20, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaAnyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaAnyAttribute*, "System.Xml.Schema", "XmlSchemaAnyAttribute");
