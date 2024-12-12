#pragma once
// IWYU pragma private; include "System/Xml/Schema/Compiler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__BaseProcessor_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Compiler)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
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
class SchemaAttDef;
}
namespace System::Xml::Schema {
class SchemaDeclBase;
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
class XmlSchemaAnnotated;
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
class XmlSchemaCompilationSettings;
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
class XmlSchemaSet;
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
class Compiler;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Compiler);
// Dependencies System.Xml.Schema.BaseProcessor
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.Compiler
class CORDL_TYPE Compiler : public ::System::Xml::Schema::BaseProcessor {
public:
  // Declarations
  /// @brief Field attributeGroups, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeGroups, put = __cordl_internal_set_attributeGroups)) ::System::Xml::Schema::XmlSchemaObjectTable* attributeGroups;

  /// @brief Field attributes, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_attributes, put = __cordl_internal_set_attributes)) ::System::Xml::Schema::XmlSchemaObjectTable* attributes;

  /// @brief Field complexTypeStack, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_complexTypeStack, put = __cordl_internal_set_complexTypeStack)) ::System::Collections::Stack* complexTypeStack;

  /// @brief Field elements, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_elements, put = __cordl_internal_set_elements)) ::System::Xml::Schema::XmlSchemaObjectTable* elements;

  /// @brief Field examplars, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_examplars, put = __cordl_internal_set_examplars)) ::System::Xml::Schema::XmlSchemaObjectTable* examplars;

  /// @brief Field groups, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_groups, put = __cordl_internal_set_groups)) ::System::Xml::Schema::XmlSchemaObjectTable* groups;

  /// @brief Field identityConstraints, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_identityConstraints, put = __cordl_internal_set_identityConstraints)) ::System::Xml::Schema::XmlSchemaObjectTable* identityConstraints;

  /// @brief Field importedSchemas, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_importedSchemas, put = __cordl_internal_set_importedSchemas)) ::System::Collections::Hashtable* importedSchemas;

  /// @brief Field notations, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_notations, put = __cordl_internal_set_notations)) ::System::Xml::Schema::XmlSchemaObjectTable* notations;

  /// @brief Field restrictionErrorMsg, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_restrictionErrorMsg, put = __cordl_internal_set_restrictionErrorMsg)) ::StringW restrictionErrorMsg;

  /// @brief Field schemaForSchema, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_schemaForSchema, put = __cordl_internal_set_schemaForSchema)) ::System::Xml::Schema::XmlSchema* schemaForSchema;

  /// @brief Field schemaTypes, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_schemaTypes, put = __cordl_internal_set_schemaTypes)) ::System::Xml::Schema::XmlSchemaObjectTable* schemaTypes;

  /// @brief Field schemasToCompile, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_schemasToCompile, put = __cordl_internal_set_schemasToCompile)) ::System::Collections::Hashtable* schemasToCompile;

  /// @brief Method BuildParticleContentModel, addr 0x42aa85c, size 0x500, virtual false, abstract: false, final false
  inline bool BuildParticleContentModel(::System::Xml::Schema::ParticleContentValidator* contentValidator, ::System::Xml::Schema::XmlSchemaParticle* particle);

  /// @brief Method CalculateEffectiveTotalRange, addr 0x42a9af0, size 0x7c4, virtual false, abstract: false, final false
  inline void CalculateEffectiveTotalRange(::System::Xml::Schema::XmlSchemaParticle* particle, ::ByRef<::System::Decimal> minOccurs, ::ByRef<::System::Decimal> maxOccurs);

  /// @brief Method CannonicalizeAll, addr 0x42a6f10, size 0x284, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaParticle* CannonicalizeAll(::System::Xml::Schema::XmlSchemaAll* all, bool root);

  /// @brief Method CannonicalizeChoice, addr 0x42a7194, size 0x4f4, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaParticle* CannonicalizeChoice(::System::Xml::Schema::XmlSchemaChoice* choice, bool root);

