#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/RichTextTagParser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphMetrics_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RichTextTagParser)
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class ConcurrentDictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
struct IntPtr;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
class Type;
}
namespace System {
template <typename T1, typename T2, typename T3> struct ValueTuple_3;
}
namespace UnityEngine::TextCore::Text {
class SpriteAsset;
}
namespace UnityEngine::TextCore::Text {
class TextSettings;
}
namespace UnityEngine::TextCore {
struct GlyphMetrics;
}
namespace UnityEngine::TextCore {
struct NativeTextGenerationSettings;
}
namespace UnityEngine::TextCore {
class RichTextTagParser_ParseError;
}
namespace UnityEngine::TextCore {
struct RichTextTagParser_Segment;
}
namespace UnityEngine::TextCore {
class RichTextTagParser_TagTypeInfo;
}
namespace UnityEngine::TextCore {
struct RichTextTagParser_TagType;
}
namespace UnityEngine::TextCore {
struct RichTextTagParser_TagUnitType;
}
namespace UnityEngine::TextCore {
struct RichTextTagParser_TagValueType;
}
namespace UnityEngine::TextCore {
class RichTextTagParser_TagValue;
}
namespace UnityEngine::TextCore {
struct RichTextTagParser_Tag;
}
namespace UnityEngine::TextCore {
struct RichTextTagParser_ValueID;
}
namespace UnityEngine::TextCore {
struct TextSpan;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::TextCore {
struct RichTextTagParser_TagType;
}
namespace UnityEngine::TextCore {
struct RichTextTagParser_TagUnitType;
}
namespace UnityEngine::TextCore {
struct RichTextTagParser_TagValueType;
}
namespace UnityEngine::TextCore {
struct RichTextTagParser_ValueID;
}
namespace UnityEngine::TextCore {
class RichTextTagParser;
}
namespace UnityEngine::TextCore {
class RichTextTagParser_ParseError;
}
namespace UnityEngine::TextCore {
class RichTextTagParser_TagTypeInfo;
}
namespace UnityEngine::TextCore {
class RichTextTagParser_TagValue;
}
namespace UnityEngine::TextCore {
struct RichTextTagParser_Segment;
}
namespace UnityEngine::TextCore {
struct RichTextTagParser_Tag;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::RichTextTagParser_TagType);
MARK_VAL_T(::UnityEngine::TextCore::RichTextTagParser_TagUnitType);
MARK_VAL_T(::UnityEngine::TextCore::RichTextTagParser_TagValueType);
MARK_VAL_T(::UnityEngine::TextCore::RichTextTagParser_ValueID);
MARK_REF_T(::UnityEngine::TextCore::RichTextTagParser*);
MARK_REF_T(::UnityEngine::TextCore::RichTextTagParser_ParseError*);
MARK_REF_T(::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*);
MARK_REF_T(::UnityEngine::TextCore::RichTextTagParser_TagValue*);
MARK_VAL_T(::UnityEngine::TextCore::RichTextTagParser_Segment);
MARK_VAL_T(::UnityEngine::TextCore::RichTextTagParser_Tag);
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::RichTextTagParser_TagType, "UnityEngine.TextCore", "RichTextTagParser/TagType");
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::RichTextTagParser_TagUnitType, "UnityEngine.TextCore", "RichTextTagParser/TagUnitType");
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::RichTextTagParser_TagValueType, "UnityEngine.TextCore", "RichTextTagParser/TagValueType");
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::RichTextTagParser_ValueID, "UnityEngine.TextCore", "RichTextTagParser/ValueID");
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::RichTextTagParser*, "UnityEngine.TextCore", "RichTextTagParser");
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::RichTextTagParser_ParseError*, "UnityEngine.TextCore", "RichTextTagParser/ParseError");
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*, "UnityEngine.TextCore", "RichTextTagParser/TagTypeInfo");
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::RichTextTagParser_TagValue*, "UnityEngine.TextCore", "RichTextTagParser/TagValue");
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::RichTextTagParser_Segment, "UnityEngine.TextCore", "RichTextTagParser/Segment");
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::RichTextTagParser_Tag, "UnityEngine.TextCore", "RichTextTagParser/Tag");
// [NullableContext(0)]
// Dependencies
namespace UnityEngine::TextCore {
// Is value type: true
// CS Name: UnityEngine.TextCore.RichTextTagParser/TagType
struct CORDL_TYPE RichTextTagParser_TagType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RichTextTagParser_TagType_Unwrapped
  enum struct __RichTextTagParser_TagType_Unwrapped : int32_t {
    __E_Hyperlink = static_cast<int32_t>(0x0),
    __E_Align = static_cast<int32_t>(0x1),
    __E_AllCaps = static_cast<int32_t>(0x2),
    __E_Alpha = static_cast<int32_t>(0x3),
    __E_Bold = static_cast<int32_t>(0x4),
    __E_Br = static_cast<int32_t>(0x5),
    __E_Color = static_cast<int32_t>(0x6),
    __E_CSpace = static_cast<int32_t>(0x7),
    __E_Font = static_cast<int32_t>(0x8),
    __E_FontWeight = static_cast<int32_t>(0x9),
    __E_Gradient = static_cast<int32_t>(0xa),
    __E_Italic = static_cast<int32_t>(0xb),
    __E_Indent = static_cast<int32_t>(0xc),
    __E_LineHeight = static_cast<int32_t>(0xd),
    __E_LineIndent = static_cast<int32_t>(0xe),
    __E_Link = static_cast<int32_t>(0xf),
    __E_Lowercase = static_cast<int32_t>(0x10),
    __E_Margin = static_cast<int32_t>(0x11),
    __E_MarginLeft = static_cast<int32_t>(0x12),
    __E_MarginRight = static_cast<int32_t>(0x13),
    __E_Mark = static_cast<int32_t>(0x14),
    __E_Mspace = static_cast<int32_t>(0x15),
    __E_NoBr = static_cast<int32_t>(0x16),
    __E_NoParse = static_cast<int32_t>(0x17),
    __E_Strikethrough = static_cast<int32_t>(0x18),
    __E_Size = static_cast<int32_t>(0x19),
    __E_SmallCaps = static_cast<int32_t>(0x1a),
    __E_Space = static_cast<int32_t>(0x1b),
    __E_Sprite = static_cast<int32_t>(0x1c),
    __E_Style = static_cast<int32_t>(0x1d),
    __E_Subscript = static_cast<int32_t>(0x1e),
    __E_Superscript = static_cast<int32_t>(0x1f),
    __E_Underline = static_cast<int32_t>(0x20),
    __E_Uppercase = static_cast<int32_t>(0x21),
    __E_VOffset = static_cast<int32_t>(0x22),
    __E_Width = static_cast<int32_t>(0x23),
    __E_Rotate = static_cast<int32_t>(0x24),
    __E_Pos = static_cast<int32_t>(0x25),
    __E_Material = static_cast<int32_t>(0x26),
    __E_Page = static_cast<int32_t>(0x27),
    __E_Action = static_cast<int32_t>(0x28),
    __E_Cr = static_cast<int32_t>(0x29),
    __E_Zwsp = static_cast<int32_t>(0x2a),
    __E_Zwj = static_cast<int32_t>(0x2b),
    __E_Nbsp = static_cast<int32_t>(0x2c),
    __E_Shy = static_cast<int32_t>(0x2d),
    __E_Unknown = static_cast<int32_t>(0x2e),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RichTextTagParser_TagType_Unwrapped() const noexcept {
    return static_cast<__RichTextTagParser_TagType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RichTextTagParser_TagType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr RichTextTagParser_TagType(int32_t value__) noexcept;

  /// @brief Field Action value: I32(40)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Action;

  /// @brief Field Align value: I32(1)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Align;

  /// @brief Field AllCaps value: I32(2)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const AllCaps;

  /// @brief Field Alpha value: I32(3)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Alpha;

  /// @brief Field Bold value: I32(4)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Bold;

  /// @brief Field Br value: I32(5)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Br;

  /// @brief Field CSpace value: I32(7)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const CSpace;

  /// @brief Field Color value: I32(6)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Color;

  /// @brief Field Cr value: I32(41)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Cr;

  /// @brief Field Font value: I32(8)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Font;

  /// @brief Field FontWeight value: I32(9)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const FontWeight;

  /// @brief Field Gradient value: I32(10)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Gradient;

  /// @brief Field Hyperlink value: I32(0)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Hyperlink;

  /// @brief Field Indent value: I32(12)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Indent;

  /// @brief Field Italic value: I32(11)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Italic;

  /// @brief Field LineHeight value: I32(13)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const LineHeight;

  /// @brief Field LineIndent value: I32(14)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const LineIndent;

  /// @brief Field Link value: I32(15)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Link;

  /// @brief Field Lowercase value: I32(16)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Lowercase;

  /// @brief Field Margin value: I32(17)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Margin;

  /// @brief Field MarginLeft value: I32(18)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const MarginLeft;

  /// @brief Field MarginRight value: I32(19)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const MarginRight;

  /// @brief Field Mark value: I32(20)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Mark;

  /// @brief Field Material value: I32(38)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Material;

  /// @brief Field Mspace value: I32(21)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Mspace;

  /// @brief Field Nbsp value: I32(44)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Nbsp;

  /// @brief Field NoBr value: I32(22)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const NoBr;

  /// @brief Field NoParse value: I32(23)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const NoParse;

  /// @brief Field Page value: I32(39)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Page;

  /// @brief Field Pos value: I32(37)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Pos;

  /// @brief Field Rotate value: I32(36)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Rotate;

  /// @brief Field Shy value: I32(45)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Shy;

  /// @brief Field Size value: I32(25)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Size;

  /// @brief Field SmallCaps value: I32(26)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const SmallCaps;

  /// @brief Field Space value: I32(27)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Space;

  /// @brief Field Sprite value: I32(28)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Sprite;

  /// @brief Field Strikethrough value: I32(24)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Strikethrough;

  /// @brief Field Style value: I32(29)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Style;

  /// @brief Field Subscript value: I32(30)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Subscript;

  /// @brief Field Superscript value: I32(31)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Superscript;

  /// @brief Field Underline value: I32(32)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Underline;

  /// @brief Field Unknown value: I32(46)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Unknown;

  /// @brief Field Uppercase value: I32(33)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Uppercase;

  /// @brief Field VOffset value: I32(34)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const VOffset;

  /// @brief Field Width value: I32(35)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Width;

  /// @brief Field Zwj value: I32(43)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Zwj;

  /// @brief Field Zwsp value: I32(42)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Zwsp;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17785 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_TagType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TextCore::RichTextTagParser_TagType) == 0x4, "Size mismatch!");

} // namespace UnityEngine::TextCore
// [NullableContext(0)]
// Dependencies
namespace UnityEngine::TextCore {
// Is value type: true
// CS Name: UnityEngine.TextCore.RichTextTagParser/ValueID
struct CORDL_TYPE RichTextTagParser_ValueID {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RichTextTagParser_ValueID_Unwrapped
  enum struct __RichTextTagParser_ValueID_Unwrapped : int32_t {
    __E_Color = static_cast<int32_t>(0x0),
    __E_Padding = static_cast<int32_t>(0x1),
    __E_AssetID = static_cast<int32_t>(0x2),
    __E_GlyphMetrics = static_cast<int32_t>(0x3),
    __E_Scale = static_cast<int32_t>(0x4),
    __E_Tint = static_cast<int32_t>(0x5),
    __E_SpriteColor = static_cast<int32_t>(0x6),
    __E_Gradient = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RichTextTagParser_ValueID_Unwrapped() const noexcept {
    return static_cast<__RichTextTagParser_ValueID_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RichTextTagParser_ValueID();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr RichTextTagParser_ValueID(int32_t value__) noexcept;

  /// @brief Field AssetID value: I32(2)
  static ::UnityEngine::TextCore::RichTextTagParser_ValueID const AssetID;

  /// @brief Field Color value: I32(0)
  static ::UnityEngine::TextCore::RichTextTagParser_ValueID const Color;

  /// @brief Field GlyphMetrics value: I32(3)
  static ::UnityEngine::TextCore::RichTextTagParser_ValueID const GlyphMetrics;

  /// @brief Field Gradient value: I32(7)
  static ::UnityEngine::TextCore::RichTextTagParser_ValueID const Gradient;

  /// @brief Field Padding value: I32(1)
  static ::UnityEngine::TextCore::RichTextTagParser_ValueID const Padding;

  /// @brief Field Scale value: I32(4)
  static ::UnityEngine::TextCore::RichTextTagParser_ValueID const Scale;

  /// @brief Field SpriteColor value: I32(6)
  static ::UnityEngine::TextCore::RichTextTagParser_ValueID const SpriteColor;

  /// @brief Field Tint value: I32(5)
  static ::UnityEngine::TextCore::RichTextTagParser_ValueID const Tint;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17786 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_ValueID, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TextCore::RichTextTagParser_ValueID) == 0x4, "Size mismatch!");

} // namespace UnityEngine::TextCore
// [NullableContext(0)]
// Dependencies
namespace UnityEngine::TextCore {
// Is value type: true
// CS Name: UnityEngine.TextCore.RichTextTagParser/TagValueType
struct CORDL_TYPE RichTextTagParser_TagValueType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RichTextTagParser_TagValueType_Unwrapped
  enum struct __RichTextTagParser_TagValueType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_NumericalValue = static_cast<int32_t>(0x1),
    __E_StringValue = static_cast<int32_t>(0x2),
    __E_ColorValue = static_cast<int32_t>(0x3),
    __E_Vector4Value = static_cast<int32_t>(0x4),
    __E_GlyphMetricsValue = static_cast<int32_t>(0x5),
    __E_BoolValue = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RichTextTagParser_TagValueType_Unwrapped() const noexcept {
    return static_cast<__RichTextTagParser_TagValueType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RichTextTagParser_TagValueType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr RichTextTagParser_TagValueType(int32_t value__) noexcept;

  /// @brief Field BoolValue value: I32(6)
  static ::UnityEngine::TextCore::RichTextTagParser_TagValueType const BoolValue;

  /// @brief Field ColorValue value: I32(3)
  static ::UnityEngine::TextCore::RichTextTagParser_TagValueType const ColorValue;

  /// @brief Field GlyphMetricsValue value: I32(5)
  static ::UnityEngine::TextCore::RichTextTagParser_TagValueType const GlyphMetricsValue;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::TextCore::RichTextTagParser_TagValueType const None;

  /// @brief Field NumericalValue value: I32(1)
  static ::UnityEngine::TextCore::RichTextTagParser_TagValueType const NumericalValue;

  /// @brief Field StringValue value: I32(2)
  static ::UnityEngine::TextCore::RichTextTagParser_TagValueType const StringValue;

  /// @brief Field Vector4Value value: I32(4)
  static ::UnityEngine::TextCore::RichTextTagParser_TagValueType const Vector4Value;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17788 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_TagValueType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TextCore::RichTextTagParser_TagValueType) == 0x4, "Size mismatch!");

} // namespace UnityEngine::TextCore
// [NullableContext(0)]
// Dependencies
namespace UnityEngine::TextCore {
// Is value type: true
// CS Name: UnityEngine.TextCore.RichTextTagParser/TagUnitType
struct CORDL_TYPE RichTextTagParser_TagUnitType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RichTextTagParser_TagUnitType_Unwrapped
  enum struct __RichTextTagParser_TagUnitType_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Pixels = static_cast<int32_t>(0x1),
    __E_FontUnits = static_cast<int32_t>(0x2),
    __E_Percentage = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RichTextTagParser_TagUnitType_Unwrapped() const noexcept {
    return static_cast<__RichTextTagParser_TagUnitType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RichTextTagParser_TagUnitType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr RichTextTagParser_TagUnitType(int32_t value__) noexcept;

  /// @brief Field FontUnits value: I32(2)
  static ::UnityEngine::TextCore::RichTextTagParser_TagUnitType const FontUnits;

  /// @brief Field Percentage value: I32(3)
  static ::UnityEngine::TextCore::RichTextTagParser_TagUnitType const Percentage;

  /// @brief Field Pixels value: I32(1)
  static ::UnityEngine::TextCore::RichTextTagParser_TagUnitType const Pixels;

  /// @brief Field Unknown value: I32(0)
  static ::UnityEngine::TextCore::RichTextTagParser_TagUnitType const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17789 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_TagUnitType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TextCore::RichTextTagParser_TagUnitType) == 0x4, "Size mismatch!");

} // namespace UnityEngine::TextCore
// [Nullable(0)]
// Dependencies System.Object, UnityEngine.TextCore.RichTextTagParser::TagType, UnityEngine.TextCore.RichTextTagParser::TagUnitType, UnityEngine.TextCore.RichTextTagParser::TagValueType
namespace UnityEngine::TextCore {
// Is value type: false
// CS Name: UnityEngine.TextCore.RichTextTagParser/TagTypeInfo
class CORDL_TYPE RichTextTagParser_TagTypeInfo : public ::System::Object {
public:
  // Declarations
  /// @brief [CompilerGenerated]
  __declspec(property(get = get_EqualityContract)) ::System::Type* EqualityContract;

