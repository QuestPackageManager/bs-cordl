#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchema.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaDerivationMethod_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaForm_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchema)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IList;
}
namespace System::Xml::Schema {
class SchemaInfo;
}
namespace System::Xml::Schema {
class ValidationEventHandler;
}
namespace System::Xml::Schema {
class XmlSchemaAnnotation;
}
namespace System::Xml::Schema {
class XmlSchemaCollection;
}
namespace System::Xml::Schema {
class XmlSchemaCompilationSettings;
}
namespace System::Xml::Schema {
struct XmlSchemaDerivationMethod;
}
namespace System::Xml::Schema {
struct XmlSchemaForm;
}
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
namespace System::Xml::Schema {
class XmlSchemaObjectTable;
}
namespace System::Xml {
class XmlAttribute;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlResolver;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchema;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchema);
// Type: System.Xml.Schema::XmlSchema
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 240, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchema*
class CORDL_TYPE XmlSchema : public ::System::Xml::Schema::XmlSchemaObject {
public:
  // Declarations
  __declspec(property(get = get_AttributeFormDefault, put = set_AttributeFormDefault))::System::Xml::Schema::XmlSchemaForm AttributeFormDefault;

  __declspec(property(get = get_AttributeGroups))::System::Xml::Schema::XmlSchemaObjectTable* AttributeGroups;

  __declspec(property(get = get_Attributes))::System::Xml::Schema::XmlSchemaObjectTable* Attributes;

  __declspec(property(get = get_BaseUri, put = set_BaseUri))::System::Uri* BaseUri;

  __declspec(property(get = get_BlockDefault, put = set_BlockDefault))::System::Xml::Schema::XmlSchemaDerivationMethod BlockDefault;

  __declspec(property(get = get_Document))::System::Xml::XmlDocument* Document;

  __declspec(property(get = get_ElementFormDefault, put = set_ElementFormDefault))::System::Xml::Schema::XmlSchemaForm ElementFormDefault;

  __declspec(property(get = get_Elements))::System::Xml::Schema::XmlSchemaObjectTable* Elements;

  __declspec(property(get = get_ErrorCount, put = set_ErrorCount)) int32_t ErrorCount;

  __declspec(property(get = get_FinalDefault, put = set_FinalDefault))::System::Xml::Schema::XmlSchemaDerivationMethod FinalDefault;

  __declspec(property(get = get_Groups))::System::Xml::Schema::XmlSchemaObjectTable* Groups;

  __declspec(property(get = get_Id, put = set_Id))::StringW Id;

  __declspec(property(get = get_IdAttribute, put = set_IdAttribute))::StringW IdAttribute;

  __declspec(property(get = get_IdentityConstraints))::System::Xml::Schema::XmlSchemaObjectTable* IdentityConstraints;

  __declspec(property(get = get_Ids))::System::Collections::Hashtable* Ids;

  __declspec(property(get = get_ImportedNamespaces))::System::Collections::ArrayList* ImportedNamespaces;

  __declspec(property(get = get_ImportedSchemas))::System::Collections::ArrayList* ImportedSchemas;

  __declspec(property(get = get_Includes))::System::Xml::Schema::XmlSchemaObjectCollection* Includes;

  __declspec(property(get = get_IsChameleon, put = set_IsChameleon)) bool IsChameleon;

  __declspec(property(get = get_IsCompiledBySet, put = set_IsCompiledBySet)) bool IsCompiledBySet;

  __declspec(property(get = get_IsPreprocessed, put = set_IsPreprocessed)) bool IsPreprocessed;

  __declspec(property(get = get_IsRedefined, put = set_IsRedefined)) bool IsRedefined;

  __declspec(property(get = get_Items))::System::Xml::Schema::XmlSchemaObjectCollection* Items;

  __declspec(property(get = get_Notations))::System::Xml::Schema::XmlSchemaObjectTable* Notations;

  __declspec(property(get = get_SchemaId)) int32_t SchemaId;

  __declspec(property(get = get_SchemaTypes))::System::Xml::Schema::XmlSchemaObjectTable* SchemaTypes;

  __declspec(property(get = get_TargetNamespace, put = set_TargetNamespace))::StringW TargetNamespace;

  __declspec(property(get = get_Version, put = set_Version))::StringW Version;

  /// @brief Field attributeFormDefault, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_attributeFormDefault, put = __cordl_internal_set_attributeFormDefault))::System::Xml::Schema::XmlSchemaForm attributeFormDefault;

