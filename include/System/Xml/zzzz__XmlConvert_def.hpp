#pragma once
// IWYU pragma private; include "System\Xml\XmlConvert.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlCharType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlConvert)
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System::Xml {
struct ExceptionType;
}
namespace System::Xml {
struct XmlDateTimeSerializationMode;
}
namespace System {
class ArgumentException;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class Exception;
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
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Xml {
class XmlConvert;
}
// Write type traits
MARK_REF_T(::System::Xml::XmlConvert*);
DEFINE_IL2CPP_CLASS(::System::Xml::XmlConvert*, "System.Xml", "XmlConvert");
// Dependencies System.Object, System.Xml.XmlCharType
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlConvert
class CORDL_TYPE XmlConvert : public ::System::Object {
public:
  // Declarations
  /// @brief Field WhitespaceChars, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_WhitespaceChars, put = setStaticF_WhitespaceChars)) ::ArrayW<char16_t> WhitespaceChars;

  /// @brief Field c_DecodeCharPattern, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_c_DecodeCharPattern, put = setStaticF_c_DecodeCharPattern)) ::System::Text::RegularExpressions::Regex* c_DecodeCharPattern;

  /// @brief Field c_EncodeCharPattern, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_c_EncodeCharPattern, put = setStaticF_c_EncodeCharPattern)) ::System::Text::RegularExpressions::Regex* c_EncodeCharPattern;

  /// @brief Field c_EncodedCharLength, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_c_EncodedCharLength, put = setStaticF_c_EncodedCharLength)) int32_t c_EncodedCharLength;

  /// @brief Field crt, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_crt, put = setStaticF_crt)) ::ArrayW<char16_t> crt;

  /// @brief Field s_allDateTimeFormats, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_allDateTimeFormats, put = setStaticF_s_allDateTimeFormats)) ::ArrayW<::StringW> s_allDateTimeFormats;

  /// @brief Field xmlCharType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_xmlCharType, put = setStaticF_xmlCharType)) ::System::Xml::XmlCharType xmlCharType;

  /// @brief Method CreateAllDateTimeFormats, addr 0x62df68c, size 0x478, virtual false, abstract: false, final false
  static inline void CreateAllDateTimeFormats();

  /// @brief Method CreateException, addr 0x62e0d1c, size 0x148, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateException(::StringW res, ::StringW arg, ::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos);

  /// @brief Method CreateException, addr 0x62e0e64, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateException(::StringW res, ::ArrayW<::StringW> args, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method CreateException, addr 0x62dc004, size 0xe4, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateException(::StringW res, ::ArrayW<::StringW> args, ::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos);

  /// @brief Method CreateException, addr 0x62e0954, size 0xd8, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateException(::StringW res, ::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos);

  /// @brief Method CreateInvalidCharException, addr 0x62e0bac, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidCharException(::StringW data, int32_t invCharPos, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method CreateInvalidCharException, addr 0x62e1204, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidCharException(char16_t invChar, char16_t nextChar);

  /// @brief Method CreateInvalidCharException, addr 0x62e1270, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidCharException(char16_t invChar, char16_t nextChar, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method CreateInvalidHighSurrogateCharException, addr 0x62e1030, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidHighSurrogateCharException(char16_t hi);

  /// @brief Method CreateInvalidHighSurrogateCharException, addr 0x62e108c, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidHighSurrogateCharException(char16_t hi, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method CreateInvalidHighSurrogateCharException, addr 0x62e10fc, size 0x108, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidHighSurrogateCharException(char16_t hi, ::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos);

  /// @brief Method CreateInvalidNameArgumentException, addr 0x62e1568, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::ArgumentException* CreateInvalidNameArgumentException(::StringW name, ::StringW argumentName);

  /// @brief Method CreateInvalidNameCharException, addr 0x62dbb58, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidNameCharException(::StringW name, int32_t index, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method CreateInvalidSurrogatePairException, addr 0x62e0f4c, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidSurrogatePairException(char16_t low, char16_t hi);

  /// @brief Method CreateInvalidSurrogatePairException, addr 0x62e0fb8, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidSurrogatePairException(char16_t low, char16_t hi, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method CreateInvalidSurrogatePairException, addr 0x62e0a2c, size 0x180, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidSurrogatePairException(char16_t low, char16_t hi, ::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos);

  /// @brief Method DecodeName, addr 0x62daffc, size 0x8b0, virtual false, abstract: false, final false
  static inline ::StringW DecodeName(::StringW name);

