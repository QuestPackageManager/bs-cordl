#pragma once
// IWYU pragma private; include "System/Xml/Schema/Preprocessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__BaseProcessor_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDerivationMethod_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaForm_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Preprocessor)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class SortedList;
}
namespace System::Xml::Schema {
class RedefineEntry;
}
namespace System::Xml::Schema {
class SchemaNames;
}
namespace System::Xml::Schema {
class ValidationEventHandler;
}
namespace System::Xml::Schema {
class XmlSchemaAnnotation;
}
namespace System::Xml::Schema {
class XmlSchemaAnyAttribute;
}
namespace System::Xml::Schema {
class XmlSchemaAttributeGroup;
}
namespace System::Xml::Schema {
class XmlSchemaAttribute;
}
namespace System::Xml::Schema {
class XmlSchemaCompilationSettings;
}
namespace System::Xml::Schema {
class XmlSchemaComplexType;
}
namespace System::Xml::Schema {
class XmlSchemaElement;
}
namespace System::Xml::Schema {
class XmlSchemaExternal;
}
namespace System::Xml::Schema {
class XmlSchemaGroup;
}
namespace System::Xml::Schema {
class XmlSchemaIdentityConstraint;
}
namespace System::Xml::Schema {
class XmlSchemaNotation;
}
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
namespace System::Xml::Schema {
class XmlSchemaObject;
}
namespace System::Xml::Schema {
class XmlSchemaParticle;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System::Xml::Schema {
class XmlSchema;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml {
class XmlReaderSettings;
}
namespace System::Xml {
class XmlResolver;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Xml::Schema {
class Preprocessor;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Preprocessor);
// Dependencies System.Xml.Schema.BaseProcessor, System.Xml.Schema.XmlSchemaDerivationMethod, System.Xml.Schema.XmlSchemaForm
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.Preprocessor
class CORDL_TYPE Preprocessor : public ::System::Xml::Schema::BaseProcessor {
public:
  // Declarations
  __declspec(property(put = set_ChameleonSchemas)) ::System::Collections::Hashtable* ChameleonSchemas;

  /// @brief Field NsXsi, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_NsXsi, put = __cordl_internal_set_NsXsi)) ::StringW NsXsi;

  __declspec(property(put = set_ReaderSettings)) ::System::Xml::XmlReaderSettings* ReaderSettings;

  __declspec(property(get = get_RootSchema)) ::System::Xml::Schema::XmlSchema* RootSchema;

  __declspec(property(put = set_SchemaLocations)) ::System::Collections::Hashtable* SchemaLocations;

  __declspec(property(put = set_XmlResolver)) ::System::Xml::XmlResolver* XmlResolver;

  /// @brief Field Xmlns, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_Xmlns, put = __cordl_internal_set_Xmlns)) ::StringW Xmlns;

  /// @brief Field attributeFormDefault, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_attributeFormDefault, put = __cordl_internal_set_attributeFormDefault)) ::System::Xml::Schema::XmlSchemaForm attributeFormDefault;

  /// @brief Field blockDefault, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_blockDefault, put = __cordl_internal_set_blockDefault)) ::System::Xml::Schema::XmlSchemaDerivationMethod blockDefault;

  /// @brief Field builtInSchemaForXmlNS, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_builtInSchemaForXmlNS, put = setStaticF_builtInSchemaForXmlNS)) ::System::Xml::Schema::XmlSchema* builtInSchemaForXmlNS;

  /// @brief Field chameleonSchemas, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_chameleonSchemas, put = __cordl_internal_set_chameleonSchemas)) ::System::Collections::Hashtable* chameleonSchemas;

  /// @brief Field currentSchema, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_currentSchema, put = __cordl_internal_set_currentSchema)) ::System::Xml::Schema::XmlSchema* currentSchema;

  /// @brief Field elementFormDefault, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_elementFormDefault, put = __cordl_internal_set_elementFormDefault)) ::System::Xml::Schema::XmlSchemaForm elementFormDefault;