  /// @brief Field TagType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_TagType, put = __cordl_internal_set_TagType)) ::UnityEngine::TextCore::RichTextTagParser_TagType TagType;

  /// @brief Field name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field unitType, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_unitType, put = __cordl_internal_set_unitType)) ::UnityEngine::TextCore::RichTextTagParser_TagUnitType unitType;

  /// @brief Field valueType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_valueType, put = __cordl_internal_set_valueType)) ::UnityEngine::TextCore::RichTextTagParser_TagValueType valueType;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>*() noexcept;

  /// [NullableContext(2)]
  /// [CompilerGenerated]
  /// @brief Method Equals, addr 0x702b4c4, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// [NullableContext(2)]
  /// [CompilerGenerated]
  /// @brief Method Equals, addr 0x702b558, size 0x194, virtual true, abstract: false, final false
  inline bool Equals(::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo* other);

  /// [CompilerGenerated]
  /// @brief Method GetHashCode, addr 0x702b338, size 0x18c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo* New_ctor(::UnityEngine::TextCore::RichTextTagParser_TagType tagType, ::StringW name,
                                                                                 ::UnityEngine::TextCore::RichTextTagParser_TagValueType valueType,
                                                                                 ::UnityEngine::TextCore::RichTextTagParser_TagUnitType unitType);

