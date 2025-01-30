#pragma once
// IWYU pragma private; include "System/Xml/DtdParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__IDtdParser_def.hpp"
#include "System/Xml/zzzz__LineInfo_def.hpp"
#include "System/Xml/zzzz__XmlCharType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DtdParser)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Xml::Schema {
class ParticleContentValidator;
}
namespace System::Xml::Schema {
class SchemaAttDef;
}
namespace System::Xml::Schema {
class SchemaElementDecl;
}
namespace System::Xml::Schema {
class SchemaEntity;
}
namespace System::Xml::Schema {
class SchemaInfo;
}
namespace System::Xml::Schema {
class XmlSchemaException;
}
namespace System::Xml::Schema {
struct XmlSeverityType;
}
namespace System::Xml {
struct DtdParser_LiteralType;
}
namespace System::Xml {
class DtdParser_ParseElementOnlyContent_LocalFrame;
}
namespace System::Xml {
struct DtdParser_ScanningFunction;
}
namespace System::Xml {
struct DtdParser_Token;
}
namespace System::Xml {
class DtdParser_UndeclaredNotation;
}
namespace System::Xml {
class IDtdInfo;
}
namespace System::Xml {
class IDtdParserAdapterWithValidation;
}
namespace System::Xml {
class IDtdParserAdapter;
}
namespace System::Xml {
class IDtdParser;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml {
struct DtdParser_LiteralType;
}
namespace System::Xml {
struct DtdParser_ScanningFunction;
}
namespace System::Xml {
struct DtdParser_Token;
}
namespace System::Xml {
class DtdParser;
}
namespace System::Xml {
class DtdParser_ParseElementOnlyContent_LocalFrame;
}
namespace System::Xml {
class DtdParser_UndeclaredNotation;
}
// Write type traits
MARK_VAL_T(::System::Xml::DtdParser_LiteralType);
MARK_VAL_T(::System::Xml::DtdParser_ScanningFunction);
MARK_VAL_T(::System::Xml::DtdParser_Token);
MARK_REF_PTR_T(::System::Xml::DtdParser);
MARK_REF_PTR_T(::System::Xml::DtdParser_ParseElementOnlyContent_LocalFrame);
MARK_REF_PTR_T(::System::Xml::DtdParser_UndeclaredNotation);
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.DtdParser/Token
struct CORDL_TYPE DtdParser_Token {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DtdParser_Token_Unwrapped
  enum struct __DtdParser_Token_Unwrapped : int32_t {
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
  constexpr operator __DtdParser_Token_Unwrapped() const noexcept {
    return static_cast<__DtdParser_Token_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DtdParser_Token();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DtdParser_Token(int32_t value__) noexcept;

  /// @brief Field ANY value: I32(44)
  static ::System::Xml::DtdParser_Token const ANY;

  /// @brief Field AttlistDecl value: I32(11)
  static ::System::Xml::DtdParser_Token const AttlistDecl;

  /// @brief Field CDATA value: I32(0)
  static ::System::Xml::DtdParser_Token const CDATA;

  /// @brief Field Comma value: I32(43)
  static ::System::Xml::DtdParser_Token const Comma;

  /// @brief Field Comment value: I32(15)
  static ::System::Xml::DtdParser_Token const Comment;

  /// @brief Field CondSectionEnd value: I32(18)
  static ::System::Xml::DtdParser_Token const CondSectionEnd;

  /// @brief Field CondSectionStart value: I32(17)
  static ::System::Xml::DtdParser_Token const CondSectionStart;

  /// @brief Field DOCTYPE value: I32(36)
  static ::System::Xml::DtdParser_Token const DOCTYPE;

  /// @brief Field EMPTY value: I32(45)
  static ::System::Xml::DtdParser_Token const EMPTY;

  /// @brief Field ENTITIES value: I32(5)
  static ::System::Xml::DtdParser_Token const ENTITIES;

  /// @brief Field ENTITY value: I32(4)
  static ::System::Xml::DtdParser_Token const ENTITY;

  /// @brief Field ElementDecl value: I32(12)
  static ::System::Xml::DtdParser_Token const ElementDecl;

  /// @brief Field EntityDecl value: I32(13)
  static ::System::Xml::DtdParser_Token const EntityDecl;

  /// @brief Field Eof value: I32(19)
  static ::System::Xml::DtdParser_Token const Eof;

  /// @brief Field FIXED value: I32(22)
  static ::System::Xml::DtdParser_Token const FIXED;

  /// @brief Field GreaterThan value: I32(29)
  static ::System::Xml::DtdParser_Token const GreaterThan;

  /// @brief Field IDREF value: I32(2)
  static ::System::Xml::DtdParser_Token const IDREF;

  /// @brief Field IDREFS value: I32(3)
  static ::System::Xml::DtdParser_Token const IDREFS;

  /// @brief Field IGNORE value: I32(46)
  static ::System::Xml::DtdParser_Token const IGNORE;

  /// @brief Field IMPLIED value: I32(21)
  static ::System::Xml::DtdParser_Token const IMPLIED;

  /// @brief Field INCLUDE value: I32(47)
  static ::System::Xml::DtdParser_Token const INCLUDE;

  /// @brief Field LeftBracket value: I32(31)
  static ::System::Xml::DtdParser_Token const LeftBracket;

  /// @brief Field LeftParen value: I32(27)
  static ::System::Xml::DtdParser_Token const LeftParen;

  /// @brief Field Literal value: I32(35)
  static ::System::Xml::DtdParser_Token const Literal;

  /// @brief Field NData value: I32(37)
  static ::System::Xml::DtdParser_Token const NData;

  /// @brief Field NMTOKEN value: I32(6)
  static ::System::Xml::DtdParser_Token const NMTOKEN;

  /// @brief Field NMTOKENS value: I32(7)
  static ::System::Xml::DtdParser_Token const NMTOKENS;

  /// @brief Field NOTATION value: I32(8)
  static ::System::Xml::DtdParser_Token const NOTATION;

  /// @brief Field Name value: I32(24)
  static ::System::Xml::DtdParser_Token const Name;

  /// @brief Field Nmtoken value: I32(25)
  static ::System::Xml::DtdParser_Token const Nmtoken;

  /// @brief Field None value: I32(9)
  static ::System::Xml::DtdParser_Token const None;

  /// @brief Field NotationDecl value: I32(14)
  static ::System::Xml::DtdParser_Token const NotationDecl;

  /// @brief Field Or value: I32(30)
  static ::System::Xml::DtdParser_Token const Or;

  /// @brief Field PCDATA value: I32(42)
  static ::System::Xml::DtdParser_Token const PCDATA;

  /// @brief Field PERef value: I32(10)
  static ::System::Xml::DtdParser_Token const PERef;

  /// @brief Field PI value: I32(16)
  static ::System::Xml::DtdParser_Token const PI;

  /// @brief Field PUBLIC value: I32(33)
  static ::System::Xml::DtdParser_Token const PUBLIC;

  /// @brief Field Percent value: I32(38)
  static ::System::Xml::DtdParser_Token const Percent;

  /// @brief Field Plus value: I32(41)
  static ::System::Xml::DtdParser_Token const Plus;

  /// @brief Field QMark value: I32(40)
  static ::System::Xml::DtdParser_Token const QMark;

  /// @brief Field QName value: I32(23)
  static ::System::Xml::DtdParser_Token const QName;

  /// @brief Field Quote value: I32(26)
  static ::System::Xml::DtdParser_Token const Quote;

  /// @brief Field REQUIRED value: I32(20)
  static ::System::Xml::DtdParser_Token const REQUIRED;

  /// @brief Field RightBracket value: I32(32)
  static ::System::Xml::DtdParser_Token const RightBracket;

  /// @brief Field RightParen value: I32(28)
  static ::System::Xml::DtdParser_Token const RightParen;

  /// @brief Field SYSTEM value: I32(34)
  static ::System::Xml::DtdParser_Token const SYSTEM;

  /// @brief Field Star value: I32(39)
  static ::System::Xml::DtdParser_Token const Star;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7331 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ID value: I32(1)
  static ::System::Xml::DtdParser_Token const _cordl_ID;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::DtdParser_Token, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::DtdParser_Token, 0x4>, "Size mismatch!");

} // namespace System::Xml
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.DtdParser/ScanningFunction
struct CORDL_TYPE DtdParser_ScanningFunction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DtdParser_ScanningFunction_Unwrapped
  enum struct __DtdParser_ScanningFunction_Unwrapped : int32_t {
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
  constexpr operator __DtdParser_ScanningFunction_Unwrapped() const noexcept {
    return static_cast<__DtdParser_ScanningFunction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DtdParser_ScanningFunction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DtdParser_ScanningFunction(int32_t value__) noexcept;

  /// @brief Field Attlist1 value: I32(13)
  static ::System::Xml::DtdParser_ScanningFunction const Attlist1;

  /// @brief Field Attlist2 value: I32(14)
  static ::System::Xml::DtdParser_ScanningFunction const Attlist2;

  /// @brief Field Attlist3 value: I32(15)
  static ::System::Xml::DtdParser_ScanningFunction const Attlist3;

  /// @brief Field Attlist4 value: I32(16)
  static ::System::Xml::DtdParser_ScanningFunction const Attlist4;

  /// @brief Field Attlist5 value: I32(17)
  static ::System::Xml::DtdParser_ScanningFunction const Attlist5;

  /// @brief Field Attlist6 value: I32(18)
  static ::System::Xml::DtdParser_ScanningFunction const Attlist6;

  /// @brief Field Attlist7 value: I32(19)
  static ::System::Xml::DtdParser_ScanningFunction const Attlist7;

  /// @brief Field ClosingTag value: I32(31)
  static ::System::Xml::DtdParser_ScanningFunction const ClosingTag;

  /// @brief Field CondSection1 value: I32(24)
  static ::System::Xml::DtdParser_ScanningFunction const CondSection1;

  /// @brief Field CondSection2 value: I32(25)
  static ::System::Xml::DtdParser_ScanningFunction const CondSection2;

  /// @brief Field CondSection3 value: I32(26)
  static ::System::Xml::DtdParser_ScanningFunction const CondSection3;

  /// @brief Field Doctype1 value: I32(4)
  static ::System::Xml::DtdParser_ScanningFunction const Doctype1;

  /// @brief Field Doctype2 value: I32(5)
  static ::System::Xml::DtdParser_ScanningFunction const Doctype2;

  /// @brief Field Element1 value: I32(6)
  static ::System::Xml::DtdParser_ScanningFunction const Element1;

  /// @brief Field Element2 value: I32(7)
  static ::System::Xml::DtdParser_ScanningFunction const Element2;

  /// @brief Field Element3 value: I32(8)
  static ::System::Xml::DtdParser_ScanningFunction const Element3;

  /// @brief Field Element4 value: I32(9)
  static ::System::Xml::DtdParser_ScanningFunction const Element4;

  /// @brief Field Element5 value: I32(10)
  static ::System::Xml::DtdParser_ScanningFunction const Element5;

  /// @brief Field Element6 value: I32(11)
  static ::System::Xml::DtdParser_ScanningFunction const Element6;

  /// @brief Field Element7 value: I32(12)
  static ::System::Xml::DtdParser_ScanningFunction const Element7;

  /// @brief Field Entity1 value: I32(20)
  static ::System::Xml::DtdParser_ScanningFunction const Entity1;

  /// @brief Field Entity2 value: I32(21)
  static ::System::Xml::DtdParser_ScanningFunction const Entity2;

  /// @brief Field Entity3 value: I32(22)
  static ::System::Xml::DtdParser_ScanningFunction const Entity3;

  /// @brief Field Literal value: I32(27)
  static ::System::Xml::DtdParser_ScanningFunction const Literal;

  /// @brief Field Name value: I32(1)
  static ::System::Xml::DtdParser_ScanningFunction const Name;

  /// @brief Field Nmtoken value: I32(3)
  static ::System::Xml::DtdParser_ScanningFunction const Nmtoken;

  /// @brief Field None value: I32(33)
  static ::System::Xml::DtdParser_ScanningFunction const None;

  /// @brief Field Notation1 value: I32(23)
  static ::System::Xml::DtdParser_ScanningFunction const Notation1;

  /// @brief Field ParamEntitySpace value: I32(32)
  static ::System::Xml::DtdParser_ScanningFunction const ParamEntitySpace;

  /// @brief Field PublicId1 value: I32(29)
  static ::System::Xml::DtdParser_ScanningFunction const PublicId1;

  /// @brief Field PublicId2 value: I32(30)
  static ::System::Xml::DtdParser_ScanningFunction const PublicId2;

  /// @brief Field QName value: I32(2)
  static ::System::Xml::DtdParser_ScanningFunction const QName;

  /// @brief Field SubsetContent value: I32(0)
  static ::System::Xml::DtdParser_ScanningFunction const SubsetContent;

  /// @brief Field SystemId value: I32(28)
  static ::System::Xml::DtdParser_ScanningFunction const SystemId;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7332 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::DtdParser_ScanningFunction, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::DtdParser_ScanningFunction, 0x4>, "Size mismatch!");

} // namespace System::Xml
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.DtdParser/LiteralType
struct CORDL_TYPE DtdParser_LiteralType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DtdParser_LiteralType_Unwrapped
  enum struct __DtdParser_LiteralType_Unwrapped : int32_t {
    __E_AttributeValue = static_cast<int32_t>(0x0),
    __E_EntityReplText = static_cast<int32_t>(0x1),
    __E_SystemOrPublicID = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DtdParser_LiteralType_Unwrapped() const noexcept {
    return static_cast<__DtdParser_LiteralType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DtdParser_LiteralType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DtdParser_LiteralType(int32_t value__) noexcept;

  /// @brief Field AttributeValue value: I32(0)
  static ::System::Xml::DtdParser_LiteralType const AttributeValue;

  /// @brief Field EntityReplText value: I32(1)
  static ::System::Xml::DtdParser_LiteralType const EntityReplText;

  /// @brief Field SystemOrPublicID value: I32(2)
  static ::System::Xml::DtdParser_LiteralType const SystemOrPublicID;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7333 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::DtdParser_LiteralType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::DtdParser_LiteralType, 0x4>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.DtdParser/UndeclaredNotation
class CORDL_TYPE DtdParser_UndeclaredNotation : public ::System::Object {
public:
  // Declarations
  /// @brief Field lineNo, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_lineNo, put = __cordl_internal_set_lineNo)) int32_t lineNo;

  /// @brief Field linePos, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_linePos, put = __cordl_internal_set_linePos)) int32_t linePos;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field next, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_next, put = __cordl_internal_set_next)) ::System::Xml::DtdParser_UndeclaredNotation* next;

  static inline ::System::Xml::DtdParser_UndeclaredNotation* New_ctor(::StringW name, int32_t lineNo, int32_t linePos);

  constexpr int32_t const& __cordl_internal_get_lineNo() const;

  constexpr int32_t& __cordl_internal_get_lineNo();

  constexpr int32_t const& __cordl_internal_get_linePos() const;

  constexpr int32_t& __cordl_internal_get_linePos();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::System::Xml::DtdParser_UndeclaredNotation* const& __cordl_internal_get_next() const;

  constexpr ::System::Xml::DtdParser_UndeclaredNotation*& __cordl_internal_get_next();

  constexpr void __cordl_internal_set_lineNo(int32_t value);

  constexpr void __cordl_internal_set_linePos(int32_t value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_next(::System::Xml::DtdParser_UndeclaredNotation* value);

  /// @brief Method .ctor, addr 0x4356eb0, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, int32_t lineNo, int32_t linePos);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DtdParser_UndeclaredNotation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DtdParser_UndeclaredNotation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DtdParser_UndeclaredNotation(DtdParser_UndeclaredNotation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DtdParser_UndeclaredNotation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DtdParser_UndeclaredNotation(DtdParser_UndeclaredNotation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7334 };

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field lineNo, offset: 0x18, size: 0x4, def value: None
  int32_t ___lineNo;

  /// @brief Field linePos, offset: 0x1c, size: 0x4, def value: None
  int32_t ___linePos;

  /// @brief Field next, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::DtdParser_UndeclaredNotation* ___next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::DtdParser_UndeclaredNotation, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser_UndeclaredNotation, ___lineNo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser_UndeclaredNotation, ___linePos) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser_UndeclaredNotation, ___next) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::DtdParser_UndeclaredNotation, 0x28>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Object, System.Xml.DtdParser::Token
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.DtdParser/ParseElementOnlyContent_LocalFrame
class CORDL_TYPE DtdParser_ParseElementOnlyContent_LocalFrame : public ::System::Object {
public:
  // Declarations
  /// @brief Field parsingSchema, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_parsingSchema, put = __cordl_internal_set_parsingSchema)) ::System::Xml::DtdParser_Token parsingSchema;

  /// @brief Field startParenEntityId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_startParenEntityId, put = __cordl_internal_set_startParenEntityId)) int32_t startParenEntityId;

  static inline ::System::Xml::DtdParser_ParseElementOnlyContent_LocalFrame* New_ctor(int32_t startParentEntityIdParam);

  constexpr ::System::Xml::DtdParser_Token const& __cordl_internal_get_parsingSchema() const;

  constexpr ::System::Xml::DtdParser_Token& __cordl_internal_get_parsingSchema();

  constexpr int32_t const& __cordl_internal_get_startParenEntityId() const;

  constexpr int32_t& __cordl_internal_get_startParenEntityId();

  constexpr void __cordl_internal_set_parsingSchema(::System::Xml::DtdParser_Token value);

  constexpr void __cordl_internal_set_startParenEntityId(int32_t value);

  /// @brief Method .ctor, addr 0x4356ef0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int32_t startParentEntityIdParam);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DtdParser_ParseElementOnlyContent_LocalFrame();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DtdParser_ParseElementOnlyContent_LocalFrame", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DtdParser_ParseElementOnlyContent_LocalFrame(DtdParser_ParseElementOnlyContent_LocalFrame&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DtdParser_ParseElementOnlyContent_LocalFrame", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DtdParser_ParseElementOnlyContent_LocalFrame(DtdParser_ParseElementOnlyContent_LocalFrame const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7335 };

  /// @brief Field startParenEntityId, offset: 0x10, size: 0x4, def value: None
  int32_t ___startParenEntityId;

  /// @brief Field parsingSchema, offset: 0x14, size: 0x4, def value: None
  ::System::Xml::DtdParser_Token ___parsingSchema;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::DtdParser_ParseElementOnlyContent_LocalFrame, ___startParenEntityId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DtdParser_ParseElementOnlyContent_LocalFrame, ___parsingSchema) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::DtdParser_ParseElementOnlyContent_LocalFrame, 0x18>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Object, System.Xml.DtdParser::ScanningFunction, System.Xml.IDtdParser, System.Xml.LineInfo, System.Xml.XmlCharType
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.DtdParser
class CORDL_TYPE DtdParser : public ::System::Object {
public:
  // Declarations
  using LiteralType = ::System::Xml::DtdParser_LiteralType;

  using ParseElementOnlyContent_LocalFrame = ::System::Xml::DtdParser_ParseElementOnlyContent_LocalFrame;

  using ScanningFunction = ::System::Xml::DtdParser_ScanningFunction;

  using Token = ::System::Xml::DtdParser_Token;

  using UndeclaredNotation = ::System::Xml::DtdParser_UndeclaredNotation;

  __declspec(property(get = get_BaseUriStr)) ::StringW BaseUriStr;

  __declspec(property(get = get_IgnoreEntityReferences)) bool IgnoreEntityReferences;

  __declspec(property(get = get_LineNo)) int32_t LineNo;

  __declspec(property(get = get_LinePos)) int32_t LinePos;

  __declspec(property(get = get_Normalize)) bool Normalize;

  __declspec(property(get = get_ParsingInternalSubset)) bool ParsingInternalSubset;

  __declspec(property(get = get_ParsingTopLevelMarkup)) bool ParsingTopLevelMarkup;

  __declspec(property(get = get_SaveInternalSubsetValue)) bool SaveInternalSubsetValue;

  __declspec(property(get = get_SupportNamespaces)) bool SupportNamespaces;

  /// @brief Field chars, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_chars, put = __cordl_internal_set_chars)) ::ArrayW<char16_t, ::Array<char16_t>*> chars;

  /// @brief Field charsUsed, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_charsUsed, put = __cordl_internal_set_charsUsed)) int32_t charsUsed;

  /// @brief Field colonPos, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_colonPos, put = __cordl_internal_set_colonPos)) int32_t colonPos;

  /// @brief Field condSectionDepth, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_condSectionDepth, put = __cordl_internal_set_condSectionDepth)) int32_t condSectionDepth;

  /// @brief Field condSectionEntityIds, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_condSectionEntityIds, put = __cordl_internal_set_condSectionEntityIds)) ::ArrayW<int32_t, ::Array<int32_t>*> condSectionEntityIds;

  /// @brief Field curPos, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_curPos, put = __cordl_internal_set_curPos)) int32_t curPos;

  /// @brief Field currentEntityId, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_currentEntityId, put = __cordl_internal_set_currentEntityId)) int32_t currentEntityId;

  /// @brief Field documentBaseUri, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_documentBaseUri, put = __cordl_internal_set_documentBaseUri)) ::StringW documentBaseUri;

  /// @brief Field externalDtdBaseUri, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_externalDtdBaseUri, put = __cordl_internal_set_externalDtdBaseUri)) ::StringW externalDtdBaseUri;

  /// @brief Field externalEntitiesDepth, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_externalEntitiesDepth, put = __cordl_internal_set_externalEntitiesDepth)) int32_t externalEntitiesDepth;

  /// @brief Field freeFloatingDtd, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get_freeFloatingDtd, put = __cordl_internal_set_freeFloatingDtd)) bool freeFloatingDtd;

  /// @brief Field hasFreeFloatingInternalSubset, offset 0x89, size 0x1
  __declspec(property(get = __cordl_internal_get_hasFreeFloatingInternalSubset, put = __cordl_internal_set_hasFreeFloatingInternalSubset)) bool hasFreeFloatingInternalSubset;

  /// @brief Field internalSubsetValueSb, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_internalSubsetValueSb, put = __cordl_internal_set_internalSubsetValueSb)) ::System::Text::StringBuilder* internalSubsetValueSb;

  /// @brief Field literalLineInfo, offset 0x9c, size 0x8
  __declspec(property(get = __cordl_internal_get_literalLineInfo, put = __cordl_internal_set_literalLineInfo)) ::System::Xml::LineInfo literalLineInfo;

  /// @brief Field literalQuoteChar, offset 0xa4, size 0x2
  __declspec(property(get = __cordl_internal_get_literalQuoteChar, put = __cordl_internal_set_literalQuoteChar)) char16_t literalQuoteChar;

  /// @brief Field nameTable, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_nameTable, put = __cordl_internal_set_nameTable)) ::System::Xml::XmlNameTable* nameTable;

  /// @brief Field nextScaningFunction, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_nextScaningFunction, put = __cordl_internal_set_nextScaningFunction)) ::System::Xml::DtdParser_ScanningFunction nextScaningFunction;

  /// @brief Field normalize, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_normalize, put = __cordl_internal_set_normalize)) bool normalize;

  /// @brief Field publicId, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_publicId, put = __cordl_internal_set_publicId)) ::StringW publicId;

  /// @brief Field readerAdapter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_readerAdapter, put = __cordl_internal_set_readerAdapter)) ::System::Xml::IDtdParserAdapter* readerAdapter;

  /// @brief Field readerAdapterWithValidation, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_readerAdapterWithValidation,
                      put = __cordl_internal_set_readerAdapterWithValidation)) ::System::Xml::IDtdParserAdapterWithValidation* readerAdapterWithValidation;

  /// @brief Field savedScanningFunction, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_savedScanningFunction, put = __cordl_internal_set_savedScanningFunction)) ::System::Xml::DtdParser_ScanningFunction savedScanningFunction;

  /// @brief Field scanningFunction, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_scanningFunction, put = __cordl_internal_set_scanningFunction)) ::System::Xml::DtdParser_ScanningFunction scanningFunction;

  /// @brief Field schemaInfo, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_schemaInfo, put = __cordl_internal_set_schemaInfo)) ::System::Xml::Schema::SchemaInfo* schemaInfo;

  /// @brief Field stringBuilder, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_stringBuilder, put = __cordl_internal_set_stringBuilder)) ::System::Text::StringBuilder* stringBuilder;

  /// @brief Field supportNamespaces, offset 0x4a, size 0x1
  __declspec(property(get = __cordl_internal_get_supportNamespaces, put = __cordl_internal_set_supportNamespaces)) bool supportNamespaces;

  /// @brief Field systemId, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_systemId, put = __cordl_internal_set_systemId)) ::StringW systemId;

  /// @brief Field tokenStartPos, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_tokenStartPos, put = __cordl_internal_set_tokenStartPos)) int32_t tokenStartPos;

  /// @brief Field undeclaredNotations, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_undeclaredNotations,
                      put = __cordl_internal_set_undeclaredNotations)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::DtdParser_UndeclaredNotation*>* undeclaredNotations;

  /// @brief Field v1Compat, offset 0x4b, size 0x1
  __declspec(property(get = __cordl_internal_get_v1Compat, put = __cordl_internal_set_v1Compat)) bool v1Compat;

  /// @brief Field validate, offset 0x49, size 0x1
  __declspec(property(get = __cordl_internal_get_validate, put = __cordl_internal_set_validate)) bool validate;

  /// @brief Field whitespaceSeen, offset 0x6c, size 0x1
  __declspec(property(get = __cordl_internal_get_whitespaceSeen, put = __cordl_internal_set_whitespaceSeen)) bool whitespaceSeen;

  /// @brief Field xmlCharType, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlCharType, put = __cordl_internal_set_xmlCharType)) ::System::Xml::XmlCharType xmlCharType;

  /// @brief Convert operator to "::System::Xml::IDtdParser"
  constexpr operator ::System::Xml::IDtdParser*() noexcept;

  /// @brief Method AddUndeclaredNotation, addr 0x435191c, size 0x15c, virtual false, abstract: false, final false
  inline void AddUndeclaredNotation(::StringW notationName);

  /// @brief Method Create, addr 0x434d174, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Xml::IDtdParser* Create();

  /// @brief Method EatPublicKeyword, addr 0x4355758, size 0xe4, virtual false, abstract: false, final false
  inline bool EatPublicKeyword();

  /// @brief Method EatSystemKeyword, addr 0x435583c, size 0xe4, virtual false, abstract: false, final false
  inline bool EatSystemKeyword();

  /// @brief Method GetNameQualified, addr 0x434eb8c, size 0x174, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* GetNameQualified(bool canHavePrefix);

  /// @brief Method GetNameString, addr 0x4351900, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW GetNameString();

  /// @brief Method GetNmtokenString, addr 0x4351a78, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW GetNmtokenString();

  /// @brief Method GetToken, addr 0x434e308, size 0x838, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token GetToken(bool needWhiteSpace);

  /// @brief Method GetValue, addr 0x4351af4, size 0x5c, virtual false, abstract: false, final false
  inline ::StringW GetValue();

  /// @brief Method GetValueWithStrippedSpaces, addr 0x4351a94, size 0x60, virtual false, abstract: false, final false
  inline ::StringW GetValueWithStrippedSpaces();

  /// @brief Method HandleEntityEnd, addr 0x4355440, size 0x1a8, virtual false, abstract: false, final false
  inline bool HandleEntityEnd(bool inLiteral);

  /// @brief Method HandleEntityReference, addr 0x4356c10, size 0x2a0, virtual false, abstract: false, final false
  inline bool HandleEntityReference(::System::Xml::XmlQualifiedName* entityName, bool paramEntity, bool inLiteral, bool inAttribute);

  /// @brief Method HandleEntityReference, addr 0x4352700, size 0x50, virtual false, abstract: false, final false
  inline bool HandleEntityReference(bool paramEntity, bool inLiteral, bool inAttribute);

  /// @brief Method Initialize, addr 0x434d1c4, size 0x3cc, virtual false, abstract: false, final false
  inline void Initialize(::System::Xml::IDtdParserAdapter* readerAdapter);

  /// @brief Method InitializeFreeFloatingDtd, addr 0x434d590, size 0x3c8, virtual false, abstract: false, final false
  inline void InitializeFreeFloatingDtd(::StringW baseUri, ::StringW docTypeName, ::StringW publicId, ::StringW systemId, ::StringW internalSubset, ::System::Xml::IDtdParserAdapter* adapter);

  /// @brief Method IsAttributeValueType, addr 0x4351834, size 0xc, virtual false, abstract: false, final false
  inline bool IsAttributeValueType(::System::Xml::DtdParser_Token token);

  /// @brief Method LoadParsingBuffer, addr 0x434e18c, size 0x17c, virtual false, abstract: false, final false
  inline void LoadParsingBuffer();

  static inline ::System::Xml::DtdParser* New_ctor();

  /// @brief Method OnUnexpectedError, addr 0x434eb40, size 0x4c, virtual false, abstract: false, final false
  inline void OnUnexpectedError();

  /// @brief Method Parse, addr 0x434da04, size 0x23c, virtual false, abstract: false, final false
  inline void Parse(bool saveInternalSubset);

  /// @brief Method ParseAttlistDecl, addr 0x434f6d4, size 0x5bc, virtual false, abstract: false, final false
  inline void ParseAttlistDecl();

  /// @brief Method ParseAttlistDefault, addr 0x4351680, size 0x1b4, virtual false, abstract: false, final false
  inline void ParseAttlistDefault(::System::Xml::Schema::SchemaAttDef* attrDef, bool ignoreErrors);

  /// @brief Method ParseAttlistType, addr 0x4351114, size 0x56c, virtual false, abstract: false, final false
  inline void ParseAttlistType(::System::Xml::Schema::SchemaAttDef* attrDef, ::System::Xml::Schema::SchemaElementDecl* elementDecl, bool ignoreErrors);

  /// @brief Method ParseComment, addr 0x4350578, size 0x24c, virtual false, abstract: false, final false
  inline void ParseComment();

  /// @brief Method ParseCondSection, addr 0x4350990, size 0x23c, virtual false, abstract: false, final false
  inline void ParseCondSection();

  /// @brief Method ParseElementDecl, addr 0x434fc90, size 0x39c, virtual false, abstract: false, final false
  inline void ParseElementDecl();

  /// @brief Method ParseElementMixedContent, addr 0x4351b50, size 0x294, virtual false, abstract: false, final false
  inline void ParseElementMixedContent(::System::Xml::Schema::ParticleContentValidator* pcv, int32_t startParenEntityId);

  /// @brief Method ParseElementOnlyContent, addr 0x4351de4, size 0x348, virtual false, abstract: false, final false
  inline void ParseElementOnlyContent(::System::Xml::Schema::ParticleContentValidator* pcv, int32_t startParenEntityId);

  /// @brief Method ParseEntityDecl, addr 0x435002c, size 0x35c, virtual false, abstract: false, final false
  inline void ParseEntityDecl();

  /// @brief Method ParseExternalId, addr 0x434ed00, size 0x4e4, virtual false, abstract: false, final false
  inline void ParseExternalId(::System::Xml::DtdParser_Token idTokenType, ::System::Xml::DtdParser_Token declType, ::ByRef<::StringW> publicId, ::ByRef<::StringW> systemId);

  /// @brief Method ParseExternalSubset, addr 0x434f1f0, size 0x1a4, virtual false, abstract: false, final false
  inline void ParseExternalSubset();

  /// @brief Method ParseFreeFloatingDtd, addr 0x434dd84, size 0x54, virtual false, abstract: false, final false
  inline void ParseFreeFloatingDtd();

  /// @brief Method ParseHowMany, addr 0x435212c, size 0x70, virtual false, abstract: false, final false
  inline void ParseHowMany(::System::Xml::Schema::ParticleContentValidator* pcv);

  /// @brief Method ParseInDocumentDtd, addr 0x434ddd8, size 0x14c, virtual false, abstract: false, final false
  inline void ParseInDocumentDtd(bool saveInternalSubset);

  /// @brief Method ParseInternalSubset, addr 0x434f1ec, size 0x4, virtual false, abstract: false, final false
  inline void ParseInternalSubset();

  /// @brief Method ParseNotationDecl, addr 0x4350388, size 0x1f0, virtual false, abstract: false, final false
  inline void ParseNotationDecl();

  /// @brief Method ParsePI, addr 0x43507c4, size 0x164, virtual false, abstract: false, final false
  inline void ParsePI();

  /// @brief Method ParseSubset, addr 0x434f394, size 0x340, virtual false, abstract: false, final false
  inline void ParseSubset();

  /// @brief Method ParseUnexpectedToken, addr 0x4352750, size 0xbc, virtual false, abstract: false, final false
  inline ::StringW ParseUnexpectedToken(int32_t startPos);

  /// @brief Method ReadData, addr 0x435537c, size 0xc4, virtual false, abstract: false, final false
  inline int32_t ReadData();

  /// @brief Method ReadDataInName, addr 0x43569a8, size 0x44, virtual false, abstract: false, final false
  inline bool ReadDataInName();

  /// @brief Method SaveParsingBuffer, addr 0x434f1e4, size 0x8, virtual false, abstract: false, final false
  inline void SaveParsingBuffer();

  /// @brief Method SaveParsingBuffer, addr 0x4350ca0, size 0x14c, virtual false, abstract: false, final false
  inline void SaveParsingBuffer(int32_t internalSubsetValueEndPos);

  /// @brief Method ScanAttlist1, addr 0x4353828, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanAttlist1();

  /// @brief Method ScanAttlist2, addr 0x43538ec, size 0x680, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanAttlist2();

  /// @brief Method ScanAttlist3, addr 0x4353f6c, size 0xa0, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanAttlist3();

  /// @brief Method ScanAttlist4, addr 0x435400c, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanAttlist4();

  /// @brief Method ScanAttlist5, addr 0x43540dc, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanAttlist5();

  /// @brief Method ScanAttlist6, addr 0x43541ac, size 0x374, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanAttlist6();

  /// @brief Method ScanAttlist7, addr 0x4354520, size 0xbc, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanAttlist7();

  /// @brief Method ScanClosingTag, addr 0x43552e8, size 0x94, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanClosingTag();

  /// @brief Method ScanCondSection1, addr 0x4354b68, size 0x29c, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanCondSection1();

  /// @brief Method ScanCondSection2, addr 0x4354e04, size 0x98, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanCondSection2();

  /// @brief Method ScanCondSection3, addr 0x4354e9c, size 0x44c, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanCondSection3();

  /// @brief Method ScanDoctype1, addr 0x4352f78, size 0x12c, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanDoctype1();

  /// @brief Method ScanDoctype2, addr 0x43530a4, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanDoctype2();

  /// @brief Method ScanElement1, addr 0x435314c, size 0x1d0, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanElement1();

  /// @brief Method ScanElement2, addr 0x435331c, size 0x1a4, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanElement2();

  /// @brief Method ScanElement3, addr 0x43534c0, size 0x80, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanElement3();

  /// @brief Method ScanElement4, addr 0x4353540, size 0xcc, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanElement4();

  /// @brief Method ScanElement5, addr 0x435360c, size 0xec, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanElement5();

  /// @brief Method ScanElement6, addr 0x43536f8, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanElement6();

  /// @brief Method ScanElement7, addr 0x43537c8, size 0x60, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanElement7();

  /// @brief Method ScanEntity1, addr 0x43548ac, size 0x74, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanEntity1();

  /// @brief Method ScanEntity2, addr 0x4354920, size 0x134, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanEntity2();

  /// @brief Method ScanEntity3, addr 0x4354a54, size 0x114, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanEntity3();

  /// @brief Method ScanEntityName, addr 0x43563a0, size 0x160, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* ScanEntityName();

  /// @brief Method ScanLiteral, addr 0x4355920, size 0xa80, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanLiteral(::System::Xml::DtdParser_LiteralType literalType);

  /// @brief Method ScanName, addr 0x43555e8, size 0x8, virtual false, abstract: false, final false
  inline void ScanName();

  /// @brief Method ScanNameExpected, addr 0x435280c, size 0x24, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanNameExpected();

  /// @brief Method ScanNmtoken, addr 0x43555f8, size 0x160, virtual false, abstract: false, final false
  inline void ScanNmtoken();

  /// @brief Method ScanNmtokenExpected, addr 0x4352854, size 0x20, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanNmtokenExpected();

  /// @brief Method ScanNotation1, addr 0x43545dc, size 0x100, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanNotation1();

  /// @brief Method ScanPublicId1, addr 0x4354790, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanPublicId1();

  /// @brief Method ScanPublicId2, addr 0x4354844, size 0x68, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanPublicId2();

  /// @brief Method ScanQName, addr 0x43555f0, size 0x8, virtual false, abstract: false, final false
  inline void ScanQName();

  /// @brief Method ScanQName, addr 0x4356728, size 0x280, virtual false, abstract: false, final false
  inline void ScanQName(bool isQName);

  /// @brief Method ScanQNameExpected, addr 0x4352830, size 0x24, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanQNameExpected();

  /// @brief Method ScanSubsetContent, addr 0x4352874, size 0x704, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanSubsetContent();

  /// @brief Method ScanSystemId, addr 0x43546dc, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Xml::DtdParser_Token ScanSystemId();

  /// @brief Method SendValidationEvent, addr 0x4350bcc, size 0xd4, virtual false, abstract: false, final false
  inline void SendValidationEvent(int32_t pos, ::System::Xml::Schema::XmlSeverityType severity, ::StringW code, ::StringW arg);

  /// @brief Method SendValidationEvent, addr 0x4351840, size 0xc0, virtual false, abstract: false, final false
  inline void SendValidationEvent(::System::Xml::Schema::XmlSeverityType severity, ::StringW code, ::StringW arg);

  /// @brief Method SendValidationEvent, addr 0x434e048, size 0x144, virtual false, abstract: false, final false
  inline void SendValidationEvent(::System::Xml::Schema::XmlSeverityType severity, ::System::Xml::Schema::XmlSchemaException* e);

  /// @brief Method StripSpaces, addr 0x43569ec, size 0x224, virtual false, abstract: false, final false
  static inline ::StringW StripSpaces(::StringW value);

  /// @brief Method System.Xml.IDtdParser.ParseFreeFloatingDtd, addr 0x434dc40, size 0x24, virtual true, abstract: false, final true
  inline ::System::Xml::IDtdInfo* System_Xml_IDtdParser_ParseFreeFloatingDtd(::StringW baseUri, ::StringW docTypeName, ::StringW publicId, ::StringW systemId, ::StringW internalSubset,
                                                                             ::System::Xml::IDtdParserAdapter* adapter);

  /// @brief Method System.Xml.IDtdParser.ParseInternalDtd, addr 0x434d9d4, size 0x30, virtual true, abstract: false, final true
  inline ::System::Xml::IDtdInfo* System_Xml_IDtdParser_ParseInternalDtd(::System::Xml::IDtdParserAdapter* adapter, bool saveInternalSubset);

  /// @brief Method Throw, addr 0x4350928, size 0x68, virtual false, abstract: false, final false
  inline void Throw(int32_t curPos, ::StringW res);

  /// @brief Method Throw, addr 0x435219c, size 0x1e4, virtual false, abstract: false, final false
  inline void Throw(int32_t curPos, ::StringW res, ::StringW arg);

  /// @brief Method Throw, addr 0x435249c, size 0x1e4, virtual false, abstract: false, final false
  inline void Throw(int32_t curPos, ::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args);

  /// @brief Method Throw, addr 0x4350f48, size 0x1cc, virtual false, abstract: false, final false
  inline void Throw(::StringW res, ::StringW arg, int32_t lineNo, int32_t linePos);

  /// @brief Method ThrowInvalidChar, addr 0x4352680, size 0x80, virtual false, abstract: false, final false
  inline void ThrowInvalidChar(::ArrayW<char16_t, ::Array<char16_t>*> data, int32_t length, int32_t invCharPos);

  /// @brief Method ThrowInvalidChar, addr 0x434d958, size 0x7c, virtual false, abstract: false, final false
  inline void ThrowInvalidChar(int32_t pos, ::StringW data, int32_t invCharPos);

  /// @brief Method ThrowUnexpectedToken, addr 0x4350dec, size 0x8, virtual false, abstract: false, final false
  inline void ThrowUnexpectedToken(int32_t pos, ::StringW expectedToken);

  /// @brief Method ThrowUnexpectedToken, addr 0x4352380, size 0x11c, virtual false, abstract: false, final false
  inline void ThrowUnexpectedToken(int32_t pos, ::StringW expectedToken1, ::StringW expectedToken2);

  /// @brief Method VerifyEntityReference, addr 0x4356500, size 0x228, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaEntity* VerifyEntityReference(::System::Xml::XmlQualifiedName* entityName, bool paramEntity, bool mustBeDeclared, bool inAttribute);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_chars() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_chars();

  constexpr int32_t const& __cordl_internal_get_charsUsed() const;

  constexpr int32_t& __cordl_internal_get_charsUsed();

  constexpr int32_t const& __cordl_internal_get_colonPos() const;

  constexpr int32_t& __cordl_internal_get_colonPos();

  constexpr int32_t const& __cordl_internal_get_condSectionDepth() const;

  constexpr int32_t& __cordl_internal_get_condSectionDepth();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_condSectionEntityIds() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_condSectionEntityIds();

  constexpr int32_t const& __cordl_internal_get_curPos() const;

  constexpr int32_t& __cordl_internal_get_curPos();

  constexpr int32_t const& __cordl_internal_get_currentEntityId() const;

  constexpr int32_t& __cordl_internal_get_currentEntityId();

  constexpr ::StringW const& __cordl_internal_get_documentBaseUri() const;

  constexpr ::StringW& __cordl_internal_get_documentBaseUri();

  constexpr ::StringW const& __cordl_internal_get_externalDtdBaseUri() const;

  constexpr ::StringW& __cordl_internal_get_externalDtdBaseUri();

  constexpr int32_t const& __cordl_internal_get_externalEntitiesDepth() const;

  constexpr int32_t& __cordl_internal_get_externalEntitiesDepth();

  constexpr bool const& __cordl_internal_get_freeFloatingDtd() const;

  constexpr bool& __cordl_internal_get_freeFloatingDtd();

  constexpr bool const& __cordl_internal_get_hasFreeFloatingInternalSubset() const;

  constexpr bool& __cordl_internal_get_hasFreeFloatingInternalSubset();

  constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_internalSubsetValueSb() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get_internalSubsetValueSb();

  constexpr ::System::Xml::LineInfo const& __cordl_internal_get_literalLineInfo() const;

  constexpr ::System::Xml::LineInfo& __cordl_internal_get_literalLineInfo();

  constexpr char16_t const& __cordl_internal_get_literalQuoteChar() const;

  constexpr char16_t& __cordl_internal_get_literalQuoteChar();

  constexpr ::System::Xml::XmlNameTable* const& __cordl_internal_get_nameTable() const;

  constexpr ::System::Xml::XmlNameTable*& __cordl_internal_get_nameTable();

  constexpr ::System::Xml::DtdParser_ScanningFunction const& __cordl_internal_get_nextScaningFunction() const;

  constexpr ::System::Xml::DtdParser_ScanningFunction& __cordl_internal_get_nextScaningFunction();

  constexpr bool const& __cordl_internal_get_normalize() const;

  constexpr bool& __cordl_internal_get_normalize();

  constexpr ::StringW const& __cordl_internal_get_publicId() const;

  constexpr ::StringW& __cordl_internal_get_publicId();

  constexpr ::System::Xml::IDtdParserAdapter* const& __cordl_internal_get_readerAdapter() const;

  constexpr ::System::Xml::IDtdParserAdapter*& __cordl_internal_get_readerAdapter();

  constexpr ::System::Xml::IDtdParserAdapterWithValidation* const& __cordl_internal_get_readerAdapterWithValidation() const;

  constexpr ::System::Xml::IDtdParserAdapterWithValidation*& __cordl_internal_get_readerAdapterWithValidation();

  constexpr ::System::Xml::DtdParser_ScanningFunction const& __cordl_internal_get_savedScanningFunction() const;

  constexpr ::System::Xml::DtdParser_ScanningFunction& __cordl_internal_get_savedScanningFunction();

  constexpr ::System::Xml::DtdParser_ScanningFunction const& __cordl_internal_get_scanningFunction() const;

  constexpr ::System::Xml::DtdParser_ScanningFunction& __cordl_internal_get_scanningFunction();

  constexpr ::System::Xml::Schema::SchemaInfo* const& __cordl_internal_get_schemaInfo() const;

  constexpr ::System::Xml::Schema::SchemaInfo*& __cordl_internal_get_schemaInfo();

  constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_stringBuilder() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get_stringBuilder();

  constexpr bool const& __cordl_internal_get_supportNamespaces() const;

  constexpr bool& __cordl_internal_get_supportNamespaces();

  constexpr ::StringW const& __cordl_internal_get_systemId() const;

  constexpr ::StringW& __cordl_internal_get_systemId();

  constexpr int32_t const& __cordl_internal_get_tokenStartPos() const;

  constexpr int32_t& __cordl_internal_get_tokenStartPos();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::DtdParser_UndeclaredNotation*>* const& __cordl_internal_get_undeclaredNotations() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::DtdParser_UndeclaredNotation*>*& __cordl_internal_get_undeclaredNotations();

  constexpr bool const& __cordl_internal_get_v1Compat() const;

  constexpr bool& __cordl_internal_get_v1Compat();

  constexpr bool const& __cordl_internal_get_validate() const;

  constexpr bool& __cordl_internal_get_validate();

  constexpr bool const& __cordl_internal_get_whitespaceSeen() const;

  constexpr bool& __cordl_internal_get_whitespaceSeen();

  constexpr ::System::Xml::XmlCharType const& __cordl_internal_get_xmlCharType() const;

  constexpr ::System::Xml::XmlCharType& __cordl_internal_get_xmlCharType();

  constexpr void __cordl_internal_set_chars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_charsUsed(int32_t value);

  constexpr void __cordl_internal_set_colonPos(int32_t value);

  constexpr void __cordl_internal_set_condSectionDepth(int32_t value);

  constexpr void __cordl_internal_set_condSectionEntityIds(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_curPos(int32_t value);

  constexpr void __cordl_internal_set_currentEntityId(int32_t value);

  constexpr void __cordl_internal_set_documentBaseUri(::StringW value);

  constexpr void __cordl_internal_set_externalDtdBaseUri(::StringW value);

  constexpr void __cordl_internal_set_externalEntitiesDepth(int32_t value);

  constexpr void __cordl_internal_set_freeFloatingDtd(bool value);

  constexpr void __cordl_internal_set_hasFreeFloatingInternalSubset(bool value);

  constexpr void __cordl_internal_set_internalSubsetValueSb(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set_literalLineInfo(::System::Xml::LineInfo value);

  constexpr void __cordl_internal_set_literalQuoteChar(char16_t value);

  constexpr void __cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value);

  constexpr void __cordl_internal_set_nextScaningFunction(::System::Xml::DtdParser_ScanningFunction value);

  constexpr void __cordl_internal_set_normalize(bool value);

  constexpr void __cordl_internal_set_publicId(::StringW value);

  constexpr void __cordl_internal_set_readerAdapter(::System::Xml::IDtdParserAdapter* value);

  constexpr void __cordl_internal_set_readerAdapterWithValidation(::System::Xml::IDtdParserAdapterWithValidation* value);

  constexpr void __cordl_internal_set_savedScanningFunction(::System::Xml::DtdParser_ScanningFunction value);

  constexpr void __cordl_internal_set_scanningFunction(::System::Xml::DtdParser_ScanningFunction value);

  constexpr void __cordl_internal_set_schemaInfo(::System::Xml::Schema::SchemaInfo* value);

  constexpr void __cordl_internal_set_stringBuilder(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set_supportNamespaces(bool value);

  constexpr void __cordl_internal_set_systemId(::StringW value);

  constexpr void __cordl_internal_set_tokenStartPos(int32_t value);

  constexpr void __cordl_internal_set_undeclaredNotations(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::DtdParser_UndeclaredNotation*>* value);

  constexpr void __cordl_internal_set_v1Compat(bool value);

  constexpr void __cordl_internal_set_validate(bool value);

  constexpr void __cordl_internal_set_whitespaceSeen(bool value);

  constexpr void __cordl_internal_set_xmlCharType(::System::Xml::XmlCharType value);

  /// @brief Method .ctor, addr 0x434d0ec, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BaseUriStr, addr 0x434df24, size 0x124, virtual false, abstract: false, final false
  inline ::StringW get_BaseUriStr();

  /// @brief Method get_IgnoreEntityReferences, addr 0x434dc74, size 0x10, virtual false, abstract: false, final false
  inline bool get_IgnoreEntityReferences();

  /// @brief Method get_LineNo, addr 0x4350df4, size 0xa4, virtual false, abstract: false, final false
  inline int32_t get_LineNo();

  /// @brief Method get_LinePos, addr 0x4350e98, size 0xb0, virtual false, abstract: false, final false
  inline int32_t get_LinePos();

  /// @brief Method get_Normalize, addr 0x434dd7c, size 0x8, virtual false, abstract: false, final false
  inline bool get_Normalize();

  /// @brief Method get_ParsingInternalSubset, addr 0x434dc64, size 0x10, virtual false, abstract: false, final false
  inline bool get_ParsingInternalSubset();

  /// @brief Method get_ParsingTopLevelMarkup, addr 0x434dd44, size 0x30, virtual false, abstract: false, final false
  inline bool get_ParsingTopLevelMarkup();

  /// @brief Method get_SaveInternalSubsetValue, addr 0x434dc84, size 0xc0, virtual false, abstract: false, final false
  inline bool get_SaveInternalSubsetValue();

  /// @brief Method get_SupportNamespaces, addr 0x434dd74, size 0x8, virtual false, abstract: false, final false
  inline bool get_SupportNamespaces();

  /// @brief Convert to "::System::Xml::IDtdParser"
  constexpr ::System::Xml::IDtdParser* i___System__Xml__IDtdParser() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DtdParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DtdParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DtdParser(DtdParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DtdParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DtdParser(DtdParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7336 };

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
  ::System::Xml::DtdParser_ScanningFunction ___scanningFunction;

  /// @brief Field nextScaningFunction, offset: 0x64, size: 0x4, def value: None
  ::System::Xml::DtdParser_ScanningFunction ___nextScaningFunction;

  /// @brief Field savedScanningFunction, offset: 0x68, size: 0x4, def value: None
  ::System::Xml::DtdParser_ScanningFunction ___savedScanningFunction;

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
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::DtdParser_UndeclaredNotation*>* ___undeclaredNotations;

  /// @brief Field condSectionEntityIds, offset: 0xc0, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___condSectionEntityIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
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

static_assert(::cordl_internals::size_check_v<::System::Xml::DtdParser, 0xc8>, "Size mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::DtdParser_LiteralType, "System.Xml", "DtdParser/LiteralType");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::DtdParser_ScanningFunction, "System.Xml", "DtdParser/ScanningFunction");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::DtdParser_Token, "System.Xml", "DtdParser/Token");
NEED_NO_BOX(::System::Xml::DtdParser);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::DtdParser*, "System.Xml", "DtdParser");
NEED_NO_BOX(::System::Xml::DtdParser_ParseElementOnlyContent_LocalFrame);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::DtdParser_ParseElementOnlyContent_LocalFrame*, "System.Xml", "DtdParser/ParseElementOnlyContent_LocalFrame");
NEED_NO_BOX(::System::Xml::DtdParser_UndeclaredNotation);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::DtdParser_UndeclaredNotation*, "System.Xml", "DtdParser/UndeclaredNotation");
