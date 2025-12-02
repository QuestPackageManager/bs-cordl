#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/RichTextTagParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RichTextTagParser)
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
struct TextSpan;
}
namespace UnityEngine {
struct Color;
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
MARK_REF_PTR_T(::UnityEngine::TextCore::RichTextTagParser);
MARK_REF_PTR_T(::UnityEngine::TextCore::RichTextTagParser_ParseError);
MARK_REF_PTR_T(::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo);
MARK_REF_PTR_T(::UnityEngine::TextCore::RichTextTagParser_TagValue);
MARK_VAL_T(::UnityEngine::TextCore::RichTextTagParser_Segment);
MARK_VAL_T(::UnityEngine::TextCore::RichTextTagParser_Tag);
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
    __E_Italic = static_cast<int32_t>(0xa),
    __E_Indent = static_cast<int32_t>(0xb),
    __E_LineHeight = static_cast<int32_t>(0xc),
    __E_LineIndent = static_cast<int32_t>(0xd),
    __E_Link = static_cast<int32_t>(0xe),
    __E_Lowercase = static_cast<int32_t>(0xf),
    __E_Mark = static_cast<int32_t>(0x10),
    __E_Mspace = static_cast<int32_t>(0x11),
    __E_NoBr = static_cast<int32_t>(0x12),
    __E_NoParse = static_cast<int32_t>(0x13),
    __E_Strikethrough = static_cast<int32_t>(0x14),
    __E_Size = static_cast<int32_t>(0x15),
    __E_SmallCaps = static_cast<int32_t>(0x16),
    __E_Space = static_cast<int32_t>(0x17),
    __E_Sprite = static_cast<int32_t>(0x18),
    __E_Style = static_cast<int32_t>(0x19),
    __E_Subscript = static_cast<int32_t>(0x1a),
    __E_Superscript = static_cast<int32_t>(0x1b),
    __E_Underline = static_cast<int32_t>(0x1c),
    __E_Uppercase = static_cast<int32_t>(0x1d),
    __E_Unknown = static_cast<int32_t>(0x1e),
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RichTextTagParser_TagType(int32_t value__) noexcept;

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

  /// @brief Field Font value: I32(8)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Font;

  /// @brief Field FontWeight value: I32(9)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const FontWeight;

  /// @brief Field Hyperlink value: I32(0)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Hyperlink;

  /// @brief Field Indent value: I32(11)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Indent;

  /// @brief Field Italic value: I32(10)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Italic;

  /// @brief Field LineHeight value: I32(12)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const LineHeight;

  /// @brief Field LineIndent value: I32(13)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const LineIndent;

  /// @brief Field Link value: I32(14)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Link;

  /// @brief Field Lowercase value: I32(15)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Lowercase;

  /// @brief Field Mark value: I32(16)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Mark;

  /// @brief Field Mspace value: I32(17)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Mspace;

  /// @brief Field NoBr value: I32(18)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const NoBr;

  /// @brief Field NoParse value: I32(19)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const NoParse;

  /// @brief Field Size value: I32(21)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Size;

  /// @brief Field SmallCaps value: I32(22)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const SmallCaps;

  /// @brief Field Space value: I32(23)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Space;

  /// @brief Field Sprite value: I32(24)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Sprite;

  /// @brief Field Strikethrough value: I32(20)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Strikethrough;

  /// @brief Field Style value: I32(25)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Style;

  /// @brief Field Subscript value: I32(26)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Subscript;

  /// @brief Field Superscript value: I32(27)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Superscript;

  /// @brief Field Underline value: I32(28)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Underline;

  /// @brief Field Unknown value: I32(30)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Unknown;

  /// @brief Field Uppercase value: I32(29)
  static ::UnityEngine::TextCore::RichTextTagParser_TagType const Uppercase;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17146 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_TagType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::RichTextTagParser_TagType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::TextCore
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
    __E_ColorValue = static_cast<int32_t>(0x4),
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RichTextTagParser_TagValueType(int32_t value__) noexcept;

  /// @brief Field ColorValue value: I32(4)
  static ::UnityEngine::TextCore::RichTextTagParser_TagValueType const ColorValue;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::TextCore::RichTextTagParser_TagValueType const None;

