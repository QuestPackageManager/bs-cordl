#pragma once
// IWYU pragma private; include "System/Xml/XmlConvert.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlCharType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::System::Xml::XmlConvert);
// Type: System.Xml::XmlConvert
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::XmlConvert*
class CORDL_TYPE XmlConvert : public ::System::Object {
public:
  // Declarations
  /// @brief Field WhitespaceChars, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_WhitespaceChars, put = setStaticF_WhitespaceChars))::ArrayW<char16_t, ::Array<char16_t>*> WhitespaceChars;

  /// @brief Field c_DecodeCharPattern, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_DecodeCharPattern, put = setStaticF_c_DecodeCharPattern))::System::Text::RegularExpressions::Regex* c_DecodeCharPattern;

  /// @brief Field c_EncodeCharPattern, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_EncodeCharPattern, put = setStaticF_c_EncodeCharPattern))::System::Text::RegularExpressions::Regex* c_EncodeCharPattern;

  /// @brief Field c_EncodedCharLength, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_c_EncodedCharLength, put = setStaticF_c_EncodedCharLength)) int32_t c_EncodedCharLength;

  /// @brief Field crt, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_crt, put = setStaticF_crt))::ArrayW<char16_t, ::Array<char16_t>*> crt;

  /// @brief Field s_allDateTimeFormats, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_allDateTimeFormats, put = setStaticF_s_allDateTimeFormats))::ArrayW<::StringW, ::Array<::StringW>*> s_allDateTimeFormats;

  /// @brief Field xmlCharType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_xmlCharType, put = setStaticF_xmlCharType))::System::Xml::XmlCharType xmlCharType;

  /// @brief Method CreateAllDateTimeFormats, addr 0x2ee6da0, size 0x6c4, virtual false, abstract: false, final false
  static inline void CreateAllDateTimeFormats();

  /// @brief Method CreateException, addr 0x2ee8654, size 0x138, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateException(::StringW res, ::StringW arg, ::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos);

  /// @brief Method CreateException, addr 0x2ee878c, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateException(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method CreateException, addr 0x2ee3af8, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateException(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos);

  /// @brief Method CreateException, addr 0x2ee823c, size 0xd8, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateException(::StringW res, ::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos);

  /// @brief Method CreateInvalidCharException, addr 0x2ee84cc, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidCharException(::StringW data, int32_t invCharPos, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method CreateInvalidCharException, addr 0x2ee8b0c, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidCharException(char16_t invChar, char16_t nextChar);

  /// @brief Method CreateInvalidCharException, addr 0x2ee8b74, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidCharException(char16_t invChar, char16_t nextChar, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method CreateInvalidHighSurrogateCharException, addr 0x2ee894c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidHighSurrogateCharException(char16_t hi);

  /// @brief Method CreateInvalidHighSurrogateCharException, addr 0x2ee89a4, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidHighSurrogateCharException(char16_t hi, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method CreateInvalidHighSurrogateCharException, addr 0x2ee8a10, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidHighSurrogateCharException(char16_t hi, ::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos);

  /// @brief Method CreateInvalidNameArgumentException, addr 0x2ee8c08, size 0xbc, virtual false, abstract: false, final false
  static inline ::System::ArgumentException* CreateInvalidNameArgumentException(::StringW name, ::StringW argumentName);

  /// @brief Method CreateInvalidNameCharException, addr 0x2ee37a8, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidNameCharException(::StringW name, int32_t index, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method CreateInvalidSurrogatePairException, addr 0x2ee8870, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidSurrogatePairException(char16_t low, char16_t hi);

  /// @brief Method CreateInvalidSurrogatePairException, addr 0x2ee88d8, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidSurrogatePairException(char16_t low, char16_t hi, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method CreateInvalidSurrogatePairException, addr 0x2ee8314, size 0x1b8, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidSurrogatePairException(char16_t low, char16_t hi, ::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos);

  /// @brief Method DecodeName, addr 0x2ee2bc8, size 0x928, virtual false, abstract: false, final false
  static inline ::StringW DecodeName(::StringW name);

  /// @brief Method DoubleToInt64Bits, addr 0x2ee8044, size 0x8, virtual false, abstract: false, final false
  static inline int64_t DoubleToInt64Bits(double_t value);

