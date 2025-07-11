#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaAny.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaContentProcessing_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlSchemaAny)
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
class XmlSchemaAny;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaAny);
// Dependencies System.Xml.Schema.XmlSchemaContentProcessing, System.Xml.Schema.XmlSchemaParticle
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaAny
class CORDL_TYPE XmlSchemaAny : public ::System::Xml::Schema::XmlSchemaParticle {
public:
  // Declarations
  __declspec(property(get = get_NameString)) ::StringW NameString;

  __declspec(property(get = get_Namespace, put = set_Namespace)) ::StringW Namespace;

  __declspec(property(get = get_NamespaceList)) ::System::Xml::Schema::NamespaceList* NamespaceList;

  __declspec(property(put = set_ProcessContents)) ::System::Xml::Schema::XmlSchemaContentProcessing ProcessContents;

  __declspec(property(get = get_ProcessContentsCorrect)) ::System::Xml::Schema::XmlSchemaContentProcessing ProcessContentsCorrect;

  __declspec(property(get = get_ResolvedNamespace)) ::StringW ResolvedNamespace;

  /// @brief Field namespaceList, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_namespaceList, put = __cordl_internal_set_namespaceList)) ::System::Xml::Schema::NamespaceList* namespaceList;

  /// @brief Field ns, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_ns, put = __cordl_internal_set_ns)) ::StringW ns;

  /// @brief Field processContents, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_processContents, put = __cordl_internal_set_processContents)) ::System::Xml::Schema::XmlSchemaContentProcessing processContents;

  /// @brief Method Allows, addr 0x42b9b3c, size 0x28, virtual false, abstract: false, final false
  inline bool Allows(::System::Xml::XmlQualifiedName* qname);

  /// @brief Method BuildNamespaceList, addr 0x42b9a1c, size 0x80, virtual false, abstract: false, final false
  inline void BuildNamespaceList(::StringW targetNamespace);

  /// @brief Method BuildNamespaceListV1Compat, addr 0x42b9a9c, size 0xa0, virtual false, abstract: false, final false
  inline void BuildNamespaceListV1Compat(::StringW targetNamespace);

  static inline ::System::Xml::Schema::XmlSchemaAny* New_ctor();

  constexpr ::System::Xml::Schema::NamespaceList* const& __cordl_internal_get_namespaceList() const;

  constexpr ::System::Xml::Schema::NamespaceList*& __cordl_internal_get_namespaceList();

  constexpr ::StringW const& __cordl_internal_get_ns() const;

  constexpr ::StringW& __cordl_internal_get_ns();

  constexpr ::System::Xml::Schema::XmlSchemaContentProcessing const& __cordl_internal_get_processContents() const;

  constexpr ::System::Xml::Schema::XmlSchemaContentProcessing& __cordl_internal_get_processContents();

  constexpr void __cordl_internal_set_namespaceList(::System::Xml::Schema::NamespaceList* value);

  constexpr void __cordl_internal_set_ns(::StringW value);

  constexpr void __cordl_internal_set_processContents(::System::Xml::Schema::XmlSchemaContentProcessing value);

  /// @brief Method .ctor, addr 0x42b9b64, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_NameString, addr 0x42b9504, size 0x518, virtual true, abstract: false, final false
  inline ::StringW get_NameString();

  /// @brief Method get_Namespace, addr 0x42b9478, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Namespace();

  /// @brief Method get_NamespaceList, addr 0x42b9490, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::NamespaceList* get_NamespaceList();

  /// @brief Method get_ProcessContentsCorrect, addr 0x42b94f0, size 0x14, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaContentProcessing get_ProcessContentsCorrect();

  /// @brief Method get_ResolvedNamespace, addr 0x42b9498, size 0x58, virtual false, abstract: false, final false
  inline ::StringW get_ResolvedNamespace();

  /// @brief Method set_Namespace, addr 0x42b9480, size 0x8, virtual false, abstract: false, final false
  inline void set_Namespace(::StringW value);

  /// @brief Method set_ProcessContents, addr 0x42b9488, size 0x8, virtual false, abstract: false, final false
  inline void set_ProcessContents(::System::Xml::Schema::XmlSchemaContentProcessing value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaAny();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAny", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaAny(XmlSchemaAny&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAny", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaAny(XmlSchemaAny const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7653 };

  /// @brief Field ns, offset: 0x78, size: 0x8, def value: None
  ::StringW ___ns;

  /// @brief Field processContents, offset: 0x80, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaContentProcessing ___processContents;

  /// @brief Field namespaceList, offset: 0x88, size: 0x8, def value: None
  ::System::Xml::Schema::NamespaceList* ___namespaceList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaAny, ___ns) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAny, ___processContents) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAny, ___namespaceList) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaAny, 0x90>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaAny);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaAny*, "System.Xml.Schema", "XmlSchemaAny");