  /// [CompilerGenerated]
  /// @brief Method PrintMembers, addr 0x702b164, size 0x1d4, virtual true, abstract: false, final false
  inline bool PrintMembers(::System::Text::StringBuilder* builder);

  /// [CompilerGenerated]
  /// @brief Method ToString, addr 0x702b078, size 0xec, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType const& __cordl_internal_get_TagType() const;

  constexpr ::UnityEngine::TextCore::RichTextTagParser_TagType& __cordl_internal_get_TagType();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::UnityEngine::TextCore::RichTextTagParser_TagUnitType const& __cordl_internal_get_unitType() const;

  constexpr ::UnityEngine::TextCore::RichTextTagParser_TagUnitType& __cordl_internal_get_unitType();

  constexpr ::UnityEngine::TextCore::RichTextTagParser_TagValueType const& __cordl_internal_get_valueType() const;

  constexpr ::UnityEngine::TextCore::RichTextTagParser_TagValueType& __cordl_internal_get_valueType();

  constexpr void __cordl_internal_set_TagType(::UnityEngine::TextCore::RichTextTagParser_TagType value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_unitType(::UnityEngine::TextCore::RichTextTagParser_TagUnitType value);

  constexpr void __cordl_internal_set_valueType(::UnityEngine::TextCore::RichTextTagParser_TagValueType value);

  /// @brief Method .ctor, addr 0x702b008, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::TextCore::RichTextTagParser_TagType tagType, ::StringW name, ::UnityEngine::TextCore::RichTextTagParser_TagValueType valueType,
                    ::UnityEngine::TextCore::RichTextTagParser_TagUnitType unitType);