  /// @brief Method EncodeLocalName, addr 0x2ee2b6c, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW EncodeLocalName(::StringW name);

  /// @brief Method EncodeName, addr 0x2ee2144, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW EncodeName(::StringW name);

  /// @brief Method EncodeName, addr 0x2ee21a0, size 0x9cc, virtual false, abstract: false, final false
  static inline ::StringW EncodeName(::StringW name, bool first, bool local);

  /// @brief Method FromBinHexString, addr 0x2ee3520, size 0x58, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FromBinHexString(::StringW s);

  /// @brief Method FromBinHexString, addr 0x2ee3578, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FromBinHexString(::StringW s, bool allowOddCount);

  /// @brief Method FromHex, addr 0x2ee34f0, size 0x30, virtual false, abstract: false, final false
  static inline int32_t FromHex(char16_t digit);

  /// @brief Method IsNegativeZero, addr 0x2ee45cc, size 0x74, virtual false, abstract: false, final false
  static inline bool IsNegativeZero(double_t value);

  /// @brief Method SplitString, addr 0x2ee7fd4, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> SplitString(::StringW value);

  /// @brief Method StrEqual, addr 0x2ee7e34, size 0xc8, virtual false, abstract: false, final false
  static inline bool StrEqual(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t strPos1, int32_t strLen1, ::StringW str2);

  /// @brief Method SwitchToLocalTime, addr 0x2ee49f4, size 0x74, virtual false, abstract: false, final false
  static inline ::System::DateTime SwitchToLocalTime(::System::DateTime value);

  /// @brief Method SwitchToUtcTime, addr 0x2ee4a68, size 0x74, virtual false, abstract: false, final false
  static inline ::System::DateTime SwitchToUtcTime(::System::DateTime value);

  /// @brief Method ToBinHexString, addr 0x2ee35e8, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW ToBinHexString(::ArrayW<uint8_t, ::Array<uint8_t>*> inArray);

  /// @brief Method ToBoolean, addr 0x2ee4b38, size 0x1d0, virtual false, abstract: false, final false
  static inline bool ToBoolean(::StringW s);

  /// @brief Method ToByte, addr 0x2ee5bcc, size 0x28, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::StringW s);

  /// @brief Method ToChar, addr 0x2ee4f98, size 0xc8, virtual false, abstract: false, final false
  static inline char16_t ToChar(::StringW s);

  /// @brief Method ToDateTime, addr 0x2ee7464, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(::StringW s);

  /// @brief Method ToDateTime, addr 0x2ee7564, size 0x220, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(::StringW s, ::System::Xml::XmlDateTimeSerializationMode dateTimeOption);

  /// @brief Method ToDateTime, addr 0x2ee74c0, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(::StringW s, ::ArrayW<::StringW, ::Array<::StringW>*> formats);

  /// @brief Method ToDateTimeOffset, addr 0x2ee7784, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::DateTimeOffset ToDateTimeOffset(::StringW s);

  /// @brief Method ToDecimal, addr 0x2ee51d4, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(::StringW s);

  /// @brief Method ToDouble, addr 0x2ee651c, size 0x118, virtual false, abstract: false, final false
  static inline double_t ToDouble(::StringW s);

  /// @brief Method ToGuid, addr 0x2ee7850, size 0x2c, virtual false, abstract: false, final false
  static inline ::System::Guid ToGuid(::StringW s);

  /// @brief Method ToInt16, addr 0x2ee574c, size 0x28, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::StringW s);

  /// @brief Method ToInt32, addr 0x2ee58cc, size 0x28, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::StringW s);

  /// @brief Method ToInt64, addr 0x2ee5a4c, size 0x28, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::StringW s);

  /// @brief Method ToInteger, addr 0x2ee53d0, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Decimal ToInteger(::StringW s);

  /// @brief Method ToSByte, addr 0x2ee55cc, size 0x28, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::StringW s);

  /// @brief Method ToSingle, addr 0x2ee61cc, size 0x118, virtual false, abstract: false, final false
  static inline float_t ToSingle(::StringW s);

  /// @brief Method ToString, addr 0x2ee480c, size 0x1e8, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::DateTime value, ::System::Xml::XmlDateTimeSerializationMode dateTimeOption);

