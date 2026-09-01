#pragma once
// IWYU pragma private; include "System\Xml\XmlConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlConverter)
namespace System::Text {
class Base64Encoding;
}
namespace System::Text {
class UTF8Encoding;
}
namespace System::Text {
class UnicodeEncoding;
}
namespace System::Xml {
class UniqueId;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Xml {
class XmlConverter;
}
// Write type traits
MARK_REF_T(::System::Xml::XmlConverter*);
DEFINE_IL2CPP_CLASS(::System::Xml::XmlConverter*, "System.Xml", "XmlConverter");
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlConverter
class CORDL_TYPE XmlConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Field base64Encoding, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_base64Encoding, put = setStaticF_base64Encoding)) ::System::Text::Base64Encoding* base64Encoding;

  /// @brief Field unicodeEncoding, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_unicodeEncoding, put = setStaticF_unicodeEncoding)) ::System::Text::UnicodeEncoding* unicodeEncoding;

  /// @brief Field utf8Encoding, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_utf8Encoding, put = setStaticF_utf8Encoding)) ::System::Text::UTF8Encoding* utf8Encoding;

  /// @brief Field whiteSpaceChars, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_whiteSpaceChars, put = setStaticF_whiteSpaceChars)) ::ArrayW<char16_t> whiteSpaceChars;

  /// @brief Method IsNegativeZero, addr 0x611f2e4, size 0x14, virtual false, abstract: false, final false
  static inline bool IsNegativeZero(double_t value);

  /// @brief Method IsNegativeZero, addr 0x611f2d0, size 0x14, virtual false, abstract: false, final false
  static inline bool IsNegativeZero(float_t value);

  /// @brief Method IsWhitespace, addr 0x6117954, size 0x20, virtual false, abstract: false, final false
  static inline bool IsWhitespace(char16_t ch);

  /// @brief Method IsWhitespace, addr 0x611fb40, size 0xd4, virtual false, abstract: false, final false
  static inline bool IsWhitespace(::StringW s);

  /// @brief Method StripWhitespace, addr 0x611fc14, size 0x1b8, virtual false, abstract: false, final false
  static inline ::StringW StripWhitespace(::StringW s);

  /// @brief Method ToAsciiChars, addr 0x611f5a0, size 0x64, virtual false, abstract: false, final false
  static inline int32_t ToAsciiChars(::StringW s, ::ArrayW<uint8_t> buffer, int32_t offset);

  /// @brief Method ToBoolean, addr 0x611b928, size 0xc8, virtual false, abstract: false, final false
  static inline bool ToBoolean(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count);

  /// @brief Method ToBoolean, addr 0x611b7f0, size 0x138, virtual false, abstract: false, final false
  static inline bool ToBoolean(::StringW value);

  /// @brief Method ToBytes, addr 0x611dd48, size 0x120, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> ToBytes(::StringW value);

  /// @brief Method ToChars, addr 0x6116a5c, size 0x158, virtual false, abstract: false, final false
  static inline int32_t ToChars(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::ArrayW<char16_t> chars, int32_t charOffset);

  /// @brief Method ToChars, addr 0x611e210, size 0x47c, virtual false, abstract: false, final false
  static inline int32_t ToChars(::System::DateTime value, ::ArrayW<uint8_t> chars, int32_t offset);

  /// @brief Method ToChars, addr 0x611f768, size 0xec, virtual false, abstract: false, final false
  static inline int32_t ToChars(::System::Decimal value, ::ArrayW<uint8_t> buffer, int32_t offset);

  /// @brief Method ToChars, addr 0x611edd8, size 0x114, virtual false, abstract: false, final false
  static inline int32_t ToChars(bool value, ::ArrayW<uint8_t> buffer, int32_t offset);

  /// @brief Method ToChars, addr 0x611f440, size 0x160, virtual false, abstract: false, final false
  static inline int32_t ToChars(double_t value, ::ArrayW<uint8_t> buffer, int32_t offset);

  /// @brief Method ToChars, addr 0x611f604, size 0x164, virtual false, abstract: false, final false
  static inline int32_t ToChars(float_t value, ::ArrayW<uint8_t> buffer, int32_t offset);

  /// @brief Method ToChars, addr 0x611f034, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t ToChars(int32_t value, ::ArrayW<uint8_t> chars, int32_t offset);

  /// @brief Method ToChars, addr 0x611f234, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t ToChars(int64_t value, ::ArrayW<uint8_t> chars, int32_t offset);

  /// @brief Method ToChars, addr 0x611f854, size 0x94, virtual false, abstract: false, final false
  static inline int32_t ToChars(uint64_t value, ::ArrayW<uint8_t> buffer, int32_t offset);

  /// @brief Method ToCharsD2, addr 0x611f8e8, size 0xa4, virtual false, abstract: false, final false
  static inline int32_t ToCharsD2(int32_t value, ::ArrayW<uint8_t> chars, int32_t offset);

  /// @brief Method ToCharsD4, addr 0x611f98c, size 0xa4, virtual false, abstract: false, final false
  static inline int32_t ToCharsD4(int32_t value, ::ArrayW<uint8_t> chars, int32_t offset);

  /// @brief Method ToCharsD7, addr 0x611fa30, size 0x110, virtual false, abstract: false, final false
  static inline int32_t ToCharsD7(int32_t value, ::ArrayW<uint8_t> chars, int32_t offset);

  /// @brief Method ToCharsR, addr 0x611eeec, size 0x148, virtual false, abstract: false, final false
  static inline int32_t ToCharsR(int32_t value, ::ArrayW<uint8_t> chars, int32_t offset);

  /// @brief Method ToCharsR, addr 0x611f0d0, size 0x164, virtual false, abstract: false, final false
  static inline int32_t ToCharsR(int64_t value, ::ArrayW<uint8_t> chars, int32_t offset);

  /// @brief Method ToDateTime, addr 0x611cd28, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count);

  /// @brief Method ToDateTime, addr 0x611cbf0, size 0x138, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(::StringW value);

  /// @brief Method ToDateTime, addr 0x611ca44, size 0x130, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(int64_t value);

  /// @brief Method ToDecimal, addr 0x611c9d0, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count);

  /// @brief Method ToDecimal, addr 0x611c87c, size 0x154, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(::StringW value);

  /// @brief Method ToDouble, addr 0x611c658, size 0xc0, virtual false, abstract: false, final false
  static inline double_t ToDouble(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count);

  /// @brief Method ToDouble, addr 0x611c504, size 0x154, virtual false, abstract: false, final false
  static inline double_t ToDouble(::StringW value);

  /// @brief Method ToGuid, addr 0x611db3c, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Guid ToGuid(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count);

  /// @brief Method ToGuid, addr 0x611d9e0, size 0x15c, virtual false, abstract: false, final false
  static inline ::System::Guid ToGuid(::StringW value);

  /// @brief Method ToInfinity, addr 0x611f2f8, size 0xdc, virtual false, abstract: false, final false
  static inline int32_t ToInfinity(bool isNegative, ::ArrayW<uint8_t> buffer, int32_t offset);

  /// @brief Method ToInt32, addr 0x611bb54, size 0xc0, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count);

  /// @brief Method ToInt32, addr 0x611b9f0, size 0x164, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::StringW value);

  /// @brief Method ToInt32D2, addr 0x611ec88, size 0x64, virtual false, abstract: false, final false
  static inline int32_t ToInt32D2(::ArrayW<uint8_t> chars, int32_t offset);

  /// @brief Method ToInt32D4, addr 0x611ecec, size 0x70, virtual false, abstract: false, final false
  static inline int32_t ToInt32D4(::ArrayW<uint8_t> chars, int32_t offset, int32_t count);

  /// @brief Method ToInt32D7, addr 0x611ed5c, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t ToInt32D7(::ArrayW<uint8_t> chars, int32_t offset, int32_t count);

  /// @brief Method ToInt64, addr 0x611bed8, size 0xc0, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count);

  /// @brief Method ToInt64, addr 0x611bd74, size 0x164, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::StringW value);

  /// @brief Method ToSingle, addr 0x611c2c0, size 0xc0, virtual false, abstract: false, final false
  static inline float_t ToSingle(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count);

  /// @brief Method ToSingle, addr 0x611c16c, size 0x154, virtual false, abstract: false, final false
  static inline float_t ToSingle(::StringW value);

  /// @brief Method ToString, addr 0x611802c, size 0x140, virtual false, abstract: false, final false
  static inline ::StringW ToString(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count);

  /// @brief Method ToString, addr 0x611eb08, size 0x180, virtual false, abstract: false, final false
  static inline ::StringW ToString(::ArrayW<::System::Object*> objects);

  /// @brief Method ToString, addr 0x611e174, size 0x9c, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::DateTime value);

  /// @brief Method ToString, addr 0x611e024, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Decimal value);

  /// @brief Method ToString, addr 0x611e12c, size 0x24, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Guid value);

  /// @brief Method ToString, addr 0x611e68c, size 0x47c, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Object* value);

  /// @brief Method ToString, addr 0x611e090, size 0x84, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::TimeSpan value);

  /// @brief Method ToString, addr 0x611e114, size 0x18, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Xml::UniqueId* value);

  /// @brief Method ToString, addr 0x611de68, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW ToString(bool value);

  /// @brief Method ToString, addr 0x611dfc0, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW ToString(double_t value);

  /// @brief Method ToString, addr 0x611df5c, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW ToString(float_t value);

  /// @brief Method ToString, addr 0x611dee0, size 0x7c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t value);

  /// @brief Method ToString, addr 0x611cb74, size 0x7c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int64_t value);

  /// @brief Method ToString, addr 0x611e150, size 0x24, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint64_t value);

  /// @brief Method ToStringUnicode, addr 0x6116da4, size 0x140, virtual false, abstract: false, final false
  static inline ::StringW ToStringUnicode(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count);

  /// @brief Method ToTimeSpan, addr 0x611d96c, size 0x74, virtual false, abstract: false, final false
  static inline ::System::TimeSpan ToTimeSpan(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count);

  /// @brief Method ToTimeSpan, addr 0x611d818, size 0x154, virtual false, abstract: false, final false
  static inline ::System::TimeSpan ToTimeSpan(::StringW value);

  /// @brief Method ToUInt64, addr 0x611dcd4, size 0x74, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count);

  /// @brief Method ToUInt64, addr 0x611dbb0, size 0x124, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::StringW value);

  /// @brief Method ToUniqueId, addr 0x611d7a4, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Xml::UniqueId* ToUniqueId(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count);

  /// @brief Method ToUniqueId, addr 0x611d498, size 0x16c, virtual false, abstract: false, final false
  static inline ::System::Xml::UniqueId* ToUniqueId(::StringW value);

  /// @brief Method ToZero, addr 0x611f3d4, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t ToZero(bool isNegative, ::ArrayW<uint8_t> buffer, int32_t offset);

  /// @brief Method Trim, addr 0x611d604, size 0x1a0, virtual false, abstract: false, final false
  static inline ::StringW Trim(::StringW s);

  /// @brief Method TryParseDateTime, addr 0x611cde8, size 0x6b0, virtual false, abstract: false, final false
  static inline bool TryParseDateTime(::ArrayW<uint8_t> chars, int32_t offset, int32_t count, ::by_ref<::System::DateTime> result);

  /// @brief Method TryParseDouble, addr 0x611c718, size 0x164, virtual false, abstract: false, final false
  static inline bool TryParseDouble(::ArrayW<uint8_t> chars, int32_t offset, int32_t count, ::by_ref<double_t> result);

  /// @brief Method TryParseInt32, addr 0x611bc14, size 0x160, virtual false, abstract: false, final false
  static inline bool TryParseInt32(::ArrayW<uint8_t> chars, int32_t offset, int32_t count, ::by_ref<int32_t> result);

  /// @brief Method TryParseInt64, addr 0x611bf98, size 0x1d4, virtual false, abstract: false, final false
  static inline bool TryParseInt64(::ArrayW<uint8_t> chars, int32_t offset, int32_t count, ::by_ref<int64_t> result);

  /// @brief Method TryParseSingle, addr 0x611c380, size 0x184, virtual false, abstract: false, final false
  static inline bool TryParseSingle(::ArrayW<uint8_t> chars, int32_t offset, int32_t count, ::by_ref<float_t> result);

  static inline ::System::Text::Base64Encoding* getStaticF_base64Encoding();

  static inline ::System::Text::UnicodeEncoding* getStaticF_unicodeEncoding();

  static inline ::System::Text::UTF8Encoding* getStaticF_utf8Encoding();

  static inline ::ArrayW<char16_t> getStaticF_whiteSpaceChars();

  /// @brief Method get_Base64Encoding, addr 0x611b544, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::Text::Base64Encoding* get_Base64Encoding();

  /// @brief Method get_UTF8Encoding, addr 0x611b614, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Text::UTF8Encoding* get_UTF8Encoding();

  /// @brief Method get_UnicodeEncoding, addr 0x611b700, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::Text::UnicodeEncoding* get_UnicodeEncoding();

  static inline void setStaticF_base64Encoding(::System::Text::Base64Encoding* value);

  static inline void setStaticF_unicodeEncoding(::System::Text::UnicodeEncoding* value);

  static inline void setStaticF_utf8Encoding(::System::Text::UTF8Encoding* value);

  static inline void setStaticF_whiteSpaceChars(::ArrayW<char16_t> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlConverter(XmlConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlConverter(XmlConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16979 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::XmlConverter) == 0x10, "Size mismatch!");

} // namespace System::Xml