  /// @brief Field attributeGroups, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeGroups, put = __cordl_internal_set_attributeGroups))::System::Xml::Schema::XmlSchemaObjectTable* attributeGroups;

  /// @brief Field attributes, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_attributes, put = __cordl_internal_set_attributes))::System::Xml::Schema::XmlSchemaObjectTable* attributes;

  /// @brief Field baseUri, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_baseUri, put = __cordl_internal_set_baseUri))::System::Uri* baseUri;

  /// @brief Field blockDefault, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_blockDefault, put = __cordl_internal_set_blockDefault))::System::Xml::Schema::XmlSchemaDerivationMethod blockDefault;

  /// @brief Field document, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_document, put = __cordl_internal_set_document))::System::Xml::XmlDocument* document;

  /// @brief Field elementFormDefault, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_elementFormDefault, put = __cordl_internal_set_elementFormDefault))::System::Xml::Schema::XmlSchemaForm elementFormDefault;

  /// @brief Field elements, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_elements, put = __cordl_internal_set_elements))::System::Xml::Schema::XmlSchemaObjectTable* elements;

  /// @brief Field errorCount, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_errorCount, put = __cordl_internal_set_errorCount)) int32_t errorCount;

  /// @brief Field finalDefault, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_finalDefault, put = __cordl_internal_set_finalDefault))::System::Xml::Schema::XmlSchemaDerivationMethod finalDefault;

  /// @brief Field globalIdCounter, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_globalIdCounter, put = setStaticF_globalIdCounter)) int32_t globalIdCounter;

  /// @brief Field groups, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_groups, put = __cordl_internal_set_groups))::System::Xml::Schema::XmlSchemaObjectTable* groups;

  /// @brief Field id, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id))::StringW id;

  /// @brief Field identityConstraints, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_identityConstraints, put = __cordl_internal_set_identityConstraints))::System::Xml::Schema::XmlSchemaObjectTable* identityConstraints;

  /// @brief Field ids, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_ids, put = __cordl_internal_set_ids))::System::Collections::Hashtable* ids;

  /// @brief Field importedNamespaces, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_importedNamespaces, put = __cordl_internal_set_importedNamespaces))::System::Collections::ArrayList* importedNamespaces;

  /// @brief Field importedSchemas, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_importedSchemas, put = __cordl_internal_set_importedSchemas))::System::Collections::ArrayList* importedSchemas;

  /// @brief Field includes, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_includes, put = __cordl_internal_set_includes))::System::Xml::Schema::XmlSchemaObjectCollection* includes;

  /// @brief Field isChameleon, offset 0xd8, size 0x1
  __declspec(property(get = __cordl_internal_get_isChameleon, put = __cordl_internal_set_isChameleon)) bool isChameleon;

  /// @brief Field isCompiled, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_isCompiled, put = __cordl_internal_set_isCompiled)) bool isCompiled;

  /// @brief Field isCompiledBySet, offset 0x79, size 0x1
  __declspec(property(get = __cordl_internal_get_isCompiledBySet, put = __cordl_internal_set_isCompiledBySet)) bool isCompiledBySet;

  /// @brief Field isPreprocessed, offset 0x7a, size 0x1
  __declspec(property(get = __cordl_internal_get_isPreprocessed, put = __cordl_internal_set_isPreprocessed)) bool isPreprocessed;

  /// @brief Field isRedefined, offset 0x7b, size 0x1
  __declspec(property(get = __cordl_internal_get_isRedefined, put = __cordl_internal_set_isRedefined)) bool isRedefined;

  /// @brief Field items, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_items, put = __cordl_internal_set_items))::System::Xml::Schema::XmlSchemaObjectCollection* items;