  /// @brief Field finalDefault, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_finalDefault, put = __cordl_internal_set_finalDefault)) ::System::Xml::Schema::XmlSchemaDerivationMethod finalDefault;

  /// @brief Field lockList, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_lockList, put = __cordl_internal_set_lockList)) ::System::Collections::SortedList* lockList;

  /// @brief Field processedExternals, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_processedExternals, put = __cordl_internal_set_processedExternals)) ::System::Collections::Hashtable* processedExternals;

  /// @brief Field readerSettings, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_readerSettings, put = __cordl_internal_set_readerSettings)) ::System::Xml::XmlReaderSettings* readerSettings;

  /// @brief Field redefinedList, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_redefinedList, put = __cordl_internal_set_redefinedList)) ::System::Collections::ArrayList* redefinedList;

  /// @brief Field referenceNamespaces, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_referenceNamespaces, put = __cordl_internal_set_referenceNamespaces)) ::System::Collections::Hashtable* referenceNamespaces;

  /// @brief Field rootSchema, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_rootSchema, put = __cordl_internal_set_rootSchema)) ::System::Xml::Schema::XmlSchema* rootSchema;

  /// @brief Field rootSchemaForRedefine, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_rootSchemaForRedefine, put = __cordl_internal_set_rootSchemaForRedefine)) ::System::Xml::Schema::XmlSchema* rootSchemaForRedefine;

  /// @brief Field schemaLocations, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_schemaLocations, put = __cordl_internal_set_schemaLocations)) ::System::Collections::Hashtable* schemaLocations;

  /// @brief Field targetNamespace, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_targetNamespace, put = __cordl_internal_set_targetNamespace)) ::StringW targetNamespace;

  /// @brief Field xmlResolver, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlResolver, put = __cordl_internal_set_xmlResolver)) ::System::Xml::XmlResolver* xmlResolver;

  /// @brief Method BuildRefNamespaces, addr 0x4270dcc, size 0x220, virtual false, abstract: false, final false
  inline void BuildRefNamespaces(::System::Xml::Schema::XmlSchema* schema);

  /// @brief Method BuildSchemaList, addr 0x426e7e4, size 0x178, virtual false, abstract: false, final false
  inline void BuildSchemaList(::System::Xml::Schema::XmlSchema* schema);

  /// @brief Method CheckRefinedAttributeGroup, addr 0x4274244, size 0x158, virtual false, abstract: false, final false
  inline void CheckRefinedAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup);

  /// @brief Method CheckRefinedComplexType, addr 0x427439c, size 0x314, virtual false, abstract: false, final false
  inline void CheckRefinedComplexType(::System::Xml::Schema::XmlSchemaComplexType* ctype);

  /// @brief Method CheckRefinedGroup, addr 0x42741a4, size 0xa0, virtual false, abstract: false, final false
  inline void CheckRefinedGroup(::System::Xml::Schema::XmlSchemaGroup* group);

  /// @brief Method CheckRefinedSimpleType, addr 0x42746b0, size 0x10c, virtual false, abstract: false, final false
  inline void CheckRefinedSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* stype);

  /// @brief Method Cleanup, addr 0x4270620, size 0xd4, virtual false, abstract: false, final false
  inline void Cleanup(::System::Xml::Schema::XmlSchema* schema);

  /// @brief Method CleanupRedefine, addr 0x4270c9c, size 0xa0, virtual false, abstract: false, final false
  inline void CleanupRedefine(::System::Xml::Schema::XmlSchemaExternal* include);

  /// @brief Method CopyIncludedComponents, addr 0x42715e0, size 0x12c4, virtual false, abstract: false, final false
  inline void CopyIncludedComponents(::System::Xml::Schema::XmlSchema* includedSchema, ::System::Xml::Schema::XmlSchema* schema);

