#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__DtdParser_def.hpp"
#include "System/Xml/zzzz__LineInfo_def.hpp"
#include "System/Xml/zzzz__XmlCharType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DtdParser)
namespace System::Xml::Schema {
class SchemaElementDecl;
}
namespace System::Xml {
struct __DtdParser__Token;
}
namespace System::Xml::Schema {
class ParticleContentValidator;
}
namespace System::Xml {
struct __DtdParser__ScanningFunction;
}
namespace System::Xml {
class IDtdParserAdapter;
}
namespace System::Xml::Schema {
class SchemaAttDef;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml {
class IDtdParser;
}
namespace System::Xml::Schema {
class XmlSchemaException;
}
namespace System::Xml {
struct __DtdParser__LiteralType;
}
namespace System::Xml {
class __DtdParser__ParseElementOnlyContent_LocalFrame;
}
namespace System::Xml::Schema {
struct XmlSeverityType;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Xml {
class __DtdParser__UndeclaredNotation;
}
namespace System::Xml {
class IDtdParserAdapterWithValidation;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml::Schema {
class SchemaInfo;
}
namespace System::Xml::Schema {
class SchemaEntity;
}
namespace System::Xml {
class IDtdInfo;
}
// Forward declare root types
namespace System::Xml {
struct __DtdParser__LiteralType;
}
namespace System::Xml {
struct __DtdParser__ScanningFunction;
}
namespace System::Xml {
struct __DtdParser__Token;
}
namespace System::Xml {
class DtdParser;
}
namespace System::Xml {
class __DtdParser__ParseElementOnlyContent_LocalFrame;
}
namespace System::Xml {
class __DtdParser__UndeclaredNotation;
}
// Write type traits
MARK_VAL_T(::System::Xml::__DtdParser__LiteralType);
MARK_VAL_T(::System::Xml::__DtdParser__ScanningFunction);
MARK_VAL_T(::System::Xml::__DtdParser__Token);
MARK_REF_PTR_T(::System::Xml::DtdParser);
MARK_REF_PTR_T(::System::Xml::__DtdParser__ParseElementOnlyContent_LocalFrame);
MARK_REF_PTR_T(::System::Xml::__DtdParser__UndeclaredNotation);
// Type: ::Token
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11536))
// CS Name: ::DtdParser::Token
struct CORDL_TYPE __DtdParser__Token {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DtdParser__Token_Unwrapped
  enum struct ____DtdParser__Token_Unwrapped : int32_t {
    __E_CDATA = static_cast<int32_t>(0x0),
    __E_ID = static_cast<int32_t>(0x1),
    __E_IDREF = static_cast<int32_t>(0x2),
    __E_IDREFS = static_cast<int32_t>(0x3),
    __E_ENTITY = static_cast<int32_t>(0x4),
    __E_ENTITIES = static_cast<int32_t>(0x5),
    __E_NMTOKEN = static_cast<int32_t>(0x6),
    __E_NMTOKENS = static_cast<int32_t>(0x7),
    __E_NOTATION = static_cast<int32_t>(0x8),
    __E_None = static_cast<int32_t>(0x9),
    __E_PERef = static_cast<int32_t>(0xa),
    __E_AttlistDecl = static_cast<int32_t>(0xb),
    __E_ElementDecl = static_cast<int32_t>(0xc),
    __E_EntityDecl = static_cast<int32_t>(0xd),
    __E_NotationDecl = static_cast<int32_t>(0xe),
    __E_Comment = static_cast<int32_t>(0xf),
    __E_PI = static_cast<int32_t>(0x10),
    __E_CondSectionStart = static_cast<int32_t>(0x11),
    __E_CondSectionEnd = static_cast<int32_t>(0x12),
    __E_Eof = static_cast<int32_t>(0x13),
    __E_REQUIRED = static_cast<int32_t>(0x14),
    __E_IMPLIED = static_cast<int32_t>(0x15),
    __E_FIXED = static_cast<int32_t>(0x16),
    __E_QName = static_cast<int32_t>(0x17),
    __E_Name = static_cast<int32_t>(0x18),
    __E_Nmtoken = static_cast<int32_t>(0x19),
    __E_Quote = static_cast<int32_t>(0x1a),
    __E_LeftParen = static_cast<int32_t>(0x1b),
    __E_RightParen = static_cast<int32_t>(0x1c),
    __E_GreaterThan = static_cast<int32_t>(0x1d),
    __E_Or = static_cast<int32_t>(0x1e),
    __E_LeftBracket = static_cast<int32_t>(0x1f),
    __E_RightBracket = static_cast<int32_t>(0x20),
    __E_PUBLIC = static_cast<int32_t>(0x21),
    __E_SYSTEM = static_cast<int32_t>(0x22),
    __E_Literal = static_cast<int32_t>(0x23),
    __E_DOCTYPE = static_cast<int32_t>(0x24),
    __E_NData = static_cast<int32_t>(0x25),
    __E_Percent = static_cast<int32_t>(0x26),
    __E_Star = static_cast<int32_t>(0x27),
    __E_QMark = static_cast<int32_t>(0x28),
    __E_Plus = static_cast<int32_t>(0x29),
    __E_PCDATA = static_cast<int32_t>(0x2a),
    __E_Comma = static_cast<int32_t>(0x2b),
    __E_ANY = static_cast<int32_t>(0x2c),
    __E_EMPTY = static_cast<int32_t>(0x2d),
    __E_IGNORE = static_cast<int32_t>(0x2e),
    __E_INCLUDE = static_cast<int32_t>(0x2f),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DtdParser__Token_Unwrapped() const noexcept {
    return static_cast<____DtdParser__Token_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DtdParser__Token(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DtdParser__Token();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field CDATA value: static_cast<int32_t>(0x0)
  static ::System::Xml::__DtdParser__Token const CDATA;

  /// @brief Field ID value: static_cast<int32_t>(0x1)
  static ::System::Xml::__DtdParser__Token const _cordl_ID;

  /// @brief Field IDREF value: static_cast<int32_t>(0x2)
  static ::System::Xml::__DtdParser__Token const IDREF;

  /// @brief Field IDREFS value: static_cast<int32_t>(0x3)
  static ::System::Xml::__DtdParser__Token const IDREFS;

  /// @brief Field ENTITY value: static_cast<int32_t>(0x4)
  static ::System::Xml::__DtdParser__Token const ENTITY;

  /// @brief Field ENTITIES value: static_cast<int32_t>(0x5)
  static ::System::Xml::__DtdParser__Token const ENTITIES;

  /// @brief Field NMTOKEN value: static_cast<int32_t>(0x6)
  static ::System::Xml::__DtdParser__Token const NMTOKEN;

  /// @brief Field NMTOKENS value: static_cast<int32_t>(0x7)
  static ::System::Xml::__DtdParser__Token const NMTOKENS;

  /// @brief Field NOTATION value: static_cast<int32_t>(0x8)
  static ::System::Xml::__DtdParser__Token const NOTATION;

  /// @brief Field None value: static_cast<int32_t>(0x9)
  static ::System::Xml::__DtdParser__Token const None;

  /// @brief Field PERef value: static_cast<int32_t>(0xa)
  static ::System::Xml::__DtdParser__Token const PERef;

  /// @brief Field AttlistDecl value: static_cast<int32_t>(0xb)
  static ::System::Xml::__DtdParser__Token const AttlistDecl;

  /// @brief Field ElementDecl value: static_cast<int32_t>(0xc)
  static ::System::Xml::__DtdParser__Token const ElementDecl;

  /// @brief Field EntityDecl value: static_cast<int32_t>(0xd)
  static ::System::Xml::__DtdParser__Token const EntityDecl;

  /// @brief Field NotationDecl value: static_cast<int32_t>(0xe)
  static ::System::Xml::__DtdParser__Token const NotationDecl;

  /// @brief Field Comment value: static_cast<int32_t>(0xf)
  static ::System::Xml::__DtdParser__Token const Comment;

  /// @brief Field PI value: static_cast<int32_t>(0x10)
  static ::System::Xml::__DtdParser__Token const PI;

  /// @brief Field CondSectionStart value: static_cast<int32_t>(0x11)
  static ::System::Xml::__DtdParser__Token const CondSectionStart;

  /// @brief Field CondSectionEnd value: static_cast<int32_t>(0x12)
  static ::System::Xml::__DtdParser__Token const CondSectionEnd;

  /// @brief Field Eof value: static_cast<int32_t>(0x13)
  static ::System::Xml::__DtdParser__Token const Eof;

  /// @brief Field REQUIRED value: static_cast<int32_t>(0x14)
  static ::System::Xml::__DtdParser__Token const REQUIRED;

  /// @brief Field IMPLIED value: static_cast<int32_t>(0x15)
  static ::System::Xml::__DtdParser__Token const IMPLIED;

  /// @brief Field FIXED value: static_cast<int32_t>(0x16)
  static ::System::Xml::__DtdParser__Token const FIXED;

  /// @brief Field QName value: static_cast<int32_t>(0x17)
  static ::System::Xml::__DtdParser__Token const QName;

  /// @brief Field Name value: static_cast<int32_t>(0x18)
  static ::System::Xml::__DtdParser__Token const Name;

  /// @brief Field Nmtoken value: static_cast<int32_t>(0x19)
  static ::System::Xml::__DtdParser__Token const Nmtoken;

  /// @brief Field Quote value: static_cast<int32_t>(0x1a)
  static ::System::Xml::__DtdParser__Token const Quote;

  /// @brief Field LeftParen value: static_cast<int32_t>(0x1b)
  static ::System::Xml::__DtdParser__Token const LeftParen;

  /// @brief Field RightParen value: static_cast<int32_t>(0x1c)
  static ::System::Xml::__DtdParser__Token const RightParen;

  /// @brief Field GreaterThan value: static_cast<int32_t>(0x1d)
  static ::System::Xml::__DtdParser__Token const GreaterThan;

  /// @brief Field Or value: static_cast<int32_t>(0x1e)
  static ::System::Xml::__DtdParser__Token const Or;

  /// @brief Field LeftBracket value: static_cast<int32_t>(0x1f)
  static ::System::Xml::__DtdParser__Token const LeftBracket;

  /// @brief Field RightBracket value: static_cast<int32_t>(0x20)
  static ::System::Xml::__DtdParser__Token const RightBracket;

  /// @brief Field PUBLIC value: static_cast<int32_t>(0x21)
  static ::System::Xml::__DtdParser__Token const PUBLIC;

  /// @brief Field SYSTEM value: static_cast<int32_t>(0x22)
  static ::System::Xml::__DtdParser__Token const SYSTEM;

  /// @brief Field Literal value: static_cast<int32_t>(0x23)
  static ::System::Xml::__DtdParser__Token const Literal;

  /// @brief Field DOCTYPE value: static_cast<int32_t>(0x24)
  static ::System::Xml::__DtdParser__Token const DOCTYPE;

  /// @brief Field NData value: static_cast<int32_t>(0x25)
  static ::System::Xml::__DtdParser__Token const NData;

  /// @brief Field Percent value: static_cast<int32_t>(0x26)
  static ::System::Xml::__DtdParser__Token const Percent;

  /// @brief Field Star value: static_cast<int32_t>(0x27)
  static ::System::Xml::__DtdParser__Token const Star;

  /// @brief Field QMark value: static_cast<int32_t>(0x28)
  static ::System::Xml::__DtdParser__Token const QMark;

  /// @brief Field Plus value: static_cast<int32_t>(0x29)
  static ::System::Xml::__DtdParser__Token const Plus;

  /// @brief Field PCDATA value: static_cast<int32_t>(0x2a)
  static ::System::Xml::__DtdParser__Token const PCDATA;

  /// @brief Field Comma value: static_cast<int32_t>(0x2b)
  static ::System::Xml::__DtdParser__Token const Comma;

  /// @brief Field ANY value: static_cast<int32_t>(0x2c)
  static ::System::Xml::__DtdParser__Token const ANY;

  /// @brief Field EMPTY value: static_cast<int32_t>(0x2d)
  static ::System::Xml::__DtdParser__Token const EMPTY;

  /// @brief Field IGNORE value: static_cast<int32_t>(0x2e)
  static ::System::Xml::__DtdParser__Token const IGNORE;

  /// @brief Field INCLUDE value: static_cast<int32_t>(0x2f)
  static ::System::Xml::__DtdParser__Token const INCLUDE;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__DtdParser__Token, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__DtdParser__Token, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml
// Type: ::ScanningFunction
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11537))
// CS Name: ::DtdParser::ScanningFunction
struct CORDL_TYPE __DtdParser__ScanningFunction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DtdParser__ScanningFunction_Unwrapped
  enum struct ____DtdParser__ScanningFunction_Unwrapped : int32_t {
    __E_SubsetContent = static_cast<int32_t>(0x0),
    __E_Name = static_cast<int32_t>(0x1),
    __E_QName = static_cast<int32_t>(0x2),
    __E_Nmtoken = static_cast<int32_t>(0x3),
    __E_Doctype1 = static_cast<int32_t>(0x4),
    __E_Doctype2 = static_cast<int32_t>(0x5),
    __E_Element1 = static_cast<int32_t>(0x6),
    __E_Element2 = static_cast<int32_t>(0x7),
    __E_Element3 = static_cast<int32_t>(0x8),
    __E_Element4 = static_cast<int32_t>(0x9),
    __E_Element5 = static_cast<int32_t>(0xa),
    __E_Element6 = static_cast<int32_t>(0xb),
    __E_Element7 = static_cast<int32_t>(0xc),
    __E_Attlist1 = static_cast<int32_t>(0xd),
    __E_Attlist2 = static_cast<int32_t>(0xe),
    __E_Attlist3 = static_cast<int32_t>(0xf),
    __E_Attlist4 = static_cast<int32_t>(0x10),
    __E_Attlist5 = static_cast<int32_t>(0x11),
    __E_Attlist6 = static_cast<int32_t>(0x12),
    __E_Attlist7 = static_cast<int32_t>(0x13),
    __E_Entity1 = static_cast<int32_t>(0x14),
    __E_Entity2 = static_cast<int32_t>(0x15),
    __E_Entity3 = static_cast<int32_t>(0x16),
    __E_Notation1 = static_cast<int32_t>(0x17),
    __E_CondSection1 = static_cast<int32_t>(0x18),
    __E_CondSection2 = static_cast<int32_t>(0x19),
    __E_CondSection3 = static_cast<int32_t>(0x1a),
    __E_Literal = static_cast<int32_t>(0x1b),
    __E_SystemId = static_cast<int32_t>(0x1c),
    __E_PublicId1 = static_cast<int32_t>(0x1d),
    __E_PublicId2 = static_cast<int32_t>(0x1e),
    __E_ClosingTag = static_cast<int32_t>(0x1f),
    __E_ParamEntitySpace = static_cast<int32_t>(0x20),
    __E_None = static_cast<int32_t>(0x21),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DtdParser__ScanningFunction_Unwrapped() const noexcept {
    return static_cast<____DtdParser__ScanningFunction_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DtdParser__ScanningFunction(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DtdParser__ScanningFunction();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field SubsetContent value: static_cast<int32_t>(0x0)
  static ::System::Xml::__DtdParser__ScanningFunction const SubsetContent;

  /// @brief Field Name value: static_cast<int32_t>(0x1)
  static ::System::Xml::__DtdParser__ScanningFunction const Name;

  /// @brief Field QName value: static_cast<int32_t>(0x2)
  static ::System::Xml::__DtdParser__ScanningFunction const QName;

  /// @brief Field Nmtoken value: static_cast<int32_t>(0x3)
  static ::System::Xml::__DtdParser__ScanningFunction const Nmtoken;

  /// @brief Field Doctype1 value: static_cast<int32_t>(0x4)
  static ::System::Xml::__DtdParser__ScanningFunction const Doctype1;

  /// @brief Field Doctype2 value: static_cast<int32_t>(0x5)
  static ::System::Xml::__DtdParser__ScanningFunction const Doctype2;

  /// @brief Field Element1 value: static_cast<int32_t>(0x6)
  static ::System::Xml::__DtdParser__ScanningFunction const Element1;

  /// @brief Field Element2 value: static_cast<int32_t>(0x7)
  static ::System::Xml::__DtdParser__ScanningFunction const Element2;

  /// @brief Field Element3 value: static_cast<int32_t>(0x8)
  static ::System::Xml::__DtdParser__ScanningFunction const Element3;

  /// @brief Field Element4 value: static_cast<int32_t>(0x9)
  static ::System::Xml::__DtdParser__ScanningFunction const Element4;

  /// @brief Field Element5 value: static_cast<int32_t>(0xa)
  static ::System::Xml::__DtdParser__ScanningFunction const Element5;

  /// @brief Field Element6 value: static_cast<int32_t>(0xb)
  static ::System::Xml::__DtdParser__ScanningFunction const Element6;

  /// @brief Field Element7 value: static_cast<int32_t>(0xc)
  static ::System::Xml::__DtdParser__ScanningFunction const Element7;

  /// @brief Field Attlist1 value: static_cast<int32_t>(0xd)
  static ::System::Xml::__DtdParser__ScanningFunction const Attlist1;

  /// @brief Field Attlist2 value: static_cast<int32_t>(0xe)
  static ::System::Xml::__DtdParser__ScanningFunction const Attlist2;

  /// @brief Field Attlist3 value: static_cast<int32_t>(0xf)
  static ::System::Xml::__DtdParser__ScanningFunction const Attlist3;

  /// @brief Field Attlist4 value: static_cast<int32_t>(0x10)
  static ::System::Xml::__DtdParser__ScanningFunction const Attlist4;

  /// @brief Field Attlist5 value: static_cast<int32_t>(0x11)
  static ::System::Xml::__DtdParser__ScanningFunction const Attlist5;

  /// @brief Field Attlist6 value: static_cast<int32_t>(0x12)
  static ::System::Xml::__DtdParser__ScanningFunction const Attlist6;

  /// @brief Field Attlist7 value: static_cast<int32_t>(0x13)
  static ::System::Xml::__DtdParser__ScanningFunction const Attlist7;

  /// @brief Field Entity1 value: static_cast<int32_t>(0x14)
  static ::System::Xml::__DtdParser__ScanningFunction const Entity1;

  /// @brief Field Entity2 value: static_cast<int32_t>(0x15)
  static ::System::Xml::__DtdParser__ScanningFunction const Entity2;

  /// @brief Field Entity3 value: static_cast<int32_t>(0x16)
  static ::System::Xml::__DtdParser__ScanningFunction const Entity3;

  /// @brief Field Notation1 value: static_cast<int32_t>(0x17)
  static ::System::Xml::__DtdParser__ScanningFunction const Notation1;

  /// @brief Field CondSection1 value: static_cast<int32_t>(0x18)
  static ::System::Xml::__DtdParser__ScanningFunction const CondSection1;

  /// @brief Field CondSection2 value: static_cast<int32_t>(0x19)
  static ::System::Xml::__DtdParser__ScanningFunction const CondSection2;

  /// @brief Field CondSection3 value: static_cast<int32_t>(0x1a)
  static ::System::Xml::__DtdParser__ScanningFunction const CondSection3;

  /// @brief Field Literal value: static_cast<int32_t>(0x1b)
  static ::System::Xml::__DtdParser__ScanningFunction const Literal;

  /// @brief Field SystemId value: static_cast<int32_t>(0x1c)
  static ::System::Xml::__DtdParser__ScanningFunction const SystemId;

  /// @brief Field PublicId1 value: static_cast<int32_t>(0x1d)
  static ::System::Xml::__DtdParser__ScanningFunction const PublicId1;

  /// @brief Field PublicId2 value: static_cast<int32_t>(0x1e)
  static ::System::Xml::__DtdParser__ScanningFunction const PublicId2;

  /// @brief Field ClosingTag value: static_cast<int32_t>(0x1f)
  static ::System::Xml::__DtdParser__ScanningFunction const ClosingTag;

  /// @brief Field ParamEntitySpace value: static_cast<int32_t>(0x20)
  static ::System::Xml::__DtdParser__ScanningFunction const ParamEntitySpace;

  /// @brief Field None value: static_cast<int32_t>(0x21)
  static ::System::Xml::__DtdParser__ScanningFunction const None;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__DtdParser__ScanningFunction, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__DtdParser__ScanningFunction, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml
// Type: ::LiteralType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11538))
// CS Name: ::DtdParser::LiteralType
struct CORDL_TYPE __DtdParser__LiteralType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DtdParser__LiteralType_Unwrapped
  enum struct ____DtdParser__LiteralType_Unwrapped : int32_t {
    __E_AttributeValue = static_cast<int32_t>(0x0),
    __E_EntityReplText = static_cast<int32_t>(0x1),
    __E_SystemOrPublicID = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DtdParser__LiteralType_Unwrapped() const noexcept {
    return static_cast<____DtdParser__LiteralType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DtdParser__LiteralType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DtdParser__LiteralType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field AttributeValue value: static_cast<int32_t>(0x0)
  static ::System::Xml::__DtdParser__LiteralType const AttributeValue;

  /// @brief Field EntityReplText value: static_cast<int32_t>(0x1)
  static ::System::Xml::__DtdParser__LiteralType const EntityReplText;

  /// @brief Field SystemOrPublicID value: static_cast<int32_t>(0x2)
  static ::System::Xml::__DtdParser__LiteralType const SystemOrPublicID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__DtdParser__LiteralType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__DtdParser__LiteralType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml
// Type: ::UndeclaredNotation
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11539))
// CS Name: ::DtdParser::UndeclaredNotation*
class CORDL_TYPE __DtdParser__UndeclaredNotation : public ::System::Object {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::StringW name;

  /// @brief Field lineNo, offset 0x18, size 0x4
  __declspec(property(get = __get_lineNo, put = __set_lineNo)) int32_t lineNo;

  /// @brief Field linePos, offset 0x1c, size 0x4
  __declspec(property(get = __get_linePos, put = __set_linePos)) int32_t linePos;

  /// @brief Field next, offset 0x20, size 0x8
  __declspec(property(get = __get_next, put = __set_next))::System::Xml::__DtdParser__UndeclaredNotation* next;

  constexpr ::StringW& __get_name();

  constexpr ::StringW const& __get_name() const;

  constexpr void __set_name(::StringW value);

  constexpr int32_t& __get_lineNo();

  constexpr int32_t const& __get_lineNo() const;

  constexpr void __set_lineNo(int32_t value);

  constexpr int32_t& __get_linePos();

  constexpr int32_t const& __get_linePos() const;

  constexpr void __set_linePos(int32_t value);

  constexpr ::System::Xml::__DtdParser__UndeclaredNotation*& __get_next();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::__DtdParser__UndeclaredNotation*> const& __get_next() const;

  constexpr void __set_next(::System::Xml::__DtdParser__UndeclaredNotation* value);

  static inline ::System::Xml::__DtdParser__UndeclaredNotation* New_ctor(::StringW name, int32_t lineNo, int32_t linePos);

  /// @brief Method .ctor, addr 0x289ca10, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, int32_t lineNo, int32_t linePos);

  // Ctor Parameters [CppParam { name: "", ty: "__DtdParser__UndeclaredNotation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DtdParser__UndeclaredNotation(__DtdParser__UndeclaredNotation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DtdParser__UndeclaredNotation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DtdParser__UndeclaredNotation(__DtdParser__UndeclaredNotation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DtdParser__UndeclaredNotation();

public:
  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field lineNo, offset: 0x18, size: 0x4, def value: None
  int32_t ___lineNo;

  /// @brief Field linePos, offset: 0x1c, size: 0x4, def value: None
  int32_t ___linePos;

  /// @brief Field next, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::__DtdParser__UndeclaredNotation* ___next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__DtdParser__UndeclaredNotation, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__DtdParser__UndeclaredNotation, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__DtdParser__UndeclaredNotation, ___lineNo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__DtdParser__UndeclaredNotation, ___linePos) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__DtdParser__UndeclaredNotation, ___next) == 0x20, "Offset mismatch!");

} // namespace System::Xml
// Type: ::ParseElementOnlyContent_LocalFrame
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(11536))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11540))
// CS Name: ::DtdParser::ParseElementOnlyContent_LocalFrame*
class CORDL_TYPE __DtdParser__ParseElementOnlyContent_LocalFrame : public ::System::Object {
public:
  // Declarations
  /// @brief Field startParenEntityId, offset 0x10, size 0x4
  __declspec(property(get = __get_startParenEntityId, put = __set_startParenEntityId)) int32_t startParenEntityId;