  /// [CompilerGenerated]
  /// @brief Method get_EqualityContract, addr 0x702b018, size 0x60, virtual true, abstract: false, final false
  inline ::System::Type* get_EqualityContract();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>"
  constexpr ::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>* i___System__IEquatable_1___UnityEngine__TextCore__RichTextTagParser_TagTypeInfo__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RichTextTagParser_TagTypeInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RichTextTagParser_TagTypeInfo", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RichTextTagParser_TagTypeInfo(RichTextTagParser_TagTypeInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RichTextTagParser_TagTypeInfo", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RichTextTagParser_TagTypeInfo(RichTextTagParser_TagTypeInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17787 };

  /// @brief Field TagType, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::TextCore::RichTextTagParser_TagType ___TagType;

  /// @brief Field name, offset: 0x18, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field valueType, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::TextCore::RichTextTagParser_TagValueType ___valueType;

  /// @brief Field unitType, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::TextCore::RichTextTagParser_TagUnitType ___unitType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo, ___TagType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo, ___name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo, ___valueType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo, ___unitType) == 0x24, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo) == 0x28, "Size mismatch!");

} // namespace UnityEngine::TextCore
// [Nullable(0)]
// [NullableContext(2)]
// Dependencies System.Nullable`1<T>, System.Object, UnityEngine.Color, UnityEngine.TextCore.GlyphMetrics, UnityEngine.TextCore.RichTextTagParser::TagUnitType,
// UnityEngine.TextCore.RichTextTagParser::TagValueType, UnityEngine.TextCore.RichTextTagParser::ValueID, UnityEngine.Vector4
namespace UnityEngine::TextCore {
// Is value type: false
// CS Name: UnityEngine.TextCore.RichTextTagParser/TagValue
class CORDL_TYPE RichTextTagParser_TagValue : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BoolValue)) bool BoolValue;

  __declspec(property(get = get_ColorValue)) ::UnityEngine::Color ColorValue;

  /// [CompilerGenerated]
  /// @brief [Nullable(1)]
  __declspec(property(get = get_EqualityContract)) ::System::Type* EqualityContract;

  __declspec(property(get = get_GlyphMetricsValue)) ::UnityEngine::TextCore::GlyphMetrics GlyphMetricsValue;

  __declspec(property(get = get_NumericalValue)) float_t NumericalValue;

  __declspec(property(get = get_StringValue)) ::StringW StringValue;

  __declspec(property(get = get_Vector4Value)) ::UnityEngine::Vector4 Vector4Value;

  __declspec(property(get = get_ID)) ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> _cordl_ID;

  /// @brief Field m_ID, offset 0x5c, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ID, put = __cordl_internal_set_m_ID)) ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> m_ID;

  /// @brief Field m_boolValue, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_m_boolValue, put = __cordl_internal_set_m_boolValue)) bool m_boolValue;

  /// @brief Field m_colorValue, offset 0x24, size 0x10
  __declspec(property(get = __cordl_internal_get_m_colorValue, put = __cordl_internal_set_m_colorValue)) ::UnityEngine::Color m_colorValue;

  /// @brief Field m_glyphMetricsValue, offset 0x44, size 0x14
  __declspec(property(get = __cordl_internal_get_m_glyphMetricsValue, put = __cordl_internal_set_m_glyphMetricsValue)) ::UnityEngine::TextCore::GlyphMetrics m_glyphMetricsValue;

  /// @brief Field m_numericalValue, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_numericalValue, put = __cordl_internal_set_m_numericalValue)) float_t m_numericalValue;

  /// @brief Field m_stringValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_stringValue, put = __cordl_internal_set_m_stringValue)) ::StringW m_stringValue;

  /// @brief Field m_vector4Value, offset 0x34, size 0x10
  __declspec(property(get = __cordl_internal_get_m_vector4Value, put = __cordl_internal_set_m_vector4Value)) ::UnityEngine::Vector4 m_vector4Value;

  /// @brief Field type, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::UnityEngine::TextCore::RichTextTagParser_TagValueType type;

  /// @brief Field unit, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_unit, put = __cordl_internal_set_unit)) ::UnityEngine::TextCore::RichTextTagParser_TagUnitType unit;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagValue*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagValue*>*() noexcept;

  /// [CompilerGenerated]
  /// @brief Method Equals, addr 0x702bb48, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// [CompilerGenerated]
  /// @brief Method Equals, addr 0x702bbdc, size 0x2f8, virtual true, abstract: false, final false
  inline bool Equals(::UnityEngine::TextCore::RichTextTagParser_TagValue* other);

  /// [CompilerGenerated]
  /// @brief Method GetHashCode, addr 0x702b840, size 0x308, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief [NullableContext(1)]
  static inline ::UnityEngine::TextCore::RichTextTagParser_TagValue* New_ctor(::StringW value, ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> id);

  static inline ::UnityEngine::TextCore::RichTextTagParser_TagValue* New_ctor(::UnityEngine::Color value, ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> id);

  static inline ::UnityEngine::TextCore::RichTextTagParser_TagValue* New_ctor(::UnityEngine::TextCore::GlyphMetrics value, ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> id);

  static inline ::UnityEngine::TextCore::RichTextTagParser_TagValue* New_ctor(::UnityEngine::Vector4 value, ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> id);

  static inline ::UnityEngine::TextCore::RichTextTagParser_TagValue* New_ctor(bool value, ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> id);

  static inline ::UnityEngine::TextCore::RichTextTagParser_TagValue* New_ctor(float_t value, ::UnityEngine::TextCore::RichTextTagParser_TagUnitType tagUnitType,
                                                                              ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> id);

  /// [CompilerGenerated]
  /// [NullableContext(1)]
  /// @brief Method PrintMembers, addr 0x702b838, size 0x8, virtual true, abstract: false, final false
  inline bool PrintMembers(::System::Text::StringBuilder* builder);

  /// [CompilerGenerated]
  /// [NullableContext(1)]
  /// @brief Method ToString, addr 0x702b74c, size 0xec, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> const& __cordl_internal_get_m_ID() const;

  constexpr ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID>& __cordl_internal_get_m_ID();

  constexpr bool const& __cordl_internal_get_m_boolValue() const;

  constexpr bool& __cordl_internal_get_m_boolValue();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_m_colorValue() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_m_colorValue();

  constexpr ::UnityEngine::TextCore::GlyphMetrics const& __cordl_internal_get_m_glyphMetricsValue() const;

  constexpr ::UnityEngine::TextCore::GlyphMetrics& __cordl_internal_get_m_glyphMetricsValue();

  constexpr float_t const& __cordl_internal_get_m_numericalValue() const;

  constexpr float_t& __cordl_internal_get_m_numericalValue();

  constexpr ::StringW const& __cordl_internal_get_m_stringValue() const;

  constexpr ::StringW& __cordl_internal_get_m_stringValue();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_m_vector4Value() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_m_vector4Value();

  constexpr ::UnityEngine::TextCore::RichTextTagParser_TagValueType const& __cordl_internal_get_type() const;

  constexpr ::UnityEngine::TextCore::RichTextTagParser_TagValueType& __cordl_internal_get_type();

  constexpr ::UnityEngine::TextCore::RichTextTagParser_TagUnitType const& __cordl_internal_get_unit() const;

  constexpr ::UnityEngine::TextCore::RichTextTagParser_TagUnitType& __cordl_internal_get_unit();

  constexpr void __cordl_internal_set_m_ID(::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> value);

  constexpr void __cordl_internal_set_m_boolValue(bool value);

  constexpr void __cordl_internal_set_m_colorValue(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_m_glyphMetricsValue(::UnityEngine::TextCore::GlyphMetrics value);

  constexpr void __cordl_internal_set_m_numericalValue(float_t value);

  constexpr void __cordl_internal_set_m_stringValue(::StringW value);

  constexpr void __cordl_internal_set_m_vector4Value(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_type(::UnityEngine::TextCore::RichTextTagParser_TagValueType value);

  constexpr void __cordl_internal_set_unit(::UnityEngine::TextCore::RichTextTagParser_TagUnitType value);

  /// [NullableContext(1)]
  /// @brief Method .ctor, addr 0x7022fc0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::StringW value, ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> id);

  /// @brief Method .ctor, addr 0x7022710, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color value, ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> id);

  /// @brief Method .ctor, addr 0x7023b54, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::TextCore::GlyphMetrics value, ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> id);

  /// @brief Method .ctor, addr 0x7022ba0, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector4 value, ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> id);

  /// @brief Method .ctor, addr 0x7023b40, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(bool value, ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> id);

  /// @brief Method .ctor, addr 0x70228fc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(float_t value, ::UnityEngine::TextCore::RichTextTagParser_TagUnitType tagUnitType, ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> id);

  /// @brief Method get_BoolValue, addr 0x702949c, size 0x60, virtual false, abstract: false, final false
  inline bool get_BoolValue();

  /// @brief Method get_ColorValue, addr 0x70292a0, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_ColorValue();

  /// [CompilerGenerated]
  /// [NullableContext(1)]
  /// @brief Method get_EqualityContract, addr 0x702b6ec, size 0x60, virtual true, abstract: false, final false
  inline ::System::Type* get_EqualityContract();

  /// @brief Method get_GlyphMetricsValue, addr 0x7029430, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::GlyphMetrics get_GlyphMetricsValue();

  /// @brief Method get_ID, addr 0x7029364, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> get_ID();

  /// @brief Method get_NumericalValue, addr 0x7029304, size 0x60, virtual false, abstract: false, final false
  inline float_t get_NumericalValue();

  /// @brief Method get_StringValue, addr 0x70293d0, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_StringValue();

  /// @brief Method get_Vector4Value, addr 0x702936c, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_Vector4Value();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagValue*>"
  constexpr ::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagValue*>* i___System__IEquatable_1___UnityEngine__TextCore__RichTextTagParser_TagValue__() noexcept;

  /// [CompilerGenerated]
  /// @brief Method op_Equality, addr 0x70270c4, size 0x20, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::TextCore::RichTextTagParser_TagValue* left, ::UnityEngine::TextCore::RichTextTagParser_TagValue* right);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RichTextTagParser_TagValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RichTextTagParser_TagValue", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RichTextTagParser_TagValue(RichTextTagParser_TagValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RichTextTagParser_TagValue", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RichTextTagParser_TagValue(RichTextTagParser_TagValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17790 };

  /// @brief Field type, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::TextCore::RichTextTagParser_TagValueType ___type;

  /// @brief Field unit, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::TextCore::RichTextTagParser_TagUnitType ___unit;

  /// @brief Field m_stringValue, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_stringValue;

  /// @brief Field m_numericalValue, offset: 0x20, size: 0x4, def value: None
  float_t ___m_numericalValue;

  /// @brief Field m_colorValue, offset: 0x24, size: 0x10, def value: None
  ::UnityEngine::Color ___m_colorValue;

  /// @brief Field m_vector4Value, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___m_vector4Value;

  /// @brief Field m_glyphMetricsValue, offset: 0x44, size: 0x14, def value: None
  ::UnityEngine::TextCore::GlyphMetrics ___m_glyphMetricsValue;

  /// @brief Field m_boolValue, offset: 0x58, size: 0x1, def value: None
  bool ___m_boolValue;

  /// @brief Field m_ID, offset: 0x5c, size: 0x8, def value: None
  ::System::Nullable_1<::UnityEngine::TextCore::RichTextTagParser_ValueID> ___m_ID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_TagValue, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_TagValue, ___unit) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_TagValue, ___m_stringValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_TagValue, ___m_numericalValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_TagValue, ___m_colorValue) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_TagValue, ___m_vector4Value) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_TagValue, ___m_glyphMetricsValue) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_TagValue, ___m_boolValue) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_TagValue, ___m_ID) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TextCore::RichTextTagParser_TagValue) == 0x68, "Size mismatch!");

} // namespace UnityEngine::TextCore
// [NullableContext(2)]
// [Nullable(0)]
// Dependencies UnityEngine.TextCore.RichTextTagParser::TagType
namespace UnityEngine::TextCore {
// Is value type: true
// CS Name: UnityEngine.TextCore.RichTextTagParser/Tag
struct CORDL_TYPE RichTextTagParser_Tag {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RichTextTagParser_Tag();

