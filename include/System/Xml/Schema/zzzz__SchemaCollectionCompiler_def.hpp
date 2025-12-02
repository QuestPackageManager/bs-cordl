#pragma once
// IWYU pragma private; include "System/Xml/Schema/SchemaCollectionCompiler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__BaseProcessor_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SchemaCollectionCompiler)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Stack;
}
namespace System::Xml::Schema {
class ContentValidator;
}
namespace System::Xml::Schema {
class ParticleContentValidator;
}
namespace System::Xml::Schema {
class SchemaInfo;
}
namespace System::Xml::Schema {
class ValidationEventHandler;
}
namespace System::Xml::Schema {
class XmlSchemaAll;
}
namespace System::Xml::Schema {
class XmlSchemaAnyAttribute;
}
namespace System::Xml::Schema {
class XmlSchemaAny;
}
namespace System::Xml::Schema {
class XmlSchemaAttributeGroup;
}
namespace System::Xml::Schema {
class XmlSchemaAttribute;
}
namespace System::Xml::Schema {
class XmlSchemaChoice;
}
namespace System::Xml::Schema {
class XmlSchemaComplexContentExtension;
}
namespace System::Xml::Schema {
class XmlSchemaComplexContentRestriction;
}
namespace System::Xml::Schema {
class XmlSchemaComplexContent;
}
namespace System::Xml::Schema {
class XmlSchemaComplexType;
}
namespace System::Xml::Schema {
struct XmlSchemaContentType;
}
namespace System::Xml::Schema {
struct XmlSchemaDerivationMethod;
}
namespace System::Xml::Schema {
class XmlSchemaElement;
}
namespace System::Xml::Schema {
class XmlSchemaGroupBase;
}
namespace System::Xml::Schema {
class XmlSchemaGroupRef;
}
namespace System::Xml::Schema {
class XmlSchemaGroup;
}
namespace System::Xml::Schema {
class XmlSchemaIdentityConstraint;
}
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
namespace System::Xml::Schema {
class XmlSchemaObjectTable;
}
namespace System::Xml::Schema {
class XmlSchemaParticle;
}
namespace System::Xml::Schema {
class XmlSchemaSequence;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleContentExtension;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleContentRestriction;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System::Xml::Schema {
class XmlSchemaSubstitutionGroupV1Compat;
}
namespace System::Xml::Schema {
class XmlSchemaSubstitutionGroup;
}
namespace System::Xml::Schema {
class XmlSchemaType;
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
namespace System {
struct Decimal;
}
// Forward declare root types
namespace System::Xml::Schema {
class SchemaCollectionCompiler;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::SchemaCollectionCompiler);
// Dependencies System.Xml.Schema.BaseProcessor
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.SchemaCollectionCompiler
class CORDL_TYPE SchemaCollectionCompiler : public ::System::Xml::Schema::BaseProcessor {
public:
  // Declarations
  /// @brief Field compileContentModel, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_compileContentModel, put = __cordl_internal_set_compileContentModel)) bool compileContentModel;

  /// @brief Field complexTypeStack, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_complexTypeStack, put = __cordl_internal_set_complexTypeStack)) ::System::Collections::Stack* complexTypeStack;

  /// @brief Field examplars, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_examplars, put = __cordl_internal_set_examplars)) ::System::Xml::Schema::XmlSchemaObjectTable* examplars;

  /// @brief Field schema, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_schema, put = __cordl_internal_set_schema)) ::System::Xml::Schema::XmlSchema* schema;

  /// @brief Method BuildParticleContentModel, addr 0x5fde774, size 0x4f0, virtual false, abstract: false, final false
  inline void BuildParticleContentModel(::System::Xml::Schema::ParticleContentValidator* contentValidator, ::System::Xml::Schema::XmlSchemaParticle* particle);

  /// @brief Method CalculateEffectiveTotalRange, addr 0x5fdda70, size 0x6f0, virtual false, abstract: false, final false
  inline void CalculateEffectiveTotalRange(::System::Xml::Schema::XmlSchemaParticle* particle, ::ByRef<::System::Decimal> minOccurs, ::ByRef<::System::Decimal> maxOccurs);

  /// @brief Method CalculateSequenceRange, addr 0x5fde344, size 0x2e0, virtual false, abstract: false, final false
  inline void CalculateSequenceRange(::System::Xml::Schema::XmlSchemaSequence* sequence, ::ByRef<::System::Decimal> minOccurs, ::ByRef<::System::Decimal> maxOccurs);