  /// @brief Field parsingSchema, offset 0x14, size 0x4
  __declspec(property(get = __get_parsingSchema, put = __set_parsingSchema))::System::Xml::__DtdParser__Token parsingSchema;

  constexpr int32_t& __get_startParenEntityId();

  constexpr int32_t const& __get_startParenEntityId() const;

  constexpr void __set_startParenEntityId(int32_t value);

  constexpr ::System::Xml::__DtdParser__Token& __get_parsingSchema();

  constexpr ::System::Xml::__DtdParser__Token const& __get_parsingSchema() const;

  constexpr void __set_parsingSchema(::System::Xml::__DtdParser__Token value);

  static inline ::System::Xml::__DtdParser__ParseElementOnlyContent_LocalFrame* New_ctor(int32_t startParentEntityIdParam);

  /// @brief Method .ctor, addr 0x289ca50, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int32_t startParentEntityIdParam);

  // Ctor Parameters [CppParam { name: "", ty: "__DtdParser__ParseElementOnlyContent_LocalFrame", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DtdParser__ParseElementOnlyContent_LocalFrame(__DtdParser__ParseElementOnlyContent_LocalFrame&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DtdParser__ParseElementOnlyContent_LocalFrame", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DtdParser__ParseElementOnlyContent_LocalFrame(__DtdParser__ParseElementOnlyContent_LocalFrame const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DtdParser__ParseElementOnlyContent_LocalFrame();

public:
  /// @brief Field startParenEntityId, offset: 0x10, size: 0x4, def value: None
  int32_t ___startParenEntityId;