  /// @brief Method DoubleToInt64Bits, addr 0x62e072c, size 0x8, virtual false, abstract: false, final false
  static inline int64_t DoubleToInt64Bits(double_t value);

  /// @brief Method EncodeLocalName, addr 0x62daf9c, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW EncodeLocalName(::StringW name);

  /// @brief Method EncodeName, addr 0x62da5d0, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW EncodeName(::StringW name);

  /// @brief Method EncodeName, addr 0x62da630, size 0x96c, virtual false, abstract: false, final false
  static inline ::StringW EncodeName(::StringW name, bool first, bool local);

  /// @brief Method FromBinHexString, addr 0x62db8d8, size 0x5c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> FromBinHexString(::StringW s);

  /// @brief Method FromBinHexString, addr 0x62db934, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> FromBinHexString(::StringW s, bool allowOddCount);

  /// @brief Method FromHex, addr 0x62db8ac, size 0x2c, virtual false, abstract: false, final false
  static inline int32_t FromHex(char16_t digit);

  /// @brief Method IsNegativeZero, addr 0x62dcb98, size 0x80, virtual false, abstract: false, final false
  static inline bool IsNegativeZero(double_t value);

  /// @brief Method SplitString, addr 0x62e06b8, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> SplitString(::StringW value);

  /// @brief Method StrEqual, addr 0x62e0524, size 0xb4, virtual false, abstract: false, final false
  static inline bool StrEqual(::ArrayW<char16_t> chars, int32_t strPos1, int32_t strLen1, ::StringW str2);

  /// @brief Method SwitchToLocalTime, addr 0x62dd054, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::DateTime SwitchToLocalTime(::System::DateTime value);

  /// @brief Method SwitchToUtcTime, addr 0x62dd128, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::DateTime SwitchToUtcTime(::System::DateTime value);

  /// @brief Method ToBinHexString, addr 0x62db9a0, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW ToBinHexString(::ArrayW<uint8_t> inArray);

  /// @brief Method ToBoolean, addr 0x62dd2bc, size 0x1c4, virtual false, abstract: false, final false
  static inline bool ToBoolean(::StringW s);

  /// @brief Method ToByte, addr 0x62de440, size 0x28, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::StringW s);

  /// @brief Method ToChar, addr 0x62dd730, size 0xb8, virtual false, abstract: false, final false
  static inline char16_t ToChar(::StringW s);

  /// @brief Method ToDateTime, addr 0x62dfb04, size 0x60, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(::StringW s);

  /// @brief Method ToDateTime, addr 0x62dfc10, size 0x23c, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(::StringW s, ::System::Xml::XmlDateTimeSerializationMode dateTimeOption);

  /// @brief Method ToDateTime, addr 0x62dfb64, size 0xac, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(::StringW s, ::ArrayW<::StringW> formats);

  /// @brief Method ToDateTimeOffset, addr 0x62dfe4c, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::DateTimeOffset ToDateTimeOffset(::StringW s);

  /// @brief Method ToDecimal, addr 0x62dd988, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(::StringW s);

  /// @brief Method ToDouble, addr 0x62dee24, size 0x110, virtual false, abstract: false, final false
  static inline double_t ToDouble(::StringW s);

  /// @brief Method ToGuid, addr 0x62dff18, size 0x2c, virtual false, abstract: false, final false
  static inline ::System::Guid ToGuid(::StringW s);

  /// @brief Method ToInt16, addr 0x62ddf60, size 0x28, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::StringW s);

  /// @brief Method ToInt32, addr 0x62de100, size 0x28, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::StringW s);

  /// @brief Method ToInt64, addr 0x62de2a0, size 0x28, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::StringW s);

  /// @brief Method ToInteger, addr 0x62ddba4, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Decimal ToInteger(::StringW s);

  /// @brief Method ToSByte, addr 0x62dddc0, size 0x28, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::StringW s);

  /// @brief Method ToSingle, addr 0x62deac0, size 0x110, virtual false, abstract: false, final false
  static inline float_t ToSingle(::StringW s);

  /// @brief Method ToString, addr 0x62dce24, size 0x230, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::DateTime value, ::System::Xml::XmlDateTimeSerializationMode dateTimeOption);

  /// @brief Method ToString, addr 0x62dcd78, size 0xac, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::DateTime value, ::StringW format);