  /// @brief Method CannonicalizeAll, addr 0x5fdbacc, size 0x504, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaParticle* CannonicalizeAll(::System::Xml::Schema::XmlSchemaAll* all, bool root, bool substitution);

  /// @brief Method CannonicalizeChoice, addr 0x5fdbfd0, size 0x56c, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaParticle* CannonicalizeChoice(::System::Xml::Schema::XmlSchemaChoice* choice, bool root, bool substitution);

  /// @brief Method CannonicalizeElement, addr 0x5fdb3a4, size 0x15c, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaParticle* CannonicalizeElement(::System::Xml::Schema::XmlSchemaElement* element, bool substitution);

  /// @brief Method CannonicalizeGroupRef, addr 0x5fdb500, size 0x5cc, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaParticle* CannonicalizeGroupRef(::System::Xml::Schema::XmlSchemaGroupRef* groupRef, bool root, bool substitution);

  /// @brief Method CannonicalizeParticle, addr 0x5fd7770, size 0x280, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaParticle* CannonicalizeParticle(::System::Xml::Schema::XmlSchemaParticle* particle, bool root, bool substitution);

  /// @brief Method CannonicalizeSequence, addr 0x5fdc53c, size 0x504, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaParticle* CannonicalizeSequence(::System::Xml::Schema::XmlSchemaSequence* sequence, bool root, bool substitution);

  /// @brief Method CheckParticleDerivation, addr 0x5fd720c, size 0x148, virtual false, abstract: false, final false
  inline void CheckParticleDerivation(::System::Xml::Schema::XmlSchemaComplexType* complexType);

  /// @brief Method CheckSubstitutionGroup, addr 0x5fd7354, size 0x1d0, virtual false, abstract: false, final false
  inline void CheckSubstitutionGroup(::System::Xml::Schema::XmlSchemaSubstitutionGroup* substitutionGroup);

  /// @brief Method CheckUnionType, addr 0x5fd7efc, size 0x12c, virtual false, abstract: false, final false
  inline void CheckUnionType(::System::Xml::Schema::XmlSchemaSimpleType* unionMember, ::System::Collections::ArrayList* memberTypeDefinitions, ::System::Xml::Schema::XmlSchemaSimpleType* parentType);

  /// @brief Method Cleanup, addr 0x5fce8b8, size 0xe0c, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method Cleanup, addr 0x5fd2934, size 0x698, virtual false, abstract: false, final false
  static inline void Cleanup(::System::Xml::Schema::XmlSchema* schema);

  /// @brief Method CleanupAttribute, addr 0x5fd2910, size 0x24, virtual false, abstract: false, final false
  static inline void CleanupAttribute(::System::Xml::Schema::XmlSchemaAttribute* attribute);

  /// @brief Method CleanupAttributeGroup, addr 0x5fd23ec, size 0x3c, virtual false, abstract: false, final false
  static inline void CleanupAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup);

  /// @brief Method CleanupAttributes, addr 0x5fd7524, size 0xd8, virtual false, abstract: false, final false
  static inline void CleanupAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* attributes);

  /// @brief Method CleanupComplexType, addr 0x5fd2428, size 0x344, virtual false, abstract: false, final false
  static inline void CleanupComplexType(::System::Xml::Schema::XmlSchemaComplexType* complexType);

  /// @brief Method CleanupElement, addr 0x5fd2784, size 0x18c, virtual false, abstract: false, final false
  static inline void CleanupElement(::System::Xml::Schema::XmlSchemaElement* element);

  /// @brief Method CleanupGroup, addr 0x5fd23c8, size 0x24, virtual false, abstract: false, final false
  static inline void CleanupGroup(::System::Xml::Schema::XmlSchemaGroup* group);

  /// @brief Method CleanupParticle, addr 0x5fd75fc, size 0x174, virtual false, abstract: false, final false
  static inline void CleanupParticle(::System::Xml::Schema::XmlSchemaParticle* particle);

