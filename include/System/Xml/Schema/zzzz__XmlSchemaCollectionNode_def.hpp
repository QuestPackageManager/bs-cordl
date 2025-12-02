#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaCollectionNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlSchemaCollectionNode)
namespace System::Xml::Schema {
class SchemaInfo;
}
namespace System::Xml::Schema {
class XmlSchema;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaCollectionNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaCollectionNode);
// Dependencies System.Object
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaCollectionNode
class CORDL_TYPE XmlSchemaCollectionNode : public ::System::Object {
public:
  // Declarations
  __declspec(property(put = set_NamespaceURI)) ::StringW NamespaceURI;

  __declspec(property(get = get_Schema, put = set_Schema)) ::System::Xml::Schema::XmlSchema* Schema;

  __declspec(property(get = get_SchemaInfo, put = set_SchemaInfo)) ::System::Xml::Schema::SchemaInfo* SchemaInfo;

  /// @brief Field namespaceUri, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_namespaceUri, put = __cordl_internal_set_namespaceUri)) ::StringW namespaceUri;

  /// @brief Field schema, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_schema, put = __cordl_internal_set_schema)) ::System::Xml::Schema::XmlSchema* schema;

  /// @brief Field schemaInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_schemaInfo, put = __cordl_internal_set_schemaInfo)) ::System::Xml::Schema::SchemaInfo* schemaInfo;

  static inline ::System::Xml::Schema::XmlSchemaCollectionNode* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_namespaceUri() const;

  constexpr ::StringW& __cordl_internal_get_namespaceUri();

  constexpr ::System::Xml::Schema::XmlSchema* const& __cordl_internal_get_schema() const;

  constexpr ::System::Xml::Schema::XmlSchema*& __cordl_internal_get_schema();

  constexpr ::System::Xml::Schema::SchemaInfo* const& __cordl_internal_get_schemaInfo() const;

  constexpr ::System::Xml::Schema::SchemaInfo*& __cordl_internal_get_schemaInfo();

  constexpr void __cordl_internal_set_namespaceUri(::StringW value);

  constexpr void __cordl_internal_set_schema(::System::Xml::Schema::XmlSchema* value);

  constexpr void __cordl_internal_set_schemaInfo(::System::Xml::Schema::SchemaInfo* value);

  /// @brief Method .ctor, addr 0x601148c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Schema, addr 0x60115f8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchema* get_Schema();

  /// @brief Method get_SchemaInfo, addr 0x60115e8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaInfo* get_SchemaInfo();

  /// @brief Method set_NamespaceURI, addr 0x60115e0, size 0x8, virtual false, abstract: false, final false
  inline void set_NamespaceURI(::StringW value);

  /// @brief Method set_Schema, addr 0x6011600, size 0x8, virtual false, abstract: false, final false
  inline void set_Schema(::System::Xml::Schema::XmlSchema* value);

  /// @brief Method set_SchemaInfo, addr 0x60115f0, size 0x8, virtual false, abstract: false, final false
  inline void set_SchemaInfo(::System::Xml::Schema::SchemaInfo* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaCollectionNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaCollectionNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaCollectionNode(XmlSchemaCollectionNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaCollectionNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaCollectionNode(XmlSchemaCollectionNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9725 };

  /// @brief Field namespaceUri, offset: 0x10, size: 0x8, def value: None
  ::StringW ___namespaceUri;

  /// @brief Field schemaInfo, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Schema::SchemaInfo* ___schemaInfo;

  /// @brief Field schema, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchema* ___schema;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaCollectionNode, ___namespaceUri) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaCollectionNode, ___schemaInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaCollectionNode, ___schema) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaCollectionNode, 0x28>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaCollectionNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaCollectionNode*, "System.Xml.Schema", "XmlSchemaCollectionNode");