  /// @brief Method ToString, addr 0x2ee4794, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::DateTime value, ::StringW format);

  /// @brief Method ToString, addr 0x2ee4adc, size 0x38, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::DateTimeOffset value);

  /// @brief Method ToString, addr 0x2ee431c, size 0x54, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Decimal value);

  /// @brief Method ToString, addr 0x2ee4b14, size 0x24, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Guid value);

  /// @brief Method ToString, addr 0x2ee473c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::TimeSpan value);

  /// @brief Method ToString, addr 0x2ee4294, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW ToString(bool value);

  /// @brief Method ToString, addr 0x2ee42fc, size 0x20, virtual false, abstract: false, final false
  static inline ::StringW ToString(char16_t value);

  /// @brief Method ToString, addr 0x2ee4640, size 0xfc, virtual false, abstract: false, final false
  static inline ::StringW ToString(double_t value);

  /// @brief Method ToString, addr 0x2ee44d0, size 0xfc, virtual false, abstract: false, final false
  static inline ::StringW ToString(float_t value);

  /// @brief Method ToString, addr 0x2ee439c, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int16_t value);

  /// @brief Method ToString, addr 0x2ee43c8, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t value);

  /// @brief Method ToString, addr 0x2ee43f4, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int64_t value);

  /// @brief Method ToString, addr 0x2ee4370, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int8_t value);

  /// @brief Method ToString, addr 0x2ee444c, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint16_t value);

  /// @brief Method ToString, addr 0x2ee4478, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint32_t value);

  /// @brief Method ToString, addr 0x2ee44a4, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint64_t value);

  /// @brief Method ToString, addr 0x2ee4420, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint8_t value);

  /// @brief Method ToTimeSpan, addr 0x2ee6ac0, size 0x19c, virtual false, abstract: false, final false
  static inline ::System::TimeSpan ToTimeSpan(::StringW s);

  /// @brief Method ToUInt16, addr 0x2ee5d4c, size 0x28, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::StringW s);

  /// @brief Method ToUInt32, addr 0x2ee5ecc, size 0x28, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::StringW s);

  /// @brief Method ToUInt64, addr 0x2ee604c, size 0x28, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::StringW s);

  /// @brief Method ToUri, addr 0x2ee7a60, size 0x1bc, virtual false, abstract: false, final false
  static inline ::System::Uri* ToUri(::StringW s);

  /// @brief Method ToXPathDouble, addr 0x2ee686c, size 0x254, virtual false, abstract: false, final false
  static inline double_t ToXPathDouble(::System::Object* o);

  /// @brief Method TrimString, addr 0x2ee4d08, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW TrimString(::StringW value);

  /// @brief Method TrimStringEnd, addr 0x2ee7f68, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW TrimStringEnd(::StringW value);

  /// @brief Method TrimStringStart, addr 0x2ee7efc, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW TrimStringStart(::StringW value);

  /// @brief Method TryToBoolean, addr 0x2ee4d74, size 0x224, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToBoolean(::StringW s, ByRef<bool> result);

  /// @brief Method TryToByte, addr 0x2ee5bf4, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToByte(::StringW s, ByRef<uint8_t> result);

  /// @brief Method TryToChar, addr 0x2ee5060, size 0x174, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToChar(::StringW s, ByRef<char16_t> result);

  /// @brief Method TryToDecimal, addr 0x2ee5244, size 0x18c, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToDecimal(::StringW s, ByRef<::System::Decimal> result);

  /// @brief Method TryToDouble, addr 0x2ee6634, size 0x238, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToDouble(::StringW s, ByRef<double_t> result);

  /// @brief Method TryToGuid, addr 0x2ee787c, size 0x1e4, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToGuid(::StringW s, ByRef<::System::Guid> result);

  /// @brief Method TryToInt16, addr 0x2ee5774, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToInt16(::StringW s, ByRef<int16_t> result);

  /// @brief Method TryToInt32, addr 0x2ee58f4, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToInt32(::StringW s, ByRef<int32_t> result);

  /// @brief Method TryToInt64, addr 0x2ee5a74, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToInt64(::StringW s, ByRef<int64_t> result);

