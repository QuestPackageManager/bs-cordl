#pragma once
// IWYU pragma private; include "System/Xml/XmlDocumentType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlLinkedNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlDocumentType)
namespace System::Xml::Schema {
class SchemaInfo;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlNamedNodeMap;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Xml {
class XmlDocumentType;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlDocumentType);
// Dependencies System.Xml.XmlLinkedNode
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlDocumentType
class CORDL_TYPE XmlDocumentType : public ::System::Xml::XmlLinkedNode {
public:
  // Declarations
  __declspec(property(get = get_DtdSchemaInfo, put = set_DtdSchemaInfo)) ::System::Xml::Schema::SchemaInfo* DtdSchemaInfo;

  __declspec(property(get = get_Entities)) ::System::Xml::XmlNamedNodeMap* Entities;

  __declspec(property(get = get_InternalSubset)) ::StringW InternalSubset;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_LocalName)) ::StringW LocalName;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_NodeType)) ::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_Notations)) ::System::Xml::XmlNamedNodeMap* Notations;

  __declspec(property(get = get_ParseWithNamespaces)) bool ParseWithNamespaces;

  __declspec(property(get = get_PublicId)) ::StringW PublicId;

  __declspec(property(get = get_SystemId)) ::StringW SystemId;

  /// @brief Field entities, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_entities, put = __cordl_internal_set_entities)) ::System::Xml::XmlNamedNodeMap* entities;

  /// @brief Field internalSubset, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_internalSubset, put = __cordl_internal_set_internalSubset)) ::StringW internalSubset;

  /// @brief Field name, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field namespaces, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_namespaces, put = __cordl_internal_set_namespaces)) bool namespaces;

  /// @brief Field notations, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_notations, put = __cordl_internal_set_notations)) ::System::Xml::XmlNamedNodeMap* notations;

  /// @brief Field publicId, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_publicId, put = __cordl_internal_set_publicId)) ::StringW publicId;

  /// @brief Field schemaInfo, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_schemaInfo, put = __cordl_internal_set_schemaInfo)) ::System::Xml::Schema::SchemaInfo* schemaInfo;

  /// @brief Field systemId, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_systemId, put = __cordl_internal_set_systemId)) ::StringW systemId;

  /// @brief Method CloneNode, addr 0x433987c, size 0x3c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* CloneNode(bool deep);

  static inline ::System::Xml::XmlDocumentType* New_ctor(::StringW name, ::StringW publicId, ::StringW systemId, ::StringW internalSubset, ::System::Xml::XmlDocument* doc);

  /// @brief Method WriteContentTo, addr 0x4339974, size 0x4, virtual true, abstract: false, final false
  inline void WriteContentTo(::System::Xml::XmlWriter* w);

  /// @brief Method WriteTo, addr 0x4339948, size 0x2c, virtual true, abstract: false, final false
  inline void WriteTo(::System::Xml::XmlWriter* w);

  constexpr ::System::Xml::XmlNamedNodeMap* const& __cordl_internal_get_entities() const;

  constexpr ::System::Xml::XmlNamedNodeMap*& __cordl_internal_get_entities();

  constexpr ::StringW const& __cordl_internal_get_internalSubset() const;

  constexpr ::StringW& __cordl_internal_get_internalSubset();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr bool const& __cordl_internal_get_namespaces() const;

  constexpr bool& __cordl_internal_get_namespaces();

  constexpr ::System::Xml::XmlNamedNodeMap* const& __cordl_internal_get_notations() const;

  constexpr ::System::Xml::XmlNamedNodeMap*& __cordl_internal_get_notations();

  constexpr ::StringW const& __cordl_internal_get_publicId() const;

  constexpr ::StringW& __cordl_internal_get_publicId();

  constexpr ::System::Xml::Schema::SchemaInfo* const& __cordl_internal_get_schemaInfo() const;

  constexpr ::System::Xml::Schema::SchemaInfo*& __cordl_internal_get_schemaInfo();

  constexpr ::StringW const& __cordl_internal_get_systemId() const;

  constexpr ::StringW& __cordl_internal_get_systemId();

  constexpr void __cordl_internal_set_entities(::System::Xml::XmlNamedNodeMap* value);

  constexpr void __cordl_internal_set_internalSubset(::StringW value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_namespaces(bool value);

  constexpr void __cordl_internal_set_notations(::System::Xml::XmlNamedNodeMap* value);

  constexpr void __cordl_internal_set_publicId(::StringW value);

  constexpr void __cordl_internal_set_schemaInfo(::System::Xml::Schema::SchemaInfo* value);

  constexpr void __cordl_internal_set_systemId(::StringW value);

  /// @brief Method .ctor, addr 0x4336780, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::StringW publicId, ::StringW systemId, ::StringW internalSubset, ::System::Xml::XmlDocument* doc);

  /// @brief Method get_DtdSchemaInfo, addr 0x4339978, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaInfo* get_DtdSchemaInfo();

  /// @brief Method get_Entities, addr 0x4338b54, size 0x68, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNamedNodeMap* get_Entities();

  /// @brief Method get_InternalSubset, addr 0x4339938, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_InternalSubset();

  /// @brief Method get_IsReadOnly, addr 0x43398b8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_LocalName, addr 0x433986c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_Name, addr 0x4339864, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NodeType, addr 0x4339874, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Notations, addr 0x43398c0, size 0x68, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNamedNodeMap* get_Notations();

  /// @brief Method get_ParseWithNamespaces, addr 0x4339940, size 0x8, virtual false, abstract: false, final false
  inline bool get_ParseWithNamespaces();

  /// @brief Method get_PublicId, addr 0x4339928, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_PublicId();

  /// @brief Method get_SystemId, addr 0x4339930, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SystemId();

  /// @brief Method set_DtdSchemaInfo, addr 0x4339980, size 0x8, virtual false, abstract: false, final false
  inline void set_DtdSchemaInfo(::System::Xml::Schema::SchemaInfo* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDocumentType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlDocumentType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlDocumentType(XmlDocumentType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlDocumentType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlDocumentType(XmlDocumentType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7292 };

  /// @brief Field name, offset: 0x20, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field publicId, offset: 0x28, size: 0x8, def value: None
  ::StringW ___publicId;

  /// @brief Field systemId, offset: 0x30, size: 0x8, def value: None
  ::StringW ___systemId;

  /// @brief Field internalSubset, offset: 0x38, size: 0x8, def value: None
  ::StringW ___internalSubset;

  /// @brief Field namespaces, offset: 0x40, size: 0x1, def value: None
  bool ___namespaces;

  /// @brief Field entities, offset: 0x48, size: 0x8, def value: None
  ::System::Xml::XmlNamedNodeMap* ___entities;

  /// @brief Field notations, offset: 0x50, size: 0x8, def value: None
  ::System::Xml::XmlNamedNodeMap* ___notations;

  /// @brief Field schemaInfo, offset: 0x58, size: 0x8, def value: None
  ::System::Xml::Schema::SchemaInfo* ___schemaInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlDocumentType, ___name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocumentType, ___publicId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocumentType, ___systemId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocumentType, ___internalSubset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocumentType, ___namespaces) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocumentType, ___entities) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocumentType, ___notations) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocumentType, ___schemaInfo) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlDocumentType, 0x60>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlDocumentType);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlDocumentType*, "System.Xml", "XmlDocumentType");