  /// @brief Method CannonicalizeElement, addr 0x42a7b3c, size 0x204, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaParticle* CannonicalizeElement(::System::Xml::Schema::XmlSchemaElement* element);

  /// @brief Method CannonicalizeGroupRef, addr 0x42a69fc, size 0x514, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaParticle* CannonicalizeGroupRef(::System::Xml::Schema::XmlSchemaGroupRef* groupRef, bool root);

  /// @brief Method CannonicalizeParticle, addr 0x42a1990, size 0x21c, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaParticle* CannonicalizeParticle(::System::Xml::Schema::XmlSchemaParticle* particle, bool root);

  /// @brief Method CannonicalizePointlessRoot, addr 0x42a5d60, size 0x264, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaParticle* CannonicalizePointlessRoot(::System::Xml::Schema::XmlSchemaParticle* particle);

  /// @brief Method CannonicalizeSequence, addr 0x42a7688, size 0x4b4, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaParticle* CannonicalizeSequence(::System::Xml::Schema::XmlSchemaSequence* sequence, bool root);

  /// @brief Method CheckAtrributeGroupRestriction, addr 0x42a1e0c, size 0x9a8, virtual false, abstract: false, final false
  inline void CheckAtrributeGroupRestriction(::System::Xml::Schema::XmlSchemaAttributeGroup* baseAttributeGroup, ::System::Xml::Schema::XmlSchemaAttributeGroup* derivedAttributeGroup);

  /// @brief Method CheckParticleDerivation, addr 0x42a0afc, size 0x5f0, virtual false, abstract: false, final false
  inline void CheckParticleDerivation(::System::Xml::Schema::XmlSchemaComplexType* complexType);

  /// @brief Method CheckParticleDerivation, addr 0x42a1d34, size 0xd8, virtual false, abstract: false, final false
  inline void CheckParticleDerivation(::System::Xml::Schema::XmlSchemaParticle* derivedParticle, ::System::Xml::Schema::XmlSchemaParticle* baseParticle);

  /// @brief Method CheckUnionType, addr 0x42a2c2c, size 0x118, virtual false, abstract: false, final false
  inline void CheckUnionType(::System::Xml::Schema::XmlSchemaSimpleType* unionMember, ::System::Collections::ArrayList* memberTypeDefinitions, ::System::Xml::Schema::XmlSchemaSimpleType* parentType);

  /// @brief Method CleanupAttribute, addr 0x429c120, size 0x28, virtual false, abstract: false, final false
  inline void CleanupAttribute(::System::Xml::Schema::XmlSchemaAttribute* attribute);

