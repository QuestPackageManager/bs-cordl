#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Convert)
namespace System {
struct Base64FormattingOptions;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class IConvertible;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class Convert;
}
// Write type traits
MARK_REF_PTR_T(::System::Convert);
// Type: System::Convert
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::Convert*
class CORDL_TYPE Convert : public ::System::Object {
public:
  // Declarations
  /// @brief Field ConvertTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ConvertTypes, put = setStaticF_ConvertTypes))::ArrayW<::System::Type*, ::Array<::System::Type*>*> ConvertTypes;

  /// @brief Field DBNull, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DBNull, put = setStaticF_DBNull))::System::Object* DBNull;

  /// @brief Field EnumType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EnumType, put = setStaticF_EnumType))::System::Type* EnumType;

  /// @brief Field base64Table, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_base64Table, put = setStaticF_base64Table))::ArrayW<char16_t, ::Array<char16_t>*> base64Table;

  /// @brief Field s_decodingMap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_decodingMap, put = setStaticF_s_decodingMap))::ArrayW<int8_t, ::Array<int8_t>*> s_decodingMap;

  /// @brief Method ChangeType, addr 0x2617e30, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* conversionType);

  /// @brief Method ChangeType, addr 0x2617ecc, size 0xbfc, virtual false, abstract: false, final false
  static inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* conversionType, ::System::IFormatProvider* provider);

  /// @brief Method ChangeType, addr 0x26175e8, size 0x848, virtual false, abstract: false, final false
  static inline ::System::Object* ChangeType(::System::Object* value, ::System::TypeCode typeCode, ::System::IFormatProvider* provider);

  /// @brief Method ConvertToBase64Array, addr 0x261df18, size 0x244, virtual false, abstract: false, final false
  static inline int32_t ConvertToBase64Array(::cordl_internals::Ptr<char16_t> outChars, ::cordl_internals::Ptr<uint8_t> inData, int32_t offset, int32_t length, bool insertLineBreaks);

  /// @brief Method CopyToTempBufferWithoutWhiteSpace, addr 0x261ec68, size 0x120, virtual false, abstract: false, final false
  static inline void CopyToTempBufferWithoutWhiteSpace(::System::ReadOnlySpan_1<char16_t> chars, ::System::Span_1<char16_t> tempBuffer, ByRef<int32_t> consumed, ByRef<int32_t> charsWritten);

  /// @brief Method Decode, addr 0x26174bc, size 0x50, virtual false, abstract: false, final false
  static inline int32_t Decode(ByRef<char16_t> encodedChars, ByRef<int8_t> decodingMap);

  /// @brief Method DefaultToType, addr 0x261331c, size 0xd14, virtual false, abstract: false, final false
  static inline ::System::Object* DefaultToType(::System::IConvertible* value, ::System::Type* targetType, ::System::IFormatProvider* provider);

  /// @brief Method FromBase64CharArray, addr 0x261edc0, size 0x1f0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FromBase64CharArray(::ArrayW<char16_t, ::Array<char16_t>*> inArray, int32_t offset, int32_t length);

  /// @brief Method FromBase64CharPtr, addr 0x261e5c8, size 0x1a8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FromBase64CharPtr(::cordl_internals::Ptr<char16_t> inputPtr, int32_t inputLength);

  /// @brief Method FromBase64String, addr 0x261e510, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FromBase64String(::StringW s);

  /// @brief Method FromBase64_ComputeResultLength, addr 0x261efb0, size 0xc0, virtual false, abstract: false, final false
  static inline int32_t FromBase64_ComputeResultLength(::cordl_internals::Ptr<char16_t> inputPtr, int32_t inputLength);

  /// @brief Method GetTypeCode, addr 0x2617524, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::TypeCode GetTypeCode(::System::Object* value);

  /// @brief Method IsSpace, addr 0x261ed88, size 0x38, virtual false, abstract: false, final false
  static inline bool IsSpace(char16_t c);

  /// @brief Method ThrowByteOverflowException, addr 0x2618b18, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowByteOverflowException();

  /// @brief Method ThrowCharOverflowException, addr 0x2618ac8, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowCharOverflowException();

  /// @brief Method ThrowInt16OverflowException, addr 0x2618bb8, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowInt16OverflowException();

  /// @brief Method ThrowInt32OverflowException, addr 0x2618c58, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowInt32OverflowException();

  /// @brief Method ThrowInt64OverflowException, addr 0x2618cf8, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowInt64OverflowException();

  /// @brief Method ThrowSByteOverflowException, addr 0x2618b68, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowSByteOverflowException();

  /// @brief Method ThrowUInt16OverflowException, addr 0x2618c08, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowUInt16OverflowException();

  /// @brief Method ThrowUInt32OverflowException, addr 0x2618ca8, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowUInt32OverflowException();

  /// @brief Method ThrowUInt64OverflowException, addr 0x2618d48, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowUInt64OverflowException();

  /// @brief Method ToBase64CharArray, addr 0x261e15c, size 0x88, virtual false, abstract: false, final false
  static inline int32_t ToBase64CharArray(::ArrayW<uint8_t, ::Array<uint8_t>*> inArray, int32_t offsetIn, int32_t length, ::ArrayW<char16_t, ::Array<char16_t>*> outArray, int32_t offsetOut);

  /// @brief Method ToBase64CharArray, addr 0x261e1e4, size 0x32c, virtual false, abstract: false, final false
  static inline int32_t ToBase64CharArray(::ArrayW<uint8_t, ::Array<uint8_t>*> inArray, int32_t offsetIn, int32_t length, ::ArrayW<char16_t, ::Array<char16_t>*> outArray, int32_t offsetOut,
                                          ::System::Base64FormattingOptions options);

  /// @brief Method ToBase64String, addr 0x261da88, size 0x1b4, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::System::ReadOnlySpan_1<uint8_t> bytes, ::System::Base64FormattingOptions options);

  /// @brief Method ToBase64String, addr 0x261d9cc, size 0xbc, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::ArrayW<uint8_t, ::Array<uint8_t>*> inArray);

  /// @brief Method ToBase64String, addr 0x261dc3c, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::ArrayW<uint8_t, ::Array<uint8_t>*> inArray, int32_t offset, int32_t length);

  /// @brief Method ToBase64String, addr 0x261dcac, size 0x1b4, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::ArrayW<uint8_t, ::Array<uint8_t>*> inArray, int32_t offset, int32_t length, ::System::Base64FormattingOptions options);

  /// @brief Method ToBase64_CalculateAndValidateOutputLength, addr 0x261de60, size 0xb8, virtual false, abstract: false, final false
  static inline int32_t ToBase64_CalculateAndValidateOutputLength(int32_t inputLength, bool insertLineBreaks);

  /// @brief Method ToBoolean, addr 0x2618fe4, size 0x68, virtual false, abstract: false, final false
  static inline bool ToBoolean(::StringW value);

  /// @brief Method ToBoolean, addr 0x261904c, size 0x68, virtual false, abstract: false, final false
  static inline bool ToBoolean(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToBoolean, addr 0x26190cc, size 0x74, virtual false, abstract: false, final false
  static inline bool ToBoolean(::System::Decimal value);

  /// @brief Method ToBoolean, addr 0x2618d98, size 0xf4, virtual false, abstract: false, final false
  static inline bool ToBoolean(::System::Object* value);

  /// @brief Method ToBoolean, addr 0x2618e8c, size 0x104, virtual false, abstract: false, final false
  static inline bool ToBoolean(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToBoolean, addr 0x26190c0, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(double_t value);

  /// @brief Method ToBoolean, addr 0x26190b4, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(float_t value);

  /// @brief Method ToBoolean, addr 0x2618f9c, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int16_t value);

  /// @brief Method ToBoolean, addr 0x2618fb4, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int32_t value);

  /// @brief Method ToBoolean, addr 0x2618fcc, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int64_t value);

  /// @brief Method ToBoolean, addr 0x2618f90, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int8_t value);

  /// @brief Method ToBoolean, addr 0x2618fa8, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint16_t value);

  /// @brief Method ToBoolean, addr 0x2618fc0, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint32_t value);

  /// @brief Method ToBoolean, addr 0x2618fd8, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint64_t value);

  /// @brief Method ToBoolean, addr 0x26149ec, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint8_t value);

  /// @brief Method ToByte, addr 0x261a228, size 0x74, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::StringW value);

  /// @brief Method ToByte, addr 0x261d114, size 0x10c, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::StringW value, int32_t fromBase);

  /// @brief Method ToByte, addr 0x261a29c, size 0x14, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToByte, addr 0x261a1b4, size 0x74, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::System::Decimal value);

  /// @brief Method ToByte, addr 0x2619c90, size 0xf4, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::System::Object* value);

  /// @brief Method ToByte, addr 0x2619d84, size 0x104, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToByte, addr 0x2612dd8, size 0x8, virtual false, abstract: false, final false
  static inline uint8_t ToByte(bool value);

  /// @brief Method ToByte, addr 0x2615bac, size 0x5c, virtual false, abstract: false, final false
  static inline uint8_t ToByte(char16_t value);

  /// @brief Method ToByte, addr 0x261a154, size 0x60, virtual false, abstract: false, final false
  static inline uint8_t ToByte(double_t value);

  /// @brief Method ToByte, addr 0x261a0f8, size 0x5c, virtual false, abstract: false, final false
  static inline uint8_t ToByte(float_t value);

  /// @brief Method ToByte, addr 0x2619ee0, size 0x5c, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int16_t value);

  /// @brief Method ToByte, addr 0x2619f98, size 0x58, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int32_t value);

  /// @brief Method ToByte, addr 0x261a048, size 0x58, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int64_t value);

  /// @brief Method ToByte, addr 0x2619e88, size 0x58, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int8_t value);

  /// @brief Method ToByte, addr 0x2619f3c, size 0x5c, virtual false, abstract: false, final false
  static inline uint8_t ToByte(uint16_t value);

  /// @brief Method ToByte, addr 0x2619ff0, size 0x58, virtual false, abstract: false, final false
  static inline uint8_t ToByte(uint32_t value);

  /// @brief Method ToByte, addr 0x261a0a0, size 0x58, virtual false, abstract: false, final false
  static inline uint8_t ToByte(uint64_t value);

  /// @brief Method ToChar, addr 0x2619548, size 0x54, virtual false, abstract: false, final false
  static inline char16_t ToChar(::StringW value);

  /// @brief Method ToChar, addr 0x261959c, size 0xa4, virtual false, abstract: false, final false
  static inline char16_t ToChar(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToChar, addr 0x2619140, size 0xf4, virtual false, abstract: false, final false
  static inline char16_t ToChar(::System::Object* value);

  /// @brief Method ToChar, addr 0x2619234, size 0x104, virtual false, abstract: false, final false
  static inline char16_t ToChar(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToChar, addr 0x261938c, size 0x58, virtual false, abstract: false, final false
  static inline char16_t ToChar(int16_t value);

  /// @brief Method ToChar, addr 0x26193e8, size 0x58, virtual false, abstract: false, final false
  static inline char16_t ToChar(int32_t value);

  /// @brief Method ToChar, addr 0x2619498, size 0x58, virtual false, abstract: false, final false
  static inline char16_t ToChar(int64_t value);

  /// @brief Method ToChar, addr 0x2619338, size 0x54, virtual false, abstract: false, final false
  static inline char16_t ToChar(int8_t value);

  /// @brief Method ToChar, addr 0x26193e4, size 0x4, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint16_t value);

  /// @brief Method ToChar, addr 0x2619440, size 0x58, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint32_t value);

  /// @brief Method ToChar, addr 0x26194f0, size 0x58, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint64_t value);

  /// @brief Method ToChar, addr 0x2614a50, size 0x8, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint8_t value);

  /// @brief Method ToDateTime, addr 0x261cd5c, size 0x90, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToDateTime, addr 0x261cc2c, size 0x130, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToDecimal, addr 0x261cba4, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToDecimal, addr 0x261c754, size 0x128, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToDecimal, addr 0x2613184, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(bool value);

  /// @brief Method ToDecimal, addr 0x261cb44, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(double_t value);

  /// @brief Method ToDecimal, addr 0x261cae4, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(float_t value);

  /// @brief Method ToDecimal, addr 0x261c8d4, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int16_t value);

  /// @brief Method ToDecimal, addr 0x261c984, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int32_t value);

  /// @brief Method ToDecimal, addr 0x261ca34, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int64_t value);

  /// @brief Method ToDecimal, addr 0x261c87c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int8_t value);

  /// @brief Method ToDecimal, addr 0x261c92c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint16_t value);

  /// @brief Method ToDecimal, addr 0x261c9dc, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint32_t value);

  /// @brief Method ToDecimal, addr 0x261ca8c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint64_t value);

  /// @brief Method ToDecimal, addr 0x2614e70, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint8_t value);

  /// @brief Method ToDouble, addr 0x261c738, size 0x1c, virtual false, abstract: false, final false
  static inline double_t ToDouble(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToDouble, addr 0x261c6d0, size 0x68, virtual false, abstract: false, final false
  static inline double_t ToDouble(::System::Decimal value);

  /// @brief Method ToDouble, addr 0x261c48c, size 0xf4, virtual false, abstract: false, final false
  static inline double_t ToDouble(::System::Object* value);

  /// @brief Method ToDouble, addr 0x261c580, size 0x104, virtual false, abstract: false, final false
  static inline double_t ToDouble(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToDouble, addr 0x2613114, size 0x14, virtual false, abstract: false, final false
  static inline double_t ToDouble(bool value);

  /// @brief Method ToDouble, addr 0x261c6c8, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(float_t value);

  /// @brief Method ToDouble, addr 0x261c690, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(int16_t value);

  /// @brief Method ToDouble, addr 0x261c6a8, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(int32_t value);

  /// @brief Method ToDouble, addr 0x261c6b8, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(int64_t value);

  /// @brief Method ToDouble, addr 0x261c684, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(int8_t value);

  /// @brief Method ToDouble, addr 0x261c69c, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint16_t value);

  /// @brief Method ToDouble, addr 0x261c6b0, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint32_t value);

  /// @brief Method ToDouble, addr 0x261c6c0, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint64_t value);

  /// @brief Method ToDouble, addr 0x2614e0c, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint8_t value);

  /// @brief Method ToInt16, addr 0x261d33c, size 0x11c, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::StringW value, int32_t fromBase);

  /// @brief Method ToInt16, addr 0x261a798, size 0x18, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt16, addr 0x261a724, size 0x74, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::System::Decimal value);

  /// @brief Method ToInt16, addr 0x261a2b0, size 0xf4, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::System::Object* value);

  /// @brief Method ToInt16, addr 0x261a3a4, size 0x104, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt16, addr 0x2612e3c, size 0x8, virtual false, abstract: false, final false
  static inline int16_t ToInt16(bool value);

  /// @brief Method ToInt16, addr 0x2615c60, size 0x58, virtual false, abstract: false, final false
  static inline int16_t ToInt16(char16_t value);

  /// @brief Method ToInt16, addr 0x261a6c4, size 0x60, virtual false, abstract: false, final false
  static inline int16_t ToInt16(double_t value);

  /// @brief Method ToInt16, addr 0x261a668, size 0x5c, virtual false, abstract: false, final false
  static inline int16_t ToInt16(float_t value);

  /// @brief Method ToInt16, addr 0x261a508, size 0x58, virtual false, abstract: false, final false
  static inline int16_t ToInt16(int32_t value);

  /// @brief Method ToInt16, addr 0x261a5b8, size 0x58, virtual false, abstract: false, final false
  static inline int16_t ToInt16(int64_t value);

  /// @brief Method ToInt16, addr 0x261a4a8, size 0x8, virtual false, abstract: false, final false
  static inline int16_t ToInt16(int8_t value);

  /// @brief Method ToInt16, addr 0x261a4b0, size 0x58, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint16_t value);

  /// @brief Method ToInt16, addr 0x261a560, size 0x58, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint32_t value);

  /// @brief Method ToInt16, addr 0x261a610, size 0x58, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint64_t value);

  /// @brief Method ToInt16, addr 0x2614b68, size 0x8, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint8_t value);

  /// @brief Method ToInt32, addr 0x261b0d8, size 0x78, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::StringW value);

  /// @brief Method ToInt32, addr 0x261d564, size 0xd8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::StringW value, int32_t fromBase);

  /// @brief Method ToInt32, addr 0x261b150, size 0x18, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt32, addr 0x261b064, size 0x74, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::System::Decimal value);

  /// @brief Method ToInt32, addr 0x261acfc, size 0xf4, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::System::Object* value);

  /// @brief Method ToInt32, addr 0x261adf0, size 0x104, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt32, addr 0x2612f04, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(bool value);

  /// @brief Method ToInt32, addr 0x2615d6c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(char16_t value);

  /// @brief Method ToInt32, addr 0x2619b10, size 0xfc, virtual false, abstract: false, final false
  static inline int32_t ToInt32(double_t value);

  /// @brief Method ToInt32, addr 0x261b008, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t ToInt32(float_t value);

  /// @brief Method ToInt32, addr 0x261aef4, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(int16_t value);

  /// @brief Method ToInt32, addr 0x261af58, size 0x58, virtual false, abstract: false, final false
  static inline int32_t ToInt32(int64_t value);

  /// @brief Method ToInt32, addr 0x261aefc, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint16_t value);

  /// @brief Method ToInt32, addr 0x261af04, size 0x54, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint32_t value);

  /// @brief Method ToInt32, addr 0x261afb0, size 0x58, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint64_t value);

  /// @brief Method ToInt32, addr 0x2614c28, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint8_t value);

  /// @brief Method ToInt64, addr 0x261baf8, size 0x78, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::StringW value);

  /// @brief Method ToInt64, addr 0x261d714, size 0xd8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::StringW value, int32_t fromBase);

  /// @brief Method ToInt64, addr 0x261bb70, size 0x18, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt64, addr 0x261ba84, size 0x74, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::System::Decimal value);

  /// @brief Method ToInt64, addr 0x261b6a4, size 0xf4, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::System::Object* value);

  /// @brief Method ToInt64, addr 0x261b798, size 0x104, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt64, addr 0x2612fcc, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(bool value);

  /// @brief Method ToInt64, addr 0x2615e2c, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(char16_t value);

  /// @brief Method ToInt64, addr 0x261b974, size 0x110, virtual false, abstract: false, final false
  static inline int64_t ToInt64(double_t value);

  /// @brief Method ToInt64, addr 0x261b918, size 0x5c, virtual false, abstract: false, final false
  static inline int64_t ToInt64(float_t value);

  /// @brief Method ToInt64, addr 0x261b8a4, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(int16_t value);

  /// @brief Method ToInt64, addr 0x261b8b4, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(int32_t value);

  /// @brief Method ToInt64, addr 0x261b89c, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(int8_t value);

  /// @brief Method ToInt64, addr 0x261b8ac, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint16_t value);

  /// @brief Method ToInt64, addr 0x261b8bc, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint32_t value);

  /// @brief Method ToInt64, addr 0x261b8c4, size 0x54, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint64_t value);

  /// @brief Method ToInt64, addr 0x2614ce8, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint8_t value);

  /// @brief Method ToSByte, addr 0x261d220, size 0x11c, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::StringW value, int32_t fromBase);

  /// @brief Method ToSByte, addr 0x2619c80, size 0x10, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToSByte, addr 0x2619c0c, size 0x74, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::System::Decimal value);

  /// @brief Method ToSByte, addr 0x2619640, size 0xf4, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::System::Object* value);

  /// @brief Method ToSByte, addr 0x2619734, size 0x104, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToSByte, addr 0x2612d74, size 0x8, virtual false, abstract: false, final false
  static inline int8_t ToSByte(bool value);

  /// @brief Method ToSByte, addr 0x2615af8, size 0x5c, virtual false, abstract: false, final false
  static inline int8_t ToSByte(char16_t value);

  /// @brief Method ToSByte, addr 0x2619ab0, size 0x60, virtual false, abstract: false, final false
  static inline int8_t ToSByte(double_t value);

  /// @brief Method ToSByte, addr 0x2619a54, size 0x5c, virtual false, abstract: false, final false
  static inline int8_t ToSByte(float_t value);

  /// @brief Method ToSByte, addr 0x2619838, size 0x60, virtual false, abstract: false, final false
  static inline int8_t ToSByte(int16_t value);

  /// @brief Method ToSByte, addr 0x26198f4, size 0x58, virtual false, abstract: false, final false
  static inline int8_t ToSByte(int32_t value);

  /// @brief Method ToSByte, addr 0x26199a4, size 0x58, virtual false, abstract: false, final false
  static inline int8_t ToSByte(int64_t value);

  /// @brief Method ToSByte, addr 0x2619898, size 0x5c, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint16_t value);

  /// @brief Method ToSByte, addr 0x261994c, size 0x58, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint32_t value);

  /// @brief Method ToSByte, addr 0x26199fc, size 0x58, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint64_t value);

  /// @brief Method ToSByte, addr 0x2614ab0, size 0x58, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint8_t value);

  /// @brief Method ToSingle, addr 0x261c3f8, size 0x78, virtual false, abstract: false, final false
  static inline float_t ToSingle(::StringW value);

  /// @brief Method ToSingle, addr 0x261c470, size 0x1c, virtual false, abstract: false, final false
  static inline float_t ToSingle(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToSingle, addr 0x261c390, size 0x68, virtual false, abstract: false, final false
  static inline float_t ToSingle(::System::Decimal value);

  /// @brief Method ToSingle, addr 0x261c144, size 0xf4, virtual false, abstract: false, final false
  static inline float_t ToSingle(::System::Object* value);

  /// @brief Method ToSingle, addr 0x261c238, size 0x104, virtual false, abstract: false, final false
  static inline float_t ToSingle(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToSingle, addr 0x261309c, size 0x14, virtual false, abstract: false, final false
  static inline float_t ToSingle(bool value);

  /// @brief Method ToSingle, addr 0x261c388, size 0x8, virtual false, abstract: false, final false
  static inline float_t ToSingle(double_t value);

  /// @brief Method ToSingle, addr 0x261c348, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(int16_t value);

  /// @brief Method ToSingle, addr 0x261c360, size 0x8, virtual false, abstract: false, final false
  static inline float_t ToSingle(int32_t value);

  /// @brief Method ToSingle, addr 0x261c374, size 0x8, virtual false, abstract: false, final false
  static inline float_t ToSingle(int64_t value);

  /// @brief Method ToSingle, addr 0x261c33c, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(int8_t value);

  /// @brief Method ToSingle, addr 0x261c354, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint16_t value);

  /// @brief Method ToSingle, addr 0x261c368, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint32_t value);

  /// @brief Method ToSingle, addr 0x261c37c, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint64_t value);

  /// @brief Method ToSingle, addr 0x2614da8, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint8_t value);

  /// @brief Method ToString, addr 0x261cdec, size 0x1a0, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x261cf8c, size 0x1c, virtual false, abstract: false, final false
  static inline ::StringW ToString(bool value);

  /// @brief Method ToString, addr 0x261cfa8, size 0x18, virtual false, abstract: false, final false
  static inline ::StringW ToString(char16_t value, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x261d0ac, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW ToString(float_t value);

  /// @brief Method ToString, addr 0x261cfc0, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t value);

  /// @brief Method ToString, addr 0x261d028, size 0x1c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t value, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x261d8c4, size 0x84, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t value, int32_t toBase);

  /// @brief Method ToString, addr 0x261d044, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW ToString(int64_t value);

  /// @brief Method ToString, addr 0x261d948, size 0x84, virtual false, abstract: false, final false
  static inline ::StringW ToString(int64_t value, int32_t toBase);

  /// @brief Method ToUInt16, addr 0x261d458, size 0x10c, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::StringW value, int32_t fromBase);

  /// @brief Method ToUInt16, addr 0x261ace4, size 0x18, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt16, addr 0x261ac70, size 0x74, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::System::Decimal value);

  /// @brief Method ToUInt16, addr 0x261a7b0, size 0xf4, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::System::Object* value);

  /// @brief Method ToUInt16, addr 0x261a8a4, size 0x104, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt16, addr 0x2612ea0, size 0x8, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(bool value);

  /// @brief Method ToUInt16, addr 0x2615d10, size 0x4, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(char16_t value);

  /// @brief Method ToUInt16, addr 0x261ac10, size 0x60, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(double_t value);

  /// @brief Method ToUInt16, addr 0x261abb4, size 0x5c, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(float_t value);

  /// @brief Method ToUInt16, addr 0x261a9fc, size 0x58, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int16_t value);

  /// @brief Method ToUInt16, addr 0x261aa54, size 0x58, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int32_t value);

  /// @brief Method ToUInt16, addr 0x261ab04, size 0x58, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int64_t value);

  /// @brief Method ToUInt16, addr 0x261a9a8, size 0x54, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int8_t value);

  /// @brief Method ToUInt16, addr 0x261aaac, size 0x58, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(uint32_t value);

  /// @brief Method ToUInt16, addr 0x261ab5c, size 0x58, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(uint64_t value);

  /// @brief Method ToUInt16, addr 0x2614bc8, size 0x8, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(uint8_t value);

  /// @brief Method ToUInt32, addr 0x261d63c, size 0xd8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::StringW value, int32_t fromBase);

  /// @brief Method ToUInt32, addr 0x261b68c, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt32, addr 0x261b618, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::System::Decimal value);

  /// @brief Method ToUInt32, addr 0x261b168, size 0xf4, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::System::Object* value);

  /// @brief Method ToUInt32, addr 0x261b25c, size 0x104, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt32, addr 0x2612f68, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(bool value);

  /// @brief Method ToUInt32, addr 0x2615dcc, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(char16_t value);

  /// @brief Method ToUInt32, addr 0x261b570, size 0xa8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(double_t value);

  /// @brief Method ToUInt32, addr 0x261b514, size 0x5c, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(float_t value);

  /// @brief Method ToUInt32, addr 0x261b3b4, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int16_t value);

  /// @brief Method ToUInt32, addr 0x261b410, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int32_t value);

  /// @brief Method ToUInt32, addr 0x261b464, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int64_t value);

  /// @brief Method ToUInt32, addr 0x261b360, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int8_t value);

  /// @brief Method ToUInt32, addr 0x261b408, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(uint16_t value);

  /// @brief Method ToUInt32, addr 0x261b4bc, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(uint64_t value);

  /// @brief Method ToUInt32, addr 0x2614c88, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(uint8_t value);

  /// @brief Method ToUInt64, addr 0x261c0b4, size 0x78, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::StringW value);

  /// @brief Method ToUInt64, addr 0x261d7ec, size 0xd8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::StringW value, int32_t fromBase);

  /// @brief Method ToUInt64, addr 0x261c12c, size 0x18, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt64, addr 0x261c040, size 0x74, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::System::Decimal value);

  /// @brief Method ToUInt64, addr 0x261bb88, size 0xf4, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::System::Object* value);

  /// @brief Method ToUInt64, addr 0x261bc7c, size 0x104, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt64, addr 0x2613030, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(bool value);

  /// @brief Method ToUInt64, addr 0x2615e8c, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(char16_t value);

  /// @brief Method ToUInt64, addr 0x261bf44, size 0xfc, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(double_t value);

  /// @brief Method ToUInt64, addr 0x261bee8, size 0x5c, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(float_t value);

  /// @brief Method ToUInt64, addr 0x261bdd8, size 0x58, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int16_t value);

  /// @brief Method ToUInt64, addr 0x261be38, size 0x54, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int32_t value);

  /// @brief Method ToUInt64, addr 0x261be94, size 0x54, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int64_t value);

  /// @brief Method ToUInt64, addr 0x261bd80, size 0x58, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int8_t value);

  /// @brief Method ToUInt64, addr 0x261be30, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(uint16_t value);

  /// @brief Method ToUInt64, addr 0x261be8c, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(uint32_t value);

  /// @brief Method ToUInt64, addr 0x2614d48, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(uint8_t value);

  /// @brief Method TryDecodeFromUtf16, addr 0x2617148, size 0x374, virtual false, abstract: false, final false
  static inline bool TryDecodeFromUtf16(::System::ReadOnlySpan_1<char16_t> utf16, ::System::Span_1<uint8_t> bytes, ByRef<int32_t> consumed, ByRef<int32_t> written);

  /// @brief Method TryFromBase64Chars, addr 0x261e770, size 0x4f8, virtual false, abstract: false, final false
  static inline bool TryFromBase64Chars(::System::ReadOnlySpan_1<char16_t> chars, ::System::Span_1<uint8_t> bytes, ByRef<int32_t> bytesWritten);

  /// @brief Method WriteThreeLowOrderBytes, addr 0x261750c, size 0x18, virtual false, abstract: false, final false
  static inline void WriteThreeLowOrderBytes(ByRef<uint8_t> destination, int32_t value);

  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> getStaticF_ConvertTypes();

  static inline ::System::Object* getStaticF_DBNull();

  static inline ::System::Type* getStaticF_EnumType();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_base64Table();

  static inline ::ArrayW<int8_t, ::Array<int8_t>*> getStaticF_s_decodingMap();

  static inline void setStaticF_ConvertTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  static inline void setStaticF_DBNull(::System::Object* value);

  static inline void setStaticF_EnumType(::System::Type* value);

  static inline void setStaticF_base64Table(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_s_decodingMap(::ArrayW<int8_t, ::Array<int8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Convert();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Convert", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Convert(Convert&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Convert", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Convert(Convert const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Convert, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::Convert);
DEFINE_IL2CPP_ARG_TYPE(::System::Convert*, "System", "Convert");