  /// @brief Field parsingSchema, offset: 0x14, size: 0x4, def value: None
  ::System::Xml::__DtdParser__Token ___parsingSchema;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__DtdParser__ParseElementOnlyContent_LocalFrame, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__DtdParser__ParseElementOnlyContent_LocalFrame, ___startParenEntityId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__DtdParser__ParseElementOnlyContent_LocalFrame, ___parsingSchema) == 0x14, "Offset mismatch!");

} // namespace System::Xml
// Type: System.Xml::DtdParser
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 200, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(11544)), TypeDefinitionIndex(TypeDefinitionIndex(11537)),
// TypeDefinitionIndex(TypeDefinitionIndex(11532))} Self: TypeDefinitionIndex(TypeDefinitionIndex(11541)) CS Name: ::System.Xml::DtdParser*
class CORDL_TYPE DtdParser : public ::System::Object {
public:
  // Declarations
  using ParseElementOnlyContent_LocalFrame = ::System::Xml::__DtdParser__ParseElementOnlyContent_LocalFrame;

  using UndeclaredNotation = ::System::Xml::__DtdParser__UndeclaredNotation;

  using LiteralType = ::System::Xml::__DtdParser__LiteralType;

  using ScanningFunction = ::System::Xml::__DtdParser__ScanningFunction;

