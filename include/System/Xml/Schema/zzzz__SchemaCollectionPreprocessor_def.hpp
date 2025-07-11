#pragma once
// IWYU pragma private; include "System/Xml/Schema/SchemaCollectionPreprocessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__BaseProcessor_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDerivationMethod_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaForm_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SchemaCollectionPreprocessor)
namespace System::Collections {
class Hashtable;
}
namespace System::IO {
class Stream;
}
namespace System::Xml::Schema {
struct SchemaCollectionPreprocessor_Compositor;
}
namespace System::Xml::Schema {
class SchemaNames;
}
namespace System::Xml::Schema {
class ValidationEventHandler;
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
class XmlSchemaCollection;
}
namespace System::Xml::Schema {
class XmlSchemaComplexType;
}
namespace System::Xml::Schema {
class XmlSchemaElement;
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
class XmlSchemaRedefine;
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
class XmlResolver;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Xml::Schema {
struct SchemaCollectionPreprocessor_Compositor;
}
namespace System::Xml::Schema {
class SchemaCollectionPreprocessor;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::SchemaCollectionPreprocessor_Compositor);
MARK_REF_PTR_T(::System::Xml::Schema::SchemaCollectionPreprocessor);
// Dependencies
namespace System::Xml::Schema {
// Is value type: true
// CS Name: System.Xml.Schema.SchemaCollectionPreprocessor/Compositor
struct CORDL_TYPE SchemaCollectionPreprocessor_Compositor {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SchemaCollectionPreprocessor_Compositor_Unwrapped
  enum struct __SchemaCollectionPreprocessor_Compositor_Unwrapped : int32_t {
    __E_Root = static_cast<int32_t>(0x0),
    __E_Include = static_cast<int32_t>(0x1),
    __E_Import = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SchemaCollectionPreprocessor_Compositor_Unwrapped() const noexcept {
    return static_cast<__SchemaCollectionPreprocessor_Compositor_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SchemaCollectionPreprocessor_Compositor();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SchemaCollectionPreprocessor_Compositor(int32_t value__) noexcept;

  /// @brief Field Import value: I32(2)
  static ::System::Xml::Schema::SchemaCollectionPreprocessor_Compositor const Import;

  /// @brief Field Include value: I32(1)
  static ::System::Xml::Schema::SchemaCollectionPreprocessor_Compositor const Include;

  /// @brief Field Root value: I32(0)
  static ::System::Xml::Schema::SchemaCollectionPreprocessor_Compositor const Root;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7616 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::SchemaCollectionPreprocessor_Compositor, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::SchemaCollectionPreprocessor_Compositor, 0x4>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies System.Xml.Schema.BaseProcessor, System.Xml.Schema.XmlSchemaDerivationMethod, System.Xml.Schema.XmlSchemaForm
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.SchemaCollectionPreprocessor
class CORDL_TYPE SchemaCollectionPreprocessor : public ::System::Xml::Schema::BaseProcessor {
public:
  // Declarations
  using Compositor = ::System::Xml::Schema::SchemaCollectionPreprocessor_Compositor;

  __declspec(property(put = set_XmlResolver)) ::System::Xml::XmlResolver* XmlResolver;

  /// @brief Field Xmlns, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_Xmlns, put = __cordl_internal_set_Xmlns)) ::StringW Xmlns;

  /// @brief Field attributeFormDefault, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_attributeFormDefault, put = __cordl_internal_set_attributeFormDefault)) ::System::Xml::Schema::XmlSchemaForm attributeFormDefault;

  /// @brief Field blockDefault, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_blockDefault, put = __cordl_internal_set_blockDefault)) ::System::Xml::Schema::XmlSchemaDerivationMethod blockDefault;

  /// @brief Field buildinIncluded, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_buildinIncluded, put = __cordl_internal_set_buildinIncluded)) bool buildinIncluded;

  /// @brief Field elementFormDefault, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_elementFormDefault, put = __cordl_internal_set_elementFormDefault)) ::System::Xml::Schema::XmlSchemaForm elementFormDefault;

  /// @brief Field finalDefault, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_finalDefault, put = __cordl_internal_set_finalDefault)) ::System::Xml::Schema::XmlSchemaDerivationMethod finalDefault;

  /// @brief Field referenceNamespaces, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_referenceNamespaces, put = __cordl_internal_set_referenceNamespaces)) ::System::Collections::Hashtable* referenceNamespaces;

  /// @brief Field schema, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_schema, put = __cordl_internal_set_schema)) ::System::Xml::Schema::XmlSchema* schema;

  /// @brief Field schemaLocations, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_schemaLocations, put = __cordl_internal_set_schemaLocations)) ::System::Collections::Hashtable* schemaLocations;

  /// @brief Field targetNamespace, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_targetNamespace, put = __cordl_internal_set_targetNamespace)) ::StringW targetNamespace;

  /// @brief Field xmlResolver, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlResolver, put = __cordl_internal_set_xmlResolver)) ::System::Xml::XmlResolver* xmlResolver;

  /// @brief Method BuildRefNamespaces, addr 0x428c8f0, size 0x204, virtual false, abstract: false, final false
  inline void BuildRefNamespaces(::System::Xml::Schema::XmlSchema* schema);

  /// @brief Method CheckRefinedAttributeGroup, addr 0x428f4e4, size 0x168, virtual false, abstract: false, final false
  inline void CheckRefinedAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup);

  /// @brief Method CheckRefinedComplexType, addr 0x428f64c, size 0x314, virtual false, abstract: false, final false
  inline void CheckRefinedComplexType(::System::Xml::Schema::XmlSchemaComplexType* ctype);

  /// @brief Method CheckRefinedGroup, addr 0x428f44c, size 0x98, virtual false, abstract: false, final false
  inline void CheckRefinedGroup(::System::Xml::Schema::XmlSchemaGroup* group);

  /// @brief Method CheckRefinedSimpleType, addr 0x428f960, size 0x10c, virtual false, abstract: false, final false
  inline void CheckRefinedSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* stype);