  // Ctor Parameters [CppParam { name: "tagType", ty: "::UnityEngine::TextCore::RichTextTagParser_TagType", modifiers: "", def_value: None, comment: None }, CppParam { name: "isClosing", ty: "bool",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "start", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "end", ty: "int32_t", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "value", ty: "::UnityEngine::TextCore::RichTextTagParser_TagValue*", modifiers: "", def_value: None, comment: None }, CppParam { name: "value2",
  // ty: "::UnityEngine::TextCore::RichTextTagParser_TagValue*", modifiers: "", def_value: None, comment: None }, CppParam { name: "value3", ty: "::UnityEngine::TextCore::RichTextTagParser_TagValue*",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "value4", ty: "::UnityEngine::TextCore::RichTextTagParser_TagValue*", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "value5", ty: "::UnityEngine::TextCore::RichTextTagParser_TagValue*", modifiers: "", def_value: None, comment: None }, CppParam { name: "nestingLevel", ty: "int8_t", modifiers: "",
  // def_value: None, comment: None }]
  constexpr RichTextTagParser_Tag(::UnityEngine::TextCore::RichTextTagParser_TagType tagType, bool isClosing, int32_t start, int32_t end, ::UnityEngine::TextCore::RichTextTagParser_TagValue* value,
                                  ::UnityEngine::TextCore::RichTextTagParser_TagValue* value2, ::UnityEngine::TextCore::RichTextTagParser_TagValue* value3,
                                  ::UnityEngine::TextCore::RichTextTagParser_TagValue* value4, ::UnityEngine::TextCore::RichTextTagParser_TagValue* value5, int8_t nestingLevel) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17791 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field tagType, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::TextCore::RichTextTagParser_TagType tagType;

