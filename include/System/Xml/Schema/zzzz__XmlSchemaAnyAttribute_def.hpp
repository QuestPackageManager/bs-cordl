#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaAnyAttribute.hpp"
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
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaAnyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaAnyAttribute);
// Dependencies System.Xml.Schema.XmlSchemaAnnotated, System.Xml.Schema.XmlSchemaContentProcessing
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaAnyAttribute
class CORDL_TYPE XmlSchemaAnyAttribute : public ::System::Xml::Schema::XmlSchemaAnnotated {
public:
  // Declarations
  __declspec(property(put = set_Namespace)) ::StringW Namespace;

  __declspec(property(get = get_NamespaceList)) ::System::Xml::Schema::NamespaceList* NamespaceList;

  __declspec(property(get = get_ProcessContents, put = set_ProcessContents)) ::System::Xml::Schema::XmlSchemaContentProcessing ProcessContents;

  __declspec(property(get = get_ProcessContentsCorrect)) ::System::Xml::Schema::XmlSchemaContentProcessing ProcessContentsCorrect;

  /// @brief Field namespaceList, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_namespaceList, put = __cordl_internal_set_namespaceList)) ::System::Xml::Schema::NamespaceList* namespaceList;

  /// @brief Field ns, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_ns, put = __cordl_internal_set_ns)) ::StringW ns;

  /// @brief Field processContents, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_processContents, put = __cordl_internal_set_processContents)) ::System::Xml::Schema::XmlSchemaContentProcessing processContents;

  /// @brief Method Allows, addr 0x6010060, size 0x28, virtual false, abstract: false, final false
  inline bool Allows(::System::Xml::XmlQualifiedName* qname);

  /// @brief Method BuildNamespaceList, addr 0x600ff48, size 0x7c, virtual false, abstract: false, final false
  inline void BuildNamespaceList(::StringW targetNamespace);

  /// @brief Method BuildNamespaceListV1Compat, addr 0x600ffc4, size 0x9c, virtual false, abstract: false, final false
  inline void BuildNamespaceListV1Compat(::StringW targetNamespace);

  /// @brief Method Intersection, addr 0x60100ac, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlSchemaAnyAttribute* Intersection(::System::Xml::Schema::XmlSchemaAnyAttribute* o1, ::System::Xml::Schema::XmlSchemaAnyAttribute* o2, bool v1Compat);

  /// @brief Method IsSubset, addr 0x6010088, size 0x24, virtual false, abstract: false, final false
  static inline bool IsSubset(::System::Xml::Schema::XmlSchemaAnyAttribute* sub, ::System::Xml::Schema::XmlSchemaAnyAttribute* super);

  static inline ::System::Xml::Schema::XmlSchemaAnyAttribute* New_ctor();

  /// @brief Method Union, addr 0x601014c, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlSchemaAnyAttribute* Union(::System::Xml::Schema::XmlSchemaAnyAttribute* o1, ::System::Xml::Schema::XmlSchemaAnyAttribute* o2, bool v1Compat);

  constexpr ::System::Xml::Schema::NamespaceList* const& __cordl_internal_get_namespaceList() const;

  constexpr ::System::Xml::Schema::NamespaceList*& __cordl_internal_get_namespaceList();

  constexpr ::StringW const& __cordl_internal_get_ns() const;

  constexpr ::StringW& __cordl_internal_get_ns();

  constexpr ::System::Xml::Schema::XmlSchemaContentProcessing const& __cordl_internal_get_processContents() const;

  constexpr ::System::Xml::Schema::XmlSchemaContentProcessing& __cordl_internal_get_processContents();

  constexpr void __cordl_internal_set_namespaceList(::System::Xml::Schema::NamespaceList* value);

  constexpr void __cordl_internal_set_ns(::StringW value);

  constexpr void __cordl_internal_set_processContents(::System::Xml::Schema::XmlSchemaContentProcessing value);

  /// @brief Method .ctor, addr 0x6010148, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_NamespaceList, addr 0x600ff2c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::NamespaceList* get_NamespaceList();

  /// @brief Method get_ProcessContents, addr 0x600ff1c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaContentProcessing get_ProcessContents();

  /// @brief Method get_ProcessContentsCorrect, addr 0x600ff34, size 0x14, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaContentProcessing get_ProcessContentsCorrect();

  /// @brief Method set_Namespace, addr 0x600ff14, size 0x8, virtual false, abstract: false, final false
  inline void set_Namespace(::StringW value);

  /// @brief Method set_ProcessContents, addr 0x600ff24, size 0x8, virtual false, abstract: false, final false
  inline void set_ProcessContents(::System::Xml::Schema::XmlSchemaContentProcessing value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaAnyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAnyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaAnyAttribute(XmlSchemaAnyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAnyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaAnyAttribute(XmlSchemaAnyAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9718 };

  /// @brief Field ns, offset: 0x50, size: 0x8, def value: None
  ::StringW ___ns;

  /// @brief Field processContents, offset: 0x58, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaContentProcessing ___processContents;

  /// @brief Field namespaceList, offset: 0x60, size: 0x8, def value: None
  ::System::Xml::Schema::NamespaceList* ___namespaceList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaAnyAttribute, ___ns) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAnyAttribute, ___processContents) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAnyAttribute, ___namespaceList) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaAnyAttribute, 0x68>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaAnyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaAnyAttribute*, "System.Xml.Schema", "XmlSchemaAnyAttribute");
