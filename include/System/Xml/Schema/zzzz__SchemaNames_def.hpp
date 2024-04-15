#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SchemaNames)
namespace System::Xml::Schema {
struct SchemaType;
}
namespace System::Xml::Schema {
struct __SchemaNames__Token;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
struct __SchemaNames__Token;
}
namespace System::Xml::Schema {
class SchemaNames;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::__SchemaNames__Token);
MARK_REF_PTR_T(::System::Xml::Schema::SchemaNames);
// Type: ::Token
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: true
// CS Name: ::SchemaNames::Token
struct CORDL_TYPE __SchemaNames__Token {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____SchemaNames__Token_Unwrapped
  enum struct ____SchemaNames__Token_Unwrapped : int32_t {
    __E_Empty = static_cast<int32_t>(0x0),
    __E_SchemaName = static_cast<int32_t>(0x1),
    __E_SchemaType = static_cast<int32_t>(0x2),
    __E_SchemaMaxOccurs = static_cast<int32_t>(0x3),
    __E_SchemaMinOccurs = static_cast<int32_t>(0x4),
    __E_SchemaInfinite = static_cast<int32_t>(0x5),
    __E_SchemaModel = static_cast<int32_t>(0x6),
    __E_SchemaOpen = static_cast<int32_t>(0x7),
    __E_SchemaClosed = static_cast<int32_t>(0x8),
    __E_SchemaContent = static_cast<int32_t>(0x9),
    __E_SchemaMixed = static_cast<int32_t>(0xa),
    __E_SchemaEmpty = static_cast<int32_t>(0xb),
    __E_SchemaElementOnly = static_cast<int32_t>(0xc),
    __E_SchemaTextOnly = static_cast<int32_t>(0xd),
    __E_SchemaOrder = static_cast<int32_t>(0xe),
    __E_SchemaSeq = static_cast<int32_t>(0xf),
    __E_SchemaOne = static_cast<int32_t>(0x10),
    __E_SchemaMany = static_cast<int32_t>(0x11),
    __E_SchemaRequired = static_cast<int32_t>(0x12),
    __E_SchemaYes = static_cast<int32_t>(0x13),
    __E_SchemaNo = static_cast<int32_t>(0x14),
    __E_SchemaString = static_cast<int32_t>(0x15),
    __E_SchemaId = static_cast<int32_t>(0x16),
    __E_SchemaIdref = static_cast<int32_t>(0x17),
    __E_SchemaIdrefs = static_cast<int32_t>(0x18),
    __E_SchemaEntity = static_cast<int32_t>(0x19),
    __E_SchemaEntities = static_cast<int32_t>(0x1a),
    __E_SchemaNmtoken = static_cast<int32_t>(0x1b),
    __E_SchemaNmtokens = static_cast<int32_t>(0x1c),
    __E_SchemaEnumeration = static_cast<int32_t>(0x1d),
    __E_SchemaDefault = static_cast<int32_t>(0x1e),
    __E_XdrRoot = static_cast<int32_t>(0x1f),
    __E_XdrElementType = static_cast<int32_t>(0x20),
    __E_XdrElement = static_cast<int32_t>(0x21),
    __E_XdrGroup = static_cast<int32_t>(0x22),
    __E_XdrAttributeType = static_cast<int32_t>(0x23),
    __E_XdrAttribute = static_cast<int32_t>(0x24),
    __E_XdrDatatype = static_cast<int32_t>(0x25),
    __E_XdrDescription = static_cast<int32_t>(0x26),
    __E_XdrExtends = static_cast<int32_t>(0x27),
    __E_SchemaXdrRootAlias = static_cast<int32_t>(0x28),
    __E_SchemaDtType = static_cast<int32_t>(0x29),
    __E_SchemaDtValues = static_cast<int32_t>(0x2a),
    __E_SchemaDtMaxLength = static_cast<int32_t>(0x2b),
    __E_SchemaDtMinLength = static_cast<int32_t>(0x2c),
    __E_SchemaDtMax = static_cast<int32_t>(0x2d),
    __E_SchemaDtMin = static_cast<int32_t>(0x2e),
    __E_SchemaDtMinExclusive = static_cast<int32_t>(0x2f),
    __E_SchemaDtMaxExclusive = static_cast<int32_t>(0x30),
    __E_SchemaTargetNamespace = static_cast<int32_t>(0x31),
    __E_SchemaVersion = static_cast<int32_t>(0x32),
    __E_SchemaFinalDefault = static_cast<int32_t>(0x33),
    __E_SchemaBlockDefault = static_cast<int32_t>(0x34),
    __E_SchemaFixed = static_cast<int32_t>(0x35),
    __E_SchemaAbstract = static_cast<int32_t>(0x36),
    __E_SchemaBlock = static_cast<int32_t>(0x37),
    __E_SchemaSubstitutionGroup = static_cast<int32_t>(0x38),
    __E_SchemaFinal = static_cast<int32_t>(0x39),
    __E_SchemaNillable = static_cast<int32_t>(0x3a),
    __E_SchemaRef = static_cast<int32_t>(0x3b),
    __E_SchemaBase = static_cast<int32_t>(0x3c),
    __E_SchemaDerivedBy = static_cast<int32_t>(0x3d),
    __E_SchemaNamespace = static_cast<int32_t>(0x3e),
    __E_SchemaProcessContents = static_cast<int32_t>(0x3f),
    __E_SchemaRefer = static_cast<int32_t>(0x40),
    __E_SchemaPublic = static_cast<int32_t>(0x41),
    __E_SchemaSystem = static_cast<int32_t>(0x42),
    __E_SchemaSchemaLocation = static_cast<int32_t>(0x43),
    __E_SchemaValue = static_cast<int32_t>(0x44),
    __E_SchemaSource = static_cast<int32_t>(0x45),
    __E_SchemaAttributeFormDefault = static_cast<int32_t>(0x46),
    __E_SchemaElementFormDefault = static_cast<int32_t>(0x47),
    __E_SchemaUse = static_cast<int32_t>(0x48),
    __E_SchemaForm = static_cast<int32_t>(0x49),
    __E_XsdSchema = static_cast<int32_t>(0x4a),
    __E_XsdAnnotation = static_cast<int32_t>(0x4b),
    __E_XsdInclude = static_cast<int32_t>(0x4c),
    __E_XsdImport = static_cast<int32_t>(0x4d),
    __E_XsdElement = static_cast<int32_t>(0x4e),
    __E_XsdAttribute = static_cast<int32_t>(0x4f),
    __E_xsdAttributeGroup = static_cast<int32_t>(0x50),
    __E_XsdAnyAttribute = static_cast<int32_t>(0x51),
    __E_XsdGroup = static_cast<int32_t>(0x52),
    __E_XsdAll = static_cast<int32_t>(0x53),
    __E_XsdChoice = static_cast<int32_t>(0x54),
    __E_XsdSequence = static_cast<int32_t>(0x55),
    __E_XsdAny = static_cast<int32_t>(0x56),
    __E_XsdNotation = static_cast<int32_t>(0x57),
    __E_XsdSimpleType = static_cast<int32_t>(0x58),
    __E_XsdComplexType = static_cast<int32_t>(0x59),
    __E_XsdUnique = static_cast<int32_t>(0x5a),
    __E_XsdKey = static_cast<int32_t>(0x5b),
    __E_XsdKeyref = static_cast<int32_t>(0x5c),
    __E_XsdSelector = static_cast<int32_t>(0x5d),
    __E_XsdField = static_cast<int32_t>(0x5e),
    __E_XsdMinExclusive = static_cast<int32_t>(0x5f),
    __E_XsdMinInclusive = static_cast<int32_t>(0x60),
    __E_XsdMaxExclusive = static_cast<int32_t>(0x61),
    __E_XsdMaxInclusive = static_cast<int32_t>(0x62),
    __E_XsdTotalDigits = static_cast<int32_t>(0x63),
    __E_XsdFractionDigits = static_cast<int32_t>(0x64),
    __E_XsdLength = static_cast<int32_t>(0x65),
    __E_XsdMinLength = static_cast<int32_t>(0x66),
    __E_XsdMaxLength = static_cast<int32_t>(0x67),
    __E_XsdEnumeration = static_cast<int32_t>(0x68),
    __E_XsdPattern = static_cast<int32_t>(0x69),
    __E_XsdDocumentation = static_cast<int32_t>(0x6a),
    __E_XsdAppInfo = static_cast<int32_t>(0x6b),
    __E_XsdComplexContent = static_cast<int32_t>(0x6c),
    __E_XsdComplexContentExtension = static_cast<int32_t>(0x6d),
    __E_XsdComplexContentRestriction = static_cast<int32_t>(0x6e),
    __E_XsdSimpleContent = static_cast<int32_t>(0x6f),
    __E_XsdSimpleContentExtension = static_cast<int32_t>(0x70),
    __E_XsdSimpleContentRestriction = static_cast<int32_t>(0x71),
    __E_XsdSimpleTypeList = static_cast<int32_t>(0x72),
    __E_XsdSimpleTypeRestriction = static_cast<int32_t>(0x73),
    __E_XsdSimpleTypeUnion = static_cast<int32_t>(0x74),
    __E_XsdWhitespace = static_cast<int32_t>(0x75),
    __E_XsdRedefine = static_cast<int32_t>(0x76),
    __E_SchemaItemType = static_cast<int32_t>(0x77),
    __E_SchemaMemberTypes = static_cast<int32_t>(0x78),
    __E_SchemaXPath = static_cast<int32_t>(0x79),
    __E_XmlLang = static_cast<int32_t>(0x7a),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____SchemaNames__Token_Unwrapped() const noexcept {
    return static_cast<____SchemaNames__Token_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SchemaNames__Token();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SchemaNames__Token(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Empty value: static_cast<int32_t>(0x0)
  static ::System::Xml::Schema::__SchemaNames__Token const Empty;

  /// @brief Field SchemaAbstract value: static_cast<int32_t>(0x36)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaAbstract;

  /// @brief Field SchemaAttributeFormDefault value: static_cast<int32_t>(0x46)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaAttributeFormDefault;

  /// @brief Field SchemaBase value: static_cast<int32_t>(0x3c)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaBase;

  /// @brief Field SchemaBlock value: static_cast<int32_t>(0x37)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaBlock;

  /// @brief Field SchemaBlockDefault value: static_cast<int32_t>(0x34)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaBlockDefault;

  /// @brief Field SchemaClosed value: static_cast<int32_t>(0x8)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaClosed;

  /// @brief Field SchemaContent value: static_cast<int32_t>(0x9)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaContent;

  /// @brief Field SchemaDefault value: static_cast<int32_t>(0x1e)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaDefault;

  /// @brief Field SchemaDerivedBy value: static_cast<int32_t>(0x3d)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaDerivedBy;

  /// @brief Field SchemaDtMax value: static_cast<int32_t>(0x2d)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaDtMax;

  /// @brief Field SchemaDtMaxExclusive value: static_cast<int32_t>(0x30)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaDtMaxExclusive;

  /// @brief Field SchemaDtMaxLength value: static_cast<int32_t>(0x2b)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaDtMaxLength;

  /// @brief Field SchemaDtMin value: static_cast<int32_t>(0x2e)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaDtMin;

  /// @brief Field SchemaDtMinExclusive value: static_cast<int32_t>(0x2f)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaDtMinExclusive;

  /// @brief Field SchemaDtMinLength value: static_cast<int32_t>(0x2c)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaDtMinLength;

  /// @brief Field SchemaDtType value: static_cast<int32_t>(0x29)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaDtType;

  /// @brief Field SchemaDtValues value: static_cast<int32_t>(0x2a)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaDtValues;

  /// @brief Field SchemaElementFormDefault value: static_cast<int32_t>(0x47)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaElementFormDefault;

  /// @brief Field SchemaElementOnly value: static_cast<int32_t>(0xc)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaElementOnly;

  /// @brief Field SchemaEmpty value: static_cast<int32_t>(0xb)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaEmpty;

  /// @brief Field SchemaEntities value: static_cast<int32_t>(0x1a)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaEntities;

  /// @brief Field SchemaEntity value: static_cast<int32_t>(0x19)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaEntity;

  /// @brief Field SchemaEnumeration value: static_cast<int32_t>(0x1d)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaEnumeration;

  /// @brief Field SchemaFinal value: static_cast<int32_t>(0x39)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaFinal;

  /// @brief Field SchemaFinalDefault value: static_cast<int32_t>(0x33)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaFinalDefault;

  /// @brief Field SchemaFixed value: static_cast<int32_t>(0x35)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaFixed;

  /// @brief Field SchemaForm value: static_cast<int32_t>(0x49)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaForm;

  /// @brief Field SchemaId value: static_cast<int32_t>(0x16)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaId;

  /// @brief Field SchemaIdref value: static_cast<int32_t>(0x17)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaIdref;

  /// @brief Field SchemaIdrefs value: static_cast<int32_t>(0x18)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaIdrefs;

  /// @brief Field SchemaInfinite value: static_cast<int32_t>(0x5)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaInfinite;

  /// @brief Field SchemaItemType value: static_cast<int32_t>(0x77)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaItemType;

  /// @brief Field SchemaMany value: static_cast<int32_t>(0x11)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaMany;

  /// @brief Field SchemaMaxOccurs value: static_cast<int32_t>(0x3)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaMaxOccurs;

  /// @brief Field SchemaMemberTypes value: static_cast<int32_t>(0x78)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaMemberTypes;

  /// @brief Field SchemaMinOccurs value: static_cast<int32_t>(0x4)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaMinOccurs;

  /// @brief Field SchemaMixed value: static_cast<int32_t>(0xa)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaMixed;

  /// @brief Field SchemaModel value: static_cast<int32_t>(0x6)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaModel;

  /// @brief Field SchemaName value: static_cast<int32_t>(0x1)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaName;

  /// @brief Field SchemaNamespace value: static_cast<int32_t>(0x3e)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaNamespace;

  /// @brief Field SchemaNillable value: static_cast<int32_t>(0x3a)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaNillable;

  /// @brief Field SchemaNmtoken value: static_cast<int32_t>(0x1b)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaNmtoken;

  /// @brief Field SchemaNmtokens value: static_cast<int32_t>(0x1c)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaNmtokens;

  /// @brief Field SchemaNo value: static_cast<int32_t>(0x14)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaNo;

  /// @brief Field SchemaOne value: static_cast<int32_t>(0x10)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaOne;

  /// @brief Field SchemaOpen value: static_cast<int32_t>(0x7)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaOpen;

  /// @brief Field SchemaOrder value: static_cast<int32_t>(0xe)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaOrder;

  /// @brief Field SchemaProcessContents value: static_cast<int32_t>(0x3f)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaProcessContents;

  /// @brief Field SchemaPublic value: static_cast<int32_t>(0x41)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaPublic;

  /// @brief Field SchemaRef value: static_cast<int32_t>(0x3b)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaRef;

  /// @brief Field SchemaRefer value: static_cast<int32_t>(0x40)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaRefer;

  /// @brief Field SchemaRequired value: static_cast<int32_t>(0x12)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaRequired;

  /// @brief Field SchemaSchemaLocation value: static_cast<int32_t>(0x43)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaSchemaLocation;

  /// @brief Field SchemaSeq value: static_cast<int32_t>(0xf)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaSeq;

  /// @brief Field SchemaSource value: static_cast<int32_t>(0x45)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaSource;

  /// @brief Field SchemaString value: static_cast<int32_t>(0x15)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaString;

  /// @brief Field SchemaSubstitutionGroup value: static_cast<int32_t>(0x38)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaSubstitutionGroup;

  /// @brief Field SchemaSystem value: static_cast<int32_t>(0x42)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaSystem;

  /// @brief Field SchemaTargetNamespace value: static_cast<int32_t>(0x31)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaTargetNamespace;

  /// @brief Field SchemaTextOnly value: static_cast<int32_t>(0xd)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaTextOnly;

  /// @brief Field SchemaType value: static_cast<int32_t>(0x2)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaType;

  /// @brief Field SchemaUse value: static_cast<int32_t>(0x48)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaUse;

  /// @brief Field SchemaValue value: static_cast<int32_t>(0x44)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaValue;

  /// @brief Field SchemaVersion value: static_cast<int32_t>(0x32)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaVersion;

  /// @brief Field SchemaXPath value: static_cast<int32_t>(0x79)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaXPath;

  /// @brief Field SchemaXdrRootAlias value: static_cast<int32_t>(0x28)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaXdrRootAlias;

  /// @brief Field SchemaYes value: static_cast<int32_t>(0x13)
  static ::System::Xml::Schema::__SchemaNames__Token const SchemaYes;

  /// @brief Field XdrAttribute value: static_cast<int32_t>(0x24)
  static ::System::Xml::Schema::__SchemaNames__Token const XdrAttribute;

  /// @brief Field XdrAttributeType value: static_cast<int32_t>(0x23)
  static ::System::Xml::Schema::__SchemaNames__Token const XdrAttributeType;

  /// @brief Field XdrDatatype value: static_cast<int32_t>(0x25)
  static ::System::Xml::Schema::__SchemaNames__Token const XdrDatatype;

  /// @brief Field XdrDescription value: static_cast<int32_t>(0x26)
  static ::System::Xml::Schema::__SchemaNames__Token const XdrDescription;

  /// @brief Field XdrElement value: static_cast<int32_t>(0x21)
  static ::System::Xml::Schema::__SchemaNames__Token const XdrElement;

  /// @brief Field XdrElementType value: static_cast<int32_t>(0x20)
  static ::System::Xml::Schema::__SchemaNames__Token const XdrElementType;

  /// @brief Field XdrExtends value: static_cast<int32_t>(0x27)
  static ::System::Xml::Schema::__SchemaNames__Token const XdrExtends;

  /// @brief Field XdrGroup value: static_cast<int32_t>(0x22)
  static ::System::Xml::Schema::__SchemaNames__Token const XdrGroup;

  /// @brief Field XdrRoot value: static_cast<int32_t>(0x1f)
  static ::System::Xml::Schema::__SchemaNames__Token const XdrRoot;

  /// @brief Field XmlLang value: static_cast<int32_t>(0x7a)
  static ::System::Xml::Schema::__SchemaNames__Token const XmlLang;

  /// @brief Field XsdAll value: static_cast<int32_t>(0x53)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdAll;

  /// @brief Field XsdAnnotation value: static_cast<int32_t>(0x4b)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdAnnotation;

  /// @brief Field XsdAny value: static_cast<int32_t>(0x56)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdAny;

  /// @brief Field XsdAnyAttribute value: static_cast<int32_t>(0x51)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdAnyAttribute;

  /// @brief Field XsdAppInfo value: static_cast<int32_t>(0x6b)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdAppInfo;

  /// @brief Field XsdAttribute value: static_cast<int32_t>(0x4f)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdAttribute;

  /// @brief Field XsdChoice value: static_cast<int32_t>(0x54)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdChoice;

  /// @brief Field XsdComplexContent value: static_cast<int32_t>(0x6c)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdComplexContent;

  /// @brief Field XsdComplexContentExtension value: static_cast<int32_t>(0x6d)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdComplexContentExtension;

  /// @brief Field XsdComplexContentRestriction value: static_cast<int32_t>(0x6e)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdComplexContentRestriction;

  /// @brief Field XsdComplexType value: static_cast<int32_t>(0x59)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdComplexType;

  /// @brief Field XsdDocumentation value: static_cast<int32_t>(0x6a)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdDocumentation;

  /// @brief Field XsdElement value: static_cast<int32_t>(0x4e)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdElement;

  /// @brief Field XsdEnumeration value: static_cast<int32_t>(0x68)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdEnumeration;

  /// @brief Field XsdField value: static_cast<int32_t>(0x5e)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdField;

  /// @brief Field XsdFractionDigits value: static_cast<int32_t>(0x64)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdFractionDigits;

  /// @brief Field XsdGroup value: static_cast<int32_t>(0x52)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdGroup;

  /// @brief Field XsdImport value: static_cast<int32_t>(0x4d)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdImport;

  /// @brief Field XsdInclude value: static_cast<int32_t>(0x4c)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdInclude;

  /// @brief Field XsdKey value: static_cast<int32_t>(0x5b)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdKey;

  /// @brief Field XsdKeyref value: static_cast<int32_t>(0x5c)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdKeyref;

  /// @brief Field XsdLength value: static_cast<int32_t>(0x65)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdLength;

  /// @brief Field XsdMaxExclusive value: static_cast<int32_t>(0x61)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdMaxExclusive;

  /// @brief Field XsdMaxInclusive value: static_cast<int32_t>(0x62)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdMaxInclusive;

  /// @brief Field XsdMaxLength value: static_cast<int32_t>(0x67)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdMaxLength;

  /// @brief Field XsdMinExclusive value: static_cast<int32_t>(0x5f)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdMinExclusive;

  /// @brief Field XsdMinInclusive value: static_cast<int32_t>(0x60)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdMinInclusive;

  /// @brief Field XsdMinLength value: static_cast<int32_t>(0x66)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdMinLength;

  /// @brief Field XsdNotation value: static_cast<int32_t>(0x57)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdNotation;

  /// @brief Field XsdPattern value: static_cast<int32_t>(0x69)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdPattern;

  /// @brief Field XsdRedefine value: static_cast<int32_t>(0x76)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdRedefine;

  /// @brief Field XsdSchema value: static_cast<int32_t>(0x4a)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdSchema;

  /// @brief Field XsdSelector value: static_cast<int32_t>(0x5d)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdSelector;

  /// @brief Field XsdSequence value: static_cast<int32_t>(0x55)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdSequence;

  /// @brief Field XsdSimpleContent value: static_cast<int32_t>(0x6f)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdSimpleContent;

  /// @brief Field XsdSimpleContentExtension value: static_cast<int32_t>(0x70)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdSimpleContentExtension;

  /// @brief Field XsdSimpleContentRestriction value: static_cast<int32_t>(0x71)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdSimpleContentRestriction;

  /// @brief Field XsdSimpleType value: static_cast<int32_t>(0x58)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdSimpleType;

  /// @brief Field XsdSimpleTypeList value: static_cast<int32_t>(0x72)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdSimpleTypeList;

  /// @brief Field XsdSimpleTypeRestriction value: static_cast<int32_t>(0x73)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdSimpleTypeRestriction;

  /// @brief Field XsdSimpleTypeUnion value: static_cast<int32_t>(0x74)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdSimpleTypeUnion;

  /// @brief Field XsdTotalDigits value: static_cast<int32_t>(0x63)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdTotalDigits;

  /// @brief Field XsdUnique value: static_cast<int32_t>(0x5a)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdUnique;

  /// @brief Field XsdWhitespace value: static_cast<int32_t>(0x75)
  static ::System::Xml::Schema::__SchemaNames__Token const XsdWhitespace;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field xsdAttributeGroup value: static_cast<int32_t>(0x50)
  static ::System::Xml::Schema::__SchemaNames__Token const xsdAttributeGroup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__SchemaNames__Token, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::__SchemaNames__Token, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml::Schema
// Type: System.Xml.Schema::SchemaNames
// SizeInfo { instance_size: 1144, native_size: -1, calculated_instance_size: 1144, calculated_native_size: 1144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::SchemaNames*
class CORDL_TYPE SchemaNames : public ::System::Object {
public:
  // Declarations
  using Token = ::System::Xml::Schema::__SchemaNames__Token;

  /// @brief Field NsDataType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_NsDataType, put = __cordl_internal_set_NsDataType))::StringW NsDataType;

  /// @brief Field NsDataTypeAlias, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_NsDataTypeAlias, put = __cordl_internal_set_NsDataTypeAlias))::StringW NsDataTypeAlias;

  /// @brief Field NsDataTypeOld, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_NsDataTypeOld, put = __cordl_internal_set_NsDataTypeOld))::StringW NsDataTypeOld;

  /// @brief Field NsXdr, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_NsXdr, put = __cordl_internal_set_NsXdr))::StringW NsXdr;

  /// @brief Field NsXdrAlias, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_NsXdrAlias, put = __cordl_internal_set_NsXdrAlias))::StringW NsXdrAlias;

  /// @brief Field NsXml, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_NsXml, put = __cordl_internal_set_NsXml))::StringW NsXml;

  /// @brief Field NsXmlNs, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_NsXmlNs, put = __cordl_internal_set_NsXmlNs))::StringW NsXmlNs;

  /// @brief Field NsXs, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_NsXs, put = __cordl_internal_set_NsXs))::StringW NsXs;

  /// @brief Field NsXsi, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_NsXsi, put = __cordl_internal_set_NsXsi))::StringW NsXsi;

  /// @brief Field QnAbstract, offset 0x260, size 0x8
  __declspec(property(get = __cordl_internal_get_QnAbstract, put = __cordl_internal_set_QnAbstract))::System::Xml::XmlQualifiedName* QnAbstract;

  /// @brief Field QnAttributeFormDefault, offset 0x2f0, size 0x8
  __declspec(property(get = __cordl_internal_get_QnAttributeFormDefault, put = __cordl_internal_set_QnAttributeFormDefault))::System::Xml::XmlQualifiedName* QnAttributeFormDefault;

  /// @brief Field QnBase, offset 0x290, size 0x8
  __declspec(property(get = __cordl_internal_get_QnBase, put = __cordl_internal_set_QnBase))::System::Xml::XmlQualifiedName* QnBase;

  /// @brief Field QnBlock, offset 0x268, size 0x8
  __declspec(property(get = __cordl_internal_get_QnBlock, put = __cordl_internal_set_QnBlock))::System::Xml::XmlQualifiedName* QnBlock;

  /// @brief Field QnBlockDefault, offset 0x250, size 0x8
  __declspec(property(get = __cordl_internal_get_QnBlockDefault, put = __cordl_internal_set_QnBlockDefault))::System::Xml::XmlQualifiedName* QnBlockDefault;

  /// @brief Field QnClosed, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_QnClosed, put = __cordl_internal_set_QnClosed))::System::Xml::XmlQualifiedName* QnClosed;

  /// @brief Field QnContent, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_QnContent, put = __cordl_internal_set_QnContent))::System::Xml::XmlQualifiedName* QnContent;

  /// @brief Field QnDefault, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get_QnDefault, put = __cordl_internal_set_QnDefault))::System::Xml::XmlQualifiedName* QnDefault;

  /// @brief Field QnDerivedBy, offset 0x298, size 0x8
  __declspec(property(get = __cordl_internal_get_QnDerivedBy, put = __cordl_internal_set_QnDerivedBy))::System::Xml::XmlQualifiedName* QnDerivedBy;

  /// @brief Field QnDtDt, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_QnDtDt, put = __cordl_internal_set_QnDtDt))::System::Xml::XmlQualifiedName* QnDtDt;

  /// @brief Field QnDtMax, offset 0x218, size 0x8
  __declspec(property(get = __cordl_internal_get_QnDtMax, put = __cordl_internal_set_QnDtMax))::System::Xml::XmlQualifiedName* QnDtMax;

  /// @brief Field QnDtMaxExclusive, offset 0x230, size 0x8
  __declspec(property(get = __cordl_internal_get_QnDtMaxExclusive, put = __cordl_internal_set_QnDtMaxExclusive))::System::Xml::XmlQualifiedName* QnDtMaxExclusive;

  /// @brief Field QnDtMaxLength, offset 0x208, size 0x8
  __declspec(property(get = __cordl_internal_get_QnDtMaxLength, put = __cordl_internal_set_QnDtMaxLength))::System::Xml::XmlQualifiedName* QnDtMaxLength;

  /// @brief Field QnDtMin, offset 0x220, size 0x8
  __declspec(property(get = __cordl_internal_get_QnDtMin, put = __cordl_internal_set_QnDtMin))::System::Xml::XmlQualifiedName* QnDtMin;

  /// @brief Field QnDtMinExclusive, offset 0x228, size 0x8
  __declspec(property(get = __cordl_internal_get_QnDtMinExclusive, put = __cordl_internal_set_QnDtMinExclusive))::System::Xml::XmlQualifiedName* QnDtMinExclusive;

  /// @brief Field QnDtMinLength, offset 0x210, size 0x8
  __declspec(property(get = __cordl_internal_get_QnDtMinLength, put = __cordl_internal_set_QnDtMinLength))::System::Xml::XmlQualifiedName* QnDtMinLength;

  /// @brief Field QnDtType, offset 0x1f8, size 0x8
  __declspec(property(get = __cordl_internal_get_QnDtType, put = __cordl_internal_set_QnDtType))::System::Xml::XmlQualifiedName* QnDtType;

  /// @brief Field QnDtValues, offset 0x200, size 0x8
  __declspec(property(get = __cordl_internal_get_QnDtValues, put = __cordl_internal_set_QnDtValues))::System::Xml::XmlQualifiedName* QnDtValues;

  /// @brief Field QnElementFormDefault, offset 0x2e8, size 0x8
  __declspec(property(get = __cordl_internal_get_QnElementFormDefault, put = __cordl_internal_set_QnElementFormDefault))::System::Xml::XmlQualifiedName* QnElementFormDefault;

  /// @brief Field QnEltOnly, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_QnEltOnly, put = __cordl_internal_set_QnEltOnly))::System::Xml::XmlQualifiedName* QnEltOnly;

  /// @brief Field QnEmpty, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_QnEmpty, put = __cordl_internal_set_QnEmpty))::System::Xml::XmlQualifiedName* QnEmpty;

  /// @brief Field QnEntities, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get_QnEntities, put = __cordl_internal_set_QnEntities))::System::Xml::XmlQualifiedName* QnEntities;

  /// @brief Field QnEntity, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get_QnEntity, put = __cordl_internal_set_QnEntity))::System::Xml::XmlQualifiedName* QnEntity;

  /// @brief Field QnEnumeration, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get_QnEnumeration, put = __cordl_internal_set_QnEnumeration))::System::Xml::XmlQualifiedName* QnEnumeration;

  /// @brief Field QnFinal, offset 0x278, size 0x8
  __declspec(property(get = __cordl_internal_get_QnFinal, put = __cordl_internal_set_QnFinal))::System::Xml::XmlQualifiedName* QnFinal;

  /// @brief Field QnFinalDefault, offset 0x248, size 0x8
  __declspec(property(get = __cordl_internal_get_QnFinalDefault, put = __cordl_internal_set_QnFinalDefault))::System::Xml::XmlQualifiedName* QnFinalDefault;

  /// @brief Field QnFixed, offset 0x258, size 0x8
  __declspec(property(get = __cordl_internal_get_QnFixed, put = __cordl_internal_set_QnFixed))::System::Xml::XmlQualifiedName* QnFixed;

  /// @brief Field QnForm, offset 0x2e0, size 0x8
  __declspec(property(get = __cordl_internal_get_QnForm, put = __cordl_internal_set_QnForm))::System::Xml::XmlQualifiedName* QnForm;

  /// @brief Field QnID, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_QnID, put = __cordl_internal_set_QnID))::System::Xml::XmlQualifiedName* QnID;

  /// @brief Field QnIDRef, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get_QnIDRef, put = __cordl_internal_set_QnIDRef))::System::Xml::XmlQualifiedName* QnIDRef;

  /// @brief Field QnIDRefs, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get_QnIDRefs, put = __cordl_internal_set_QnIDRefs))::System::Xml::XmlQualifiedName* QnIDRefs;

  /// @brief Field QnInfinite, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_QnInfinite, put = __cordl_internal_set_QnInfinite))::System::Xml::XmlQualifiedName* QnInfinite;

  /// @brief Field QnItemType, offset 0x2f8, size 0x8
  __declspec(property(get = __cordl_internal_get_QnItemType, put = __cordl_internal_set_QnItemType))::System::Xml::XmlQualifiedName* QnItemType;

  /// @brief Field QnMany, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_QnMany, put = __cordl_internal_set_QnMany))::System::Xml::XmlQualifiedName* QnMany;

  /// @brief Field QnMaxOccurs, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_QnMaxOccurs, put = __cordl_internal_set_QnMaxOccurs))::System::Xml::XmlQualifiedName* QnMaxOccurs;

  /// @brief Field QnMemberTypes, offset 0x300, size 0x8
  __declspec(property(get = __cordl_internal_get_QnMemberTypes, put = __cordl_internal_set_QnMemberTypes))::System::Xml::XmlQualifiedName* QnMemberTypes;

  /// @brief Field QnMinOccurs, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_QnMinOccurs, put = __cordl_internal_set_QnMinOccurs))::System::Xml::XmlQualifiedName* QnMinOccurs;

  /// @brief Field QnMixed, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_QnMixed, put = __cordl_internal_set_QnMixed))::System::Xml::XmlQualifiedName* QnMixed;

  /// @brief Field QnModel, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_QnModel, put = __cordl_internal_set_QnModel))::System::Xml::XmlQualifiedName* QnModel;

  /// @brief Field QnName, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_QnName, put = __cordl_internal_set_QnName))::System::Xml::XmlQualifiedName* QnName;

  /// @brief Field QnNamespace, offset 0x2a0, size 0x8
  __declspec(property(get = __cordl_internal_get_QnNamespace, put = __cordl_internal_set_QnNamespace))::System::Xml::XmlQualifiedName* QnNamespace;

  /// @brief Field QnNillable, offset 0x280, size 0x8
  __declspec(property(get = __cordl_internal_get_QnNillable, put = __cordl_internal_set_QnNillable))::System::Xml::XmlQualifiedName* QnNillable;

  /// @brief Field QnNmToken, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get_QnNmToken, put = __cordl_internal_set_QnNmToken))::System::Xml::XmlQualifiedName* QnNmToken;

  /// @brief Field QnNmTokens, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get_QnNmTokens, put = __cordl_internal_set_QnNmTokens))::System::Xml::XmlQualifiedName* QnNmTokens;

  /// @brief Field QnNo, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_QnNo, put = __cordl_internal_set_QnNo))::System::Xml::XmlQualifiedName* QnNo;

  /// @brief Field QnOne, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_QnOne, put = __cordl_internal_set_QnOne))::System::Xml::XmlQualifiedName* QnOne;

  /// @brief Field QnOpen, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_QnOpen, put = __cordl_internal_set_QnOpen))::System::Xml::XmlQualifiedName* QnOpen;

  /// @brief Field QnOrder, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_QnOrder, put = __cordl_internal_set_QnOrder))::System::Xml::XmlQualifiedName* QnOrder;

  /// @brief Field QnPCData, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_QnPCData, put = __cordl_internal_set_QnPCData))::System::Xml::XmlQualifiedName* QnPCData;

  /// @brief Field QnProcessContents, offset 0x2a8, size 0x8
  __declspec(property(get = __cordl_internal_get_QnProcessContents, put = __cordl_internal_set_QnProcessContents))::System::Xml::XmlQualifiedName* QnProcessContents;

  /// @brief Field QnPublic, offset 0x2b8, size 0x8
  __declspec(property(get = __cordl_internal_get_QnPublic, put = __cordl_internal_set_QnPublic))::System::Xml::XmlQualifiedName* QnPublic;

  /// @brief Field QnRef, offset 0x288, size 0x8
  __declspec(property(get = __cordl_internal_get_QnRef, put = __cordl_internal_set_QnRef))::System::Xml::XmlQualifiedName* QnRef;

  /// @brief Field QnRefer, offset 0x2b0, size 0x8
  __declspec(property(get = __cordl_internal_get_QnRefer, put = __cordl_internal_set_QnRefer))::System::Xml::XmlQualifiedName* QnRefer;

  /// @brief Field QnRequired, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_QnRequired, put = __cordl_internal_set_QnRequired))::System::Xml::XmlQualifiedName* QnRequired;

  /// @brief Field QnSchemaLocation, offset 0x2c8, size 0x8
  __declspec(property(get = __cordl_internal_get_QnSchemaLocation, put = __cordl_internal_set_QnSchemaLocation))::System::Xml::XmlQualifiedName* QnSchemaLocation;

  /// @brief Field QnSeq, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_QnSeq, put = __cordl_internal_set_QnSeq))::System::Xml::XmlQualifiedName* QnSeq;

  /// @brief Field QnSource, offset 0x420, size 0x8
  __declspec(property(get = __cordl_internal_get_QnSource, put = __cordl_internal_set_QnSource))::System::Xml::XmlQualifiedName* QnSource;

  /// @brief Field QnString, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_QnString, put = __cordl_internal_set_QnString))::System::Xml::XmlQualifiedName* QnString;

  /// @brief Field QnSubstitutionGroup, offset 0x270, size 0x8
  __declspec(property(get = __cordl_internal_get_QnSubstitutionGroup, put = __cordl_internal_set_QnSubstitutionGroup))::System::Xml::XmlQualifiedName* QnSubstitutionGroup;

  /// @brief Field QnSystem, offset 0x2c0, size 0x8
  __declspec(property(get = __cordl_internal_get_QnSystem, put = __cordl_internal_set_QnSystem))::System::Xml::XmlQualifiedName* QnSystem;

  /// @brief Field QnTargetNamespace, offset 0x238, size 0x8
  __declspec(property(get = __cordl_internal_get_QnTargetNamespace, put = __cordl_internal_set_QnTargetNamespace))::System::Xml::XmlQualifiedName* QnTargetNamespace;

  /// @brief Field QnTextOnly, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_QnTextOnly, put = __cordl_internal_set_QnTextOnly))::System::Xml::XmlQualifiedName* QnTextOnly;

  /// @brief Field QnType, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_QnType, put = __cordl_internal_set_QnType))::System::Xml::XmlQualifiedName* QnType;

  /// @brief Field QnUse, offset 0x2d8, size 0x8
  __declspec(property(get = __cordl_internal_get_QnUse, put = __cordl_internal_set_QnUse))::System::Xml::XmlQualifiedName* QnUse;

  /// @brief Field QnValue, offset 0x2d0, size 0x8
  __declspec(property(get = __cordl_internal_get_QnValue, put = __cordl_internal_set_QnValue))::System::Xml::XmlQualifiedName* QnValue;

  /// @brief Field QnVersion, offset 0x240, size 0x8
  __declspec(property(get = __cordl_internal_get_QnVersion, put = __cordl_internal_set_QnVersion))::System::Xml::XmlQualifiedName* QnVersion;

  /// @brief Field QnXPath, offset 0x308, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXPath, put = __cordl_internal_set_QnXPath))::System::Xml::XmlQualifiedName* QnXPath;

  /// @brief Field QnXdrAliasSchema, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXdrAliasSchema, put = __cordl_internal_set_QnXdrAliasSchema))::System::Xml::XmlQualifiedName* QnXdrAliasSchema;

  /// @brief Field QnXdrAttribute, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXdrAttribute, put = __cordl_internal_set_QnXdrAttribute))::System::Xml::XmlQualifiedName* QnXdrAttribute;

  /// @brief Field QnXdrAttributeType, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXdrAttributeType, put = __cordl_internal_set_QnXdrAttributeType))::System::Xml::XmlQualifiedName* QnXdrAttributeType;

  /// @brief Field QnXdrDataType, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXdrDataType, put = __cordl_internal_set_QnXdrDataType))::System::Xml::XmlQualifiedName* QnXdrDataType;

  /// @brief Field QnXdrDescription, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXdrDescription, put = __cordl_internal_set_QnXdrDescription))::System::Xml::XmlQualifiedName* QnXdrDescription;

  /// @brief Field QnXdrElement, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXdrElement, put = __cordl_internal_set_QnXdrElement))::System::Xml::XmlQualifiedName* QnXdrElement;

  /// @brief Field QnXdrElementType, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXdrElementType, put = __cordl_internal_set_QnXdrElementType))::System::Xml::XmlQualifiedName* QnXdrElementType;

  /// @brief Field QnXdrExtends, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXdrExtends, put = __cordl_internal_set_QnXdrExtends))::System::Xml::XmlQualifiedName* QnXdrExtends;

  /// @brief Field QnXdrGroup, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXdrGroup, put = __cordl_internal_set_QnXdrGroup))::System::Xml::XmlQualifiedName* QnXdrGroup;

  /// @brief Field QnXdrSchema, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXdrSchema, put = __cordl_internal_set_QnXdrSchema))::System::Xml::XmlQualifiedName* QnXdrSchema;

  /// @brief Field QnXml, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXml, put = __cordl_internal_set_QnXml))::System::Xml::XmlQualifiedName* QnXml;

  /// @brief Field QnXmlLang, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXmlLang, put = __cordl_internal_set_QnXmlLang))::System::Xml::XmlQualifiedName* QnXmlLang;

  /// @brief Field QnXmlNs, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXmlNs, put = __cordl_internal_set_QnXmlNs))::System::Xml::XmlQualifiedName* QnXmlNs;

  /// @brief Field QnXsdAll, offset 0x358, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdAll, put = __cordl_internal_set_QnXsdAll))::System::Xml::XmlQualifiedName* QnXsdAll;

  /// @brief Field QnXsdAnnotation, offset 0x318, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdAnnotation, put = __cordl_internal_set_QnXsdAnnotation))::System::Xml::XmlQualifiedName* QnXsdAnnotation;

  /// @brief Field QnXsdAny, offset 0x370, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdAny, put = __cordl_internal_set_QnXsdAny))::System::Xml::XmlQualifiedName* QnXsdAny;

  /// @brief Field QnXsdAnyAttribute, offset 0x348, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdAnyAttribute, put = __cordl_internal_set_QnXsdAnyAttribute))::System::Xml::XmlQualifiedName* QnXsdAnyAttribute;

  /// @brief Field QnXsdAnyType, offset 0x468, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdAnyType, put = __cordl_internal_set_QnXsdAnyType))::System::Xml::XmlQualifiedName* QnXsdAnyType;

  /// @brief Field QnXsdAppinfo, offset 0x418, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdAppinfo, put = __cordl_internal_set_QnXsdAppinfo))::System::Xml::XmlQualifiedName* QnXsdAppinfo;

  /// @brief Field QnXsdAttribute, offset 0x338, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdAttribute, put = __cordl_internal_set_QnXsdAttribute))::System::Xml::XmlQualifiedName* QnXsdAttribute;

  /// @brief Field QnXsdAttributeGroup, offset 0x340, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdAttributeGroup, put = __cordl_internal_set_QnXsdAttributeGroup))::System::Xml::XmlQualifiedName* QnXsdAttributeGroup;

  /// @brief Field QnXsdChoice, offset 0x360, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdChoice, put = __cordl_internal_set_QnXsdChoice))::System::Xml::XmlQualifiedName* QnXsdChoice;

  /// @brief Field QnXsdComplexContent, offset 0x428, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdComplexContent, put = __cordl_internal_set_QnXsdComplexContent))::System::Xml::XmlQualifiedName* QnXsdComplexContent;

  /// @brief Field QnXsdComplexType, offset 0x388, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdComplexType, put = __cordl_internal_set_QnXsdComplexType))::System::Xml::XmlQualifiedName* QnXsdComplexType;

  /// @brief Field QnXsdDocumentation, offset 0x410, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdDocumentation, put = __cordl_internal_set_QnXsdDocumentation))::System::Xml::XmlQualifiedName* QnXsdDocumentation;

  /// @brief Field QnXsdElement, offset 0x330, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdElement, put = __cordl_internal_set_QnXsdElement))::System::Xml::XmlQualifiedName* QnXsdElement;

  /// @brief Field QnXsdEnumeration, offset 0x400, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdEnumeration, put = __cordl_internal_set_QnXsdEnumeration))::System::Xml::XmlQualifiedName* QnXsdEnumeration;

  /// @brief Field QnXsdExtension, offset 0x440, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdExtension, put = __cordl_internal_set_QnXsdExtension))::System::Xml::XmlQualifiedName* QnXsdExtension;

  /// @brief Field QnXsdField, offset 0x3b0, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdField, put = __cordl_internal_set_QnXsdField))::System::Xml::XmlQualifiedName* QnXsdField;

  /// @brief Field QnXsdFractionDigits, offset 0x3e0, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdFractionDigits, put = __cordl_internal_set_QnXsdFractionDigits))::System::Xml::XmlQualifiedName* QnXsdFractionDigits;

  /// @brief Field QnXsdGroup, offset 0x350, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdGroup, put = __cordl_internal_set_QnXsdGroup))::System::Xml::XmlQualifiedName* QnXsdGroup;

  /// @brief Field QnXsdImport, offset 0x328, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdImport, put = __cordl_internal_set_QnXsdImport))::System::Xml::XmlQualifiedName* QnXsdImport;

  /// @brief Field QnXsdInclude, offset 0x320, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdInclude, put = __cordl_internal_set_QnXsdInclude))::System::Xml::XmlQualifiedName* QnXsdInclude;

  /// @brief Field QnXsdKey, offset 0x398, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdKey, put = __cordl_internal_set_QnXsdKey))::System::Xml::XmlQualifiedName* QnXsdKey;

  /// @brief Field QnXsdKeyRef, offset 0x3a0, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdKeyRef, put = __cordl_internal_set_QnXsdKeyRef))::System::Xml::XmlQualifiedName* QnXsdKeyRef;

  /// @brief Field QnXsdLength, offset 0x3e8, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdLength, put = __cordl_internal_set_QnXsdLength))::System::Xml::XmlQualifiedName* QnXsdLength;

  /// @brief Field QnXsdList, offset 0x450, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdList, put = __cordl_internal_set_QnXsdList))::System::Xml::XmlQualifiedName* QnXsdList;

  /// @brief Field QnXsdMaxExclusive, offset 0x3d0, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdMaxExclusive, put = __cordl_internal_set_QnXsdMaxExclusive))::System::Xml::XmlQualifiedName* QnXsdMaxExclusive;

  /// @brief Field QnXsdMaxInclusive, offset 0x3c8, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdMaxInclusive, put = __cordl_internal_set_QnXsdMaxInclusive))::System::Xml::XmlQualifiedName* QnXsdMaxInclusive;

  /// @brief Field QnXsdMaxLength, offset 0x3f8, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdMaxLength, put = __cordl_internal_set_QnXsdMaxLength))::System::Xml::XmlQualifiedName* QnXsdMaxLength;

  /// @brief Field QnXsdMinExclusive, offset 0x3b8, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdMinExclusive, put = __cordl_internal_set_QnXsdMinExclusive))::System::Xml::XmlQualifiedName* QnXsdMinExclusive;

  /// @brief Field QnXsdMinInclusive, offset 0x3c0, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdMinInclusive, put = __cordl_internal_set_QnXsdMinInclusive))::System::Xml::XmlQualifiedName* QnXsdMinInclusive;

  /// @brief Field QnXsdMinLength, offset 0x3f0, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdMinLength, put = __cordl_internal_set_QnXsdMinLength))::System::Xml::XmlQualifiedName* QnXsdMinLength;

  /// @brief Field QnXsdNotation, offset 0x378, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdNotation, put = __cordl_internal_set_QnXsdNotation))::System::Xml::XmlQualifiedName* QnXsdNotation;

  /// @brief Field QnXsdPattern, offset 0x408, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdPattern, put = __cordl_internal_set_QnXsdPattern))::System::Xml::XmlQualifiedName* QnXsdPattern;

  /// @brief Field QnXsdRedefine, offset 0x460, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdRedefine, put = __cordl_internal_set_QnXsdRedefine))::System::Xml::XmlQualifiedName* QnXsdRedefine;

  /// @brief Field QnXsdRestriction, offset 0x438, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdRestriction, put = __cordl_internal_set_QnXsdRestriction))::System::Xml::XmlQualifiedName* QnXsdRestriction;

  /// @brief Field QnXsdSchema, offset 0x310, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdSchema, put = __cordl_internal_set_QnXsdSchema))::System::Xml::XmlQualifiedName* QnXsdSchema;

  /// @brief Field QnXsdSelector, offset 0x3a8, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdSelector, put = __cordl_internal_set_QnXsdSelector))::System::Xml::XmlQualifiedName* QnXsdSelector;

  /// @brief Field QnXsdSequence, offset 0x368, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdSequence, put = __cordl_internal_set_QnXsdSequence))::System::Xml::XmlQualifiedName* QnXsdSequence;

  /// @brief Field QnXsdSimpleContent, offset 0x430, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdSimpleContent, put = __cordl_internal_set_QnXsdSimpleContent))::System::Xml::XmlQualifiedName* QnXsdSimpleContent;

  /// @brief Field QnXsdSimpleType, offset 0x380, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdSimpleType, put = __cordl_internal_set_QnXsdSimpleType))::System::Xml::XmlQualifiedName* QnXsdSimpleType;

  /// @brief Field QnXsdTotalDigits, offset 0x3d8, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdTotalDigits, put = __cordl_internal_set_QnXsdTotalDigits))::System::Xml::XmlQualifiedName* QnXsdTotalDigits;

  /// @brief Field QnXsdUnion, offset 0x448, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdUnion, put = __cordl_internal_set_QnXsdUnion))::System::Xml::XmlQualifiedName* QnXsdUnion;

  /// @brief Field QnXsdUnique, offset 0x390, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdUnique, put = __cordl_internal_set_QnXsdUnique))::System::Xml::XmlQualifiedName* QnXsdUnique;

  /// @brief Field QnXsdWhiteSpace, offset 0x458, size 0x8
  __declspec(property(get = __cordl_internal_get_QnXsdWhiteSpace, put = __cordl_internal_set_QnXsdWhiteSpace))::System::Xml::XmlQualifiedName* QnXsdWhiteSpace;

  /// @brief Field QnYes, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_QnYes, put = __cordl_internal_set_QnYes))::System::Xml::XmlQualifiedName* QnYes;

  /// @brief Field TokenToQName, offset 0x470, size 0x8
  __declspec(property(get = __cordl_internal_get_TokenToQName,
                      put = __cordl_internal_set_TokenToQName))::ArrayW<::System::Xml::XmlQualifiedName*, ::Array<::System::Xml::XmlQualifiedName*>*> TokenToQName;

  /// @brief Field XdrSchema, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_XdrSchema, put = __cordl_internal_set_XdrSchema))::StringW XdrSchema;

  /// @brief Field XsdSchema, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_XsdSchema, put = __cordl_internal_set_XsdSchema))::StringW XsdSchema;

  /// @brief Field XsiNil, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_XsiNil, put = __cordl_internal_set_XsiNil))::StringW XsiNil;

  /// @brief Field XsiNoNamespaceSchemaLocation, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_XsiNoNamespaceSchemaLocation, put = __cordl_internal_set_XsiNoNamespaceSchemaLocation))::StringW XsiNoNamespaceSchemaLocation;

  /// @brief Field XsiSchemaLocation, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_XsiSchemaLocation, put = __cordl_internal_set_XsiSchemaLocation))::StringW XsiSchemaLocation;

  /// @brief Field XsiType, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_XsiType, put = __cordl_internal_set_XsiType))::StringW XsiType;

  /// @brief Field nameTable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_nameTable, put = __cordl_internal_set_nameTable))::System::Xml::XmlNameTable* nameTable;

  /// @brief Method CreateTokenToQNameTable, addr 0x2cecd28, size 0x196c, virtual false, abstract: false, final false
  inline void CreateTokenToQNameTable();

  /// @brief Method IsXDRRoot, addr 0x2cee744, size 0x50, virtual false, abstract: false, final false
  inline bool IsXDRRoot(::StringW localName, ::StringW ns);

  /// @brief Method IsXSDRoot, addr 0x2cee6f4, size 0x50, virtual false, abstract: false, final false
  inline bool IsXSDRoot(::StringW localName, ::StringW ns);

  static inline ::System::Xml::Schema::SchemaNames* New_ctor(::System::Xml::XmlNameTable* nameTable);

  /// @brief Method SchemaTypeFromRoot, addr 0x2cee694, size 0x60, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaType SchemaTypeFromRoot(::StringW localName, ::StringW ns);

  constexpr ::StringW const& __cordl_internal_get_NsDataType() const;

  constexpr ::StringW& __cordl_internal_get_NsDataType();

  constexpr ::StringW const& __cordl_internal_get_NsDataTypeAlias() const;

  constexpr ::StringW& __cordl_internal_get_NsDataTypeAlias();

  constexpr ::StringW const& __cordl_internal_get_NsDataTypeOld() const;

  constexpr ::StringW& __cordl_internal_get_NsDataTypeOld();

  constexpr ::StringW const& __cordl_internal_get_NsXdr() const;

  constexpr ::StringW& __cordl_internal_get_NsXdr();

  constexpr ::StringW const& __cordl_internal_get_NsXdrAlias() const;

  constexpr ::StringW& __cordl_internal_get_NsXdrAlias();

  constexpr ::StringW const& __cordl_internal_get_NsXml() const;

  constexpr ::StringW& __cordl_internal_get_NsXml();

  constexpr ::StringW const& __cordl_internal_get_NsXmlNs() const;

  constexpr ::StringW& __cordl_internal_get_NsXmlNs();

  constexpr ::StringW const& __cordl_internal_get_NsXs() const;

  constexpr ::StringW& __cordl_internal_get_NsXs();

  constexpr ::StringW const& __cordl_internal_get_NsXsi() const;

  constexpr ::StringW& __cordl_internal_get_NsXsi();

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnAbstract();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnAbstract() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnAttributeFormDefault();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnAttributeFormDefault() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnBase();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnBase() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnBlock();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnBlock() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnBlockDefault();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnBlockDefault() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnClosed();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnClosed() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnContent();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnContent() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnDefault();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnDefault() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnDerivedBy();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnDerivedBy() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnDtDt();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnDtDt() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnDtMax();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnDtMax() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnDtMaxExclusive();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnDtMaxExclusive() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnDtMaxLength();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnDtMaxLength() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnDtMin();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnDtMin() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnDtMinExclusive();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnDtMinExclusive() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnDtMinLength();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnDtMinLength() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnDtType();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnDtType() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnDtValues();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnDtValues() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnElementFormDefault();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnElementFormDefault() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnEltOnly();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnEltOnly() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnEmpty();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnEmpty() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnEntities();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnEntities() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnEntity();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnEntity() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnEnumeration();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnEnumeration() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnFinal();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnFinal() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnFinalDefault();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnFinalDefault() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnFixed();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnFixed() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnForm();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnForm() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnID();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnID() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnIDRef();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnIDRef() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnIDRefs();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnIDRefs() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnInfinite();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnInfinite() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnItemType();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnItemType() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnMany();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnMany() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnMaxOccurs();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnMaxOccurs() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnMemberTypes();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnMemberTypes() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnMinOccurs();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnMinOccurs() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnMixed();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnMixed() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnModel();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnModel() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnName();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnName() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnNamespace();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnNamespace() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnNillable();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnNillable() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnNmToken();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnNmToken() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnNmTokens();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnNmTokens() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnNo();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnNo() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnOne();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnOne() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnOpen();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnOpen() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnOrder();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnOrder() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnPCData();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnPCData() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnProcessContents();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnProcessContents() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnPublic();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnPublic() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnRef();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnRef() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnRefer();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnRefer() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnRequired();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnRequired() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnSchemaLocation();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnSchemaLocation() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnSeq();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnSeq() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnSource() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnString();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnString() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnSubstitutionGroup();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnSubstitutionGroup() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnSystem();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnSystem() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnTargetNamespace();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnTargetNamespace() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnTextOnly();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnTextOnly() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnType();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnType() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnUse();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnUse() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnValue();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnValue() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnVersion();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnVersion() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXPath();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXPath() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXdrAliasSchema();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXdrAliasSchema() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXdrAttribute();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXdrAttribute() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXdrAttributeType();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXdrAttributeType() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXdrDataType();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXdrDataType() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXdrDescription();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXdrDescription() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXdrElement();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXdrElement() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXdrElementType();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXdrElementType() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXdrExtends();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXdrExtends() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXdrGroup();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXdrGroup() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXdrSchema();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXdrSchema() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXml();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXml() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXmlLang();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXmlLang() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXmlNs();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXmlNs() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdAll();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdAll() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdAnnotation();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdAnnotation() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdAny();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdAny() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdAnyAttribute();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdAnyAttribute() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdAnyType();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdAnyType() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdAppinfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdAppinfo() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdAttribute();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdAttribute() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdAttributeGroup();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdAttributeGroup() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdChoice();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdChoice() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdComplexContent();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdComplexContent() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdComplexType();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdComplexType() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdDocumentation();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdDocumentation() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdElement();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdElement() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdEnumeration();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdEnumeration() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdExtension();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdExtension() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdField();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdField() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdFractionDigits();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdFractionDigits() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdGroup();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdGroup() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdImport();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdImport() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdInclude();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdInclude() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdKey();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdKey() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdKeyRef();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdKeyRef() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdLength();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdLength() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdList();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdList() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdMaxExclusive();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdMaxExclusive() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdMaxInclusive();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdMaxInclusive() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdMaxLength();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdMaxLength() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdMinExclusive();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdMinExclusive() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdMinInclusive();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdMinInclusive() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdMinLength();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdMinLength() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdNotation();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdNotation() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdPattern();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdPattern() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdRedefine();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdRedefine() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdRestriction();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdRestriction() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdSchema();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdSchema() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdSelector();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdSelector() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdSequence();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdSequence() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdSimpleContent();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdSimpleContent() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdSimpleType();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdSimpleType() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdTotalDigits();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdTotalDigits() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdUnion();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdUnion() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdUnique();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdUnique() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnXsdWhiteSpace();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnXsdWhiteSpace() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_QnYes();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_QnYes() const;

  constexpr ::ArrayW<::System::Xml::XmlQualifiedName*, ::Array<::System::Xml::XmlQualifiedName*>*> const& __cordl_internal_get_TokenToQName() const;

  constexpr ::ArrayW<::System::Xml::XmlQualifiedName*, ::Array<::System::Xml::XmlQualifiedName*>*>& __cordl_internal_get_TokenToQName();

  constexpr ::StringW const& __cordl_internal_get_XdrSchema() const;

  constexpr ::StringW& __cordl_internal_get_XdrSchema();

  constexpr ::StringW const& __cordl_internal_get_XsdSchema() const;

  constexpr ::StringW& __cordl_internal_get_XsdSchema();

  constexpr ::StringW const& __cordl_internal_get_XsiNil() const;

  constexpr ::StringW& __cordl_internal_get_XsiNil();

  constexpr ::StringW const& __cordl_internal_get_XsiNoNamespaceSchemaLocation() const;

  constexpr ::StringW& __cordl_internal_get_XsiNoNamespaceSchemaLocation();

  constexpr ::StringW const& __cordl_internal_get_XsiSchemaLocation() const;

  constexpr ::StringW& __cordl_internal_get_XsiSchemaLocation();

  constexpr ::StringW const& __cordl_internal_get_XsiType() const;

  constexpr ::StringW& __cordl_internal_get_XsiType();

  constexpr ::System::Xml::XmlNameTable*& __cordl_internal_get_nameTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> const& __cordl_internal_get_nameTable() const;

  constexpr void __cordl_internal_set_NsDataType(::StringW value);

  constexpr void __cordl_internal_set_NsDataTypeAlias(::StringW value);

  constexpr void __cordl_internal_set_NsDataTypeOld(::StringW value);

  constexpr void __cordl_internal_set_NsXdr(::StringW value);

  constexpr void __cordl_internal_set_NsXdrAlias(::StringW value);

  constexpr void __cordl_internal_set_NsXml(::StringW value);

  constexpr void __cordl_internal_set_NsXmlNs(::StringW value);

  constexpr void __cordl_internal_set_NsXs(::StringW value);

  constexpr void __cordl_internal_set_NsXsi(::StringW value);

  constexpr void __cordl_internal_set_QnAbstract(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnAttributeFormDefault(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnBase(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnBlock(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnBlockDefault(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnClosed(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnContent(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnDefault(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnDerivedBy(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnDtDt(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnDtMax(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnDtMaxExclusive(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnDtMaxLength(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnDtMin(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnDtMinExclusive(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnDtMinLength(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnDtType(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnDtValues(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnElementFormDefault(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnEltOnly(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnEmpty(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnEntities(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnEntity(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnEnumeration(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnFinal(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnFinalDefault(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnFixed(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnForm(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnID(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnIDRef(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnIDRefs(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnInfinite(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnItemType(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnMany(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnMaxOccurs(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnMemberTypes(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnMinOccurs(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnMixed(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnModel(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnName(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnNamespace(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnNillable(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnNmToken(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnNmTokens(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnNo(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnOne(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnOpen(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnOrder(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnPCData(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnProcessContents(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnPublic(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnRef(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnRefer(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnRequired(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnSchemaLocation(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnSeq(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnSource(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnString(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnSubstitutionGroup(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnSystem(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnTargetNamespace(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnTextOnly(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnType(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnUse(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnValue(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnVersion(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXPath(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXdrAliasSchema(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXdrAttribute(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXdrAttributeType(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXdrDataType(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXdrDescription(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXdrElement(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXdrElementType(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXdrExtends(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXdrGroup(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXdrSchema(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXml(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXmlLang(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXmlNs(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdAll(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdAnnotation(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdAny(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdAnyAttribute(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdAnyType(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdAppinfo(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdAttribute(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdAttributeGroup(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdChoice(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdComplexContent(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdComplexType(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdDocumentation(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdElement(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdEnumeration(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdExtension(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdField(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdFractionDigits(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdGroup(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdImport(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdInclude(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdKey(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdKeyRef(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdLength(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdList(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdMaxExclusive(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdMaxInclusive(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdMaxLength(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdMinExclusive(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdMinInclusive(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdMinLength(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdNotation(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdPattern(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdRedefine(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdRestriction(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdSchema(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdSelector(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdSequence(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdSimpleContent(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdSimpleType(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdTotalDigits(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdUnion(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdUnique(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnXsdWhiteSpace(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_QnYes(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_TokenToQName(::ArrayW<::System::Xml::XmlQualifiedName*, ::Array<::System::Xml::XmlQualifiedName*>*> value);

  constexpr void __cordl_internal_set_XdrSchema(::StringW value);

  constexpr void __cordl_internal_set_XsdSchema(::StringW value);

  constexpr void __cordl_internal_set_XsiNil(::StringW value);

  constexpr void __cordl_internal_set_XsiNoNamespaceSchemaLocation(::StringW value);

  constexpr void __cordl_internal_set_XsiSchemaLocation(::StringW value);

  constexpr void __cordl_internal_set_XsiType(::StringW value);

  constexpr void __cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value);

  /// @brief Method .ctor, addr 0x2cea250, size 0x2ad8, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNameTable* nameTable);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SchemaNames();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SchemaNames", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SchemaNames(SchemaNames&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SchemaNames", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SchemaNames(SchemaNames const&) = delete;

  /// @brief Field nameTable, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlNameTable* ___nameTable;

  /// @brief Field NsDataType, offset: 0x18, size: 0x8, def value: None
  ::StringW ___NsDataType;

  /// @brief Field NsDataTypeAlias, offset: 0x20, size: 0x8, def value: None
  ::StringW ___NsDataTypeAlias;

  /// @brief Field NsDataTypeOld, offset: 0x28, size: 0x8, def value: None
  ::StringW ___NsDataTypeOld;

  /// @brief Field NsXml, offset: 0x30, size: 0x8, def value: None
  ::StringW ___NsXml;

  /// @brief Field NsXmlNs, offset: 0x38, size: 0x8, def value: None
  ::StringW ___NsXmlNs;

  /// @brief Field NsXdr, offset: 0x40, size: 0x8, def value: None
  ::StringW ___NsXdr;

  /// @brief Field NsXdrAlias, offset: 0x48, size: 0x8, def value: None
  ::StringW ___NsXdrAlias;

  /// @brief Field NsXs, offset: 0x50, size: 0x8, def value: None
  ::StringW ___NsXs;

  /// @brief Field NsXsi, offset: 0x58, size: 0x8, def value: None
  ::StringW ___NsXsi;

  /// @brief Field XsiType, offset: 0x60, size: 0x8, def value: None
  ::StringW ___XsiType;

  /// @brief Field XsiNil, offset: 0x68, size: 0x8, def value: None
  ::StringW ___XsiNil;

  /// @brief Field XsiSchemaLocation, offset: 0x70, size: 0x8, def value: None
  ::StringW ___XsiSchemaLocation;

  /// @brief Field XsiNoNamespaceSchemaLocation, offset: 0x78, size: 0x8, def value: None
  ::StringW ___XsiNoNamespaceSchemaLocation;

  /// @brief Field XsdSchema, offset: 0x80, size: 0x8, def value: None
  ::StringW ___XsdSchema;

  /// @brief Field XdrSchema, offset: 0x88, size: 0x8, def value: None
  ::StringW ___XdrSchema;

  /// @brief Field QnPCData, offset: 0x90, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnPCData;

  /// @brief Field QnXml, offset: 0x98, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXml;

  /// @brief Field QnXmlNs, offset: 0xa0, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXmlNs;

  /// @brief Field QnDtDt, offset: 0xa8, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnDtDt;

  /// @brief Field QnXmlLang, offset: 0xb0, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXmlLang;

  /// @brief Field QnName, offset: 0xb8, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnName;

  /// @brief Field QnType, offset: 0xc0, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnType;

  /// @brief Field QnMaxOccurs, offset: 0xc8, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnMaxOccurs;

  /// @brief Field QnMinOccurs, offset: 0xd0, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnMinOccurs;

  /// @brief Field QnInfinite, offset: 0xd8, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnInfinite;

  /// @brief Field QnModel, offset: 0xe0, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnModel;

  /// @brief Field QnOpen, offset: 0xe8, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnOpen;

  /// @brief Field QnClosed, offset: 0xf0, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnClosed;

  /// @brief Field QnContent, offset: 0xf8, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnContent;

  /// @brief Field QnMixed, offset: 0x100, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnMixed;

  /// @brief Field QnEmpty, offset: 0x108, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnEmpty;

  /// @brief Field QnEltOnly, offset: 0x110, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnEltOnly;

  /// @brief Field QnTextOnly, offset: 0x118, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnTextOnly;

  /// @brief Field QnOrder, offset: 0x120, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnOrder;

  /// @brief Field QnSeq, offset: 0x128, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnSeq;

  /// @brief Field QnOne, offset: 0x130, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnOne;

  /// @brief Field QnMany, offset: 0x138, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnMany;

  /// @brief Field QnRequired, offset: 0x140, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnRequired;

  /// @brief Field QnYes, offset: 0x148, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnYes;

  /// @brief Field QnNo, offset: 0x150, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnNo;

  /// @brief Field QnString, offset: 0x158, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnString;

  /// @brief Field QnID, offset: 0x160, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnID;

  /// @brief Field QnIDRef, offset: 0x168, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnIDRef;

  /// @brief Field QnIDRefs, offset: 0x170, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnIDRefs;

  /// @brief Field QnEntity, offset: 0x178, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnEntity;

  /// @brief Field QnEntities, offset: 0x180, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnEntities;

  /// @brief Field QnNmToken, offset: 0x188, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnNmToken;

  /// @brief Field QnNmTokens, offset: 0x190, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnNmTokens;

  /// @brief Field QnEnumeration, offset: 0x198, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnEnumeration;

  /// @brief Field QnDefault, offset: 0x1a0, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnDefault;

  /// @brief Field QnXdrSchema, offset: 0x1a8, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXdrSchema;

  /// @brief Field QnXdrElementType, offset: 0x1b0, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXdrElementType;

  /// @brief Field QnXdrElement, offset: 0x1b8, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXdrElement;

  /// @brief Field QnXdrGroup, offset: 0x1c0, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXdrGroup;

  /// @brief Field QnXdrAttributeType, offset: 0x1c8, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXdrAttributeType;

  /// @brief Field QnXdrAttribute, offset: 0x1d0, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXdrAttribute;

  /// @brief Field QnXdrDataType, offset: 0x1d8, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXdrDataType;

  /// @brief Field QnXdrDescription, offset: 0x1e0, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXdrDescription;

  /// @brief Field QnXdrExtends, offset: 0x1e8, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXdrExtends;

  /// @brief Field QnXdrAliasSchema, offset: 0x1f0, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXdrAliasSchema;

  /// @brief Field QnDtType, offset: 0x1f8, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnDtType;

  /// @brief Field QnDtValues, offset: 0x200, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnDtValues;

  /// @brief Field QnDtMaxLength, offset: 0x208, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnDtMaxLength;

  /// @brief Field QnDtMinLength, offset: 0x210, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnDtMinLength;

  /// @brief Field QnDtMax, offset: 0x218, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnDtMax;

  /// @brief Field QnDtMin, offset: 0x220, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnDtMin;

  /// @brief Field QnDtMinExclusive, offset: 0x228, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnDtMinExclusive;

  /// @brief Field QnDtMaxExclusive, offset: 0x230, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnDtMaxExclusive;

  /// @brief Field QnTargetNamespace, offset: 0x238, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnTargetNamespace;

  /// @brief Field QnVersion, offset: 0x240, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnVersion;

  /// @brief Field QnFinalDefault, offset: 0x248, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnFinalDefault;

  /// @brief Field QnBlockDefault, offset: 0x250, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnBlockDefault;

  /// @brief Field QnFixed, offset: 0x258, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnFixed;

  /// @brief Field QnAbstract, offset: 0x260, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnAbstract;

  /// @brief Field QnBlock, offset: 0x268, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnBlock;

  /// @brief Field QnSubstitutionGroup, offset: 0x270, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnSubstitutionGroup;

  /// @brief Field QnFinal, offset: 0x278, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnFinal;

  /// @brief Field QnNillable, offset: 0x280, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnNillable;

  /// @brief Field QnRef, offset: 0x288, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnRef;

  /// @brief Field QnBase, offset: 0x290, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnBase;

  /// @brief Field QnDerivedBy, offset: 0x298, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnDerivedBy;

  /// @brief Field QnNamespace, offset: 0x2a0, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnNamespace;

  /// @brief Field QnProcessContents, offset: 0x2a8, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnProcessContents;

  /// @brief Field QnRefer, offset: 0x2b0, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnRefer;

  /// @brief Field QnPublic, offset: 0x2b8, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnPublic;

  /// @brief Field QnSystem, offset: 0x2c0, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnSystem;

  /// @brief Field QnSchemaLocation, offset: 0x2c8, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnSchemaLocation;

  /// @brief Field QnValue, offset: 0x2d0, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnValue;

  /// @brief Field QnUse, offset: 0x2d8, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnUse;

  /// @brief Field QnForm, offset: 0x2e0, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnForm;

  /// @brief Field QnElementFormDefault, offset: 0x2e8, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnElementFormDefault;

  /// @brief Field QnAttributeFormDefault, offset: 0x2f0, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnAttributeFormDefault;

  /// @brief Field QnItemType, offset: 0x2f8, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnItemType;

  /// @brief Field QnMemberTypes, offset: 0x300, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnMemberTypes;

  /// @brief Field QnXPath, offset: 0x308, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXPath;

  /// @brief Field QnXsdSchema, offset: 0x310, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdSchema;

  /// @brief Field QnXsdAnnotation, offset: 0x318, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdAnnotation;

  /// @brief Field QnXsdInclude, offset: 0x320, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdInclude;

  /// @brief Field QnXsdImport, offset: 0x328, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdImport;

  /// @brief Field QnXsdElement, offset: 0x330, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdElement;

  /// @brief Field QnXsdAttribute, offset: 0x338, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdAttribute;

  /// @brief Field QnXsdAttributeGroup, offset: 0x340, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdAttributeGroup;

  /// @brief Field QnXsdAnyAttribute, offset: 0x348, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdAnyAttribute;

  /// @brief Field QnXsdGroup, offset: 0x350, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdGroup;

  /// @brief Field QnXsdAll, offset: 0x358, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdAll;

  /// @brief Field QnXsdChoice, offset: 0x360, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdChoice;

  /// @brief Field QnXsdSequence, offset: 0x368, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdSequence;

  /// @brief Field QnXsdAny, offset: 0x370, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdAny;

  /// @brief Field QnXsdNotation, offset: 0x378, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdNotation;

  /// @brief Field QnXsdSimpleType, offset: 0x380, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdSimpleType;

  /// @brief Field QnXsdComplexType, offset: 0x388, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdComplexType;

  /// @brief Field QnXsdUnique, offset: 0x390, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdUnique;

  /// @brief Field QnXsdKey, offset: 0x398, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdKey;

  /// @brief Field QnXsdKeyRef, offset: 0x3a0, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdKeyRef;

  /// @brief Field QnXsdSelector, offset: 0x3a8, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdSelector;

  /// @brief Field QnXsdField, offset: 0x3b0, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdField;

  /// @brief Field QnXsdMinExclusive, offset: 0x3b8, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdMinExclusive;

  /// @brief Field QnXsdMinInclusive, offset: 0x3c0, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdMinInclusive;

  /// @brief Field QnXsdMaxInclusive, offset: 0x3c8, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdMaxInclusive;

  /// @brief Field QnXsdMaxExclusive, offset: 0x3d0, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdMaxExclusive;

  /// @brief Field QnXsdTotalDigits, offset: 0x3d8, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdTotalDigits;

  /// @brief Field QnXsdFractionDigits, offset: 0x3e0, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdFractionDigits;

  /// @brief Field QnXsdLength, offset: 0x3e8, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdLength;

  /// @brief Field QnXsdMinLength, offset: 0x3f0, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdMinLength;

  /// @brief Field QnXsdMaxLength, offset: 0x3f8, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdMaxLength;

  /// @brief Field QnXsdEnumeration, offset: 0x400, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdEnumeration;

  /// @brief Field QnXsdPattern, offset: 0x408, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdPattern;

  /// @brief Field QnXsdDocumentation, offset: 0x410, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdDocumentation;

  /// @brief Field QnXsdAppinfo, offset: 0x418, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdAppinfo;

  /// @brief Field QnSource, offset: 0x420, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnSource;

  /// @brief Field QnXsdComplexContent, offset: 0x428, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdComplexContent;

  /// @brief Field QnXsdSimpleContent, offset: 0x430, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdSimpleContent;

  /// @brief Field QnXsdRestriction, offset: 0x438, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdRestriction;

  /// @brief Field QnXsdExtension, offset: 0x440, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdExtension;

  /// @brief Field QnXsdUnion, offset: 0x448, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdUnion;

  /// @brief Field QnXsdList, offset: 0x450, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdList;

  /// @brief Field QnXsdWhiteSpace, offset: 0x458, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdWhiteSpace;

  /// @brief Field QnXsdRedefine, offset: 0x460, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdRedefine;

  /// @brief Field QnXsdAnyType, offset: 0x468, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___QnXsdAnyType;

  /// @brief Field TokenToQName, offset: 0x470, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlQualifiedName*, ::Array<::System::Xml::XmlQualifiedName*>*> ___TokenToQName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::SchemaNames, 0x478>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___nameTable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___NsDataType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___NsDataTypeAlias) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___NsDataTypeOld) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___NsXml) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___NsXmlNs) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___NsXdr) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___NsXdrAlias) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___NsXs) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___NsXsi) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___XsiType) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___XsiNil) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___XsiSchemaLocation) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___XsiNoNamespaceSchemaLocation) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___XsdSchema) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___XdrSchema) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnPCData) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXml) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXmlNs) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnDtDt) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXmlLang) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnName) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnType) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnMaxOccurs) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnMinOccurs) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnInfinite) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnModel) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnOpen) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnClosed) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnContent) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnMixed) == 0x100, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnEmpty) == 0x108, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnEltOnly) == 0x110, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnTextOnly) == 0x118, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnOrder) == 0x120, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnSeq) == 0x128, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnOne) == 0x130, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnMany) == 0x138, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnRequired) == 0x140, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnYes) == 0x148, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnNo) == 0x150, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnString) == 0x158, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnID) == 0x160, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnIDRef) == 0x168, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnIDRefs) == 0x170, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnEntity) == 0x178, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnEntities) == 0x180, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnNmToken) == 0x188, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnNmTokens) == 0x190, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnEnumeration) == 0x198, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnDefault) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXdrSchema) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXdrElementType) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXdrElement) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXdrGroup) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXdrAttributeType) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXdrAttribute) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXdrDataType) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXdrDescription) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXdrExtends) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXdrAliasSchema) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnDtType) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnDtValues) == 0x200, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnDtMaxLength) == 0x208, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnDtMinLength) == 0x210, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnDtMax) == 0x218, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnDtMin) == 0x220, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnDtMinExclusive) == 0x228, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnDtMaxExclusive) == 0x230, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnTargetNamespace) == 0x238, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnVersion) == 0x240, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnFinalDefault) == 0x248, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnBlockDefault) == 0x250, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnFixed) == 0x258, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnAbstract) == 0x260, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnBlock) == 0x268, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnSubstitutionGroup) == 0x270, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnFinal) == 0x278, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnNillable) == 0x280, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnRef) == 0x288, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnBase) == 0x290, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnDerivedBy) == 0x298, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnNamespace) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnProcessContents) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnRefer) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnPublic) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnSystem) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnSchemaLocation) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnValue) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnUse) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnForm) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnElementFormDefault) == 0x2e8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnAttributeFormDefault) == 0x2f0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnItemType) == 0x2f8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnMemberTypes) == 0x300, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXPath) == 0x308, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdSchema) == 0x310, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdAnnotation) == 0x318, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdInclude) == 0x320, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdImport) == 0x328, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdElement) == 0x330, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdAttribute) == 0x338, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdAttributeGroup) == 0x340, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdAnyAttribute) == 0x348, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdGroup) == 0x350, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdAll) == 0x358, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdChoice) == 0x360, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdSequence) == 0x368, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdAny) == 0x370, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdNotation) == 0x378, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdSimpleType) == 0x380, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdComplexType) == 0x388, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdUnique) == 0x390, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdKey) == 0x398, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdKeyRef) == 0x3a0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdSelector) == 0x3a8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdField) == 0x3b0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdMinExclusive) == 0x3b8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdMinInclusive) == 0x3c0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdMaxInclusive) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdMaxExclusive) == 0x3d0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdTotalDigits) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdFractionDigits) == 0x3e0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdLength) == 0x3e8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdMinLength) == 0x3f0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdMaxLength) == 0x3f8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdEnumeration) == 0x400, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdPattern) == 0x408, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdDocumentation) == 0x410, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdAppinfo) == 0x418, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnSource) == 0x420, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdComplexContent) == 0x428, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdSimpleContent) == 0x430, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdRestriction) == 0x438, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdExtension) == 0x440, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdUnion) == 0x448, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdList) == 0x450, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdWhiteSpace) == 0x458, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdRedefine) == 0x460, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___QnXsdAnyType) == 0x468, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaNames, ___TokenToQName) == 0x470, "Offset mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__SchemaNames__Token, "System.Xml.Schema", "SchemaNames/Token");
NEED_NO_BOX(::System::Xml::Schema::SchemaNames);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaNames*, "System.Xml.Schema", "SchemaNames");