  /// @brief Field isClosing, offset: 0x4, size: 0x1, def value: None
  bool isClosing;

  /// @brief Field start, offset: 0x8, size: 0x4, def value: None
  int32_t start;

  /// @brief Field end, offset: 0xc, size: 0x4, def value: None
  int32_t end;

  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::TextCore::RichTextTagParser_TagValue* value;

  /// @brief Field value2, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::TextCore::RichTextTagParser_TagValue* value2;

  /// @brief Field value3, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::TextCore::RichTextTagParser_TagValue* value3;

  /// @brief Field value4, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::TextCore::RichTextTagParser_TagValue* value4;

  /// @brief Field value5, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::TextCore::RichTextTagParser_TagValue* value5;

  /// @brief Field nestingLevel, offset: 0x38, size: 0x1, def value: None
  int8_t nestingLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_Tag, tagType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_Tag, isClosing) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_Tag, start) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_Tag, end) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_Tag, value) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_Tag, value2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_Tag, value3) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_Tag, value4) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_Tag, value5) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_Tag, nestingLevel) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TextCore::RichTextTagParser_Tag) == 0x40, "Size mismatch!");

} // namespace UnityEngine::TextCore
// [NullableContext(0)]
// Dependencies
namespace UnityEngine::TextCore {
// Is value type: true
// CS Name: UnityEngine.TextCore.RichTextTagParser/Segment
struct CORDL_TYPE RichTextTagParser_Segment {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RichTextTagParser_Segment();

  // Ctor Parameters [CppParam { name: "tags", ty: "::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*", modifiers: "", def_value: None, comment: None }, CppParam
  // { name: "start", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "end", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr RichTextTagParser_Segment(::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>* tags, int32_t start, int32_t end) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17792 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// [Nullable(2)]
  /// @brief Field tags, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>* tags;

  /// @brief Field start, offset: 0x8, size: 0x4, def value: None
  int32_t start;

  /// @brief Field end, offset: 0xc, size: 0x4, def value: None
  int32_t end;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_Segment, tags) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_Segment, start) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_Segment, end) == 0xc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TextCore::RichTextTagParser_Segment) == 0x10, "Size mismatch!");

} // namespace UnityEngine::TextCore
// [Nullable(0)]
// Dependencies System.Object
namespace UnityEngine::TextCore {
// Is value type: false
// CS Name: UnityEngine.TextCore.RichTextTagParser/ParseError
class CORDL_TYPE RichTextTagParser_ParseError : public ::System::Object {
public:
  // Declarations
  /// @brief [CompilerGenerated]
  __declspec(property(get = get_EqualityContract)) ::System::Type* EqualityContract;

  /// @brief Field message, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_message, put = __cordl_internal_set_message)) ::StringW message;

  /// @brief Field position, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_position, put = __cordl_internal_set_position)) int32_t position;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>*() noexcept;

  /// [NullableContext(2)]
  /// [CompilerGenerated]
  /// @brief Method Equals, addr 0x702c1f0, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// [NullableContext(2)]
  /// [CompilerGenerated]
  /// @brief Method Equals, addr 0x702c284, size 0x11c, virtual true, abstract: false, final false
  inline bool Equals(::UnityEngine::TextCore::RichTextTagParser_ParseError* other);

  /// [CompilerGenerated]
  /// @brief Method GetHashCode, addr 0x702c0ec, size 0x104, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::TextCore::RichTextTagParser_ParseError* New_ctor(::StringW message, int32_t position);

  /// [CompilerGenerated]
  /// @brief Method PrintMembers, addr 0x702c020, size 0xcc, virtual true, abstract: false, final false
  inline bool PrintMembers(::System::Text::StringBuilder* builder);

  /// [CompilerGenerated]
  /// @brief Method ToString, addr 0x702bf34, size 0xec, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get_message() const;

  constexpr ::StringW& __cordl_internal_get_message();

  constexpr int32_t const& __cordl_internal_get_position() const;

  constexpr int32_t& __cordl_internal_get_position();

  constexpr void __cordl_internal_set_message(::StringW value);

  constexpr void __cordl_internal_set_position(int32_t value);

  /// @brief Method .ctor, addr 0x70270b8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, int32_t position);

  /// [CompilerGenerated]
  /// @brief Method get_EqualityContract, addr 0x702bed4, size 0x60, virtual true, abstract: false, final false
  inline ::System::Type* get_EqualityContract();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>"
  constexpr ::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>* i___System__IEquatable_1___UnityEngine__TextCore__RichTextTagParser_ParseError__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RichTextTagParser_ParseError();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RichTextTagParser_ParseError", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RichTextTagParser_ParseError(RichTextTagParser_ParseError&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RichTextTagParser_ParseError", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RichTextTagParser_ParseError(RichTextTagParser_ParseError const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17793 };

  /// @brief Field position, offset: 0x10, size: 0x4, def value: None
  int32_t ___position;

  /// @brief Field message, offset: 0x18, size: 0x8, def value: None
  ::StringW ___message;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_ParseError, ___position) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_ParseError, ___message) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TextCore::RichTextTagParser_ParseError) == 0x20, "Size mismatch!");

} // namespace UnityEngine::TextCore
// [Nullable(0)]
// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
// [NullableContext(1)]
// Dependencies System.Object, UnityEngine.Color, UnityEngine.Color32, UnityEngine.TextCore.RichTextTagParser::TagTypeInfo
namespace UnityEngine::TextCore {
// Is value type: false
// CS Name: UnityEngine.TextCore.RichTextTagParser
class CORDL_TYPE RichTextTagParser : public ::System::Object {
public:
  // Declarations
  using ParseError = ::UnityEngine::TextCore::RichTextTagParser_ParseError;