  /// @brief Method Cleanup, addr 0x428940c, size 0x21c, virtual false, abstract: false, final false
  inline void Cleanup(::System::Xml::Schema::XmlSchema* schema);

  /// @brief Method CountGroupSelfReference, addr 0x428fa6c, size 0x2cc, virtual false, abstract: false, final false
  inline int32_t CountGroupSelfReference(::System::Xml::Schema::XmlSchemaObjectCollection* items, ::System::Xml::XmlQualifiedName* name);

  /// @brief Method Execute, addr 0x42891ec, size 0x220, virtual false, abstract: false, final false
  inline bool Execute(::System::Xml::Schema::XmlSchema* schema, ::StringW targetNamespace, bool loadExternals, ::System::Xml::Schema::XmlSchemaCollection* xsc);

  /// @brief Method GetSchemaEntity, addr 0x428c7dc, size 0x114, virtual false, abstract: false, final false
  inline ::System::IO::Stream* GetSchemaEntity(::System::Uri* ruri);

  /// @brief Method LoadExternals, addr 0x4289628, size 0x960, virtual false, abstract: false, final false
  inline void LoadExternals(::System::Xml::Schema::XmlSchema* schema, ::System::Xml::Schema::XmlSchemaCollection* xsc);

  static inline ::System::Xml::Schema::SchemaCollectionPreprocessor* New_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames,
                                                                              ::System::Xml::Schema::ValidationEventHandler* eventHandler);

  /// @brief Method Preprocess, addr 0x428a1e4, size 0x2544, virtual false, abstract: false, final false
  inline void Preprocess(::System::Xml::Schema::XmlSchema* schema, ::StringW targetNamespace, ::System::Xml::Schema::SchemaCollectionPreprocessor_Compositor compositor);

  /// @brief Method PreprocessAnnotation, addr 0x428cb0c, size 0xd4, virtual false, abstract: false, final false
  inline void PreprocessAnnotation(::System::Xml::Schema::XmlSchemaObject* schemaObject);

  /// @brief Method PreprocessAttribute, addr 0x428dd28, size 0x164, virtual false, abstract: false, final false
  inline void PreprocessAttribute(::System::Xml::Schema::XmlSchemaAttribute* attribute);

  /// @brief Method PreprocessAttributeContent, addr 0x428ffe0, size 0x238, virtual false, abstract: false, final false
  inline void PreprocessAttributeContent(::System::Xml::Schema::XmlSchemaAttribute* attribute);

  /// @brief Method PreprocessAttributeGroup, addr 0x428de8c, size 0xf4, virtual false, abstract: false, final false
  inline void PreprocessAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup);

  /// @brief Method PreprocessAttributes, addr 0x4290578, size 0x310, virtual false, abstract: false, final false
  inline void PreprocessAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* attributes, ::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute,
                                   ::System::Xml::Schema::XmlSchemaObject* parent);