  using Token = ::System::Xml::__DtdParser__Token;

  /// @brief Field readerAdapter, offset 0x10, size 0x8
  __declspec(property(get = __get_readerAdapter, put = __set_readerAdapter))::System::Xml::IDtdParserAdapter* readerAdapter;

  /// @brief Field readerAdapterWithValidation, offset 0x18, size 0x8
  __declspec(property(get = __get_readerAdapterWithValidation, put = __set_readerAdapterWithValidation))::System::Xml::IDtdParserAdapterWithValidation* readerAdapterWithValidation;

  /// @brief Field nameTable, offset 0x20, size 0x8
  __declspec(property(get = __get_nameTable, put = __set_nameTable))::System::Xml::XmlNameTable* nameTable;

  /// @brief Field schemaInfo, offset 0x28, size 0x8
  __declspec(property(get = __get_schemaInfo, put = __set_schemaInfo))::System::Xml::Schema::SchemaInfo* schemaInfo;

  /// @brief Field xmlCharType, offset 0x30, size 0x8
  __declspec(property(get = __get_xmlCharType, put = __set_xmlCharType))::System::Xml::XmlCharType xmlCharType;

  /// @brief Field systemId, offset 0x38, size 0x8
  __declspec(property(get = __get_systemId, put = __set_systemId))::StringW systemId;

  /// @brief Field publicId, offset 0x40, size 0x8
  __declspec(property(get = __get_publicId, put = __set_publicId))::StringW publicId;

  /// @brief Field normalize, offset 0x48, size 0x1
  __declspec(property(get = __get_normalize, put = __set_normalize)) bool normalize;

  /// @brief Field validate, offset 0x49, size 0x1
  __declspec(property(get = __get_validate, put = __set_validate)) bool validate;

  /// @brief Field supportNamespaces, offset 0x4a, size 0x1
  __declspec(property(get = __get_supportNamespaces, put = __set_supportNamespaces)) bool supportNamespaces;

  /// @brief Field v1Compat, offset 0x4b, size 0x1
  __declspec(property(get = __get_v1Compat, put = __set_v1Compat)) bool v1Compat;

  /// @brief Field chars, offset 0x50, size 0x8
  __declspec(property(get = __get_chars, put = __set_chars))::ArrayW<char16_t, ::Array<char16_t>*> chars;

  /// @brief Field charsUsed, offset 0x58, size 0x4
  __declspec(property(get = __get_charsUsed, put = __set_charsUsed)) int32_t charsUsed;

  /// @brief Field curPos, offset 0x5c, size 0x4
  __declspec(property(get = __get_curPos, put = __set_curPos)) int32_t curPos;

  /// @brief Field scanningFunction, offset 0x60, size 0x4
  __declspec(property(get = __get_scanningFunction, put = __set_scanningFunction))::System::Xml::__DtdParser__ScanningFunction scanningFunction;

  /// @brief Field nextScaningFunction, offset 0x64, size 0x4
  __declspec(property(get = __get_nextScaningFunction, put = __set_nextScaningFunction))::System::Xml::__DtdParser__ScanningFunction nextScaningFunction;

  /// @brief Field savedScanningFunction, offset 0x68, size 0x4
  __declspec(property(get = __get_savedScanningFunction, put = __set_savedScanningFunction))::System::Xml::__DtdParser__ScanningFunction savedScanningFunction;

  /// @brief Field whitespaceSeen, offset 0x6c, size 0x1
  __declspec(property(get = __get_whitespaceSeen, put = __set_whitespaceSeen)) bool whitespaceSeen;

  /// @brief Field tokenStartPos, offset 0x70, size 0x4
  __declspec(property(get = __get_tokenStartPos, put = __set_tokenStartPos)) int32_t tokenStartPos;

  /// @brief Field colonPos, offset 0x74, size 0x4
  __declspec(property(get = __get_colonPos, put = __set_colonPos)) int32_t colonPos;

  /// @brief Field internalSubsetValueSb, offset 0x78, size 0x8
  __declspec(property(get = __get_internalSubsetValueSb, put = __set_internalSubsetValueSb))::System::Text::StringBuilder* internalSubsetValueSb;

  /// @brief Field externalEntitiesDepth, offset 0x80, size 0x4
  __declspec(property(get = __get_externalEntitiesDepth, put = __set_externalEntitiesDepth)) int32_t externalEntitiesDepth;

  /// @brief Field currentEntityId, offset 0x84, size 0x4
  __declspec(property(get = __get_currentEntityId, put = __set_currentEntityId)) int32_t currentEntityId;

  /// @brief Field freeFloatingDtd, offset 0x88, size 0x1
  __declspec(property(get = __get_freeFloatingDtd, put = __set_freeFloatingDtd)) bool freeFloatingDtd;