  /// @brief Method TryToInteger, addr 0x2ee5440, size 0x18c, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToInteger(::StringW s, ByRef<::System::Decimal> result);

  /// @brief Method TryToSByte, addr 0x2ee55f4, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToSByte(::StringW s, ByRef<int8_t> result);

  /// @brief Method TryToSingle, addr 0x2ee62e4, size 0x238, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToSingle(::StringW s, ByRef<float_t> result);

  /// @brief Method TryToTimeSpan, addr 0x2ee6c5c, size 0xac, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToTimeSpan(::StringW s, ByRef<::System::TimeSpan> result);

  /// @brief Method TryToUInt16, addr 0x2ee5d74, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToUInt16(::StringW s, ByRef<uint16_t> result);

  /// @brief Method TryToUInt32, addr 0x2ee5ef4, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToUInt32(::StringW s, ByRef<uint32_t> result);

  /// @brief Method TryToUInt64, addr 0x2ee6074, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToUInt64(::StringW s, ByRef<uint64_t> result);

  /// @brief Method TryToUri, addr 0x2ee7c1c, size 0x218, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToUri(::StringW s, ByRef<::System::Uri*> result);

  /// @brief Method TryVerifyNCName, addr 0x2ee3d84, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* TryVerifyNCName(::StringW name);

  /// @brief Method TryVerifyNMTOKEN, addr 0x2ee4098, size 0x130, virtual false, abstract: false, final false
  static inline ::System::Exception* TryVerifyNMTOKEN(::StringW name);

  /// @brief Method TryVerifyName, addr 0x2ee386c, size 0x15c, virtual false, abstract: false, final false
  static inline ::System::Exception* TryVerifyName(::StringW name);

  /// @brief Method TryVerifyNormalizedString, addr 0x2ee41c8, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Exception* TryVerifyNormalizedString(::StringW str);

  /// @brief Method TryVerifyTOKEN, addr 0x2ee3f5c, size 0x13c, virtual false, abstract: false, final false
  static inline ::System::Exception* TryVerifyTOKEN(::StringW token);

  /// @brief Method VerifyCharData, addr 0x2ee804c, size 0x1f0, virtual false, abstract: false, final false
  static inline void VerifyCharData(::StringW data, ::System::Xml::ExceptionType invCharExceptionType, ::System::Xml::ExceptionType invSurrogateExceptionType);

  /// @brief Method VerifyNCName, addr 0x2ee3bd4, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW VerifyNCName(::StringW name);

  /// @brief Method VerifyNCName, addr 0x2ee3c2c, size 0x158, virtual false, abstract: false, final false
  static inline ::StringW VerifyNCName(::StringW name, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method VerifyName, addr 0x2ee3650, size 0x154, virtual false, abstract: false, final false
  static inline ::StringW VerifyName(::StringW name);

  /// @brief Method VerifyQName, addr 0x2ee39c8, size 0x130, virtual false, abstract: false, final false
  static inline ::StringW VerifyQName(::StringW name, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method VerifyTOKEN, addr 0x2ee3e24, size 0x138, virtual false, abstract: false, final false
  static inline ::StringW VerifyTOKEN(::StringW token);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_WhitespaceChars();

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_c_DecodeCharPattern();

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_c_EncodeCharPattern();

  static inline int32_t getStaticF_c_EncodedCharLength();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_crt();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_allDateTimeFormats();

  static inline ::System::Xml::XmlCharType getStaticF_xmlCharType();

  /// @brief Method get_AllDateTimeFormats, addr 0x2ee6d08, size 0x98, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> get_AllDateTimeFormats();

  static inline void setStaticF_WhitespaceChars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_c_DecodeCharPattern(::System::Text::RegularExpressions::Regex* value);

  static inline void setStaticF_c_EncodeCharPattern(::System::Text::RegularExpressions::Regex* value);

  static inline void setStaticF_c_EncodedCharLength(int32_t value);

  static inline void setStaticF_crt(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_s_allDateTimeFormats(::ArrayW<::StringW, ::Array<::StringW>*> value);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlConvert, 0x10>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlConvert);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlConvert*, "System.Xml", "XmlConvert");