  using Segment = ::UnityEngine::TextCore::RichTextTagParser_Segment;

  using Tag = ::UnityEngine::TextCore::RichTextTagParser_Tag;

  using TagType = ::UnityEngine::TextCore::RichTextTagParser_TagType;

  using TagTypeInfo = ::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo;

  using TagUnitType = ::UnityEngine::TextCore::RichTextTagParser_TagUnitType;

  using TagValue = ::UnityEngine::TextCore::RichTextTagParser_TagValue;

  using TagValueType = ::UnityEngine::TextCore::RichTextTagParser_TagValueType;

  using ValueID = ::UnityEngine::TextCore::RichTextTagParser_ValueID;

  /// @brief Field TagsInfo, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TagsInfo, put = setStaticF_TagsInfo)) ::ArrayW<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*> TagsInfo;

  /// @brief Field k_HighlightColor, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_HighlightColor, put = setStaticF_k_HighlightColor)) ::UnityEngine::Color32 k_HighlightColor;

  /// @brief Field k_PrivateArea, offset 0xffffffff, size 0x2
  __declspec(property(get = getStaticF_k_PrivateArea, put = setStaticF_k_PrivateArea)) char16_t k_PrivateArea;

  /// @brief Field s_AtgHyperlinkColor, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_AtgHyperlinkColor, put = setStaticF_s_AtgHyperlinkColor)) ::UnityEngine::Color s_AtgHyperlinkColor;

  /// @brief Field s_EmptyTagNameList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_EmptyTagNameList, put = setStaticF_s_EmptyTagNameList)) ::System::Collections::Generic::List_1<::StringW>* s_EmptyTagNameList;

  /// @brief Field s_FontAssetCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_FontAssetCache, put = setStaticF_s_FontAssetCache)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::IntPtr>* s_FontAssetCache;

  /// @brief Field s_GradientAssetCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_GradientAssetCache, put = setStaticF_s_GradientAssetCache)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::IntPtr>* s_GradientAssetCache;