  /// @brief Method ToString, addr 0x62dd20c, size 0x8c, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::DateTimeOffset value);

  /// @brief Method ToString, addr 0x62dc878, size 0xa0, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Decimal value);

  /// @brief Method ToString, addr 0x62dd298, size 0x24, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Guid value);

  /// @brief Method ToString, addr 0x62dcd3c, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::TimeSpan value);

  /// @brief Method ToString, addr 0x62dc7c8, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW ToString(bool value);

  /// @brief Method ToString, addr 0x62dc840, size 0x38, virtual false, abstract: false, final false
  static inline ::StringW ToString(char16_t value);

  /// @brief Method ToString, addr 0x62dcc18, size 0x124, virtual false, abstract: false, final false
  static inline ::StringW ToString(double_t value);

  /// @brief Method ToString, addr 0x62dca70, size 0x128, virtual false, abstract: false, final false
  static inline ::StringW ToString(float_t value);

  /// @brief Method ToString, addr 0x62dc944, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int16_t value);

  /// @brief Method ToString, addr 0x62dc970, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t value);

  /// @brief Method ToString, addr 0x62dc99c, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW ToString(int64_t value);

  /// @brief Method ToString, addr 0x62dc918, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int8_t value);

  /// @brief Method ToString, addr 0x62dc9f0, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint16_t value);

  /// @brief Method ToString, addr 0x62dca1c, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint32_t value);

  /// @brief Method ToString, addr 0x62dca48, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint64_t value);

  /// @brief Method ToString, addr 0x62dc9c4, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint8_t value);

  /// @brief Method ToTimeSpan, addr 0x62df3b8, size 0x184, virtual false, abstract: false, final false
  static inline ::System::TimeSpan ToTimeSpan(::StringW s);

  /// @brief Method ToUInt16, addr 0x62de5e0, size 0x28, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::StringW s);

  /// @brief Method ToUInt32, addr 0x62de780, size 0x28, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::StringW s);

  /// @brief Method ToUInt64, addr 0x62de920, size 0x28, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::StringW s);

  /// @brief Method ToUri, addr 0x62e012c, size 0x1c0, virtual false, abstract: false, final false
  static inline ::System::Uri* ToUri(::StringW s);

  /// @brief Method ToXPathDouble, addr 0x62df188, size 0x230, virtual false, abstract: false, final false
  static inline double_t ToXPathDouble(::System::Object* o);

  /// @brief Method TrimString, addr 0x62dd480, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW TrimString(::StringW value);

  /// @brief Method TrimStringEnd, addr 0x62e0648, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW TrimStringEnd(::StringW value);

  /// @brief Method TrimStringStart, addr 0x62e05d8, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW TrimStringStart(::StringW value);

  /// @brief Method TryToBoolean, addr 0x62dd4f0, size 0x240, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToBoolean(::StringW s, ::by_ref<bool> result);

  /// @brief Method TryToByte, addr 0x62de468, size 0x178, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToByte(::StringW s, ::by_ref<uint8_t> result);

  /// @brief Method TryToChar, addr 0x62dd7e8, size 0x1a0, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToChar(::StringW s, ::by_ref<char16_t> result);

  /// @brief Method TryToDecimal, addr 0x62dd9fc, size 0x1a8, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToDecimal(::StringW s, ::by_ref<::System::Decimal> result);

  /// @brief Method TryToDouble, addr 0x62def34, size 0x254, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToDouble(::StringW s, ::by_ref<double_t> result);

  /// @brief Method TryToGuid, addr 0x62dff44, size 0x1e8, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToGuid(::StringW s, ::by_ref<::System::Guid> result);

  /// @brief Method TryToInt16, addr 0x62ddf88, size 0x178, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToInt16(::StringW s, ::by_ref<int16_t> result);

  /// @brief Method TryToInt32, addr 0x62de128, size 0x178, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToInt32(::StringW s, ::by_ref<int32_t> result);

  /// @brief Method TryToInt64, addr 0x62de2c8, size 0x178, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToInt64(::StringW s, ::by_ref<int64_t> result);

  /// @brief Method TryToInteger, addr 0x62ddc18, size 0x1a8, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToInteger(::StringW s, ::by_ref<::System::Decimal> result);

  /// @brief Method TryToSByte, addr 0x62ddde8, size 0x178, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToSByte(::StringW s, ::by_ref<int8_t> result);