  /// @brief Field hasFreeFloatingInternalSubset, offset 0x89, size 0x1
  __declspec(property(get = __get_hasFreeFloatingInternalSubset, put = __set_hasFreeFloatingInternalSubset)) bool hasFreeFloatingInternalSubset;

  /// @brief Field stringBuilder, offset 0x90, size 0x8
  __declspec(property(get = __get_stringBuilder, put = __set_stringBuilder))::System::Text::StringBuilder* stringBuilder;

  /// @brief Field condSectionDepth, offset 0x98, size 0x4
  __declspec(property(get = __get_condSectionDepth, put = __set_condSectionDepth)) int32_t condSectionDepth;

  /// @brief Field literalLineInfo, offset 0x9c, size 0x8
  __declspec(property(get = __get_literalLineInfo, put = __set_literalLineInfo))::System::Xml::LineInfo literalLineInfo;

  /// @brief Field literalQuoteChar, offset 0xa4, size 0x2
  __declspec(property(get = __get_literalQuoteChar, put = __set_literalQuoteChar)) char16_t literalQuoteChar;

  /// @brief Field documentBaseUri, offset 0xa8, size 0x8
  __declspec(property(get = __get_documentBaseUri, put = __set_documentBaseUri))::StringW documentBaseUri;

  /// @brief Field externalDtdBaseUri, offset 0xb0, size 0x8
  __declspec(property(get = __get_externalDtdBaseUri, put = __set_externalDtdBaseUri))::StringW externalDtdBaseUri;

  /// @brief Field undeclaredNotations, offset 0xb8, size 0x8
  __declspec(property(get = __get_undeclaredNotations,
                      put = __set_undeclaredNotations))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::__DtdParser__UndeclaredNotation*>* undeclaredNotations;

  /// @brief Field condSectionEntityIds, offset 0xc0, size 0x8
  __declspec(property(get = __get_condSectionEntityIds, put = __set_condSectionEntityIds))::ArrayW<int32_t, ::Array<int32_t>*> condSectionEntityIds;

  __declspec(property(get = get_ParsingInternalSubset)) bool ParsingInternalSubset;

  __declspec(property(get = get_IgnoreEntityReferences)) bool IgnoreEntityReferences;

  __declspec(property(get = get_SaveInternalSubsetValue)) bool SaveInternalSubsetValue;

  __declspec(property(get = get_ParsingTopLevelMarkup)) bool ParsingTopLevelMarkup;

  __declspec(property(get = get_SupportNamespaces)) bool SupportNamespaces;

  __declspec(property(get = get_Normalize)) bool Normalize;

  __declspec(property(get = get_LineNo)) int32_t LineNo;

  __declspec(property(get = get_LinePos)) int32_t LinePos;

  __declspec(property(get = get_BaseUriStr))::StringW BaseUriStr;

  /// @brief Convert operator to "::System::Xml::IDtdParser"
  constexpr operator ::System::Xml::IDtdParser*() noexcept;

  constexpr ::System::Xml::IDtdParserAdapter*& __get_readerAdapter();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::IDtdParserAdapter*> const& __get_readerAdapter() const;

  constexpr void __set_readerAdapter(::System::Xml::IDtdParserAdapter* value);

  constexpr ::System::Xml::IDtdParserAdapterWithValidation*& __get_readerAdapterWithValidation();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::IDtdParserAdapterWithValidation*> const& __get_readerAdapterWithValidation() const;

  constexpr void __set_readerAdapterWithValidation(::System::Xml::IDtdParserAdapterWithValidation* value);

  constexpr ::System::Xml::XmlNameTable*& __get_nameTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> const& __get_nameTable() const;

  constexpr void __set_nameTable(::System::Xml::XmlNameTable* value);

  constexpr ::System::Xml::Schema::SchemaInfo*& __get_schemaInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SchemaInfo*> const& __get_schemaInfo() const;

  constexpr void __set_schemaInfo(::System::Xml::Schema::SchemaInfo* value);

  constexpr ::System::Xml::XmlCharType& __get_xmlCharType();

  constexpr ::System::Xml::XmlCharType const& __get_xmlCharType() const;

  constexpr void __set_xmlCharType(::System::Xml::XmlCharType value);

  constexpr ::StringW& __get_systemId();

  constexpr ::StringW const& __get_systemId() const;

  constexpr void __set_systemId(::StringW value);

  constexpr ::StringW& __get_publicId();

  constexpr ::StringW const& __get_publicId() const;

  constexpr void __set_publicId(::StringW value);

  constexpr bool& __get_normalize();

  constexpr bool const& __get_normalize() const;

  constexpr void __set_normalize(bool value);

  constexpr bool& __get_validate();

  constexpr bool const& __get_validate() const;

  constexpr void __set_validate(bool value);

  constexpr bool& __get_supportNamespaces();

  constexpr bool const& __get_supportNamespaces() const;

  constexpr void __set_supportNamespaces(bool value);

  constexpr bool& __get_v1Compat();

  constexpr bool const& __get_v1Compat() const;

  constexpr void __set_v1Compat(bool value);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __get_chars();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __get_chars() const;

  constexpr void __set_chars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr int32_t& __get_charsUsed();

  constexpr int32_t const& __get_charsUsed() const;

  constexpr void __set_charsUsed(int32_t value);

  constexpr int32_t& __get_curPos();

  constexpr int32_t const& __get_curPos() const;

  constexpr void __set_curPos(int32_t value);

  constexpr ::System::Xml::__DtdParser__ScanningFunction& __get_scanningFunction();

  constexpr ::System::Xml::__DtdParser__ScanningFunction const& __get_scanningFunction() const;

  constexpr void __set_scanningFunction(::System::Xml::__DtdParser__ScanningFunction value);

  constexpr ::System::Xml::__DtdParser__ScanningFunction& __get_nextScaningFunction();

  constexpr ::System::Xml::__DtdParser__ScanningFunction const& __get_nextScaningFunction() const;

  constexpr void __set_nextScaningFunction(::System::Xml::__DtdParser__ScanningFunction value);

  constexpr ::System::Xml::__DtdParser__ScanningFunction& __get_savedScanningFunction();

  constexpr ::System::Xml::__DtdParser__ScanningFunction const& __get_savedScanningFunction() const;

  constexpr void __set_savedScanningFunction(::System::Xml::__DtdParser__ScanningFunction value);

  constexpr bool& __get_whitespaceSeen();

  constexpr bool const& __get_whitespaceSeen() const;

  constexpr void __set_whitespaceSeen(bool value);

  constexpr int32_t& __get_tokenStartPos();

  constexpr int32_t const& __get_tokenStartPos() const;

  constexpr void __set_tokenStartPos(int32_t value);

  constexpr int32_t& __get_colonPos();

  constexpr int32_t const& __get_colonPos() const;

  constexpr void __set_colonPos(int32_t value);

  constexpr ::System::Text::StringBuilder*& __get_internalSubsetValueSb();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __get_internalSubsetValueSb() const;

  constexpr void __set_internalSubsetValueSb(::System::Text::StringBuilder* value);

  constexpr int32_t& __get_externalEntitiesDepth();

  constexpr int32_t const& __get_externalEntitiesDepth() const;

  constexpr void __set_externalEntitiesDepth(int32_t value);

  constexpr int32_t& __get_currentEntityId();

  constexpr int32_t const& __get_currentEntityId() const;

  constexpr void __set_currentEntityId(int32_t value);

  constexpr bool& __get_freeFloatingDtd();

  constexpr bool const& __get_freeFloatingDtd() const;

  constexpr void __set_freeFloatingDtd(bool value);

  constexpr bool& __get_hasFreeFloatingInternalSubset();

  constexpr bool const& __get_hasFreeFloatingInternalSubset() const;

  constexpr void __set_hasFreeFloatingInternalSubset(bool value);

  constexpr ::System::Text::StringBuilder*& __get_stringBuilder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __get_stringBuilder() const;

  constexpr void __set_stringBuilder(::System::Text::StringBuilder* value);