  /// @brief Method CountGroupSelfReference, addr 0x42747bc, size 0x2e4, virtual false, abstract: false, final false
  inline int32_t CountGroupSelfReference(::System::Xml::Schema::XmlSchemaObjectCollection* items, ::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::XmlSchemaGroup* redefined);

  /// @brief Method Execute, addr 0x426d5a0, size 0x4bc, virtual false, abstract: false, final false
  inline bool Execute(::System::Xml::Schema::XmlSchema* schema, ::StringW targetNamespace, bool loadExternals);

  /// @brief Method GetBuildInSchema, addr 0x42706f4, size 0x5a8, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlSchema* GetBuildInSchema();

  /// @brief Method GetChameleonSchema, addr 0x426da5c, size 0x130, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchema* GetChameleonSchema(::StringW targetNamespace, ::System::Xml::Schema::XmlSchema* schema);

  /// @brief Method GetIncludedSet, addr 0x4274078, size 0x12c, virtual false, abstract: false, final false
  inline void GetIncludedSet(::System::Xml::Schema::XmlSchema* schema, ::System::Collections::ArrayList* includesList);

  /// @brief Method GetParentSchema, addr 0x4273fe4, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlSchema* GetParentSchema(::System::Xml::Schema::XmlSchemaObject* currentSchemaObject);

  /// @brief Method GetSchemaEntity, addr 0x4270da4, size 0x28, virtual false, abstract: false, final false
  inline ::System::Object* GetSchemaEntity(::System::Uri* ruri);

  /// @brief Method LoadExternals, addr 0x426db8c, size 0xc58, virtual false, abstract: false, final false
  inline void LoadExternals(::System::Xml::Schema::XmlSchema* schema);

  static inline ::System::Xml::Schema::Preprocessor* New_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames,
                                                              ::System::Xml::Schema::ValidationEventHandler* eventHandler, ::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings);

  /// @brief Method ParseUri, addr 0x4270fec, size 0x144, virtual false, abstract: false, final false
  inline void ParseUri(::StringW uri, ::StringW code, ::System::Xml::Schema::XmlSchemaObject* sourceSchemaObject);

  /// @brief Method Preprocess, addr 0x426e95c, size 0x11c4, virtual false, abstract: false, final false
  inline void Preprocess(::System::Xml::Schema::XmlSchema* schema, ::StringW targetNamespace, ::System::Collections::ArrayList* imports);

  /// @brief Method PreprocessAnnotation, addr 0x4273f74, size 0x70, virtual false, abstract: false, final false
  inline void PreprocessAnnotation(::System::Xml::Schema::XmlSchemaAnnotation* annotation);

  /// @brief Method PreprocessAnnotation, addr 0x4271148, size 0x8c, virtual false, abstract: false, final false
  inline void PreprocessAnnotation(::System::Xml::Schema::XmlSchemaObject* schemaObject);

  /// @brief Method PreprocessAttribute, addr 0x42728a4, size 0x164, virtual false, abstract: false, final false
  inline void PreprocessAttribute(::System::Xml::Schema::XmlSchemaAttribute* attribute);

  /// @brief Method PreprocessAttributeContent, addr 0x4274d48, size 0x228, virtual false, abstract: false, final false
  inline void PreprocessAttributeContent(::System::Xml::Schema::XmlSchemaAttribute* attribute);