  /// @brief Method PreprocessComplexType, addr 0x428df80, size 0x880, virtual false, abstract: false, final false
  inline void PreprocessComplexType(::System::Xml::Schema::XmlSchemaComplexType* complexType, bool local);

  /// @brief Method PreprocessElement, addr 0x428eda4, size 0x248, virtual false, abstract: false, final false
  inline void PreprocessElement(::System::Xml::Schema::XmlSchemaElement* element);

  /// @brief Method PreprocessElementContent, addr 0x4290888, size 0x348, virtual false, abstract: false, final false
  inline void PreprocessElementContent(::System::Xml::Schema::XmlSchemaElement* element);

  /// @brief Method PreprocessGroup, addr 0x428efec, size 0x1c0, virtual false, abstract: false, final false
  inline void PreprocessGroup(::System::Xml::Schema::XmlSchemaGroup* group);

  /// @brief Method PreprocessIdentityConstraint, addr 0x4290f5c, size 0x340, virtual false, abstract: false, final false
  inline void PreprocessIdentityConstraint(::System::Xml::Schema::XmlSchemaIdentityConstraint* constraint);

  /// @brief Method PreprocessLocalAttribute, addr 0x4290218, size 0x1d8, virtual false, abstract: false, final false
  inline void PreprocessLocalAttribute(::System::Xml::Schema::XmlSchemaAttribute* attribute);

  /// @brief Method PreprocessLocalElement, addr 0x4290bd0, size 0x38c, virtual false, abstract: false, final false
  inline void PreprocessLocalElement(::System::Xml::Schema::XmlSchemaElement* element);

  /// @brief Method PreprocessNotation, addr 0x428f1ac, size 0x2a0, virtual false, abstract: false, final false
  inline void PreprocessNotation(::System::Xml::Schema::XmlSchemaNotation* notation);

  /// @brief Method PreprocessParticle, addr 0x429129c, size 0x84c, virtual false, abstract: false, final false
  inline void PreprocessParticle(::System::Xml::Schema::XmlSchemaParticle* particle);

  /// @brief Method PreprocessRedefine, addr 0x428cbe0, size 0x1148, virtual false, abstract: false, final false
  inline void PreprocessRedefine(::System::Xml::Schema::XmlSchemaRedefine* redefine);