  constexpr int32_t& __get_condSectionDepth();

  constexpr int32_t const& __get_condSectionDepth() const;

  constexpr void __set_condSectionDepth(int32_t value);

  constexpr ::System::Xml::LineInfo& __get_literalLineInfo();

  constexpr ::System::Xml::LineInfo const& __get_literalLineInfo() const;

  constexpr void __set_literalLineInfo(::System::Xml::LineInfo value);

  constexpr char16_t& __get_literalQuoteChar();

  constexpr char16_t const& __get_literalQuoteChar() const;

  constexpr void __set_literalQuoteChar(char16_t value);

  constexpr ::StringW& __get_documentBaseUri();

  constexpr ::StringW const& __get_documentBaseUri() const;

  constexpr void __set_documentBaseUri(::StringW value);

  constexpr ::StringW& __get_externalDtdBaseUri();

  constexpr ::StringW const& __get_externalDtdBaseUri() const;

  constexpr void __set_externalDtdBaseUri(::StringW value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::__DtdParser__UndeclaredNotation*>*& __get_undeclaredNotations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::__DtdParser__UndeclaredNotation*>*> const& __get_undeclaredNotations() const;

  constexpr void __set_undeclaredNotations(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::__DtdParser__UndeclaredNotation*>* value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_condSectionEntityIds();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_condSectionEntityIds() const;

  constexpr void __set_condSectionEntityIds(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::System::Xml::DtdParser* New_ctor();

  /// @brief Method .ctor, addr 0x2892b4c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Create, addr 0x288d264, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Xml::IDtdParser* Create();

  /// @brief Method Initialize, addr 0x2892bd4, size 0x3d0, virtual false, abstract: false, final false
  inline void Initialize(::System::Xml::IDtdParserAdapter* readerAdapter);

  /// @brief Method InitializeFreeFloatingDtd, addr 0x2892fa4, size 0x3d0, virtual false, abstract: false, final false
  inline void InitializeFreeFloatingDtd(::StringW baseUri, ::StringW docTypeName, ::StringW publicId, ::StringW systemId, ::StringW internalSubset, ::System::Xml::IDtdParserAdapter* adapter);

  /// @brief Method System.Xml.IDtdParser.ParseInternalDtd, addr 0x28933f0, size 0x30, virtual true, abstract: false, final true
  inline ::System::Xml::IDtdInfo* System_Xml_IDtdParser_ParseInternalDtd(::System::Xml::IDtdParserAdapter* adapter, bool saveInternalSubset);

  /// @brief Method System.Xml.IDtdParser.ParseFreeFloatingDtd, addr 0x289367c, size 0x24, virtual true, abstract: false, final true
  inline ::System::Xml::IDtdInfo* System_Xml_IDtdParser_ParseFreeFloatingDtd(::StringW baseUri, ::StringW docTypeName, ::StringW publicId, ::StringW systemId, ::StringW internalSubset,
                                                                             ::System::Xml::IDtdParserAdapter* adapter);

  /// @brief Method get_ParsingInternalSubset, addr 0x28936a0, size 0x10, virtual false, abstract: false, final false
  inline bool get_ParsingInternalSubset();

  /// @brief Method get_IgnoreEntityReferences, addr 0x28936b0, size 0x10, virtual false, abstract: false, final false
  inline bool get_IgnoreEntityReferences();

  /// @brief Method get_SaveInternalSubsetValue, addr 0x28936c0, size 0xc0, virtual false, abstract: false, final false
  inline bool get_SaveInternalSubsetValue();

  /// @brief Method get_ParsingTopLevelMarkup, addr 0x2893780, size 0x30, virtual false, abstract: false, final false
  inline bool get_ParsingTopLevelMarkup();

  /// @brief Method get_SupportNamespaces, addr 0x28937b0, size 0x8, virtual false, abstract: false, final false
  inline bool get_SupportNamespaces();

  /// @brief Method get_Normalize, addr 0x28937b8, size 0x8, virtual false, abstract: false, final false
  inline bool get_Normalize();

  /// @brief Method Parse, addr 0x2893420, size 0x25c, virtual false, abstract: false, final false
  inline void Parse(bool saveInternalSubset);

  /// @brief Method ParseInDocumentDtd, addr 0x2893814, size 0x150, virtual false, abstract: false, final false
  inline void ParseInDocumentDtd(bool saveInternalSubset);

  /// @brief Method ParseFreeFloatingDtd, addr 0x28937c0, size 0x54, virtual false, abstract: false, final false
  inline void ParseFreeFloatingDtd();

  /// @brief Method ParseInternalSubset, addr 0x2894cc8, size 0x4, virtual false, abstract: false, final false
  inline void ParseInternalSubset();

  /// @brief Method ParseExternalSubset, addr 0x2894ccc, size 0x1a4, virtual false, abstract: false, final false
  inline void ParseExternalSubset();

  /// @brief Method ParseSubset, addr 0x2894e70, size 0x35c, virtual false, abstract: false, final false
  inline void ParseSubset();

  /// @brief Method ParseAttlistDecl, addr 0x28951cc, size 0x5c8, virtual false, abstract: false, final false
  inline void ParseAttlistDecl();

  /// @brief Method ParseAttlistType, addr 0x2896c00, size 0x55c, virtual false, abstract: false, final false
  inline void ParseAttlistType(::System::Xml::Schema::SchemaAttDef* attrDef, ::System::Xml::Schema::SchemaElementDecl* elementDecl, bool ignoreErrors);

  /// @brief Method ParseAttlistDefault, addr 0x289715c, size 0x1b4, virtual false, abstract: false, final false
  inline void ParseAttlistDefault(::System::Xml::Schema::SchemaAttDef* attrDef, bool ignoreErrors);

  /// @brief Method ParseElementDecl, addr 0x2895794, size 0x394, virtual false, abstract: false, final false
  inline void ParseElementDecl();

  /// @brief Method ParseElementOnlyContent, addr 0x28978dc, size 0x350, virtual false, abstract: false, final false
  inline void ParseElementOnlyContent(::System::Xml::Schema::ParticleContentValidator* pcv, int32_t startParenEntityId);

  /// @brief Method ParseHowMany, addr 0x2897c2c, size 0x70, virtual false, abstract: false, final false
  inline void ParseHowMany(::System::Xml::Schema::ParticleContentValidator* pcv);

  /// @brief Method ParseElementMixedContent, addr 0x2897638, size 0x2a4, virtual false, abstract: false, final false
  inline void ParseElementMixedContent(::System::Xml::Schema::ParticleContentValidator* pcv, int32_t startParenEntityId);

  /// @brief Method ParseEntityDecl, addr 0x2895b28, size 0x35c, virtual false, abstract: false, final false
  inline void ParseEntityDecl();

  /// @brief Method ParseNotationDecl, addr 0x2895e84, size 0x1f4, virtual false, abstract: false, final false
  inline void ParseNotationDecl();

  /// @brief Method AddUndeclaredNotation, addr 0x2897400, size 0x160, virtual false, abstract: false, final false
  inline void AddUndeclaredNotation(::StringW notationName);

  /// @brief Method ParseComment, addr 0x2896078, size 0x244, virtual false, abstract: false, final false
  inline void ParseComment();

  /// @brief Method ParsePI, addr 0x28962bc, size 0x164, virtual false, abstract: false, final false
  inline void ParsePI();

  /// @brief Method ParseCondSection, addr 0x2896488, size 0x224, virtual false, abstract: false, final false
  inline void ParseCondSection();

  /// @brief Method ParseExternalId, addr 0x28947ac, size 0x514, virtual false, abstract: false, final false
  inline void ParseExternalId(::System::Xml::__DtdParser__Token idTokenType, ::System::Xml::__DtdParser__Token declType, ByRef<::StringW> publicId, ByRef<::StringW> systemId);

  /// @brief Method GetToken, addr 0x2893d44, size 0x8ac, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token GetToken(bool needWhiteSpace);

  /// @brief Method ScanSubsetContent, addr 0x289840c, size 0x704, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanSubsetContent();

  /// @brief Method ScanNameExpected, addr 0x28983a4, size 0x24, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanNameExpected();

  /// @brief Method ScanQNameExpected, addr 0x28983c8, size 0x24, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanQNameExpected();

  /// @brief Method ScanNmtokenExpected, addr 0x28983ec, size 0x20, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanNmtokenExpected();

  /// @brief Method ScanDoctype1, addr 0x2898b10, size 0x11c, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanDoctype1();

  /// @brief Method ScanDoctype2, addr 0x2898c2c, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanDoctype2();

  /// @brief Method ScanClosingTag, addr 0x289ae60, size 0x94, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanClosingTag();

  /// @brief Method ScanElement1, addr 0x2898cd4, size 0x1d0, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanElement1();

  /// @brief Method ScanElement2, addr 0x2898ea4, size 0x1a4, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanElement2();

  /// @brief Method ScanElement3, addr 0x2899048, size 0x80, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanElement3();

  /// @brief Method ScanElement4, addr 0x28990c8, size 0xcc, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanElement4();

  /// @brief Method ScanElement5, addr 0x2899194, size 0xec, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanElement5();

  /// @brief Method ScanElement6, addr 0x2899280, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanElement6();

  /// @brief Method ScanElement7, addr 0x2899350, size 0x60, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanElement7();

  /// @brief Method ScanAttlist1, addr 0x28993b0, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanAttlist1();

  /// @brief Method ScanAttlist2, addr 0x2899474, size 0x680, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanAttlist2();

  /// @brief Method ScanAttlist3, addr 0x2899af4, size 0xa0, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanAttlist3();

  /// @brief Method ScanAttlist4, addr 0x2899b94, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanAttlist4();

  /// @brief Method ScanAttlist5, addr 0x2899c64, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanAttlist5();

  /// @brief Method ScanAttlist6, addr 0x2899d34, size 0x374, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanAttlist6();

  /// @brief Method ScanAttlist7, addr 0x289a0a8, size 0xbc, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanAttlist7();

  /// @brief Method ScanLiteral, addr 0x289b4a4, size 0xa88, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanLiteral(::System::Xml::__DtdParser__LiteralType literalType);

  /// @brief Method ScanEntityName, addr 0x289bf2c, size 0x160, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* ScanEntityName();

  /// @brief Method ScanNotation1, addr 0x289a164, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanNotation1();

  /// @brief Method ScanSystemId, addr 0x289a25c, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanSystemId();

  /// @brief Method ScanEntity1, addr 0x289a42c, size 0x74, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanEntity1();

  /// @brief Method ScanEntity2, addr 0x289a4a0, size 0x12c, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanEntity2();

  /// @brief Method ScanEntity3, addr 0x289a5cc, size 0x114, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanEntity3();

  /// @brief Method ScanPublicId1, addr 0x289a310, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanPublicId1();

  /// @brief Method ScanPublicId2, addr 0x289a3c4, size 0x68, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanPublicId2();

  /// @brief Method ScanCondSection1, addr 0x289a6e0, size 0x29c, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanCondSection1();

  /// @brief Method ScanCondSection2, addr 0x289a97c, size 0x98, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanCondSection2();

  /// @brief Method ScanCondSection3, addr 0x289aa14, size 0x44c, virtual false, abstract: false, final false
  inline ::System::Xml::__DtdParser__Token ScanCondSection3();

  /// @brief Method ScanName, addr 0x289b160, size 0x8, virtual false, abstract: false, final false
  inline void ScanName();

  /// @brief Method ScanQName, addr 0x289b168, size 0x8, virtual false, abstract: false, final false
  inline void ScanQName();

  /// @brief Method ScanQName, addr 0x289c28c, size 0x280, virtual false, abstract: false, final false
  inline void ScanQName(bool isQName);

  /// @brief Method ReadDataInName, addr 0x289c50c, size 0x44, virtual false, abstract: false, final false
  inline bool ReadDataInName();

  /// @brief Method ScanNmtoken, addr 0x289b170, size 0x16c, virtual false, abstract: false, final false
  inline void ScanNmtoken();

  /// @brief Method EatPublicKeyword, addr 0x289b2dc, size 0xe4, virtual false, abstract: false, final false
  inline bool EatPublicKeyword();

  /// @brief Method EatSystemKeyword, addr 0x289b3c0, size 0xe4, virtual false, abstract: false, final false
  inline bool EatSystemKeyword();

  /// @brief Method GetNameQualified, addr 0x289463c, size 0x170, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* GetNameQualified(bool canHavePrefix);

  /// @brief Method GetNameString, addr 0x28973e4, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW GetNameString();

  /// @brief Method GetNmtokenString, addr 0x2897560, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW GetNmtokenString();

  /// @brief Method GetValue, addr 0x28975dc, size 0x5c, virtual false, abstract: false, final false
  inline ::StringW GetValue();

  /// @brief Method GetValueWithStrippedSpaces, addr 0x289757c, size 0x60, virtual false, abstract: false, final false
  inline ::StringW GetValueWithStrippedSpaces();

  /// @brief Method ReadData, addr 0x289aef4, size 0xc4, virtual false, abstract: false, final false
  inline int32_t ReadData();

  /// @brief Method LoadParsingBuffer, addr 0x2893bc8, size 0x17c, virtual false, abstract: false, final false
  inline void LoadParsingBuffer();

  /// @brief Method SaveParsingBuffer, addr 0x2894cc0, size 0x8, virtual false, abstract: false, final false
  inline void SaveParsingBuffer();

  /// @brief Method SaveParsingBuffer, addr 0x2896788, size 0x14c, virtual false, abstract: false, final false
  inline void SaveParsingBuffer(int32_t internalSubsetValueEndPos);

  /// @brief Method HandleEntityReference, addr 0x2898298, size 0x50, virtual false, abstract: false, final false
  inline bool HandleEntityReference(bool paramEntity, bool inLiteral, bool inAttribute);

  /// @brief Method HandleEntityReference, addr 0x289c778, size 0x298, virtual false, abstract: false, final false
  inline bool HandleEntityReference(::System::Xml::XmlQualifiedName* entityName, bool paramEntity, bool inLiteral, bool inAttribute);

  /// @brief Method HandleEntityEnd, addr 0x289afb8, size 0x1a8, virtual false, abstract: false, final false
  inline bool HandleEntityEnd(bool inLiteral);

  /// @brief Method VerifyEntityReference, addr 0x289c08c, size 0x200, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaEntity* VerifyEntityReference(::System::Xml::XmlQualifiedName* entityName, bool paramEntity, bool mustBeDeclared, bool inAttribute);

  /// @brief Method SendValidationEvent, addr 0x28966ac, size 0xdc, virtual false, abstract: false, final false
  inline void SendValidationEvent(int32_t pos, ::System::Xml::Schema::XmlSeverityType severity, ::StringW code, ::StringW arg);

  /// @brief Method SendValidationEvent, addr 0x289731c, size 0xc8, virtual false, abstract: false, final false
  inline void SendValidationEvent(::System::Xml::Schema::XmlSeverityType severity, ::StringW code, ::StringW arg);

  /// @brief Method SendValidationEvent, addr 0x2893a88, size 0x140, virtual false, abstract: false, final false
  inline void SendValidationEvent(::System::Xml::Schema::XmlSeverityType severity, ::System::Xml::Schema::XmlSchemaException* e);

  /// @brief Method IsAttributeValueType, addr 0x2897310, size 0xc, virtual false, abstract: false, final false
  inline bool IsAttributeValueType(::System::Xml::__DtdParser__Token token);

  /// @brief Method get_LineNo, addr 0x28968dc, size 0xa4, virtual false, abstract: false, final false
  inline int32_t get_LineNo();

  /// @brief Method get_LinePos, addr 0x2896980, size 0xb0, virtual false, abstract: false, final false
  inline int32_t get_LinePos();

  /// @brief Method get_BaseUriStr, addr 0x2893964, size 0x124, virtual false, abstract: false, final false
  inline ::StringW get_BaseUriStr();

  /// @brief Method OnUnexpectedError, addr 0x28945f0, size 0x4c, virtual false, abstract: false, final false
  inline void OnUnexpectedError();

  /// @brief Method Throw, addr 0x2896420, size 0x68, virtual false, abstract: false, final false
  inline void Throw(int32_t curPos, ::StringW res);

  /// @brief Method Throw, addr 0x2897c9c, size 0x1e8, virtual false, abstract: false, final false
  inline void Throw(int32_t curPos, ::StringW res, ::StringW arg);

  /// @brief Method Throw, addr 0x2898030, size 0x1e8, virtual false, abstract: false, final false
  inline void Throw(int32_t curPos, ::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args);

  /// @brief Method Throw, addr 0x2896a30, size 0x1d0, virtual false, abstract: false, final false
  inline void Throw(::StringW res, ::StringW arg, int32_t lineNo, int32_t linePos);

  /// @brief Method ThrowInvalidChar, addr 0x2893374, size 0x7c, virtual false, abstract: false, final false
  inline void ThrowInvalidChar(int32_t pos, ::StringW data, int32_t invCharPos);

  /// @brief Method ThrowInvalidChar, addr 0x2898218, size 0x80, virtual false, abstract: false, final false
  inline void ThrowInvalidChar(::ArrayW<char16_t, ::Array<char16_t>*> data, int32_t length, int32_t invCharPos);

  /// @brief Method ThrowUnexpectedToken, addr 0x28968d4, size 0x8, virtual false, abstract: false, final false
  inline void ThrowUnexpectedToken(int32_t pos, ::StringW expectedToken);

  /// @brief Method ThrowUnexpectedToken, addr 0x2897e84, size 0x1ac, virtual false, abstract: false, final false
  inline void ThrowUnexpectedToken(int32_t pos, ::StringW expectedToken1, ::StringW expectedToken2);

  /// @brief Method ParseUnexpectedToken, addr 0x28982e8, size 0xbc, virtual false, abstract: false, final false
  inline ::StringW ParseUnexpectedToken(int32_t startPos);

  /// @brief Method StripSpaces, addr 0x289c550, size 0x228, virtual false, abstract: false, final false
  static inline ::StringW StripSpaces(::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "DtdParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DtdParser(DtdParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DtdParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DtdParser(DtdParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DtdParser();

public:
  /// @brief Field readerAdapter, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::IDtdParserAdapter* ___readerAdapter;

  /// @brief Field readerAdapterWithValidation, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::IDtdParserAdapterWithValidation* ___readerAdapterWithValidation;

  /// @brief Field nameTable, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::XmlNameTable* ___nameTable;

  /// @brief Field schemaInfo, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Schema::SchemaInfo* ___schemaInfo;

  /// @brief Field xmlCharType, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::XmlCharType ___xmlCharType;

  /// @brief Field systemId, offset: 0x38, size: 0x8, def value: None
  ::StringW ___systemId;

  /// @brief Field publicId, offset: 0x40, size: 0x8, def value: None
  ::StringW ___publicId;

  /// @brief Field normalize, offset: 0x48, size: 0x1, def value: None
  bool ___normalize;

  /// @brief Field validate, offset: 0x49, size: 0x1, def value: None
  bool ___validate;

  /// @brief Field supportNamespaces, offset: 0x4a, size: 0x1, def value: None
  bool ___supportNamespaces;

  /// @brief Field v1Compat, offset: 0x4b, size: 0x1, def value: None
  bool ___v1Compat;

  /// @brief Field chars, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___chars;

  /// @brief Field charsUsed, offset: 0x58, size: 0x4, def value: None
  int32_t ___charsUsed;

  /// @brief Field curPos, offset: 0x5c, size: 0x4, def value: None
  int32_t ___curPos;

  /// @brief Field scanningFunction, offset: 0x60, size: 0x4, def value: None
  ::System::Xml::__DtdParser__ScanningFunction ___scanningFunction;

  /// @brief Field nextScaningFunction, offset: 0x64, size: 0x4, def value: None
  ::System::Xml::__DtdParser__ScanningFunction ___nextScaningFunction;

  /// @brief Field savedScanningFunction, offset: 0x68, size: 0x4, def value: None
  ::System::Xml::__DtdParser__ScanningFunction ___savedScanningFunction;

  /// @brief Field whitespaceSeen, offset: 0x6c, size: 0x1, def value: None
  bool ___whitespaceSeen;

  /// @brief Field tokenStartPos, offset: 0x70, size: 0x4, def value: None
  int32_t ___tokenStartPos;

  /// @brief Field colonPos, offset: 0x74, size: 0x4, def value: None
  int32_t ___colonPos;

  /// @brief Field internalSubsetValueSb, offset: 0x78, size: 0x8, def value: None
  ::System::Text::StringBuilder* ___internalSubsetValueSb;

  /// @brief Field externalEntitiesDepth, offset: 0x80, size: 0x4, def value: None
  int32_t ___externalEntitiesDepth;

  /// @brief Field currentEntityId, offset: 0x84, size: 0x4, def value: None
  int32_t ___currentEntityId;

  /// @brief Field freeFloatingDtd, offset: 0x88, size: 0x1, def value: None
  bool ___freeFloatingDtd;

  /// @brief Field hasFreeFloatingInternalSubset, offset: 0x89, size: 0x1, def value: None
  bool ___hasFreeFloatingInternalSubset;

  /// @brief Field stringBuilder, offset: 0x90, size: 0x8, def value: None
  ::System::Text::StringBuilder* ___stringBuilder;

  /// @brief Field condSectionDepth, offset: 0x98, size: 0x4, def value: None
  int32_t ___condSectionDepth;

  /// @brief Field literalLineInfo, offset: 0x9c, size: 0x8, def value: None
  ::System::Xml::LineInfo ___literalLineInfo;

  /// @brief Field literalQuoteChar, offset: 0xa4, size: 0x2, def value: None
  char16_t ___literalQuoteChar;

  /// @brief Field documentBaseUri, offset: 0xa8, size: 0x8, def value: None
  ::StringW ___documentBaseUri;

  /// @brief Field externalDtdBaseUri, offset: 0xb0, size: 0x8, def value: None
  ::StringW ___externalDtdBaseUri;

  /// @brief Field undeclaredNotations, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::__DtdParser__UndeclaredNotation*>* ___undeclaredNotations;

  /// @brief Field condSectionEntityIds, offset: 0xc0, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___condSectionEntityIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::DtdParser, 0xc8>, "Size mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___readerAdapter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___readerAdapterWithValidation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___nameTable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___schemaInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___xmlCharType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___systemId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___publicId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___normalize) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___validate) == 0x49, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___supportNamespaces) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___v1Compat) == 0x4b, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___chars) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___charsUsed) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___curPos) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___scanningFunction) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___nextScaningFunction) == 0x64, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___savedScanningFunction) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___whitespaceSeen) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___tokenStartPos) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___colonPos) == 0x74, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___internalSubsetValueSb) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___externalEntitiesDepth) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___currentEntityId) == 0x84, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___freeFloatingDtd) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___hasFreeFloatingInternalSubset) == 0x89, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___stringBuilder) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___condSectionDepth) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___literalLineInfo) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___literalQuoteChar) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___documentBaseUri) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___externalDtdBaseUri) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___undeclaredNotations) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser, ___condSectionEntityIds) == 0xc0, "Offset mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__DtdParser__LiteralType, "System.Xml", "DtdParser/LiteralType");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__DtdParser__ScanningFunction, "System.Xml", "DtdParser/ScanningFunction");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__DtdParser__Token, "System.Xml", "DtdParser/Token");
NEED_NO_BOX(::System::Xml::DtdParser);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::DtdParser*, "System.Xml", "DtdParser");
NEED_NO_BOX(::System::Xml::__DtdParser__ParseElementOnlyContent_LocalFrame);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__DtdParser__ParseElementOnlyContent_LocalFrame*, "System.Xml", "DtdParser/ParseElementOnlyContent_LocalFrame");
NEED_NO_BOX(::System::Xml::__DtdParser__UndeclaredNotation);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__DtdParser__UndeclaredNotation*, "System.Xml", "DtdParser/UndeclaredNotation");