  /// @brief Field s_LoggedUnsupportedTagWarnings, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_LoggedUnsupportedTagWarnings,
                      put = setStaticF_s_LoggedUnsupportedTagWarnings)) ::System::Collections::Concurrent::ConcurrentDictionary_2<::UnityEngine::TextCore::RichTextTagParser_TagType, uint8_t>*
      s_LoggedUnsupportedTagWarnings;

  /// @brief Field s_SpriteAssetCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SpriteAssetCache,
                      put = setStaticF_s_SpriteAssetCache)) ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>* s_SpriteAssetCache;

  /// @brief Method AddLink, addr 0x7027ff0, size 0x1cc, virtual false, abstract: false, final false
  static inline int32_t
  AddLink(::UnityEngine::TextCore::RichTextTagParser_TagType type, ::StringW value,
          /* [Nullable(new[] { 1, 0, 1 })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>* links);

  /// @brief Method ApplyStateToSegment, addr 0x7027f20, size 0xd0, virtual false, abstract: false, final false
  static inline void ApplyStateToSegment(::StringW input, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>* tags,
                                         ::ArrayW<::UnityEngine::TextCore::RichTextTagParser_Segment> segments);

  /// @brief Method ContainsFontTag, addr 0x7029908, size 0x120, virtual false, abstract: false, final false
  static inline bool ContainsFontTag(::StringW text);

  /// @brief Method ContainsGradientTag, addr 0x7029c68, size 0x120, virtual false, abstract: false, final false
  static inline bool ContainsGradientTag(::StringW text);

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method ContainsNobrTags, addr 0x7029d88, size 0xbc, virtual false, abstract: false, final false
  static inline bool ContainsNobrTags(::StringW text);

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method ContainsSpriteTag, addr 0x7029a28, size 0x120, virtual false, abstract: false, final false
  static inline bool ContainsSpriteTag(::StringW text);

  /// @brief Method ContainsStyleTags, addr 0x7029b48, size 0x120, virtual false, abstract: false, final false
  static inline bool ContainsStyleTags(::StringW text);

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method CreateTextGenerationSettingsArray, addr 0x70294fc, size 0x2d8, virtual false, abstract: false, final false
  static inline void CreateTextGenerationSettingsArray(
      ::by_ref<::UnityEngine::TextCore::NativeTextGenerationSettings> tgs,
      /* [Nullable(new[] { 1, 0, 1 })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>* links,
      ::UnityEngine::Color hyperlinkColor, float_t pixelsPerPoint, ::UnityEngine::TextCore::Text::TextSettings* textSettings);

  /// @brief Method CreateTextSpan, addr 0x70281bc, size 0x10e4, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::TextSpan
  CreateTextSpan(::UnityEngine::TextCore::RichTextTagParser_Segment segment, ::by_ref<::UnityEngine::TextCore::NativeTextGenerationSettings> tgs,
                 /* [Nullable(new[] { 1, 0, 1 })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>* links,
                 ::UnityEngine::Color hyperlinkColor, float_t pixelsPerPoint);

  /// @brief Method FindTags, addr 0x7024fd8, size 0x20e0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*
  FindTags(::by_ref<::StringW> inputStr, ::UnityEngine::TextCore::Text::TextSettings* textSettings, bool preprocessingOnly,
           /* [Nullable(new[] { 2, 1 })] */ ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>* errors);

  /// @brief Method GenerateSegments, addr 0x7027c70, size 0x2b0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::TextCore::RichTextTagParser_Segment> GenerateSegments(::StringW input,
                                                                                              ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>* tags);

  /// [NullableContext(0)]
  /// @brief Method GetAttributeSpan, addr 0x70225d8, size 0x138, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<char16_t> GetAttributeSpan(::System::ReadOnlySpan_1<char16_t> attributeSection);

  /// @brief Method HasFontTags, addr 0x7023e40, size 0x2f4, virtual false, abstract: false, final false
  static inline bool HasFontTags(::StringW text, ::UnityEngine::TextCore::Text::TextSettings* textSettings, ::by_ref<::System::Collections::Generic::List_1<::StringW>*> fontAssetNames);

  /// @brief Method HasGradientTags, addr 0x7024ce0, size 0x2f8, virtual false, abstract: false, final false
  static inline bool HasGradientTags(::StringW text, ::UnityEngine::TextCore::Text::TextSettings* textSettings, ::by_ref<::System::Collections::Generic::List_1<::StringW>*> gradientAssetNames);

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule", "UnityEngine.IMGUIModule" })]
  /// @brief Method HasSpriteTags, addr 0x7024714, size 0x2f8, virtual false, abstract: false, final false
  static inline bool HasSpriteTags(::StringW text, ::UnityEngine::TextCore::Text::TextSettings* textSettings, ::by_ref<::System::Collections::Generic::List_1<::StringW>*> spriteAssetNames);

  /// @brief Method HexCharToInt, addr 0x70228b4, size 0x48, virtual false, abstract: false, final false
  static inline int32_t HexCharToInt(char16_t hex);

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method MayNeedParsing, addr 0x70297d4, size 0x134, virtual false, abstract: false, final false
  static inline bool MayNeedParsing(::StringW text);

  /// [NullableContext(0)]
  /// @brief Method ParseAlphaAttribute, addr 0x7022728, size 0x18c, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::RichTextTagParser_TagValue* ParseAlphaAttribute(::System::ReadOnlySpan_1<char16_t> attributeSection);

  /// [NullableContext(0)]
  /// @brief Method ParseColorAttribute, addr 0x70224f4, size 0xe4, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::RichTextTagParser_TagValue* ParseColorAttribute(::System::ReadOnlySpan_1<char16_t> attributeSection);

  /// [NullableContext(0)]
  /// @brief Method ParseHref, addr 0x7022bb8, size 0xf8, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::RichTextTagParser_TagValue* ParseHref(::System::ReadOnlySpan_1<char16_t> attributeSection);

  /// [NullableContext(0)]
  /// @brief Method ParsePaddingAttribute, addr 0x7022910, size 0x290, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::RichTextTagParser_TagValue* ParsePaddingAttribute(::System::ReadOnlySpan_1<char16_t> value);

  /// [NullableContext(2)]
  /// @brief Method ParseSpriteAttributes, addr 0x7022fd4, size 0xb6c, virtual false, abstract: false, final false
  static inline bool ParseSpriteAttributes(/* [Nullable(0)] */ ::System::ReadOnlySpan_1<char16_t> attributeSection, /* [Nullable(1)] */ ::UnityEngine::TextCore::Text::TextSettings* textSettings,
                                           ::by_ref<char16_t> unicode, ::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagValue*> spriteAssetValue,
                                           ::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagValue*> glyphMetricsValue, ::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagValue*> tintValue,
                                           ::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagValue*> scaleValue, ::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagValue*> colorValue,
                                           ::by_ref<::StringW> spriteAssetNameOut);

  /// [NullableContext(0)]
  /// @brief Method ParseTagUnitType, addr 0x70270e4, size 0x264, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::RichTextTagParser_TagUnitType ParseTagUnitType(::by_ref<::System::ReadOnlySpan_1<char16_t>> attributeSection);

  /// @brief Method PickResultingTags, addr 0x7027348, size 0x928, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*
  PickResultingTags(::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>* allTags, ::StringW input, int32_t atPosition,
                    /* [Nullable(2)] */ ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>* applicableTags);

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method PreloadFontAssetsFromTags, addr 0x7023b74, size 0x2cc, virtual false, abstract: false, final false
  static inline void PreloadFontAssetsFromTags(::StringW text, ::UnityEngine::TextCore::Text::TextSettings* textSettings);

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method PreloadGradientAssetsFromTags, addr 0x7024a0c, size 0x2d4, virtual false, abstract: false, final false
  static inline void PreloadGradientAssetsFromTags(::StringW text, ::UnityEngine::TextCore::Text::TextSettings* textSettings);

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method PreloadSpriteAssetsFromTags, addr 0x7024438, size 0x2dc, virtual false, abstract: false, final false
  static inline void PreloadSpriteAssetsFromTags(::StringW text, ::UnityEngine::TextCore::Text::TextSettings* textSettings);

  /// [NullableContext(0)]
  /// @brief Method SpanToEnum, addr 0x7022274, size 0x280, virtual false, abstract: false, final false
  static inline bool SpanToEnum(::System::ReadOnlySpan_1<char16_t> tagCandidate, ::by_ref<::UnityEngine::TextCore::RichTextTagParser_TagType> tagType, /* [Nullable(2)] */ ::by_ref<::StringW> error,
                                ::by_ref<::System::ReadOnlySpan_1<char16_t>> attribute);

  /// [NullableContext(0)]
  /// @brief Method TryGetSimpleHref, addr 0x7022cb0, size 0x310, virtual false, abstract: false, final false
  static inline bool TryGetSimpleHref(::System::ReadOnlySpan_1<char16_t> attributeSection, /* [Nullable(1)] */ ::by_ref<::StringW> hrefValue);

  static inline ::ArrayW<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*> getStaticF_TagsInfo();

  static inline ::UnityEngine::Color32 getStaticF_k_HighlightColor();

  static inline char16_t getStaticF_k_PrivateArea();

  static inline ::UnityEngine::Color getStaticF_s_AtgHyperlinkColor();

  static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_s_EmptyTagNameList();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::IntPtr>* getStaticF_s_FontAssetCache();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::IntPtr>* getStaticF_s_GradientAssetCache();

  static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::UnityEngine::TextCore::RichTextTagParser_TagType, uint8_t>* getStaticF_s_LoggedUnsupportedTagWarnings();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>* getStaticF_s_SpriteAssetCache();

  static inline void setStaticF_TagsInfo(::ArrayW<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*> value);

  static inline void setStaticF_k_HighlightColor(::UnityEngine::Color32 value);

  static inline void setStaticF_k_PrivateArea(char16_t value);

  static inline void setStaticF_s_AtgHyperlinkColor(::UnityEngine::Color value);

  static inline void setStaticF_s_EmptyTagNameList(::System::Collections::Generic::List_1<::StringW>* value);

  static inline void setStaticF_s_FontAssetCache(::System::Collections::Generic::Dictionary_2<::StringW, ::System::IntPtr>* value);

  static inline void setStaticF_s_GradientAssetCache(::System::Collections::Generic::Dictionary_2<::StringW, ::System::IntPtr>* value);

  static inline void setStaticF_s_LoggedUnsupportedTagWarnings(::System::Collections::Concurrent::ConcurrentDictionary_2<::UnityEngine::TextCore::RichTextTagParser_TagType, uint8_t>* value);

  static inline void setStaticF_s_SpriteAssetCache(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>* value);

  /// [NullableContext(0)]
  /// @brief Method tagMatch, addr 0x7022104, size 0x170, virtual false, abstract: false, final false
  static inline bool tagMatch(::System::ReadOnlySpan_1<char16_t> tagCandidate, /* [Nullable(1)] */ ::StringW tagName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RichTextTagParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RichTextTagParser", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RichTextTagParser(RichTextTagParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RichTextTagParser", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RichTextTagParser(RichTextTagParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17794 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::TextCore::RichTextTagParser) == 0x10, "Size mismatch!");

} // namespace UnityEngine::TextCore