  /// @brief Field NumericalValue value: I32(1)
  static ::UnityEngine::TextCore::RichTextTagParser_TagValueType const NumericalValue;

  /// @brief Field StringValue value: I32(2)
  static ::UnityEngine::TextCore::RichTextTagParser_TagValueType const StringValue;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17148 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_TagValueType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::RichTextTagParser_TagValueType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::TextCore
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
    __E_Pixels = static_cast<int32_t>(0x0),
    __E_FontUnits = static_cast<int32_t>(0x1),
    __E_Percentage = static_cast<int32_t>(0x2),
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RichTextTagParser_TagUnitType(int32_t value__) noexcept;

  /// @brief Field FontUnits value: I32(1)
  static ::UnityEngine::TextCore::RichTextTagParser_TagUnitType const FontUnits;

  /// @brief Field Percentage value: I32(2)
  static ::UnityEngine::TextCore::RichTextTagParser_TagUnitType const Percentage;

  /// @brief Field Pixels value: I32(0)
  static ::UnityEngine::TextCore::RichTextTagParser_TagUnitType const Pixels;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17149 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_TagUnitType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::RichTextTagParser_TagUnitType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::TextCore
// Dependencies System.Object, UnityEngine.TextCore.RichTextTagParser::TagType, UnityEngine.TextCore.RichTextTagParser::TagUnitType, UnityEngine.TextCore.RichTextTagParser::TagValueType
namespace UnityEngine::TextCore {
// Is value type: false
// CS Name: UnityEngine.TextCore.RichTextTagParser/TagTypeInfo
class CORDL_TYPE RichTextTagParser_TagTypeInfo : public ::System::Object {
public:
  // Declarations
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

  /// @brief Method Equals, addr 0x69913e4, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6991478, size 0x194, virtual true, abstract: false, final false
  inline bool Equals(::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo* other);

  /// @brief Method GetHashCode, addr 0x6991258, size 0x18c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo* New_ctor(::UnityEngine::TextCore::RichTextTagParser_TagType tagType, ::StringW name,
                                                                                 ::UnityEngine::TextCore::RichTextTagParser_TagValueType valueType,
                                                                                 ::UnityEngine::TextCore::RichTextTagParser_TagUnitType unitType);

  /// @brief Method PrintMembers, addr 0x6991084, size 0x1d4, virtual true, abstract: false, final false
  inline bool PrintMembers(::System::Text::StringBuilder* builder);

  /// @brief Method ToString, addr 0x6990f98, size 0xec, virtual true, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x6990f28, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::TextCore::RichTextTagParser_TagType tagType, ::StringW name, ::UnityEngine::TextCore::RichTextTagParser_TagValueType valueType,
                    ::UnityEngine::TextCore::RichTextTagParser_TagUnitType unitType);

