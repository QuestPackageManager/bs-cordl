#pragma once
// IWYU pragma private; include "System/Xml/XmlConvert.hpp"
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

  /// @brief Method CreateAllDateTimeFormats, addr 0x674488c, size 0x478, virtual false, abstract: false, final false
  static inline void CreateAllDateTimeFormats();

  /// @brief Method CreateException, addr 0x6745f1c, size 0x148, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateException(::StringW res, ::StringW arg, ::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos);

  /// @brief Method CreateException, addr 0x6746064, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateException(::StringW res, ::ArrayW<::StringW> args, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method CreateException, addr 0x6741204, size 0xe4, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateException(::StringW res, ::ArrayW<::StringW> args, ::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos);

  /// @brief Method CreateException, addr 0x6745b54, size 0xd8, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateException(::StringW res, ::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos);

  /// @brief Method CreateInvalidCharException, addr 0x6745dac, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidCharException(::StringW data, int32_t invCharPos, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method CreateInvalidCharException, addr 0x6746404, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidCharException(char16_t invChar, char16_t nextChar);

  /// @brief Method CreateInvalidCharException, addr 0x6746470, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidCharException(char16_t invChar, char16_t nextChar, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method CreateInvalidHighSurrogateCharException, addr 0x6746230, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidHighSurrogateCharException(char16_t hi);

  /// @brief Method CreateInvalidHighSurrogateCharException, addr 0x674628c, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidHighSurrogateCharException(char16_t hi, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method CreateInvalidHighSurrogateCharException, addr 0x67462fc, size 0x108, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidHighSurrogateCharException(char16_t hi, ::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos);

  /// @brief Method CreateInvalidNameArgumentException, addr 0x6746768, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::ArgumentException* CreateInvalidNameArgumentException(::StringW name, ::StringW argumentName);

  /// @brief Method CreateInvalidNameCharException, addr 0x6740d58, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidNameCharException(::StringW name, int32_t index, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method CreateInvalidSurrogatePairException, addr 0x674614c, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidSurrogatePairException(char16_t low, char16_t hi);

  /// @brief Method CreateInvalidSurrogatePairException, addr 0x67461b8, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidSurrogatePairException(char16_t low, char16_t hi, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method CreateInvalidSurrogatePairException, addr 0x6745c2c, size 0x180, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidSurrogatePairException(char16_t low, char16_t hi, ::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos);

  /// @brief Method DecodeName, addr 0x67401fc, size 0x8b0, virtual false, abstract: false, final false
  static inline ::StringW DecodeName(::StringW name);

  /// @brief Method DoubleToInt64Bits, addr 0x674592c, size 0x8, virtual false, abstract: false, final false
  static inline int64_t DoubleToInt64Bits(double_t value);

  /// @brief Method EncodeLocalName, addr 0x674019c, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW EncodeLocalName(::StringW name);

  /// @brief Method EncodeName, addr 0x673f7d0, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW EncodeName(::StringW name);

  /// @brief Method EncodeName, addr 0x673f830, size 0x96c, virtual false, abstract: false, final false
  static inline ::StringW EncodeName(::StringW name, bool first, bool local);

  /// @brief Method FromBinHexString, addr 0x6740ad8, size 0x5c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> FromBinHexString(::StringW s);

  /// @brief Method FromBinHexString, addr 0x6740b34, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> FromBinHexString(::StringW s, bool allowOddCount);

  /// @brief Method FromHex, addr 0x6740aac, size 0x2c, virtual false, abstract: false, final false
  static inline int32_t FromHex(char16_t digit);

  /// @brief Method IsNegativeZero, addr 0x6741d98, size 0x80, virtual false, abstract: false, final false
  static inline bool IsNegativeZero(double_t value);

  /// @brief Method SplitString, addr 0x67458b8, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> SplitString(::StringW value);

  /// @brief Method StrEqual, addr 0x6745724, size 0xb4, virtual false, abstract: false, final false
  static inline bool StrEqual(::ArrayW<char16_t> chars, int32_t strPos1, int32_t strLen1, ::StringW str2);

  /// @brief Method SwitchToLocalTime, addr 0x6742254, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::DateTime SwitchToLocalTime(::System::DateTime value);

  /// @brief Method SwitchToUtcTime, addr 0x6742328, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::DateTime SwitchToUtcTime(::System::DateTime value);

  /// @brief Method ToBinHexString, addr 0x6740ba0, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW ToBinHexString(::ArrayW<uint8_t> inArray);

  /// @brief Method ToBoolean, addr 0x67424bc, size 0x1c4, virtual false, abstract: false, final false
  static inline bool ToBoolean(::StringW s);

  /// @brief Method ToByte, addr 0x6743640, size 0x28, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::StringW s);

  /// @brief Method ToChar, addr 0x6742930, size 0xb8, virtual false, abstract: false, final false
  static inline char16_t ToChar(::StringW s);

  /// [Obsolete("Use XmlConvert.ToDateTime() that takes in XmlDateTimeSerializationMode")]
  /// @brief Method ToDateTime, addr 0x6744d04, size 0x60, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(::StringW s);

  /// @brief Method ToDateTime, addr 0x6744e10, size 0x23c, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(::StringW s, ::System::Xml::XmlDateTimeSerializationMode dateTimeOption);

  /// @brief Method ToDateTime, addr 0x6744d64, size 0xac, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(::StringW s, ::ArrayW<::StringW> formats);

  /// @brief Method ToDateTimeOffset, addr 0x674504c, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::DateTimeOffset ToDateTimeOffset(::StringW s);

  /// @brief Method ToDecimal, addr 0x6742b88, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(::StringW s);

  /// @brief Method ToDouble, addr 0x6744024, size 0x110, virtual false, abstract: false, final false
  static inline double_t ToDouble(::StringW s);

  /// @brief Method ToGuid, addr 0x6745118, size 0x2c, virtual false, abstract: false, final false
  static inline ::System::Guid ToGuid(::StringW s);

  /// @brief Method ToInt16, addr 0x6743160, size 0x28, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::StringW s);

  /// @brief Method ToInt32, addr 0x6743300, size 0x28, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::StringW s);

  /// @brief Method ToInt64, addr 0x67434a0, size 0x28, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::StringW s);

  /// @brief Method ToInteger, addr 0x6742da4, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Decimal ToInteger(::StringW s);

  /// [CLSCompliant(false)]
  /// @brief Method ToSByte, addr 0x6742fc0, size 0x28, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::StringW s);

  /// @brief Method ToSingle, addr 0x6743cc0, size 0x110, virtual false, abstract: false, final false
  static inline float_t ToSingle(::StringW s);

  /// @brief Method ToString, addr 0x6742024, size 0x230, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::DateTime value, ::System::Xml::XmlDateTimeSerializationMode dateTimeOption);

  /// @brief Method ToString, addr 0x6741f78, size 0xac, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::DateTime value, ::StringW format);

  /// @brief Method ToString, addr 0x674240c, size 0x8c, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::DateTimeOffset value);

  /// @brief Method ToString, addr 0x6741a78, size 0xa0, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Decimal value);

  /// @brief Method ToString, addr 0x6742498, size 0x24, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Guid value);

  /// @brief Method ToString, addr 0x6741f3c, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::TimeSpan value);

  /// @brief Method ToString, addr 0x67419c8, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW ToString(bool value);

  /// @brief Method ToString, addr 0x6741a40, size 0x38, virtual false, abstract: false, final false
  static inline ::StringW ToString(char16_t value);

  /// @brief Method ToString, addr 0x6741e18, size 0x124, virtual false, abstract: false, final false
  static inline ::StringW ToString(double_t value);

  /// @brief Method ToString, addr 0x6741c70, size 0x128, virtual false, abstract: false, final false
  static inline ::StringW ToString(float_t value);

  /// @brief Method ToString, addr 0x6741b44, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int16_t value);

  /// @brief Method ToString, addr 0x6741b70, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t value);

  /// @brief Method ToString, addr 0x6741b9c, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW ToString(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToString, addr 0x6741b18, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToString, addr 0x6741bf0, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToString, addr 0x6741c1c, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToString, addr 0x6741c48, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint64_t value);

  /// @brief Method ToString, addr 0x6741bc4, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint8_t value);

  /// @brief Method ToTimeSpan, addr 0x67445b8, size 0x184, virtual false, abstract: false, final false
  static inline ::System::TimeSpan ToTimeSpan(::StringW s);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt16, addr 0x67437e0, size 0x28, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::StringW s);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt32, addr 0x6743980, size 0x28, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::StringW s);

  /// [CLSCompliant(false)]
  /// @brief Method ToUInt64, addr 0x6743b20, size 0x28, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::StringW s);

  /// @brief Method ToUri, addr 0x674532c, size 0x1c0, virtual false, abstract: false, final false
  static inline ::System::Uri* ToUri(::StringW s);

  /// @brief Method ToXPathDouble, addr 0x6744388, size 0x230, virtual false, abstract: false, final false
  static inline double_t ToXPathDouble(::System::Object* o);

  /// @brief Method TrimString, addr 0x6742680, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW TrimString(::StringW value);

  /// @brief Method TrimStringEnd, addr 0x6745848, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW TrimStringEnd(::StringW value);

  /// @brief Method TrimStringStart, addr 0x67457d8, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW TrimStringStart(::StringW value);

  /// @brief Method TryToBoolean, addr 0x67426f0, size 0x240, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToBoolean(::StringW s, ::by_ref<bool> result);

  /// @brief Method TryToByte, addr 0x6743668, size 0x178, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToByte(::StringW s, ::by_ref<uint8_t> result);

  /// @brief Method TryToChar, addr 0x67429e8, size 0x1a0, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToChar(::StringW s, ::by_ref<char16_t> result);

  /// @brief Method TryToDecimal, addr 0x6742bfc, size 0x1a8, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToDecimal(::StringW s, ::by_ref<::System::Decimal> result);

  /// @brief Method TryToDouble, addr 0x6744134, size 0x254, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToDouble(::StringW s, ::by_ref<double_t> result);

  /// @brief Method TryToGuid, addr 0x6745144, size 0x1e8, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToGuid(::StringW s, ::by_ref<::System::Guid> result);

  /// @brief Method TryToInt16, addr 0x6743188, size 0x178, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToInt16(::StringW s, ::by_ref<int16_t> result);

  /// @brief Method TryToInt32, addr 0x6743328, size 0x178, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToInt32(::StringW s, ::by_ref<int32_t> result);

  /// @brief Method TryToInt64, addr 0x67434c8, size 0x178, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToInt64(::StringW s, ::by_ref<int64_t> result);

  /// @brief Method TryToInteger, addr 0x6742e18, size 0x1a8, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToInteger(::StringW s, ::by_ref<::System::Decimal> result);

  /// @brief Method TryToSByte, addr 0x6742fe8, size 0x178, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToSByte(::StringW s, ::by_ref<int8_t> result);

  /// @brief Method TryToSingle, addr 0x6743dd0, size 0x254, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToSingle(::StringW s, ::by_ref<float_t> result);

  /// @brief Method TryToTimeSpan, addr 0x674473c, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToTimeSpan(::StringW s, ::by_ref<::System::TimeSpan> result);

  /// @brief Method TryToUInt16, addr 0x6743808, size 0x178, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToUInt16(::StringW s, ::by_ref<uint16_t> result);

  /// @brief Method TryToUInt32, addr 0x67439a8, size 0x178, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToUInt32(::StringW s, ::by_ref<uint32_t> result);

  /// @brief Method TryToUInt64, addr 0x6743b48, size 0x178, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToUInt64(::StringW s, ::by_ref<uint64_t> result);

  /// @brief Method TryToUri, addr 0x67454ec, size 0x238, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToUri(::StringW s, ::by_ref<::System::Uri*> result);

  /// @brief Method TryVerifyNCName, addr 0x67414a4, size 0xac, virtual false, abstract: false, final false
  static inline ::System::Exception* TryVerifyNCName(::StringW name);

  /// @brief Method TryVerifyNMTOKEN, addr 0x67417c8, size 0x128, virtual false, abstract: false, final false
  static inline ::System::Exception* TryVerifyNMTOKEN(::StringW name);

  /// @brief Method TryVerifyName, addr 0x6740e20, size 0x154, virtual false, abstract: false, final false
  static inline ::System::Exception* TryVerifyName(::StringW name);

  /// @brief Method TryVerifyNormalizedString, addr 0x67418f0, size 0xd8, virtual false, abstract: false, final false
  static inline ::System::Exception* TryVerifyNormalizedString(::StringW str);

  /// @brief Method TryVerifyTOKEN, addr 0x6741688, size 0x140, virtual false, abstract: false, final false
  static inline ::System::Exception* TryVerifyTOKEN(::StringW token);

  /// @brief Method VerifyCharData, addr 0x6745934, size 0x220, virtual false, abstract: false, final false
  static inline void VerifyCharData(::StringW data, ::System::Xml::ExceptionType invCharExceptionType, ::System::Xml::ExceptionType invSurrogateExceptionType);

  /// @brief Method VerifyNCName, addr 0x67412e8, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW VerifyNCName(::StringW name);

  /// @brief Method VerifyNCName, addr 0x6741344, size 0x160, virtual false, abstract: false, final false
  static inline ::StringW VerifyNCName(::StringW name, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method VerifyName, addr 0x6740c00, size 0x154, virtual false, abstract: false, final false
  static inline ::StringW VerifyName(::StringW name);

  /// @brief Method VerifyQName, addr 0x67410dc, size 0x128, virtual false, abstract: false, final false
  static inline ::StringW VerifyQName(::StringW name, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method VerifyTOKEN, addr 0x6741550, size 0x138, virtual false, abstract: false, final false
  static inline ::StringW VerifyTOKEN(::StringW token);

  static inline ::ArrayW<char16_t> getStaticF_WhitespaceChars();

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_c_DecodeCharPattern();

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_c_EncodeCharPattern();

  static inline int32_t getStaticF_c_EncodedCharLength();

  static inline ::ArrayW<char16_t> getStaticF_crt();

  static inline ::ArrayW<::StringW> getStaticF_s_allDateTimeFormats();

  static inline ::System::Xml::XmlCharType getStaticF_xmlCharType();

  /// @brief Method get_AllDateTimeFormats, addr 0x67447f4, size 0x98, virtual false, abstract: false, final false
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
  // Ctor Parameters [CppParam { name: "", ty: "XmlConvert", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlConvert(XmlConvert&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlConvert", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlConvert(XmlConvert const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11407 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::XmlConvert) == 0x10, "Size mismatch!");

} // namespace System::Xml
