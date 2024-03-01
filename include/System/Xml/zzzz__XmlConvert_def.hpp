#pragma once
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

  /// @brief Field xmlCharType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_xmlCharType, put = setStaticF_xmlCharType))::System::Xml::XmlCharType xmlCharType;

  /// @brief Method CreateException, addr 0x298daf0, size 0x138, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateException(::StringW res, ::StringW arg, ::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos);

  /// @brief Method CreateException, addr 0x298dd14, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateException(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method CreateException, addr 0x298a7a8, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateException(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos);

  /// @brief Method CreateInvalidCharException, addr 0x298e24c, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidCharException(char16_t invChar, char16_t nextChar);

  /// @brief Method CreateInvalidCharException, addr 0x298e2b4, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidCharException(char16_t invChar, char16_t nextChar, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method CreateInvalidHighSurrogateCharException, addr 0x298e08c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidHighSurrogateCharException(char16_t hi);

  /// @brief Method CreateInvalidHighSurrogateCharException, addr 0x298e0e4, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidHighSurrogateCharException(char16_t hi, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method CreateInvalidHighSurrogateCharException, addr 0x298e150, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidHighSurrogateCharException(char16_t hi, ::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos);

  /// @brief Method CreateInvalidNameArgumentException, addr 0x298e5f0, size 0xbc, virtual false, abstract: false, final false
  static inline ::System::ArgumentException* CreateInvalidNameArgumentException(::StringW name, ::StringW argumentName);

  /// @brief Method CreateInvalidNameCharException, addr 0x298a458, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidNameCharException(::StringW name, int32_t index, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method CreateInvalidSurrogatePairException, addr 0x298ddf8, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidSurrogatePairException(char16_t low, char16_t hi);

  /// @brief Method CreateInvalidSurrogatePairException, addr 0x298de60, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidSurrogatePairException(char16_t low, char16_t hi, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method CreateInvalidSurrogatePairException, addr 0x298ded4, size 0x1b8, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidSurrogatePairException(char16_t low, char16_t hi, ::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos);

  /// @brief Method DecodeName, addr 0x29898d0, size 0x928, virtual false, abstract: false, final false
  static inline ::StringW DecodeName(::StringW name);

  /// @brief Method DoubleToInt64Bits, addr 0x298dae8, size 0x8, virtual false, abstract: false, final false
  static inline int64_t DoubleToInt64Bits(double_t value);

  /// @brief Method EncodeName, addr 0x2988ea8, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW EncodeName(::StringW name);

  /// @brief Method EncodeName, addr 0x2988f04, size 0x9cc, virtual false, abstract: false, final false
  static inline ::StringW EncodeName(::StringW name, bool first, bool local);

  /// @brief Method FromBinHexString, addr 0x298a228, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FromBinHexString(::StringW s, bool allowOddCount);

  /// @brief Method FromHex, addr 0x298a1f8, size 0x30, virtual false, abstract: false, final false
  static inline int32_t FromHex(char16_t digit);

  /// @brief Method IsNegativeZero, addr 0x298b124, size 0x74, virtual false, abstract: false, final false
  static inline bool IsNegativeZero(double_t value);

  /// @brief Method SplitString, addr 0x298da78, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> SplitString(::StringW value);

  /// @brief Method StrEqual, addr 0x298d8d8, size 0xc8, virtual false, abstract: false, final false
  static inline bool StrEqual(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t strPos1, int32_t strLen1, ::StringW str2);

  /// @brief Method SwitchToLocalTime, addr 0x298b4d4, size 0x74, virtual false, abstract: false, final false
  static inline ::System::DateTime SwitchToLocalTime(::System::DateTime value);

  /// @brief Method SwitchToUtcTime, addr 0x298b548, size 0x74, virtual false, abstract: false, final false
  static inline ::System::DateTime SwitchToUtcTime(::System::DateTime value);

  /// @brief Method ToBinHexString, addr 0x298a298, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW ToBinHexString(::ArrayW<uint8_t, ::Array<uint8_t>*> inArray);

  /// @brief Method ToBoolean, addr 0x298b604, size 0x1d0, virtual false, abstract: false, final false
  static inline bool ToBoolean(::StringW s);

  /// @brief Method ToChar, addr 0x298ba64, size 0xc8, virtual false, abstract: false, final false
  static inline char16_t ToChar(::StringW s);

  /// @brief Method ToDecimal, addr 0x298bca0, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(::StringW s);

  /// @brief Method ToDouble, addr 0x298cef8, size 0x118, virtual false, abstract: false, final false
  static inline double_t ToDouble(::StringW s);

  /// @brief Method ToGuid, addr 0x298d2f4, size 0x2c, virtual false, abstract: false, final false
  static inline ::System::Guid ToGuid(::StringW s);

  /// @brief Method ToInt32, addr 0x298c348, size 0x28, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::StringW s);

  /// @brief Method ToInt64, addr 0x298c4c8, size 0x28, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::StringW s);

  /// @brief Method ToInteger, addr 0x298be9c, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Decimal ToInteger(::StringW s);

  /// @brief Method ToSingle, addr 0x298cba8, size 0x118, virtual false, abstract: false, final false
  static inline float_t ToSingle(::StringW s);

  /// @brief Method ToString, addr 0x298b2ec, size 0x1e8, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::DateTime value, ::System::Xml::XmlDateTimeSerializationMode dateTimeOption);

  /// @brief Method ToString, addr 0x298b5cc, size 0x38, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::DateTimeOffset value);

  /// @brief Method ToString, addr 0x298ae74, size 0x54, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Decimal value);

  /// @brief Method ToString, addr 0x298b294, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::TimeSpan value);

  /// @brief Method ToString, addr 0x298ae0c, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW ToString(bool value);

  /// @brief Method ToString, addr 0x298b198, size 0xfc, virtual false, abstract: false, final false
  static inline ::StringW ToString(double_t value);

  /// @brief Method ToString, addr 0x298b028, size 0xfc, virtual false, abstract: false, final false
  static inline ::StringW ToString(float_t value);

  /// @brief Method ToString, addr 0x298aef4, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int16_t value);

  /// @brief Method ToString, addr 0x298af20, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t value);

  /// @brief Method ToString, addr 0x298af4c, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int64_t value);

  /// @brief Method ToString, addr 0x298aec8, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int8_t value);

  /// @brief Method ToString, addr 0x298afa4, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint16_t value);

  /// @brief Method ToString, addr 0x298afd0, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint32_t value);

  /// @brief Method ToString, addr 0x298affc, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint64_t value);

  /// @brief Method ToString, addr 0x298af78, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint8_t value);

  /// @brief Method ToUri, addr 0x298d504, size 0x1bc, virtual false, abstract: false, final false
  static inline ::System::Uri* ToUri(::StringW s);

  /// @brief Method TrimString, addr 0x298b7d4, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW TrimString(::StringW value);

  /// @brief Method TrimStringEnd, addr 0x298da0c, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW TrimStringEnd(::StringW value);

  /// @brief Method TrimStringStart, addr 0x298d9a0, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW TrimStringStart(::StringW value);

  /// @brief Method TryToBoolean, addr 0x298b840, size 0x224, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToBoolean(::StringW s, ByRef<bool> result);

  /// @brief Method TryToByte, addr 0x298c648, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToByte(::StringW s, ByRef<uint8_t> result);

  /// @brief Method TryToChar, addr 0x298bb2c, size 0x174, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToChar(::StringW s, ByRef<char16_t> result);

  /// @brief Method TryToDecimal, addr 0x298bd10, size 0x18c, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToDecimal(::StringW s, ByRef<::System::Decimal> result);

  /// @brief Method TryToDouble, addr 0x298d010, size 0x238, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToDouble(::StringW s, ByRef<double_t> result);

  /// @brief Method TryToGuid, addr 0x298d320, size 0x1e4, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToGuid(::StringW s, ByRef<::System::Guid> result);

  /// @brief Method TryToInt16, addr 0x298c1f0, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToInt16(::StringW s, ByRef<int16_t> result);

  /// @brief Method TryToInt32, addr 0x298c370, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToInt32(::StringW s, ByRef<int32_t> result);

  /// @brief Method TryToInt64, addr 0x298c4f0, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToInt64(::StringW s, ByRef<int64_t> result);

  /// @brief Method TryToInteger, addr 0x298bf0c, size 0x18c, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToInteger(::StringW s, ByRef<::System::Decimal> result);

  /// @brief Method TryToSByte, addr 0x298c098, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToSByte(::StringW s, ByRef<int8_t> result);

  /// @brief Method TryToSingle, addr 0x298ccc0, size 0x238, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToSingle(::StringW s, ByRef<float_t> result);

  /// @brief Method TryToTimeSpan, addr 0x298d248, size 0xac, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToTimeSpan(::StringW s, ByRef<::System::TimeSpan> result);

  /// @brief Method TryToUInt16, addr 0x298c7a0, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToUInt16(::StringW s, ByRef<uint16_t> result);

  /// @brief Method TryToUInt32, addr 0x298c8f8, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToUInt32(::StringW s, ByRef<uint32_t> result);

  /// @brief Method TryToUInt64, addr 0x298ca50, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToUInt64(::StringW s, ByRef<uint64_t> result);

  /// @brief Method TryToUri, addr 0x298d6c0, size 0x218, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToUri(::StringW s, ByRef<::System::Uri*> result);

  /// @brief Method TryVerifyNCName, addr 0x298aa34, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* TryVerifyNCName(::StringW name);

  /// @brief Method TryVerifyNMTOKEN, addr 0x298ac10, size 0x130, virtual false, abstract: false, final false
  static inline ::System::Exception* TryVerifyNMTOKEN(::StringW name);

  /// @brief Method TryVerifyName, addr 0x298a51c, size 0x15c, virtual false, abstract: false, final false
  static inline ::System::Exception* TryVerifyName(::StringW name);

  /// @brief Method TryVerifyNormalizedString, addr 0x298ad40, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Exception* TryVerifyNormalizedString(::StringW str);

  /// @brief Method TryVerifyTOKEN, addr 0x298aad4, size 0x13c, virtual false, abstract: false, final false
  static inline ::System::Exception* TryVerifyTOKEN(::StringW token);

  /// @brief Method VerifyNCName, addr 0x298a884, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW VerifyNCName(::StringW name);

  /// @brief Method VerifyNCName, addr 0x298a8dc, size 0x158, virtual false, abstract: false, final false
  static inline ::StringW VerifyNCName(::StringW name, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method VerifyName, addr 0x298a300, size 0x154, virtual false, abstract: false, final false
  static inline ::StringW VerifyName(::StringW name);

  /// @brief Method VerifyQName, addr 0x298a678, size 0x130, virtual false, abstract: false, final false
  static inline ::StringW VerifyQName(::StringW name, ::System::Xml::ExceptionType exceptionType);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_WhitespaceChars();

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_c_DecodeCharPattern();

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_c_EncodeCharPattern();

  static inline int32_t getStaticF_c_EncodedCharLength();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_crt();

  static inline ::System::Xml::XmlCharType getStaticF_xmlCharType();

  static inline void setStaticF_WhitespaceChars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_c_DecodeCharPattern(::System::Text::RegularExpressions::Regex* value);

  static inline void setStaticF_c_EncodeCharPattern(::System::Text::RegularExpressions::Regex* value);

  static inline void setStaticF_c_EncodedCharLength(int32_t value);

  static inline void setStaticF_crt(::ArrayW<char16_t, ::Array<char16_t>*> value);

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