  /// @brief Method get_EqualityContract, addr 0x6990f38, size 0x60, virtual true, abstract: false, final false
  inline ::System::Type* get_EqualityContract();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>"
  constexpr ::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>* i___System__IEquatable_1___UnityEngine__TextCore__RichTextTagParser_TagTypeInfo__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RichTextTagParser_TagTypeInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RichTextTagParser_TagTypeInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RichTextTagParser_TagTypeInfo(RichTextTagParser_TagTypeInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RichTextTagParser_TagTypeInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RichTextTagParser_TagTypeInfo(RichTextTagParser_TagTypeInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17147 };

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

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo, 0x28>, "Size mismatch!");

} // namespace UnityEngine::TextCore
// Dependencies System.Object, UnityEngine.Color, UnityEngine.TextCore.RichTextTagParser::TagValueType
namespace UnityEngine::TextCore {
// Is value type: false
// CS Name: UnityEngine.TextCore.RichTextTagParser/TagValue
class CORDL_TYPE RichTextTagParser_TagValue : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ColorValue)) ::UnityEngine::Color ColorValue;

  __declspec(property(get = get_EqualityContract)) ::System::Type* EqualityContract;

  __declspec(property(get = get_NumericalValue)) float_t NumericalValue;

  __declspec(property(get = get_StringValue)) ::StringW StringValue;

  /// @brief Field m_colorValue, offset 0x24, size 0x10
  __declspec(property(get = __cordl_internal_get_m_colorValue, put = __cordl_internal_set_m_colorValue)) ::UnityEngine::Color m_colorValue;

  /// @brief Field m_numericalValue, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_numericalValue, put = __cordl_internal_set_m_numericalValue)) float_t m_numericalValue;

  /// @brief Field m_stringValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_stringValue, put = __cordl_internal_set_m_stringValue)) ::StringW m_stringValue;

  /// @brief Field type, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::UnityEngine::TextCore::RichTextTagParser_TagValueType type;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagValue*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagValue*>*() noexcept;

  /// @brief Method Equals, addr 0x69918f0, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6991984, size 0x19c, virtual true, abstract: false, final false
  inline bool Equals(::UnityEngine::TextCore::RichTextTagParser_TagValue* other);

  /// @brief Method GetHashCode, addr 0x6991760, size 0x190, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::TextCore::RichTextTagParser_TagValue* New_ctor(::StringW value);

  static inline ::UnityEngine::TextCore::RichTextTagParser_TagValue* New_ctor(::UnityEngine::Color value);

  /// @brief Method PrintMembers, addr 0x6991758, size 0x8, virtual true, abstract: false, final false
  inline bool PrintMembers(::System::Text::StringBuilder* builder);

  /// @brief Method ToString, addr 0x699166c, size 0xec, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_m_colorValue() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_m_colorValue();

  constexpr float_t const& __cordl_internal_get_m_numericalValue() const;

  constexpr float_t& __cordl_internal_get_m_numericalValue();

  constexpr ::StringW const& __cordl_internal_get_m_stringValue() const;

  constexpr ::StringW& __cordl_internal_get_m_stringValue();

  constexpr ::UnityEngine::TextCore::RichTextTagParser_TagValueType const& __cordl_internal_get_type() const;

  constexpr ::UnityEngine::TextCore::RichTextTagParser_TagValueType& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_m_colorValue(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_m_numericalValue(float_t value);

  constexpr void __cordl_internal_set_m_stringValue(::StringW value);

  constexpr void __cordl_internal_set_type(::UnityEngine::TextCore::RichTextTagParser_TagValueType value);

  /// @brief Method .ctor, addr 0x698ef90, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  /// @brief Method .ctor, addr 0x698ef7c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color value);

  /// @brief Method get_ColorValue, addr 0x69900c8, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_ColorValue();

  /// @brief Method get_EqualityContract, addr 0x699160c, size 0x60, virtual true, abstract: false, final false
  inline ::System::Type* get_EqualityContract();

  /// @brief Method get_NumericalValue, addr 0x699018c, size 0x60, virtual false, abstract: false, final false
  inline float_t get_NumericalValue();

  /// @brief Method get_StringValue, addr 0x699012c, size 0x60, virtual false, abstract: false, final false
  inline ::StringW get_StringValue();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagValue*>"
  constexpr ::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagValue*>* i___System__IEquatable_1___UnityEngine__TextCore__RichTextTagParser_TagValue__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RichTextTagParser_TagValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RichTextTagParser_TagValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RichTextTagParser_TagValue(RichTextTagParser_TagValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RichTextTagParser_TagValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RichTextTagParser_TagValue(RichTextTagParser_TagValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17150 };

  /// @brief Field type, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::TextCore::RichTextTagParser_TagValueType ___type;

  /// @brief Field m_stringValue, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_stringValue;

  /// @brief Field m_numericalValue, offset: 0x20, size: 0x4, def value: None
  float_t ___m_numericalValue;

  /// @brief Field m_colorValue, offset: 0x24, size: 0x10, def value: None
  ::UnityEngine::Color ___m_colorValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_TagValue, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_TagValue, ___m_stringValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_TagValue, ___m_numericalValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_TagValue, ___m_colorValue) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::RichTextTagParser_TagValue, 0x38>, "Size mismatch!");

} // namespace UnityEngine::TextCore
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

  // Ctor Parameters [CppParam { name: "tagType", ty: "::UnityEngine::TextCore::RichTextTagParser_TagType", modifiers: "", def_value: None }, CppParam { name: "isClosing", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "start", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "end", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "value",
  // ty: "::UnityEngine::TextCore::RichTextTagParser_TagValue*", modifiers: "", def_value: None }]
  constexpr RichTextTagParser_Tag(::UnityEngine::TextCore::RichTextTagParser_TagType tagType, bool isClosing, int32_t start, int32_t end,
                                  ::UnityEngine::TextCore::RichTextTagParser_TagValue* value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17151 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_Tag, tagType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_Tag, isClosing) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_Tag, start) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_Tag, end) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_Tag, value) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::RichTextTagParser_Tag, 0x18>, "Size mismatch!");

} // namespace UnityEngine::TextCore
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

  // Ctor Parameters [CppParam { name: "tags", ty: "::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*", modifiers: "", def_value: None }, CppParam { name:
  // "start", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "end", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RichTextTagParser_Segment(::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>* tags, int32_t start, int32_t end) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17152 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

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

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::RichTextTagParser_Segment, 0x10>, "Size mismatch!");

} // namespace UnityEngine::TextCore
// Dependencies System.Object
namespace UnityEngine::TextCore {
// Is value type: false
// CS Name: UnityEngine.TextCore.RichTextTagParser/ParseError
class CORDL_TYPE RichTextTagParser_ParseError : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_EqualityContract)) ::System::Type* EqualityContract;

  /// @brief Field message, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_message, put = __cordl_internal_set_message)) ::StringW message;

  /// @brief Field position, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_position, put = __cordl_internal_set_position)) int32_t position;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>*() noexcept;

  /// @brief Method Equals, addr 0x6991e3c, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6991ed0, size 0x11c, virtual true, abstract: false, final false
  inline bool Equals(::UnityEngine::TextCore::RichTextTagParser_ParseError* other);

  /// @brief Method GetHashCode, addr 0x6991d38, size 0x104, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::TextCore::RichTextTagParser_ParseError* New_ctor(::StringW message, int32_t position);

  /// @brief Method PrintMembers, addr 0x6991c6c, size 0xcc, virtual true, abstract: false, final false
  inline bool PrintMembers(::System::Text::StringBuilder* builder);

  /// @brief Method ToString, addr 0x6991b80, size 0xec, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get_message() const;

  constexpr ::StringW& __cordl_internal_get_message();

  constexpr int32_t const& __cordl_internal_get_position() const;

  constexpr int32_t& __cordl_internal_get_position();

  constexpr void __cordl_internal_set_message(::StringW value);

  constexpr void __cordl_internal_set_position(int32_t value);

  /// @brief Method .ctor, addr 0x698ef70, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, int32_t position);

  /// @brief Method get_EqualityContract, addr 0x6991b20, size 0x60, virtual true, abstract: false, final false
  inline ::System::Type* get_EqualityContract();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>"
  constexpr ::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>* i___System__IEquatable_1___UnityEngine__TextCore__RichTextTagParser_ParseError__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RichTextTagParser_ParseError();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RichTextTagParser_ParseError", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RichTextTagParser_ParseError(RichTextTagParser_ParseError&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RichTextTagParser_ParseError", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RichTextTagParser_ParseError(RichTextTagParser_ParseError const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17153 };

  /// @brief Field position, offset: 0x10, size: 0x4, def value: None
  int32_t ___position;

  /// @brief Field message, offset: 0x18, size: 0x8, def value: None
  ::StringW ___message;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_ParseError, ___position) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_ParseError, ___message) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::RichTextTagParser_ParseError, 0x20>, "Size mismatch!");

} // namespace UnityEngine::TextCore
// Dependencies System.Object
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

  /// @brief Field TagsInfo, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TagsInfo,
                      put = setStaticF_TagsInfo)) ::ArrayW<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*, ::Array<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>*>
      TagsInfo;

  /// @brief Method AddLink, addr 0x698fb60, size 0x1cc, virtual false, abstract: false, final false
  static inline int32_t AddLink(::UnityEngine::TextCore::RichTextTagParser_TagType type, ::StringW value,
                                ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>* links);

  /// @brief Method ApplyStateToSegment, addr 0x698fa90, size 0xd0, virtual false, abstract: false, final false
  static inline void ApplyStateToSegment(::StringW input, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>* tags,
                                         ::ArrayW<::UnityEngine::TextCore::RichTextTagParser_Segment, ::Array<::UnityEngine::TextCore::RichTextTagParser_Segment>*> segments);

  /// @brief Method CreateTextGenerationSettingsArray, addr 0x69901ec, size 0x2b8, virtual false, abstract: false, final false
  static inline void CreateTextGenerationSettingsArray(::ByRef<::UnityEngine::TextCore::NativeTextGenerationSettings> tgs,
                                                       ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>* links,
                                                       ::UnityEngine::Color hyperlinkColor);

  /// @brief Method CreateTextSpan, addr 0x698fd2c, size 0x39c, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::TextSpan
  CreateTextSpan(::UnityEngine::TextCore::RichTextTagParser_Segment segment, ::ByRef<::UnityEngine::TextCore::NativeTextGenerationSettings> tgs,
                 ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t, ::UnityEngine::TextCore::RichTextTagParser_TagType, ::StringW>>* links, ::UnityEngine::Color hyperlinkColor);

  /// @brief Method FindTags, addr 0x698e3c0, size 0xbb0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*
  FindTags(::StringW inputStr, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>* errors);

  /// @brief Method GenerateSegments, addr 0x698f7e0, size 0x2b0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::TextCore::RichTextTagParser_Segment, ::Array<::UnityEngine::TextCore::RichTextTagParser_Segment>*>
  GenerateSegments(::StringW input, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>* tags);

  /// @brief Method PickResultingTags, addr 0x698efa0, size 0x840, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>*
  PickResultingTags(::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>* allTags, ::StringW input, int32_t atPosition,
                    ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_Tag>* applicableTags);

  /// @brief Method SpanToEnum, addr 0x698e140, size 0x280, virtual false, abstract: false, final false
  static inline bool SpanToEnum(::System::ReadOnlySpan_1<char16_t> tagCandidate, ::ByRef<::UnityEngine::TextCore::RichTextTagParser_TagType> tagType, ::ByRef<::StringW> error,
                                ::ByRef<::System::ReadOnlySpan_1<char16_t>> attribute);

  static inline ::ArrayW<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*, ::Array<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>*> getStaticF_TagsInfo();

  static inline void setStaticF_TagsInfo(::ArrayW<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*, ::Array<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>*> value);

  /// @brief Method tagMatch, addr 0x698dfa4, size 0x19c, virtual false, abstract: false, final false
  static inline bool tagMatch(::System::ReadOnlySpan_1<char16_t> tagCandidate, ::StringW tagName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RichTextTagParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RichTextTagParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RichTextTagParser(RichTextTagParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RichTextTagParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RichTextTagParser(RichTextTagParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17154 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::RichTextTagParser, 0x10>, "Size mismatch!");

} // namespace UnityEngine::TextCore
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::RichTextTagParser_TagType, "UnityEngine.TextCore", "RichTextTagParser/TagType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::RichTextTagParser_TagUnitType, "UnityEngine.TextCore", "RichTextTagParser/TagUnitType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::RichTextTagParser_TagValueType, "UnityEngine.TextCore", "RichTextTagParser/TagValueType");
NEED_NO_BOX(::UnityEngine::TextCore::RichTextTagParser);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::RichTextTagParser*, "UnityEngine.TextCore", "RichTextTagParser");
NEED_NO_BOX(::UnityEngine::TextCore::RichTextTagParser_ParseError);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::RichTextTagParser_ParseError*, "UnityEngine.TextCore", "RichTextTagParser/ParseError");
NEED_NO_BOX(::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*, "UnityEngine.TextCore", "RichTextTagParser/TagTypeInfo");
NEED_NO_BOX(::UnityEngine::TextCore::RichTextTagParser_TagValue);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::RichTextTagParser_TagValue*, "UnityEngine.TextCore", "RichTextTagParser/TagValue");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::RichTextTagParser_Segment, "UnityEngine.TextCore", "RichTextTagParser/Segment");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::RichTextTagParser_Tag, "UnityEngine.TextCore", "RichTextTagParser/Tag");