  /// @brief Field moreAttributes, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_moreAttributes,
                      put = __cordl_internal_set_moreAttributes))::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*> moreAttributes;

  /// @brief Field notations, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_notations, put = __cordl_internal_set_notations))::System::Xml::Schema::XmlSchemaObjectTable* notations;

  /// @brief Field schemaId, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get_schemaId, put = __cordl_internal_set_schemaId)) int32_t schemaId;

  /// @brief Field targetNs, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_targetNs, put = __cordl_internal_set_targetNs))::StringW targetNs;

  /// @brief Field types, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_types, put = __cordl_internal_set_types))::System::Xml::Schema::XmlSchemaObjectTable* types;

  /// @brief Field version, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version))::StringW version;

  /// @brief Method AddAnnotation, addr 0x2e3f5b8, size 0x18, virtual true, abstract: false, final false
  inline void AddAnnotation(::System::Xml::Schema::XmlSchemaAnnotation* annotation);

  /// @brief Method Clone, addr 0x2e3e71c, size 0x9c, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchema* Clone();

  /// @brief Method CompileSchema, addr 0x2e3e0f4, size 0x1dc, virtual false, abstract: false, final false
  inline bool CompileSchema(::System::Xml::Schema::XmlSchemaCollection* xsc, ::System::Xml::XmlResolver* resolver, ::System::Xml::Schema::SchemaInfo* schemaInfo, ::StringW ns,
                            ::System::Xml::Schema::ValidationEventHandler* validationEventHandler, ::System::Xml::XmlNameTable* nameTable, bool CompileContentModel);

  /// @brief Method CompileSchemaInSet, addr 0x2e3e2d0, size 0xb0, virtual false, abstract: false, final false
  inline void CompileSchemaInSet(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::ValidationEventHandler* eventHandler,
                                 ::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings);

  /// @brief Method DeepClone, addr 0x2e3e824, size 0x300, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchema* DeepClone();

  /// @brief Method GetExternalSchemasList, addr 0x2e3f6a8, size 0x1c0, virtual false, abstract: false, final false
  inline void GetExternalSchemasList(::System::Collections::IList* extList, ::System::Xml::Schema::XmlSchema* schema);

  static inline ::System::Xml::Schema::XmlSchema* New_ctor();

  /// @brief Method Read, addr 0x2e3df48, size 0x1ac, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlSchema* Read(::System::Xml::XmlReader* reader, ::System::Xml::Schema::ValidationEventHandler* validationEventHandler);

  /// @brief Method SetIsCompiled, addr 0x2e3f5a4, size 0xc, virtual false, abstract: false, final false
  inline void SetIsCompiled(bool isCompiled);

  /// @brief Method SetUnhandledAttributes, addr 0x2e3f5b0, size 0x8, virtual true, abstract: false, final false
  inline void SetUnhandledAttributes(::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*> moreAttributes);

  constexpr ::System::Xml::Schema::XmlSchemaForm const& __cordl_internal_get_attributeFormDefault() const;

  constexpr ::System::Xml::Schema::XmlSchemaForm& __cordl_internal_get_attributeFormDefault();

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& __cordl_internal_get_attributeGroups();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectTable*> const& __cordl_internal_get_attributeGroups() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& __cordl_internal_get_attributes();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectTable*> const& __cordl_internal_get_attributes() const;

  constexpr ::System::Uri*& __cordl_internal_get_baseUri();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __cordl_internal_get_baseUri() const;

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod const& __cordl_internal_get_blockDefault() const;

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod& __cordl_internal_get_blockDefault();

  constexpr ::System::Xml::XmlDocument*& __cordl_internal_get_document();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlDocument*> const& __cordl_internal_get_document() const;

  constexpr ::System::Xml::Schema::XmlSchemaForm const& __cordl_internal_get_elementFormDefault() const;

  constexpr ::System::Xml::Schema::XmlSchemaForm& __cordl_internal_get_elementFormDefault();

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& __cordl_internal_get_elements();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectTable*> const& __cordl_internal_get_elements() const;

  constexpr int32_t const& __cordl_internal_get_errorCount() const;

  constexpr int32_t& __cordl_internal_get_errorCount();

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod const& __cordl_internal_get_finalDefault() const;

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod& __cordl_internal_get_finalDefault();

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& __cordl_internal_get_groups();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectTable*> const& __cordl_internal_get_groups() const;

  constexpr ::StringW const& __cordl_internal_get_id() const;

  constexpr ::StringW& __cordl_internal_get_id();

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& __cordl_internal_get_identityConstraints();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectTable*> const& __cordl_internal_get_identityConstraints() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_ids();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_ids() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_importedNamespaces();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get_importedNamespaces() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_importedSchemas();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get_importedSchemas() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection*& __cordl_internal_get_includes();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectCollection*> const& __cordl_internal_get_includes() const;

  constexpr bool const& __cordl_internal_get_isChameleon() const;

  constexpr bool& __cordl_internal_get_isChameleon();

  constexpr bool const& __cordl_internal_get_isCompiled() const;

  constexpr bool& __cordl_internal_get_isCompiled();

  constexpr bool const& __cordl_internal_get_isCompiledBySet() const;

  constexpr bool& __cordl_internal_get_isCompiledBySet();

  constexpr bool const& __cordl_internal_get_isPreprocessed() const;

  constexpr bool& __cordl_internal_get_isPreprocessed();

  constexpr bool const& __cordl_internal_get_isRedefined() const;

  constexpr bool& __cordl_internal_get_isRedefined();

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection*& __cordl_internal_get_items();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectCollection*> const& __cordl_internal_get_items() const;

  constexpr ::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*> const& __cordl_internal_get_moreAttributes() const;

  constexpr ::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*>& __cordl_internal_get_moreAttributes();

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& __cordl_internal_get_notations();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectTable*> const& __cordl_internal_get_notations() const;

  constexpr int32_t const& __cordl_internal_get_schemaId() const;

  constexpr int32_t& __cordl_internal_get_schemaId();

  constexpr ::StringW const& __cordl_internal_get_targetNs() const;

  constexpr ::StringW& __cordl_internal_get_targetNs();

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& __cordl_internal_get_types();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectTable*> const& __cordl_internal_get_types() const;

  constexpr ::StringW const& __cordl_internal_get_version() const;

  constexpr ::StringW& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_attributeFormDefault(::System::Xml::Schema::XmlSchemaForm value);

  constexpr void __cordl_internal_set_attributeGroups(::System::Xml::Schema::XmlSchemaObjectTable* value);

  constexpr void __cordl_internal_set_attributes(::System::Xml::Schema::XmlSchemaObjectTable* value);

  constexpr void __cordl_internal_set_baseUri(::System::Uri* value);

  constexpr void __cordl_internal_set_blockDefault(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  constexpr void __cordl_internal_set_document(::System::Xml::XmlDocument* value);

  constexpr void __cordl_internal_set_elementFormDefault(::System::Xml::Schema::XmlSchemaForm value);

  constexpr void __cordl_internal_set_elements(::System::Xml::Schema::XmlSchemaObjectTable* value);

  constexpr void __cordl_internal_set_errorCount(int32_t value);

  constexpr void __cordl_internal_set_finalDefault(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  constexpr void __cordl_internal_set_groups(::System::Xml::Schema::XmlSchemaObjectTable* value);

  constexpr void __cordl_internal_set_id(::StringW value);

  constexpr void __cordl_internal_set_identityConstraints(::System::Xml::Schema::XmlSchemaObjectTable* value);

  constexpr void __cordl_internal_set_ids(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_importedNamespaces(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_importedSchemas(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_includes(::System::Xml::Schema::XmlSchemaObjectCollection* value);

  constexpr void __cordl_internal_set_isChameleon(bool value);

  constexpr void __cordl_internal_set_isCompiled(bool value);

  constexpr void __cordl_internal_set_isCompiledBySet(bool value);

  constexpr void __cordl_internal_set_isPreprocessed(bool value);

  constexpr void __cordl_internal_set_isRedefined(bool value);

  constexpr void __cordl_internal_set_items(::System::Xml::Schema::XmlSchemaObjectCollection* value);

  constexpr void __cordl_internal_set_moreAttributes(::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*> value);

  constexpr void __cordl_internal_set_notations(::System::Xml::Schema::XmlSchemaObjectTable* value);

  constexpr void __cordl_internal_set_schemaId(int32_t value);

  constexpr void __cordl_internal_set_targetNs(::StringW value);

  constexpr void __cordl_internal_set_types(::System::Xml::Schema::XmlSchemaObjectTable* value);

  constexpr void __cordl_internal_set_version(::StringW value);

  /// @brief Method .ctor, addr 0x2e3ddb8, size 0x180, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_globalIdCounter();

  /// @brief Method get_AttributeFormDefault, addr 0x2e3e380, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaForm get_AttributeFormDefault();

  /// @brief Method get_AttributeGroups, addr 0x2e3e498, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectTable* get_AttributeGroups();

  /// @brief Method get_Attributes, addr 0x2e3e42c, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectTable* get_Attributes();

  /// @brief Method get_BaseUri, addr 0x2e3e604, size 0x8, virtual false, abstract: false, final false
  inline ::System::Uri* get_BaseUri();

  /// @brief Method get_BlockDefault, addr 0x2e3e390, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaDerivationMethod get_BlockDefault();

  /// @brief Method get_Document, addr 0x2e3e6a0, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Xml::XmlDocument* get_Document();

  /// @brief Method get_ElementFormDefault, addr 0x2e3e3b0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaForm get_ElementFormDefault();

  /// @brief Method get_Elements, addr 0x2e3e570, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectTable* get_Elements();

  /// @brief Method get_ErrorCount, addr 0x2e3e70c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ErrorCount();

  /// @brief Method get_FinalDefault, addr 0x2e3e3a0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaDerivationMethod get_FinalDefault();

  /// @brief Method get_Groups, addr 0x2e3e5ec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectTable* get_Groups();

  /// @brief Method get_Id, addr 0x2e3e5dc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Id();

  /// @brief Method get_IdAttribute, addr 0x2e3f594, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_IdAttribute();

  /// @brief Method get_IdentityConstraints, addr 0x2e3e5fc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectTable* get_IdentityConstraints();

  /// @brief Method get_Ids, addr 0x2e3e698, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Hashtable* get_Ids();

  /// @brief Method get_ImportedNamespaces, addr 0x2e3f63c, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* get_ImportedNamespaces();

  /// @brief Method get_ImportedSchemas, addr 0x2e3f5d0, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* get_ImportedSchemas();

  /// @brief Method get_Includes, addr 0x2e3e3e0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectCollection* get_Includes();

  /// @brief Method get_IsChameleon, addr 0x2e3e684, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsChameleon();

  /// @brief Method get_IsCompiledBySet, addr 0x2e3e3f0, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsCompiledBySet();

  /// @brief Method get_IsPreprocessed, addr 0x2e3e404, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsPreprocessed();

  /// @brief Method get_IsRedefined, addr 0x2e3e418, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsRedefined();

  /// @brief Method get_Items, addr 0x2e3e3e8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectCollection* get_Items();

  /// @brief Method get_Notations, addr 0x2e3e5f4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectTable* get_Notations();

  /// @brief Method get_SchemaId, addr 0x2e3e614, size 0x70, virtual false, abstract: false, final false
  inline int32_t get_SchemaId();

  /// @brief Method get_SchemaTypes, addr 0x2e3e504, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectTable* get_SchemaTypes();

  /// @brief Method get_TargetNamespace, addr 0x2e3e3c0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TargetNamespace();

  /// @brief Method get_Version, addr 0x2e3e3d0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Version();

  static inline void setStaticF_globalIdCounter(int32_t value);

  /// @brief Method set_AttributeFormDefault, addr 0x2e3e388, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributeFormDefault(::System::Xml::Schema::XmlSchemaForm value);

  /// @brief Method set_BaseUri, addr 0x2e3e60c, size 0x8, virtual false, abstract: false, final false
  inline void set_BaseUri(::System::Uri* value);

  /// @brief Method set_BlockDefault, addr 0x2e3e398, size 0x8, virtual false, abstract: false, final false
  inline void set_BlockDefault(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  /// @brief Method set_ElementFormDefault, addr 0x2e3e3b8, size 0x8, virtual false, abstract: false, final false
  inline void set_ElementFormDefault(::System::Xml::Schema::XmlSchemaForm value);

  /// @brief Method set_ErrorCount, addr 0x2e3e714, size 0x8, virtual false, abstract: false, final false
  inline void set_ErrorCount(int32_t value);

  /// @brief Method set_FinalDefault, addr 0x2e3e3a8, size 0x8, virtual false, abstract: false, final false
  inline void set_FinalDefault(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  /// @brief Method set_Id, addr 0x2e3e5e4, size 0x8, virtual false, abstract: false, final false
  inline void set_Id(::StringW value);

  /// @brief Method set_IdAttribute, addr 0x2e3f59c, size 0x8, virtual true, abstract: false, final false
  inline void set_IdAttribute(::StringW value);

  /// @brief Method set_IsChameleon, addr 0x2e3e68c, size 0xc, virtual false, abstract: false, final false
  inline void set_IsChameleon(bool value);

  /// @brief Method set_IsCompiledBySet, addr 0x2e3e3f8, size 0xc, virtual false, abstract: false, final false
  inline void set_IsCompiledBySet(bool value);

  /// @brief Method set_IsPreprocessed, addr 0x2e3e40c, size 0xc, virtual false, abstract: false, final false
  inline void set_IsPreprocessed(bool value);

  /// @brief Method set_IsRedefined, addr 0x2e3e420, size 0xc, virtual false, abstract: false, final false
  inline void set_IsRedefined(bool value);

  /// @brief Method set_TargetNamespace, addr 0x2e3e3c8, size 0x8, virtual false, abstract: false, final false
  inline void set_TargetNamespace(::StringW value);

  /// @brief Method set_Version, addr 0x2e3e3d8, size 0x8, virtual false, abstract: false, final false
  inline void set_Version(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchema();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchema", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchema(XmlSchema&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchema", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchema(XmlSchema const&) = delete;

  /// @brief Field attributeFormDefault, offset: 0x34, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaForm ___attributeFormDefault;

  /// @brief Field elementFormDefault, offset: 0x38, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaForm ___elementFormDefault;

  /// @brief Field blockDefault, offset: 0x3c, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaDerivationMethod ___blockDefault;

  /// @brief Field finalDefault, offset: 0x40, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaDerivationMethod ___finalDefault;

  /// @brief Field targetNs, offset: 0x48, size: 0x8, def value: None
  ::StringW ___targetNs;

  /// @brief Field version, offset: 0x50, size: 0x8, def value: None
  ::StringW ___version;

  /// @brief Field includes, offset: 0x58, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectCollection* ___includes;

  /// @brief Field items, offset: 0x60, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectCollection* ___items;

  /// @brief Field id, offset: 0x68, size: 0x8, def value: None
  ::StringW ___id;

  /// @brief Field moreAttributes, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*> ___moreAttributes;

  /// @brief Field isCompiled, offset: 0x78, size: 0x1, def value: None
  bool ___isCompiled;

  /// @brief Field isCompiledBySet, offset: 0x79, size: 0x1, def value: None
  bool ___isCompiledBySet;

  /// @brief Field isPreprocessed, offset: 0x7a, size: 0x1, def value: None
  bool ___isPreprocessed;

  /// @brief Field isRedefined, offset: 0x7b, size: 0x1, def value: None
  bool ___isRedefined;

  /// @brief Field errorCount, offset: 0x7c, size: 0x4, def value: None
  int32_t ___errorCount;

  /// @brief Field attributes, offset: 0x80, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectTable* ___attributes;

  /// @brief Field attributeGroups, offset: 0x88, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectTable* ___attributeGroups;

  /// @brief Field elements, offset: 0x90, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectTable* ___elements;

  /// @brief Field types, offset: 0x98, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectTable* ___types;

  /// @brief Field groups, offset: 0xa0, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectTable* ___groups;

  /// @brief Field notations, offset: 0xa8, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectTable* ___notations;

  /// @brief Field identityConstraints, offset: 0xb0, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectTable* ___identityConstraints;

  /// @brief Field importedSchemas, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___importedSchemas;

  /// @brief Field importedNamespaces, offset: 0xc0, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___importedNamespaces;

  /// @brief Field schemaId, offset: 0xc8, size: 0x4, def value: None
  int32_t ___schemaId;

  /// @brief Field baseUri, offset: 0xd0, size: 0x8, def value: None
  ::System::Uri* ___baseUri;

  /// @brief Field isChameleon, offset: 0xd8, size: 0x1, def value: None
  bool ___isChameleon;

  /// @brief Field ids, offset: 0xe0, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___ids;

  /// @brief Field document, offset: 0xe8, size: 0x8, def value: None
  ::System::Xml::XmlDocument* ___document;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchema, 0xf0>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchema, ___attributeFormDefault) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchema, ___elementFormDefault) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchema, ___blockDefault) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchema, ___finalDefault) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchema, ___targetNs) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchema, ___version) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchema, ___includes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchema, ___items) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchema, ___id) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchema, ___moreAttributes) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchema, ___isCompiled) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchema, ___isCompiledBySet) == 0x79, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchema, ___isPreprocessed) == 0x7a, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchema, ___isRedefined) == 0x7b, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchema, ___errorCount) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchema, ___attributes) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchema, ___attributeGroups) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchema, ___elements) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchema, ___types) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchema, ___groups) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchema, ___notations) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchema, ___identityConstraints) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchema, ___importedSchemas) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchema, ___importedNamespaces) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchema, ___schemaId) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchema, ___baseUri) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchema, ___isChameleon) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchema, ___ids) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchema, ___document) == 0xe8, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchema);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchema*, "System.Xml.Schema", "XmlSchema");