  /// @brief Method PreprocessSimpleType, addr 0x428e800, size 0x5a4, virtual false, abstract: false, final false
  inline void PreprocessSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* simpleType, bool local);

  /// @brief Method ResolveSchemaLocationUri, addr 0x428c730, size 0xac, virtual false, abstract: false, final false
  inline ::System::Uri* ResolveSchemaLocationUri(::System::Xml::Schema::XmlSchema* enclosingSchema, ::StringW location);

  /// @brief Method SetParent, addr 0x428caf4, size 0x18, virtual false, abstract: false, final false
  inline void SetParent(::System::Xml::Schema::XmlSchemaObject* child, ::System::Xml::Schema::XmlSchemaObject* parent);

  /// @brief Method ValidateIdAttribute, addr 0x4289f88, size 0x25c, virtual false, abstract: false, final false
  inline void ValidateIdAttribute(::System::Xml::Schema::XmlSchemaObject* xso);

  /// @brief Method ValidateNameAttribute, addr 0x428fd38, size 0x2a8, virtual false, abstract: false, final false
  inline void ValidateNameAttribute(::System::Xml::Schema::XmlSchemaObject* xso);

  /// @brief Method ValidateQNameAttribute, addr 0x42903f0, size 0x188, virtual false, abstract: false, final false
  inline void ValidateQNameAttribute(::System::Xml::Schema::XmlSchemaObject* xso, ::StringW attributeName, ::System::Xml::XmlQualifiedName* value);

  constexpr ::StringW const& __cordl_internal_get_Xmlns() const;

  constexpr ::StringW& __cordl_internal_get_Xmlns();

  constexpr ::System::Xml::Schema::XmlSchemaForm const& __cordl_internal_get_attributeFormDefault() const;

  constexpr ::System::Xml::Schema::XmlSchemaForm& __cordl_internal_get_attributeFormDefault();

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod const& __cordl_internal_get_blockDefault() const;

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod& __cordl_internal_get_blockDefault();

  constexpr bool const& __cordl_internal_get_buildinIncluded() const;

  constexpr bool& __cordl_internal_get_buildinIncluded();

  constexpr ::System::Xml::Schema::XmlSchemaForm const& __cordl_internal_get_elementFormDefault() const;

  constexpr ::System::Xml::Schema::XmlSchemaForm& __cordl_internal_get_elementFormDefault();

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod const& __cordl_internal_get_finalDefault() const;

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod& __cordl_internal_get_finalDefault();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_referenceNamespaces() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_referenceNamespaces();

  constexpr ::System::Xml::Schema::XmlSchema* const& __cordl_internal_get_schema() const;

  constexpr ::System::Xml::Schema::XmlSchema*& __cordl_internal_get_schema();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_schemaLocations() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_schemaLocations();

  constexpr ::StringW const& __cordl_internal_get_targetNamespace() const;

  constexpr ::StringW& __cordl_internal_get_targetNamespace();

  constexpr ::System::Xml::XmlResolver* const& __cordl_internal_get_xmlResolver() const;

  constexpr ::System::Xml::XmlResolver*& __cordl_internal_get_xmlResolver();

  constexpr void __cordl_internal_set_Xmlns(::StringW value);

  constexpr void __cordl_internal_set_attributeFormDefault(::System::Xml::Schema::XmlSchemaForm value);

  constexpr void __cordl_internal_set_blockDefault(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  constexpr void __cordl_internal_set_buildinIncluded(bool value);

  constexpr void __cordl_internal_set_elementFormDefault(::System::Xml::Schema::XmlSchemaForm value);

  constexpr void __cordl_internal_set_finalDefault(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  constexpr void __cordl_internal_set_referenceNamespaces(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_schema(::System::Xml::Schema::XmlSchema* value);

  constexpr void __cordl_internal_set_schemaLocations(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_targetNamespace(::StringW value);

  constexpr void __cordl_internal_set_xmlResolver(::System::Xml::XmlResolver* value);

  /// @brief Method .ctor, addr 0x42891e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames, ::System::Xml::Schema::ValidationEventHandler* eventHandler);

  /// @brief Method set_XmlResolver, addr 0x428c728, size 0x8, virtual false, abstract: false, final false
  inline void set_XmlResolver(::System::Xml::XmlResolver* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SchemaCollectionPreprocessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SchemaCollectionPreprocessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SchemaCollectionPreprocessor(SchemaCollectionPreprocessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SchemaCollectionPreprocessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SchemaCollectionPreprocessor(SchemaCollectionPreprocessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7617 };

  /// @brief Field schema, offset: 0x40, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchema* ___schema;

  /// @brief Field targetNamespace, offset: 0x48, size: 0x8, def value: None
  ::StringW ___targetNamespace;

  /// @brief Field buildinIncluded, offset: 0x50, size: 0x1, def value: None
  bool ___buildinIncluded;

  /// @brief Field elementFormDefault, offset: 0x54, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaForm ___elementFormDefault;

  /// @brief Field attributeFormDefault, offset: 0x58, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaForm ___attributeFormDefault;

  /// @brief Field blockDefault, offset: 0x5c, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaDerivationMethod ___blockDefault;

  /// @brief Field finalDefault, offset: 0x60, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaDerivationMethod ___finalDefault;

  /// @brief Field schemaLocations, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___schemaLocations;

  /// @brief Field referenceNamespaces, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___referenceNamespaces;

  /// @brief Field Xmlns, offset: 0x78, size: 0x8, def value: None
  ::StringW ___Xmlns;

  /// @brief Field xmlResolver, offset: 0x80, size: 0x8, def value: None
  ::System::Xml::XmlResolver* ___xmlResolver;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::SchemaCollectionPreprocessor, ___schema) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaCollectionPreprocessor, ___targetNamespace) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaCollectionPreprocessor, ___buildinIncluded) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaCollectionPreprocessor, ___elementFormDefault) == 0x54, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaCollectionPreprocessor, ___attributeFormDefault) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaCollectionPreprocessor, ___blockDefault) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaCollectionPreprocessor, ___finalDefault) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaCollectionPreprocessor, ___schemaLocations) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaCollectionPreprocessor, ___referenceNamespaces) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaCollectionPreprocessor, ___Xmlns) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaCollectionPreprocessor, ___xmlResolver) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::SchemaCollectionPreprocessor, 0x88>, "Size mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaCollectionPreprocessor_Compositor, "System.Xml.Schema", "SchemaCollectionPreprocessor/Compositor");
NEED_NO_BOX(::System::Xml::Schema::SchemaCollectionPreprocessor);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaCollectionPreprocessor*, "System.Xml.Schema", "SchemaCollectionPreprocessor");