  /// @brief Method CleanupSimpleType, addr 0x5fd276c, size 0x18, virtual false, abstract: false, final false
  static inline void CleanupSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* simpleType);

  /// @brief Method Compile, addr 0x5fcf6c4, size 0x1e04, virtual false, abstract: false, final false
  inline void Compile();

  /// @brief Method CompileAnyAttributeIntersection, addr 0x5fde644, size 0x98, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaAnyAttribute* CompileAnyAttributeIntersection(::System::Xml::Schema::XmlSchemaAnyAttribute* a, ::System::Xml::Schema::XmlSchemaAnyAttribute* b);

  /// @brief Method CompileAnyAttributeUnion, addr 0x5fde6dc, size 0x98, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaAnyAttribute* CompileAnyAttributeUnion(::System::Xml::Schema::XmlSchemaAnyAttribute* a, ::System::Xml::Schema::XmlSchemaAnyAttribute* b);

  /// @brief Method CompileAttribute, addr 0x5fd5fa0, size 0xa80, virtual false, abstract: false, final false
  inline void CompileAttribute(::System::Xml::Schema::XmlSchemaAttribute* xa);

  /// @brief Method CompileAttributeGroup, addr 0x5fd3550, size 0x774, virtual false, abstract: false, final false
  inline void CompileAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup);

  /// @brief Method CompileBaseMemberTypes, addr 0x5fd7b54, size 0x3a8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> CompileBaseMemberTypes(::System::Xml::Schema::XmlSchemaSimpleType* simpleType);

  /// @brief Method CompileCompexTypeElements, addr 0x5fd7130, size 0xdc, virtual false, abstract: false, final false
  inline void CompileCompexTypeElements(::System::Xml::Schema::XmlSchemaComplexType* complexType);

  /// @brief Method CompileComplexContent, addr 0x5fda2a4, size 0x928, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::ContentValidator* CompileComplexContent(::System::Xml::Schema::XmlSchemaComplexType* complexType);

  /// @brief Method CompileComplexContentExtension, addr 0x5fd864c, size 0x3b4, virtual false, abstract: false, final false
  inline void CompileComplexContentExtension(::System::Xml::Schema::XmlSchemaComplexType* complexType, ::System::Xml::Schema::XmlSchemaComplexContent* complexContent,
                                             ::System::Xml::Schema::XmlSchemaComplexContentExtension* complexExtension);

  /// @brief Method CompileComplexContentRestriction, addr 0x5fd8a00, size 0x2c0, virtual false, abstract: false, final false
  inline void CompileComplexContentRestriction(::System::Xml::Schema::XmlSchemaComplexType* complexType, ::System::Xml::Schema::XmlSchemaComplexContent* complexContent,
                                               ::System::Xml::Schema::XmlSchemaComplexContentRestriction* complexRestriction);

  /// @brief Method CompileComplexType, addr 0x5fd3cc4, size 0xd14, virtual false, abstract: false, final false
  inline void CompileComplexType(::System::Xml::Schema::XmlSchemaComplexType* complexType);

  /// @brief Method CompileContentTypeParticle, addr 0x5fda0b0, size 0x184, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaParticle* CompileContentTypeParticle(::System::Xml::Schema::XmlSchemaParticle* particle, bool substitution);

  /// @brief Method CompileElement, addr 0x5fd52a8, size 0xcf8, virtual false, abstract: false, final false
  inline void CompileElement(::System::Xml::Schema::XmlSchemaElement* xe);

  /// @brief Method CompileGroup, addr 0x5fd3474, size 0xdc, virtual false, abstract: false, final false
  inline void CompileGroup(::System::Xml::Schema::XmlSchemaGroup* group);

  /// @brief Method CompileIdentityConstraint, addr 0x5fd6a20, size 0x710, virtual false, abstract: false, final false
  inline void CompileIdentityConstraint(::System::Xml::Schema::XmlSchemaIdentityConstraint* xi);

  /// @brief Method CompileLocalAttributes, addr 0x5fd8cc0, size 0x13f0, virtual false, abstract: false, final false
  inline void CompileLocalAttributes(::System::Xml::Schema::XmlSchemaComplexType* baseType, ::System::Xml::Schema::XmlSchemaComplexType* derivedType,
                                     ::System::Xml::Schema::XmlSchemaObjectCollection* attributes, ::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute,
                                     ::System::Xml::Schema::XmlSchemaDerivationMethod derivedBy);

  /// @brief Method CompileParticleElements, addr 0x5fdec64, size 0x26c, virtual false, abstract: false, final false
  inline void CompileParticleElements(::System::Xml::Schema::XmlSchemaComplexType* complexType, ::System::Xml::Schema::XmlSchemaParticle* particle);

  /// @brief Method CompileSimpleContentExtension, addr 0x5fd8028, size 0x238, virtual false, abstract: false, final false
  inline void CompileSimpleContentExtension(::System::Xml::Schema::XmlSchemaComplexType* complexType, ::System::Xml::Schema::XmlSchemaSimpleContentExtension* simpleExtension);

  /// @brief Method CompileSimpleContentRestriction, addr 0x5fd8260, size 0x3ec, virtual false, abstract: false, final false
  inline void CompileSimpleContentRestriction(::System::Xml::Schema::XmlSchemaComplexType* complexType, ::System::Xml::Schema::XmlSchemaSimpleContentRestriction* simpleRestriction);

  /// @brief Method CompileSimpleType, addr 0x5fd49d8, size 0x8d0, virtual false, abstract: false, final false
  inline void CompileSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* simpleType);

  /// @brief Method CompileSubstitutionGroup, addr 0x5fd2fcc, size 0x4a8, virtual false, abstract: false, final false
  inline void CompileSubstitutionGroup(::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat* substitutionGroup);

  /// @brief Method Execute, addr 0x5fce400, size 0x60, virtual false, abstract: false, final false
  inline bool Execute(::System::Xml::Schema::XmlSchema* schema, ::System::Xml::Schema::SchemaInfo* schemaInfo, bool compileContentModel);

  /// @brief Method GetAnySchemaType, addr 0x5fdabcc, size 0x180, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaType* GetAnySchemaType(::System::Xml::XmlQualifiedName* name);

  /// @brief Method GetComplexType, addr 0x5fdad4c, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaComplexType* GetComplexType(::System::Xml::XmlQualifiedName* name);

  /// @brief Method GetMappingParticle, addr 0x5fde24c, size 0xf8, virtual false, abstract: false, final false
  inline int32_t GetMappingParticle(::System::Xml::Schema::XmlSchemaParticle* particle, ::System::Xml::Schema::XmlSchemaObjectCollection* collection);

  /// @brief Method GetSchemaContentType, addr 0x5fda234, size 0x70, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaContentType GetSchemaContentType(::System::Xml::Schema::XmlSchemaComplexType* complexType, ::System::Xml::Schema::XmlSchemaComplexContent* complexContent,
                                                                          ::System::Xml::Schema::XmlSchemaParticle* particle);

  /// @brief Method GetSimpleType, addr 0x5fd79f0, size 0x164, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaSimpleType* GetSimpleType(::System::Xml::XmlQualifiedName* name);

  /// @brief Method IsAnyFromAny, addr 0x5fdcc68, size 0x4c, virtual false, abstract: false, final false
  inline bool IsAnyFromAny(::System::Xml::Schema::XmlSchemaAny* derivedAny, ::System::Xml::Schema::XmlSchemaAny* baseAny);

  /// @brief Method IsElementFromAny, addr 0x5fdcc14, size 0x54, virtual false, abstract: false, final false
  inline bool IsElementFromAny(::System::Xml::Schema::XmlSchemaElement* derivedElement, ::System::Xml::Schema::XmlSchemaAny* baseAny);

  /// @brief Method IsElementFromElement, addr 0x5fdcb08, size 0x10c, virtual false, abstract: false, final false
  inline bool IsElementFromElement(::System::Xml::Schema::XmlSchemaElement* derivedElement, ::System::Xml::Schema::XmlSchemaElement* baseElement);

  /// @brief Method IsElementFromGroupBase, addr 0x5fdceec, size 0x2e0, virtual false, abstract: false, final false
  inline bool IsElementFromGroupBase(::System::Xml::Schema::XmlSchemaElement* derivedElement, ::System::Xml::Schema::XmlSchemaGroupBase* baseGroupBase, bool skipEmptableOnly);

  /// @brief Method IsGroupBaseFromAny, addr 0x5fdccb4, size 0x238, virtual false, abstract: false, final false
  inline bool IsGroupBaseFromAny(::System::Xml::Schema::XmlSchemaGroupBase* derivedGroupBase, ::System::Xml::Schema::XmlSchemaAny* baseAny);

  /// @brief Method IsGroupBaseFromGroupBase, addr 0x5fdd1cc, size 0x2c4, virtual false, abstract: false, final false
  inline bool IsGroupBaseFromGroupBase(::System::Xml::Schema::XmlSchemaGroupBase* derivedGroupBase, ::System::Xml::Schema::XmlSchemaGroupBase* baseGroupBase, bool skipEmptableOnly);

  /// @brief Method IsParticleEmptiable, addr 0x5fdca40, size 0xc8, virtual false, abstract: false, final false
  inline bool IsParticleEmptiable(::System::Xml::Schema::XmlSchemaParticle* particle);

  /// @brief Method IsSequenceFromAll, addr 0x5fdd490, size 0x350, virtual false, abstract: false, final false
  inline bool IsSequenceFromAll(::System::Xml::Schema::XmlSchemaSequence* derivedSequence, ::System::Xml::Schema::XmlSchemaAll* baseAll);

  /// @brief Method IsSequenceFromChoice, addr 0x5fdd7e0, size 0x24c, virtual false, abstract: false, final false
  inline bool IsSequenceFromChoice(::System::Xml::Schema::XmlSchemaSequence* derivedSequence, ::System::Xml::Schema::XmlSchemaChoice* baseChoice);

  /// @brief Method IsValidOccurrenceRangeRestriction, addr 0x5fdda2c, size 0x44, virtual false, abstract: false, final false
  inline bool IsValidOccurrenceRangeRestriction(::System::Xml::Schema::XmlSchemaParticle* derivedParticle, ::System::Xml::Schema::XmlSchemaParticle* baseParticle);

  /// @brief Method IsValidOccurrenceRangeRestriction, addr 0x5fde160, size 0xec, virtual false, abstract: false, final false
  inline bool IsValidOccurrenceRangeRestriction(::System::Decimal minOccurs, ::System::Decimal maxOccurs, ::System::Decimal baseMinOccurs, ::System::Decimal baseMaxOccurs);

  /// @brief Method IsValidRestriction, addr 0x5fdae0c, size 0x598, virtual false, abstract: false, final false
  inline bool IsValidRestriction(::System::Xml::Schema::XmlSchemaParticle* derivedParticle, ::System::Xml::Schema::XmlSchemaParticle* baseParticle);

  static inline ::System::Xml::Schema::SchemaCollectionCompiler* New_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::ValidationEventHandler* eventHandler);

  /// @brief Method Output, addr 0x5fd14c8, size 0xf00, virtual false, abstract: false, final false
  inline void Output(::System::Xml::Schema::SchemaInfo* schemaInfo);

  /// @brief Method Prepare, addr 0x5fce460, size 0x458, virtual false, abstract: false, final false
  inline void Prepare();

  /// @brief Method PushComplexType, addr 0x5fde624, size 0x20, virtual false, abstract: false, final false
  inline void PushComplexType(::System::Xml::Schema::XmlSchemaComplexType* complexType);

  constexpr bool const& __cordl_internal_get_compileContentModel() const;

  constexpr bool& __cordl_internal_get_compileContentModel();

  constexpr ::System::Collections::Stack* const& __cordl_internal_get_complexTypeStack() const;

  constexpr ::System::Collections::Stack*& __cordl_internal_get_complexTypeStack();

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& __cordl_internal_get_examplars() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& __cordl_internal_get_examplars();

  constexpr ::System::Xml::Schema::XmlSchema* const& __cordl_internal_get_schema() const;

  constexpr ::System::Xml::Schema::XmlSchema*& __cordl_internal_get_schema();

  constexpr void __cordl_internal_set_compileContentModel(bool value);

  constexpr void __cordl_internal_set_complexTypeStack(::System::Collections::Stack* value);

  constexpr void __cordl_internal_set_examplars(::System::Xml::Schema::XmlSchemaObjectTable* value);

  constexpr void __cordl_internal_set_schema(::System::Xml::Schema::XmlSchema* value);

  /// @brief Method .ctor, addr 0x5fce350, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::ValidationEventHandler* eventHandler);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SchemaCollectionCompiler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SchemaCollectionCompiler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SchemaCollectionCompiler(SchemaCollectionCompiler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SchemaCollectionCompiler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SchemaCollectionCompiler(SchemaCollectionCompiler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9679 };

  /// @brief Field compileContentModel, offset: 0x40, size: 0x1, def value: None
  bool ___compileContentModel;

  /// @brief Field examplars, offset: 0x48, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectTable* ___examplars;

  /// @brief Field complexTypeStack, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Stack* ___complexTypeStack;

  /// @brief Field schema, offset: 0x58, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchema* ___schema;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::SchemaCollectionCompiler, ___compileContentModel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaCollectionCompiler, ___examplars) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaCollectionCompiler, ___complexTypeStack) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaCollectionCompiler, ___schema) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::SchemaCollectionCompiler, 0x60>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::SchemaCollectionCompiler);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaCollectionCompiler*, "System.Xml.Schema", "SchemaCollectionCompiler");