  /// @brief Method CleanupAttributeGroup, addr 0x429c184, size 0x54, virtual false, abstract: false, final false
  inline void CleanupAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup);

  /// @brief Method CleanupAttributes, addr 0x42a1214, size 0xd8, virtual false, abstract: false, final false
  inline void CleanupAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* attributes);

  /// @brief Method CleanupComplexType, addr 0x429c1d8, size 0x420, virtual false, abstract: false, final false
  inline void CleanupComplexType(::System::Xml::Schema::XmlSchemaComplexType* complexType);

  /// @brief Method CleanupElement, addr 0x429bf9c, size 0x184, virtual false, abstract: false, final false
  inline void CleanupElement(::System::Xml::Schema::XmlSchemaElement* element);

  /// @brief Method CleanupGroup, addr 0x429c148, size 0x3c, virtual false, abstract: false, final false
  inline void CleanupGroup(::System::Xml::Schema::XmlSchemaGroup* group);

  /// @brief Method CleanupParticle, addr 0x42a12ec, size 0x19c, virtual false, abstract: false, final false
  inline void CleanupParticle(::System::Xml::Schema::XmlSchemaParticle* particle);

  /// @brief Method CleanupSimpleType, addr 0x429c5f8, size 0xb4, virtual false, abstract: false, final false
  inline void CleanupSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* simpleType);

  /// @brief Method Compile, addr 0x42977e4, size 0x200c, virtual false, abstract: false, final false
  inline bool Compile();

  /// @brief Method CompileAnyAttributeIntersection, addr 0x42aa4b4, size 0x94, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaAnyAttribute* CompileAnyAttributeIntersection(::System::Xml::Schema::XmlSchemaAnyAttribute* a, ::System::Xml::Schema::XmlSchemaAnyAttribute* b);

  /// @brief Method CompileAnyAttributeUnion, addr 0x42aa548, size 0x94, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaAnyAttribute* CompileAnyAttributeUnion(::System::Xml::Schema::XmlSchemaAnyAttribute* a, ::System::Xml::Schema::XmlSchemaAnyAttribute* b);

  /// @brief Method CompileAttribute, addr 0x429f334, size 0x7d8, virtual false, abstract: false, final false
  inline void CompileAttribute(::System::Xml::Schema::XmlSchemaAttribute* xa);

  /// @brief Method CompileAttributeGroup, addr 0x429c9cc, size 0x880, virtual false, abstract: false, final false
  inline void CompileAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup);

  /// @brief Method CompileBaseMemberTypes, addr 0x42a288c, size 0x3a0, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> CompileBaseMemberTypes(::System::Xml::Schema::XmlSchemaSimpleType* simpleType);

  /// @brief Method CompileComplexContent, addr 0x42a5114, size 0xa4c, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::ContentValidator* CompileComplexContent(::System::Xml::Schema::XmlSchemaComplexType* complexType);

  /// @brief Method CompileComplexContentExtension, addr 0x42a33a8, size 0x374, virtual false, abstract: false, final false
  inline void CompileComplexContentExtension(::System::Xml::Schema::XmlSchemaComplexType* complexType, ::System::Xml::Schema::XmlSchemaComplexContent* complexContent,
                                             ::System::Xml::Schema::XmlSchemaComplexContentExtension* complexExtension);

  /// @brief Method CompileComplexContentRestriction, addr 0x42a371c, size 0x2b0, virtual false, abstract: false, final false
  inline void CompileComplexContentRestriction(::System::Xml::Schema::XmlSchemaComplexType* complexType, ::System::Xml::Schema::XmlSchemaComplexContent* complexContent,
                                               ::System::Xml::Schema::XmlSchemaComplexContentRestriction* complexRestriction);

  /// @brief Method CompileComplexType, addr 0x429d24c, size 0xaac, virtual false, abstract: false, final false
  inline void CompileComplexType(::System::Xml::Schema::XmlSchemaComplexType* complexType);

  /// @brief Method CompileComplexTypeElements, addr 0x42a0174, size 0x11c, virtual false, abstract: false, final false
  inline void CompileComplexTypeElements(::System::Xml::Schema::XmlSchemaComplexType* complexType);

  /// @brief Method CompileContentTypeParticle, addr 0x42a4f48, size 0x15c, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaParticle* CompileContentTypeParticle(::System::Xml::Schema::XmlSchemaParticle* particle);

  /// @brief Method CompileElement, addr 0x429e5ec, size 0xd48, virtual false, abstract: false, final false
  inline void CompileElement(::System::Xml::Schema::XmlSchemaElement* xe);

  /// @brief Method CompileGroup, addr 0x429c904, size 0xc8, virtual false, abstract: false, final false
  inline void CompileGroup(::System::Xml::Schema::XmlSchemaGroup* group);

  /// @brief Method CompileIdentityConstraint, addr 0x429fb0c, size 0x668, virtual false, abstract: false, final false
  inline void CompileIdentityConstraint(::System::Xml::Schema::XmlSchemaIdentityConstraint* xi);

  /// @brief Method CompileLocalAttributes, addr 0x42a39cc, size 0x157c, virtual false, abstract: false, final false
  inline void CompileLocalAttributes(::System::Xml::Schema::XmlSchemaComplexType* baseType, ::System::Xml::Schema::XmlSchemaComplexType* derivedType,
                                     ::System::Xml::Schema::XmlSchemaObjectCollection* attributes, ::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute,
                                     ::System::Xml::Schema::XmlSchemaDerivationMethod derivedBy);

  /// @brief Method CompileParticleElements, addr 0x42aad5c, size 0x254, virtual false, abstract: false, final false
  inline void CompileParticleElements(::System::Xml::Schema::XmlSchemaComplexType* complexType, ::System::Xml::Schema::XmlSchemaParticle* particle);

  /// @brief Method CompileParticleElements, addr 0x42a1bac, size 0x188, virtual false, abstract: false, final false
  inline void CompileParticleElements(::System::Xml::Schema::XmlSchemaParticle* particle);

  /// @brief Method CompileSimpleContentExtension, addr 0x42a2d44, size 0x240, virtual false, abstract: false, final false
  inline void CompileSimpleContentExtension(::System::Xml::Schema::XmlSchemaComplexType* complexType, ::System::Xml::Schema::XmlSchemaSimpleContentExtension* simpleExtension);

  /// @brief Method CompileSimpleContentRestriction, addr 0x42a2f84, size 0x424, virtual false, abstract: false, final false
  inline void CompileSimpleContentRestriction(::System::Xml::Schema::XmlSchemaComplexType* complexType, ::System::Xml::Schema::XmlSchemaSimpleContentRestriction* simpleRestriction);

  /// @brief Method CompileSimpleType, addr 0x429dcf8, size 0x8f4, virtual false, abstract: false, final false
  inline void CompileSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* simpleType);

  /// @brief Method CompileSubstitutionGroup, addr 0x42a1488, size 0x508, virtual false, abstract: false, final false
  inline void CompileSubstitutionGroup(::System::Xml::Schema::XmlSchemaSubstitutionGroup* substitutionGroup);

  /// @brief Method CopyPosition, addr 0x42a7d40, size 0x5c, virtual false, abstract: false, final false
  inline void CopyPosition(::System::Xml::Schema::XmlSchemaAnnotated* to, ::System::Xml::Schema::XmlSchemaAnnotated* from, bool copyParent);

  /// @brief Method Execute, addr 0x4297768, size 0x7c, virtual false, abstract: false, final false
  inline bool Execute(::System::Xml::Schema::XmlSchemaSet* schemaSet, ::System::Xml::Schema::SchemaInfo* schemaCompiledInfo);

  /// @brief Method GetAnySchemaType, addr 0x42a5b60, size 0x158, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaType* GetAnySchemaType(::System::Xml::XmlQualifiedName* name);

  /// @brief Method GetComplexType, addr 0x42a5cb8, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaComplexType* GetComplexType(::System::Xml::XmlQualifiedName* name);

  /// @brief Method GetMappingParticle, addr 0x42aa39c, size 0xf4, virtual false, abstract: false, final false
  inline int32_t GetMappingParticle(::System::Xml::Schema::XmlSchemaParticle* particle, ::System::Xml::Schema::XmlSchemaObjectCollection* collection);

  /// @brief Method GetSchemaContentType, addr 0x42a50a4, size 0x70, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaContentType GetSchemaContentType(::System::Xml::Schema::XmlSchemaComplexType* complexType, ::System::Xml::Schema::XmlSchemaComplexContent* complexContent,
                                                                          ::System::Xml::Schema::XmlSchemaParticle* particle);

  /// @brief Method GetSimpleType, addr 0x42a27b4, size 0xd8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaSimpleType* GetSimpleType(::System::Xml::XmlQualifiedName* name);

  /// @brief Method ImportAllCompiledSchemas, addr 0x429c7fc, size 0x108, virtual false, abstract: false, final false
  inline void ImportAllCompiledSchemas(::System::Xml::Schema::XmlSchemaSet* schemaSet);

  /// @brief Method IsAnyFromAny, addr 0x42a81dc, size 0xf8, virtual false, abstract: false, final false
  inline bool IsAnyFromAny(::System::Xml::Schema::XmlSchemaAny* derivedAny, ::System::Xml::Schema::XmlSchemaAny* baseAny);

  /// @brief Method IsChoiceFromChoiceSubstGroup, addr 0x42a9480, size 0x18c, virtual false, abstract: false, final false
  inline bool IsChoiceFromChoiceSubstGroup(::System::Xml::Schema::XmlSchemaChoice* derivedChoice, ::System::Xml::Schema::XmlSchemaChoice* baseChoice);

  /// @brief Method IsElementFromAny, addr 0x42a804c, size 0x190, virtual false, abstract: false, final false
  inline bool IsElementFromAny(::System::Xml::Schema::XmlSchemaElement* derivedElement, ::System::Xml::Schema::XmlSchemaAny* baseAny);

  /// @brief Method IsElementFromElement, addr 0x42a7e60, size 0x1ec, virtual false, abstract: false, final false
  inline bool IsElementFromElement(::System::Xml::Schema::XmlSchemaElement* derivedElement, ::System::Xml::Schema::XmlSchemaElement* baseElement);

  /// @brief Method IsElementFromGroupBase, addr 0x42a869c, size 0x808, virtual false, abstract: false, final false
  inline bool IsElementFromGroupBase(::System::Xml::Schema::XmlSchemaElement* derivedElement, ::System::Xml::Schema::XmlSchemaGroupBase* baseGroupBase);

  /// @brief Method IsFixedEqual, addr 0x42a9994, size 0x15c, virtual false, abstract: false, final false
  inline bool IsFixedEqual(::System::Xml::Schema::SchemaDeclBase* baseDecl, ::System::Xml::Schema::SchemaDeclBase* derivedDecl);

  /// @brief Method IsGroupBaseFromAny, addr 0x42a82d4, size 0x3c8, virtual false, abstract: false, final false
  inline bool IsGroupBaseFromAny(::System::Xml::Schema::XmlSchemaGroupBase* derivedGroupBase, ::System::Xml::Schema::XmlSchemaAny* baseAny);

  /// @brief Method IsGroupBaseFromGroupBase, addr 0x42a8ea4, size 0x2d0, virtual false, abstract: false, final false
  inline bool IsGroupBaseFromGroupBase(::System::Xml::Schema::XmlSchemaGroupBase* derivedGroupBase, ::System::Xml::Schema::XmlSchemaGroupBase* baseGroupBase, bool skipEmptableOnly);

  /// @brief Method IsParticleEmptiable, addr 0x42a7d9c, size 0xc4, virtual false, abstract: false, final false
  inline bool IsParticleEmptiable(::System::Xml::Schema::XmlSchemaParticle* particle);

  /// @brief Method IsProcessContentsRestricted, addr 0x42aa5dc, size 0xdc, virtual false, abstract: false, final false
  inline bool IsProcessContentsRestricted(::System::Xml::Schema::XmlSchemaComplexType* baseType, ::System::Xml::Schema::XmlSchemaAnyAttribute* derivedAttributeWildcard,
                                          ::System::Xml::Schema::XmlSchemaAnyAttribute* baseAttributeWildcard);

  /// @brief Method IsSequenceFromAll, addr 0x42a9174, size 0x30c, virtual false, abstract: false, final false
  inline bool IsSequenceFromAll(::System::Xml::Schema::XmlSchemaSequence* derivedSequence, ::System::Xml::Schema::XmlSchemaAll* baseAll);

  /// @brief Method IsSequenceFromChoice, addr 0x42a960c, size 0x344, virtual false, abstract: false, final false
  inline bool IsSequenceFromChoice(::System::Xml::Schema::XmlSchemaSequence* derivedSequence, ::System::Xml::Schema::XmlSchemaChoice* baseChoice);

  /// @brief Method IsValidOccurrenceRangeRestriction, addr 0x42a9950, size 0x44, virtual false, abstract: false, final false
  inline bool IsValidOccurrenceRangeRestriction(::System::Xml::Schema::XmlSchemaParticle* derivedParticle, ::System::Xml::Schema::XmlSchemaParticle* baseParticle);

  /// @brief Method IsValidOccurrenceRangeRestriction, addr 0x42aa2b4, size 0xe8, virtual false, abstract: false, final false
  inline bool IsValidOccurrenceRangeRestriction(::System::Decimal minOccurs, ::System::Decimal maxOccurs, ::System::Decimal baseMinOccurs, ::System::Decimal baseMaxOccurs);

  /// @brief Method IsValidRestriction, addr 0x42a5fc4, size 0xa38, virtual false, abstract: false, final false
  inline bool IsValidRestriction(::System::Xml::Schema::XmlSchemaParticle* derivedParticle, ::System::Xml::Schema::XmlSchemaParticle* baseParticle);

  static inline ::System::Xml::Schema::Compiler* New_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::ValidationEventHandler* eventHandler,
                                                          ::System::Xml::Schema::XmlSchema* schemaForSchema, ::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings);

  /// @brief Method Output, addr 0x42997f0, size 0x10b0, virtual false, abstract: false, final false
  inline void Output(::System::Xml::Schema::SchemaInfo* schemaInfo);

  /// @brief Method Prepare, addr 0x429a8a0, size 0x16fc, virtual false, abstract: false, final false
  inline void Prepare(::System::Xml::Schema::XmlSchema* schema, bool cleanup);

  /// @brief Method ProcessSubstitutionGroups, addr 0x42a0290, size 0x86c, virtual false, abstract: false, final false
  inline void ProcessSubstitutionGroups();

  /// @brief Method PushComplexType, addr 0x42aa490, size 0x24, virtual false, abstract: false, final false
  inline void PushComplexType(::System::Xml::Schema::XmlSchemaComplexType* complexType);

  /// @brief Method RecursivelyCheckRedefinedAttributeGroups, addr 0x42a119c, size 0x78, virtual false, abstract: false, final false
  inline void RecursivelyCheckRedefinedAttributeGroups(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup, ::System::Xml::Schema::XmlSchemaAttributeGroup* baseAttributeGroup);

  /// @brief Method RecursivelyCheckRedefinedGroups, addr 0x42a10ec, size 0xb0, virtual false, abstract: false, final false
  inline void RecursivelyCheckRedefinedGroups(::System::Xml::Schema::XmlSchemaGroup* redefinedGroup, ::System::Xml::Schema::XmlSchemaGroup* baseGroup);

  /// @brief Method SetDefaultFixed, addr 0x42aa6b8, size 0x1a4, virtual false, abstract: false, final false
  inline void SetDefaultFixed(::System::Xml::Schema::XmlSchemaAttribute* xa, ::System::Xml::Schema::SchemaAttDef* decl);

  /// @brief Method UpdateSForSSimpleTypes, addr 0x429c6ac, size 0x150, virtual false, abstract: false, final false
  inline void UpdateSForSSimpleTypes();

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& __cordl_internal_get_attributeGroups() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& __cordl_internal_get_attributeGroups();

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& __cordl_internal_get_attributes() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& __cordl_internal_get_attributes();

  constexpr ::System::Collections::Stack* const& __cordl_internal_get_complexTypeStack() const;

  constexpr ::System::Collections::Stack*& __cordl_internal_get_complexTypeStack();

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& __cordl_internal_get_elements() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& __cordl_internal_get_elements();

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& __cordl_internal_get_examplars() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& __cordl_internal_get_examplars();

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& __cordl_internal_get_groups() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& __cordl_internal_get_groups();

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& __cordl_internal_get_identityConstraints() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& __cordl_internal_get_identityConstraints();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_importedSchemas() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_importedSchemas();

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& __cordl_internal_get_notations() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& __cordl_internal_get_notations();

  constexpr ::StringW const& __cordl_internal_get_restrictionErrorMsg() const;

  constexpr ::StringW& __cordl_internal_get_restrictionErrorMsg();

  constexpr ::System::Xml::Schema::XmlSchema* const& __cordl_internal_get_schemaForSchema() const;

  constexpr ::System::Xml::Schema::XmlSchema*& __cordl_internal_get_schemaForSchema();

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& __cordl_internal_get_schemaTypes() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& __cordl_internal_get_schemaTypes();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_schemasToCompile() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_schemasToCompile();

  constexpr void __cordl_internal_set_attributeGroups(::System::Xml::Schema::XmlSchemaObjectTable* value);

  constexpr void __cordl_internal_set_attributes(::System::Xml::Schema::XmlSchemaObjectTable* value);

  constexpr void __cordl_internal_set_complexTypeStack(::System::Collections::Stack* value);

  constexpr void __cordl_internal_set_elements(::System::Xml::Schema::XmlSchemaObjectTable* value);

  constexpr void __cordl_internal_set_examplars(::System::Xml::Schema::XmlSchemaObjectTable* value);

  constexpr void __cordl_internal_set_groups(::System::Xml::Schema::XmlSchemaObjectTable* value);

  constexpr void __cordl_internal_set_identityConstraints(::System::Xml::Schema::XmlSchemaObjectTable* value);

  constexpr void __cordl_internal_set_importedSchemas(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_notations(::System::Xml::Schema::XmlSchemaObjectTable* value);

  constexpr void __cordl_internal_set_restrictionErrorMsg(::StringW value);

  constexpr void __cordl_internal_set_schemaForSchema(::System::Xml::Schema::XmlSchema* value);

  constexpr void __cordl_internal_set_schemaTypes(::System::Xml::Schema::XmlSchemaObjectTable* value);

  constexpr void __cordl_internal_set_schemasToCompile(::System::Collections::Hashtable* value);

  /// @brief Method .ctor, addr 0x42975b0, size 0x1b8, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::ValidationEventHandler* eventHandler, ::System::Xml::Schema::XmlSchema* schemaForSchema,
                    ::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Compiler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Compiler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Compiler(Compiler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Compiler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Compiler(Compiler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7623 };

  /// @brief Field restrictionErrorMsg, offset: 0x40, size: 0x8, def value: None
  ::StringW ___restrictionErrorMsg;

  /// @brief Field attributes, offset: 0x48, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectTable* ___attributes;

  /// @brief Field attributeGroups, offset: 0x50, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectTable* ___attributeGroups;

  /// @brief Field elements, offset: 0x58, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectTable* ___elements;

  /// @brief Field schemaTypes, offset: 0x60, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectTable* ___schemaTypes;

  /// @brief Field groups, offset: 0x68, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectTable* ___groups;

  /// @brief Field notations, offset: 0x70, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectTable* ___notations;

  /// @brief Field examplars, offset: 0x78, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectTable* ___examplars;

  /// @brief Field identityConstraints, offset: 0x80, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectTable* ___identityConstraints;

  /// @brief Field complexTypeStack, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Stack* ___complexTypeStack;

  /// @brief Field schemasToCompile, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___schemasToCompile;

  /// @brief Field importedSchemas, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___importedSchemas;

  /// @brief Field schemaForSchema, offset: 0xa0, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchema* ___schemaForSchema;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::Compiler, ___restrictionErrorMsg) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Compiler, ___attributes) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Compiler, ___attributeGroups) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Compiler, ___elements) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Compiler, ___schemaTypes) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Compiler, ___groups) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Compiler, ___notations) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Compiler, ___examplars) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Compiler, ___identityConstraints) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Compiler, ___complexTypeStack) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Compiler, ___schemasToCompile) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Compiler, ___importedSchemas) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Compiler, ___schemaForSchema) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Compiler, 0xa8>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Compiler);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Compiler*, "System.Xml.Schema", "Compiler");