  /// @brief Method TryToSingle, addr 0x62debd0, size 0x254, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToSingle(::StringW s, ::by_ref<float_t> result);

  /// @brief Method TryToTimeSpan, addr 0x62df53c, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToTimeSpan(::StringW s, ::by_ref<::System::TimeSpan> result);

  /// @brief Method TryToUInt16, addr 0x62de608, size 0x178, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToUInt16(::StringW s, ::by_ref<uint16_t> result);

  /// @brief Method TryToUInt32, addr 0x62de7a8, size 0x178, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToUInt32(::StringW s, ::by_ref<uint32_t> result);

  /// @brief Method TryToUInt64, addr 0x62de948, size 0x178, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToUInt64(::StringW s, ::by_ref<uint64_t> result);

  /// @brief Method TryToUri, addr 0x62e02ec, size 0x238, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToUri(::StringW s, ::by_ref<::System::Uri*> result);

  /// @brief Method TryVerifyNCName, addr 0x62dc2a4, size 0xac, virtual false, abstract: false, final false
  static inline ::System::Exception* TryVerifyNCName(::StringW name);

  /// @brief Method TryVerifyNMTOKEN, addr 0x62dc5c8, size 0x128, virtual false, abstract: false, final false
  static inline ::System::Exception* TryVerifyNMTOKEN(::StringW name);

  /// @brief Method TryVerifyName, addr 0x62dbc20, size 0x154, virtual false, abstract: false, final false
  static inline ::System::Exception* TryVerifyName(::StringW name);

  /// @brief Method TryVerifyNormalizedString, addr 0x62dc6f0, size 0xd8, virtual false, abstract: false, final false
  static inline ::System::Exception* TryVerifyNormalizedString(::StringW str);

  /// @brief Method TryVerifyTOKEN, addr 0x62dc488, size 0x140, virtual false, abstract: false, final false
  static inline ::System::Exception* TryVerifyTOKEN(::StringW token);

  /// @brief Method VerifyCharData, addr 0x62e0734, size 0x220, virtual false, abstract: false, final false
  static inline void VerifyCharData(::StringW data, ::System::Xml::ExceptionType invCharExceptionType, ::System::Xml::ExceptionType invSurrogateExceptionType);

  /// @brief Method VerifyNCName, addr 0x62dc0e8, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW VerifyNCName(::StringW name);

  /// @brief Method VerifyNCName, addr 0x62dc144, size 0x160, virtual false, abstract: false, final false
  static inline ::StringW VerifyNCName(::StringW name, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method VerifyName, addr 0x62dba00, size 0x154, virtual false, abstract: false, final false
  static inline ::StringW VerifyName(::StringW name);

  /// @brief Method VerifyQName, addr 0x62dbedc, size 0x128, virtual false, abstract: false, final false
  static inline ::StringW VerifyQName(::StringW name, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method VerifyTOKEN, addr 0x62dc350, size 0x138, virtual false, abstract: false, final false
  static inline ::StringW VerifyTOKEN(::StringW token);

  static inline ::ArrayW<char16_t> getStaticF_WhitespaceChars();

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_c_DecodeCharPattern();

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_c_EncodeCharPattern();

  static inline int32_t getStaticF_c_EncodedCharLength();

  static inline ::ArrayW<char16_t> getStaticF_crt();

  static inline ::ArrayW<::StringW> getStaticF_s_allDateTimeFormats();

  static inline ::System::Xml::XmlCharType getStaticF_xmlCharType();

  /// @brief Method get_AllDateTimeFormats, addr 0x62df5f4, size 0x98, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> get_AllDateTimeFormats();

  static inline void setStaticF_WhitespaceChars(::ArrayW<char16_t> value);

  static inline void setStaticF_c_DecodeCharPattern(::System::Text::RegularExpressions::Regex* value);

  static inline void setStaticF_c_EncodeCharPattern(::System::Text::RegularExpressions::Regex* value);

  static inline void setStaticF_c_EncodedCharLength(int32_t value);

  static inline void setStaticF_crt(::ArrayW<char16_t> value);

  static inline void setStaticF_s_allDateTimeFormats(::ArrayW<::StringW> value);

  static inline void setStaticF_xmlCharType(::System::Xml::XmlCharType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlConvert();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlConvert", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlConvert(XmlConvert&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlConvert", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlConvert(XmlConvert const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9435 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::XmlConvert) == 0x10, "Size mismatch!");

} // namespace System::Xml