  /// @brief Method PreprocessAttributeGroup, addr 0x4272a08, size 0xf8, virtual false, abstract: false, final false
  inline void PreprocessAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup);

  /// @brief Method PreprocessAttributes, addr 0x4275360, size 0x364, virtual false, abstract: false, final false
  inline void PreprocessAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* attributes, ::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute,
                                   ::System::Xml::Schema::XmlSchemaObject* parent);

  /// @brief Method PreprocessComplexType, addr 0x4272b00, size 0x88c, virtual false, abstract: false, final false
  inline void PreprocessComplexType(::System::Xml::Schema::XmlSchemaComplexType* complexType, bool local);

  /// @brief Method PreprocessElement, addr 0x4273914, size 0x248, virtual false, abstract: false, final false
  inline void PreprocessElement(::System::Xml::Schema::XmlSchemaElement* element);

  /// @brief Method PreprocessElementContent, addr 0x42756c4, size 0x324, virtual false, abstract: false, final false
  inline void PreprocessElementContent(::System::Xml::Schema::XmlSchemaElement* element);

  /// @brief Method PreprocessGroup, addr 0x4273b5c, size 0x1c4, virtual false, abstract: false, final false
  inline void PreprocessGroup(::System::Xml::Schema::XmlSchemaGroup* group);

  /// @brief Method PreprocessIdentityConstraint, addr 0x4275d78, size 0x344, virtual false, abstract: false, final false
  inline void PreprocessIdentityConstraint(::System::Xml::Schema::XmlSchemaIdentityConstraint* constraint);

  /// @brief Method PreprocessLocalAttribute, addr 0x4274f70, size 0x1dc, virtual false, abstract: false, final false
  inline void PreprocessLocalAttribute(::System::Xml::Schema::XmlSchemaAttribute* attribute);

  /// @brief Method PreprocessLocalElement, addr 0x42759e8, size 0x390, virtual false, abstract: false, final false
  inline void PreprocessLocalElement(::System::Xml::Schema::XmlSchemaElement* element);

  /// @brief Method PreprocessNotation, addr 0x4273d20, size 0x254, virtual false, abstract: false, final false
  inline void PreprocessNotation(::System::Xml::Schema::XmlSchemaNotation* notation);

  /// @brief Method PreprocessParticle, addr 0x42760bc, size 0x8cc, virtual false, abstract: false, final false
  inline void PreprocessParticle(::System::Xml::Schema::XmlSchemaParticle* particle);

  /// @brief Method PreprocessRedefine, addr 0x426fb20, size 0xb00, virtual false, abstract: false, final false
  inline void PreprocessRedefine(::System::Xml::Schema::RedefineEntry* redefineEntry);

  /// @brief Method PreprocessSimpleType, addr 0x427338c, size 0x588, virtual false, abstract: false, final false
  inline void PreprocessSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* simpleType, bool local);

  /// @brief Method ResolveSchemaLocationUri, addr 0x4270d64, size 0x40, virtual false, abstract: false, final false
  inline ::System::Uri* ResolveSchemaLocationUri(::System::Xml::Schema::XmlSchema* enclosingSchema, ::StringW location);

  /// @brief Method SetParent, addr 0x4271130, size 0x18, virtual false, abstract: false, final false
  inline void SetParent(::System::Xml::Schema::XmlSchemaObject* child, ::System::Xml::Schema::XmlSchemaObject* parent);

  /// @brief Method SetSchemaDefaults, addr 0x42714d4, size 0x10c, virtual false, abstract: false, final false
  inline void SetSchemaDefaults(::System::Xml::Schema::XmlSchema* schema);

  /// @brief Method ValidateIdAttribute, addr 0x42711d4, size 0x300, virtual false, abstract: false, final false
  inline void ValidateIdAttribute(::System::Xml::Schema::XmlSchemaObject* xso);

  /// @brief Method ValidateNameAttribute, addr 0x4274aa0, size 0x2a8, virtual false, abstract: false, final false
  inline void ValidateNameAttribute(::System::Xml::Schema::XmlSchemaObject* xso);

  /// @brief Method ValidateQNameAttribute, addr 0x427514c, size 0x214, virtual false, abstract: false, final false
  inline void ValidateQNameAttribute(::System::Xml::Schema::XmlSchemaObject* xso, ::StringW attributeName, ::System::Xml::XmlQualifiedName* value);

  constexpr ::StringW const& __cordl_internal_get_NsXsi() const;

  constexpr ::StringW& __cordl_internal_get_NsXsi();

  constexpr ::StringW const& __cordl_internal_get_Xmlns() const;

  constexpr ::StringW& __cordl_internal_get_Xmlns();

  constexpr ::System::Xml::Schema::XmlSchemaForm const& __cordl_internal_get_attributeFormDefault() const;

  constexpr ::System::Xml::Schema::XmlSchemaForm& __cordl_internal_get_attributeFormDefault();

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod const& __cordl_internal_get_blockDefault() const;

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod& __cordl_internal_get_blockDefault();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_chameleonSchemas() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_chameleonSchemas();

  constexpr ::System::Xml::Schema::XmlSchema* const& __cordl_internal_get_currentSchema() const;

  constexpr ::System::Xml::Schema::XmlSchema*& __cordl_internal_get_currentSchema();

  constexpr ::System::Xml::Schema::XmlSchemaForm const& __cordl_internal_get_elementFormDefault() const;

  constexpr ::System::Xml::Schema::XmlSchemaForm& __cordl_internal_get_elementFormDefault();

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod const& __cordl_internal_get_finalDefault() const;

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod& __cordl_internal_get_finalDefault();

  constexpr ::System::Collections::SortedList* const& __cordl_internal_get_lockList() const;

  constexpr ::System::Collections::SortedList*& __cordl_internal_get_lockList();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_processedExternals() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_processedExternals();

  constexpr ::System::Xml::XmlReaderSettings* const& __cordl_internal_get_readerSettings() const;

  constexpr ::System::Xml::XmlReaderSettings*& __cordl_internal_get_readerSettings();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_redefinedList() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_redefinedList();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_referenceNamespaces() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_referenceNamespaces();

  constexpr ::System::Xml::Schema::XmlSchema* const& __cordl_internal_get_rootSchema() const;

  constexpr ::System::Xml::Schema::XmlSchema*& __cordl_internal_get_rootSchema();

  constexpr ::System::Xml::Schema::XmlSchema* const& __cordl_internal_get_rootSchemaForRedefine() const;

  constexpr ::System::Xml::Schema::XmlSchema*& __cordl_internal_get_rootSchemaForRedefine();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_schemaLocations() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_schemaLocations();

  constexpr ::StringW const& __cordl_internal_get_targetNamespace() const;

  constexpr ::StringW& __cordl_internal_get_targetNamespace();

  constexpr ::System::Xml::XmlResolver* const& __cordl_internal_get_xmlResolver() const;

  constexpr ::System::Xml::XmlResolver*& __cordl_internal_get_xmlResolver();

  constexpr void __cordl_internal_set_NsXsi(::StringW value);

  constexpr void __cordl_internal_set_Xmlns(::StringW value);

  constexpr void __cordl_internal_set_attributeFormDefault(::System::Xml::Schema::XmlSchemaForm value);

  constexpr void __cordl_internal_set_blockDefault(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  constexpr void __cordl_internal_set_chameleonSchemas(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_currentSchema(::System::Xml::Schema::XmlSchema* value);

  constexpr void __cordl_internal_set_elementFormDefault(::System::Xml::Schema::XmlSchemaForm value);

  constexpr void __cordl_internal_set_finalDefault(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  constexpr void __cordl_internal_set_lockList(::System::Collections::SortedList* value);

  constexpr void __cordl_internal_set_processedExternals(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_readerSettings(::System::Xml::XmlReaderSettings* value);

  constexpr void __cordl_internal_set_redefinedList(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_referenceNamespaces(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_rootSchema(::System::Xml::Schema::XmlSchema* value);

  constexpr void __cordl_internal_set_rootSchemaForRedefine(::System::Xml::Schema::XmlSchema* value);

  constexpr void __cordl_internal_set_schemaLocations(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_targetNamespace(::StringW value);

  constexpr void __cordl_internal_set_xmlResolver(::System::Xml::XmlResolver* value);

  /// @brief Method .ctor, addr 0x426d4c0, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames, ::System::Xml::Schema::ValidationEventHandler* eventHandler,
                    ::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings);

  static inline ::System::Xml::Schema::XmlSchema* getStaticF_builtInSchemaForXmlNS();

  /// @brief Method get_RootSchema, addr 0x4270d5c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchema* get_RootSchema();

  static inline void setStaticF_builtInSchemaForXmlNS(::System::Xml::Schema::XmlSchema* value);

  /// @brief Method set_ChameleonSchemas, addr 0x4270d54, size 0x8, virtual false, abstract: false, final false
  inline void set_ChameleonSchemas(::System::Collections::Hashtable* value);

  /// @brief Method set_ReaderSettings, addr 0x4270d44, size 0x8, virtual false, abstract: false, final false
  inline void set_ReaderSettings(::System::Xml::XmlReaderSettings* value);

  /// @brief Method set_SchemaLocations, addr 0x4270d4c, size 0x8, virtual false, abstract: false, final false
  inline void set_SchemaLocations(::System::Collections::Hashtable* value);

  /// @brief Method set_XmlResolver, addr 0x4270d3c, size 0x8, virtual false, abstract: false, final false
  inline void set_XmlResolver(::System::Xml::XmlResolver* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Preprocessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Preprocessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Preprocessor(Preprocessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Preprocessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Preprocessor(Preprocessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7606 };

  /// @brief Field Xmlns, offset: 0x40, size: 0x8, def value: None
  ::StringW ___Xmlns;

  /// @brief Field NsXsi, offset: 0x48, size: 0x8, def value: None
  ::StringW ___NsXsi;

  /// @brief Field targetNamespace, offset: 0x50, size: 0x8, def value: None
  ::StringW ___targetNamespace;

  /// @brief Field rootSchema, offset: 0x58, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchema* ___rootSchema;

  /// @brief Field currentSchema, offset: 0x60, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchema* ___currentSchema;

  /// @brief Field elementFormDefault, offset: 0x68, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaForm ___elementFormDefault;

  /// @brief Field attributeFormDefault, offset: 0x6c, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaForm ___attributeFormDefault;

  /// @brief Field blockDefault, offset: 0x70, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaDerivationMethod ___blockDefault;

  /// @brief Field finalDefault, offset: 0x74, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaDerivationMethod ___finalDefault;

  /// @brief Field schemaLocations, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___schemaLocations;

  /// @brief Field chameleonSchemas, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___chameleonSchemas;

  /// @brief Field referenceNamespaces, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___referenceNamespaces;

  /// @brief Field processedExternals, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___processedExternals;

  /// @brief Field lockList, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::SortedList* ___lockList;

  /// @brief Field readerSettings, offset: 0xa0, size: 0x8, def value: None
  ::System::Xml::XmlReaderSettings* ___readerSettings;

  /// @brief Field rootSchemaForRedefine, offset: 0xa8, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchema* ___rootSchemaForRedefine;

  /// @brief Field redefinedList, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___redefinedList;

  /// @brief Field xmlResolver, offset: 0xb8, size: 0x8, def value: None
  ::System::Xml::XmlResolver* ___xmlResolver;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::Preprocessor, ___Xmlns) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Preprocessor, ___NsXsi) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Preprocessor, ___targetNamespace) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Preprocessor, ___rootSchema) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Preprocessor, ___currentSchema) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Preprocessor, ___elementFormDefault) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Preprocessor, ___attributeFormDefault) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Preprocessor, ___blockDefault) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Preprocessor, ___finalDefault) == 0x74, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Preprocessor, ___schemaLocations) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Preprocessor, ___chameleonSchemas) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Preprocessor, ___referenceNamespaces) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Preprocessor, ___processedExternals) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Preprocessor, ___lockList) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Preprocessor, ___readerSettings) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Preprocessor, ___rootSchemaForRedefine) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Preprocessor, ___redefinedList) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Preprocessor, ___xmlResolver) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Preprocessor, 0xc0>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Preprocessor);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Preprocessor*, "System.Xml.Schema", "Preprocessor");
