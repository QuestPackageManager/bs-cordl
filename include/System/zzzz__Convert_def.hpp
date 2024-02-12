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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2364))
// CS Name: ::System::Convert*
class CORDL_TYPE Convert : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_decodingMap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_decodingMap, put = setStaticF_s_decodingMap))::ArrayW<int8_t, ::Array<int8_t>*> s_decodingMap;

  /// @brief Field ConvertTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ConvertTypes, put = setStaticF_ConvertTypes))::ArrayW<::System::Type*, ::Array<::System::Type*>*> ConvertTypes;

  /// @brief Field EnumType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EnumType, put = setStaticF_EnumType))::System::Type* EnumType;

  /// @brief Field base64Table, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_base64Table, put = setStaticF_base64Table))::ArrayW<char16_t, ::Array<char16_t>*> base64Table;

  /// @brief Field DBNull, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DBNull, put = setStaticF_DBNull))::System::Object* DBNull;

  static inline void setStaticF_s_decodingMap(::ArrayW<int8_t, ::Array<int8_t>*> value);

  static inline ::ArrayW<int8_t, ::Array<int8_t>*> getStaticF_s_decodingMap();

  static inline void setStaticF_ConvertTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> getStaticF_ConvertTypes();

  static inline void setStaticF_EnumType(::System::Type* value);

  static inline ::System::Type* getStaticF_EnumType();

  static inline void setStaticF_base64Table(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_base64Table();

  static inline void setStaticF_DBNull(::System::Object* value);

  static inline ::System::Object* getStaticF_DBNull();

  /// @brief Method TryDecodeFromUtf16, addr 0x2548d58, size 0x374, virtual false, abstract: false, final false
  static inline bool TryDecodeFromUtf16(::System::ReadOnlySpan_1<char16_t> utf16, ::System::Span_1<uint8_t> bytes, ByRef<int32_t> consumed, ByRef<int32_t> written);

  /// @brief Method Decode, addr 0x25490cc, size 0x50, virtual false, abstract: false, final false
  static inline int32_t Decode(ByRef<char16_t> encodedChars, ByRef<int8_t> decodingMap);

  /// @brief Method WriteThreeLowOrderBytes, addr 0x254911c, size 0x18, virtual false, abstract: false, final false
  static inline void WriteThreeLowOrderBytes(ByRef<uint8_t> destination, int32_t value);

  /// @brief Method GetTypeCode, addr 0x2549134, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::TypeCode GetTypeCode(::System::Object* value);

  /// @brief Method ChangeType, addr 0x25491f8, size 0x848, virtual false, abstract: false, final false
  static inline ::System::Object* ChangeType(::System::Object* value, ::System::TypeCode typeCode, ::System::IFormatProvider* provider);

  /// @brief Method DefaultToType, addr 0x2544f2c, size 0xd14, virtual false, abstract: false, final false
  static inline ::System::Object* DefaultToType(::System::IConvertible* value, ::System::Type* targetType, ::System::IFormatProvider* provider);

  /// @brief Method ChangeType, addr 0x2549a40, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* conversionType);

  /// @brief Method ChangeType, addr 0x2549adc, size 0xbfc, virtual false, abstract: false, final false
  static inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* conversionType, ::System::IFormatProvider* provider);

  /// @brief Method ThrowCharOverflowException, addr 0x254a6d8, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowCharOverflowException();

  /// @brief Method ThrowByteOverflowException, addr 0x254a728, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowByteOverflowException();

  /// @brief Method ThrowSByteOverflowException, addr 0x254a778, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowSByteOverflowException();

  /// @brief Method ThrowInt16OverflowException, addr 0x254a7c8, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowInt16OverflowException();

  /// @brief Method ThrowUInt16OverflowException, addr 0x254a818, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowUInt16OverflowException();

  /// @brief Method ThrowInt32OverflowException, addr 0x254a868, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowInt32OverflowException();

  /// @brief Method ThrowUInt32OverflowException, addr 0x254a8b8, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowUInt32OverflowException();

  /// @brief Method ThrowInt64OverflowException, addr 0x254a908, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowInt64OverflowException();

  /// @brief Method ThrowUInt64OverflowException, addr 0x254a958, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowUInt64OverflowException();

  /// @brief Method ToBoolean, addr 0x254a9a8, size 0xf4, virtual false, abstract: false, final false
  static inline bool ToBoolean(::System::Object* value);

  /// @brief Method ToBoolean, addr 0x254aa9c, size 0x104, virtual false, abstract: false, final false
  static inline bool ToBoolean(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToBoolean, addr 0x254aba0, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int8_t value);

  /// @brief Method ToBoolean, addr 0x25465fc, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint8_t value);

  /// @brief Method ToBoolean, addr 0x254abac, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int16_t value);

  /// @brief Method ToBoolean, addr 0x254abb8, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint16_t value);

  /// @brief Method ToBoolean, addr 0x254abc4, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int32_t value);

  /// @brief Method ToBoolean, addr 0x254abd0, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint32_t value);

  /// @brief Method ToBoolean, addr 0x254abdc, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int64_t value);

  /// @brief Method ToBoolean, addr 0x254abe8, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint64_t value);

  /// @brief Method ToBoolean, addr 0x254abf4, size 0x68, virtual false, abstract: false, final false
  static inline bool ToBoolean(::StringW value);

  /// @brief Method ToBoolean, addr 0x254ac5c, size 0x68, virtual false, abstract: false, final false
  static inline bool ToBoolean(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToBoolean, addr 0x254acc4, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(float_t value);

  /// @brief Method ToBoolean, addr 0x254acd0, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(double_t value);

  /// @brief Method ToBoolean, addr 0x254acdc, size 0x74, virtual false, abstract: false, final false
  static inline bool ToBoolean(::System::Decimal value);

  /// @brief Method ToChar, addr 0x254ad50, size 0xf4, virtual false, abstract: false, final false
  static inline char16_t ToChar(::System::Object* value);

  /// @brief Method ToChar, addr 0x254ae44, size 0x104, virtual false, abstract: false, final false
  static inline char16_t ToChar(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToChar, addr 0x254af48, size 0x54, virtual false, abstract: false, final false
  static inline char16_t ToChar(int8_t value);

  /// @brief Method ToChar, addr 0x2546660, size 0x8, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint8_t value);

  /// @brief Method ToChar, addr 0x254af9c, size 0x58, virtual false, abstract: false, final false
  static inline char16_t ToChar(int16_t value);

  /// @brief Method ToChar, addr 0x254aff4, size 0x4, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint16_t value);

  /// @brief Method ToChar, addr 0x254aff8, size 0x58, virtual false, abstract: false, final false
  static inline char16_t ToChar(int32_t value);

  /// @brief Method ToChar, addr 0x254b050, size 0x58, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint32_t value);

  /// @brief Method ToChar, addr 0x254b0a8, size 0x58, virtual false, abstract: false, final false
  static inline char16_t ToChar(int64_t value);

  /// @brief Method ToChar, addr 0x254b100, size 0x58, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint64_t value);

  /// @brief Method ToChar, addr 0x254b158, size 0x54, virtual false, abstract: false, final false
  static inline char16_t ToChar(::StringW value);

  /// @brief Method ToChar, addr 0x254b1ac, size 0xa4, virtual false, abstract: false, final false
  static inline char16_t ToChar(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToSByte, addr 0x254b250, size 0xf4, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::System::Object* value);

  /// @brief Method ToSByte, addr 0x254b344, size 0x104, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToSByte, addr 0x2544984, size 0x8, virtual false, abstract: false, final false
  static inline int8_t ToSByte(bool value);

  /// @brief Method ToSByte, addr 0x2547708, size 0x5c, virtual false, abstract: false, final false
  static inline int8_t ToSByte(char16_t value);

  /// @brief Method ToSByte, addr 0x25466c0, size 0x58, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint8_t value);

  /// @brief Method ToSByte, addr 0x254b448, size 0x60, virtual false, abstract: false, final false
  static inline int8_t ToSByte(int16_t value);

  /// @brief Method ToSByte, addr 0x254b4a8, size 0x5c, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint16_t value);

  /// @brief Method ToSByte, addr 0x254b504, size 0x58, virtual false, abstract: false, final false
  static inline int8_t ToSByte(int32_t value);

  /// @brief Method ToSByte, addr 0x254b55c, size 0x58, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint32_t value);

  /// @brief Method ToSByte, addr 0x254b5b4, size 0x58, virtual false, abstract: false, final false
  static inline int8_t ToSByte(int64_t value);

  /// @brief Method ToSByte, addr 0x254b60c, size 0x58, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint64_t value);

  /// @brief Method ToSByte, addr 0x254b664, size 0x5c, virtual false, abstract: false, final false
  static inline int8_t ToSByte(float_t value);

  /// @brief Method ToSByte, addr 0x254b6c0, size 0x60, virtual false, abstract: false, final false
  static inline int8_t ToSByte(double_t value);

  /// @brief Method ToSByte, addr 0x254b81c, size 0x74, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::System::Decimal value);

  /// @brief Method ToSByte, addr 0x254b890, size 0x10, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToByte, addr 0x254b8a0, size 0xf4, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::System::Object* value);

  /// @brief Method ToByte, addr 0x254b994, size 0x104, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToByte, addr 0x25449e8, size 0x8, virtual false, abstract: false, final false
  static inline uint8_t ToByte(bool value);

  /// @brief Method ToByte, addr 0x25477bc, size 0x5c, virtual false, abstract: false, final false
  static inline uint8_t ToByte(char16_t value);

  /// @brief Method ToByte, addr 0x254ba98, size 0x58, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int8_t value);

  /// @brief Method ToByte, addr 0x254baf0, size 0x5c, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int16_t value);

  /// @brief Method ToByte, addr 0x254bb4c, size 0x5c, virtual false, abstract: false, final false
  static inline uint8_t ToByte(uint16_t value);

  /// @brief Method ToByte, addr 0x254bba8, size 0x58, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int32_t value);

  /// @brief Method ToByte, addr 0x254bc00, size 0x58, virtual false, abstract: false, final false
  static inline uint8_t ToByte(uint32_t value);

  /// @brief Method ToByte, addr 0x254bc58, size 0x58, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int64_t value);

  /// @brief Method ToByte, addr 0x254bcb0, size 0x58, virtual false, abstract: false, final false
  static inline uint8_t ToByte(uint64_t value);

  /// @brief Method ToByte, addr 0x254bd08, size 0x5c, virtual false, abstract: false, final false
  static inline uint8_t ToByte(float_t value);

  /// @brief Method ToByte, addr 0x254bd64, size 0x60, virtual false, abstract: false, final false
  static inline uint8_t ToByte(double_t value);

  /// @brief Method ToByte, addr 0x254bdc4, size 0x74, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::System::Decimal value);

  /// @brief Method ToByte, addr 0x254be38, size 0x74, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::StringW value);

  /// @brief Method ToByte, addr 0x254beac, size 0x14, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt16, addr 0x254bec0, size 0xf4, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::System::Object* value);

  /// @brief Method ToInt16, addr 0x254bfb4, size 0x104, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt16, addr 0x2544a4c, size 0x8, virtual false, abstract: false, final false
  static inline int16_t ToInt16(bool value);

  /// @brief Method ToInt16, addr 0x2547870, size 0x58, virtual false, abstract: false, final false
  static inline int16_t ToInt16(char16_t value);

  /// @brief Method ToInt16, addr 0x254c0b8, size 0x8, virtual false, abstract: false, final false
  static inline int16_t ToInt16(int8_t value);

  /// @brief Method ToInt16, addr 0x2546778, size 0x8, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint8_t value);

  /// @brief Method ToInt16, addr 0x254c0c0, size 0x58, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint16_t value);

  /// @brief Method ToInt16, addr 0x254c118, size 0x58, virtual false, abstract: false, final false
  static inline int16_t ToInt16(int32_t value);

  /// @brief Method ToInt16, addr 0x254c170, size 0x58, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint32_t value);

  /// @brief Method ToInt16, addr 0x254c1c8, size 0x58, virtual false, abstract: false, final false
  static inline int16_t ToInt16(int64_t value);

  /// @brief Method ToInt16, addr 0x254c220, size 0x58, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint64_t value);

  /// @brief Method ToInt16, addr 0x254c278, size 0x5c, virtual false, abstract: false, final false
  static inline int16_t ToInt16(float_t value);

  /// @brief Method ToInt16, addr 0x254c2d4, size 0x60, virtual false, abstract: false, final false
  static inline int16_t ToInt16(double_t value);

  /// @brief Method ToInt16, addr 0x254c334, size 0x74, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::System::Decimal value);

  /// @brief Method ToInt16, addr 0x254c3a8, size 0x18, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt16, addr 0x254c3c0, size 0xf4, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::System::Object* value);

  /// @brief Method ToUInt16, addr 0x254c4b4, size 0x104, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt16, addr 0x2544ab0, size 0x8, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(bool value);

  /// @brief Method ToUInt16, addr 0x2547920, size 0x4, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(char16_t value);

  /// @brief Method ToUInt16, addr 0x254c5b8, size 0x54, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int8_t value);

  /// @brief Method ToUInt16, addr 0x25467d8, size 0x8, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(uint8_t value);

  /// @brief Method ToUInt16, addr 0x254c60c, size 0x58, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int16_t value);

  /// @brief Method ToUInt16, addr 0x254c664, size 0x58, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int32_t value);

  /// @brief Method ToUInt16, addr 0x254c6bc, size 0x58, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(uint32_t value);

  /// @brief Method ToUInt16, addr 0x254c714, size 0x58, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int64_t value);

  /// @brief Method ToUInt16, addr 0x254c76c, size 0x58, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(uint64_t value);

  /// @brief Method ToUInt16, addr 0x254c7c4, size 0x5c, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(float_t value);

  /// @brief Method ToUInt16, addr 0x254c820, size 0x60, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(double_t value);

  /// @brief Method ToUInt16, addr 0x254c880, size 0x74, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::System::Decimal value);

  /// @brief Method ToUInt16, addr 0x254c8f4, size 0x18, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt32, addr 0x254c90c, size 0xf4, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::System::Object* value);

  /// @brief Method ToInt32, addr 0x254ca00, size 0x104, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt32, addr 0x2544b14, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(bool value);

  /// @brief Method ToInt32, addr 0x254797c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(char16_t value);

  /// @brief Method ToInt32, addr 0x2546838, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint8_t value);

  /// @brief Method ToInt32, addr 0x254cb04, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(int16_t value);

  /// @brief Method ToInt32, addr 0x254cb0c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint16_t value);

  /// @brief Method ToInt32, addr 0x254cb14, size 0x54, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint32_t value);

  /// @brief Method ToInt32, addr 0x254cb68, size 0x58, virtual false, abstract: false, final false
  static inline int32_t ToInt32(int64_t value);

  /// @brief Method ToInt32, addr 0x254cbc0, size 0x58, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint64_t value);

  /// @brief Method ToInt32, addr 0x254cc18, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t ToInt32(float_t value);

  /// @brief Method ToInt32, addr 0x254b720, size 0xfc, virtual false, abstract: false, final false
  static inline int32_t ToInt32(double_t value);

  /// @brief Method ToInt32, addr 0x254cc74, size 0x74, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::System::Decimal value);

  /// @brief Method ToInt32, addr 0x254cce8, size 0x78, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::StringW value);

  /// @brief Method ToInt32, addr 0x254cd60, size 0x18, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt32, addr 0x254cd78, size 0xf4, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::System::Object* value);

  /// @brief Method ToUInt32, addr 0x254ce6c, size 0x104, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt32, addr 0x2544b78, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(bool value);

  /// @brief Method ToUInt32, addr 0x25479dc, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(char16_t value);

  /// @brief Method ToUInt32, addr 0x254cf70, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int8_t value);

  /// @brief Method ToUInt32, addr 0x2546898, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(uint8_t value);

  /// @brief Method ToUInt32, addr 0x254cfc4, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int16_t value);

  /// @brief Method ToUInt32, addr 0x254d018, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(uint16_t value);

  /// @brief Method ToUInt32, addr 0x254d020, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int32_t value);

  /// @brief Method ToUInt32, addr 0x254d074, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int64_t value);

  /// @brief Method ToUInt32, addr 0x254d0cc, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(uint64_t value);

  /// @brief Method ToUInt32, addr 0x254d124, size 0x5c, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(float_t value);

  /// @brief Method ToUInt32, addr 0x254d180, size 0xa8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(double_t value);

  /// @brief Method ToUInt32, addr 0x254d228, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::System::Decimal value);

  /// @brief Method ToUInt32, addr 0x254d29c, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt64, addr 0x254d2b4, size 0xf4, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::System::Object* value);

  /// @brief Method ToInt64, addr 0x254d3a8, size 0x104, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt64, addr 0x2544bdc, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(bool value);

  /// @brief Method ToInt64, addr 0x2547a3c, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(char16_t value);

  /// @brief Method ToInt64, addr 0x254d4ac, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(int8_t value);

  /// @brief Method ToInt64, addr 0x25468f8, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint8_t value);

  /// @brief Method ToInt64, addr 0x254d4b4, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(int16_t value);

  /// @brief Method ToInt64, addr 0x254d4bc, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint16_t value);

  /// @brief Method ToInt64, addr 0x254d4c4, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(int32_t value);

  /// @brief Method ToInt64, addr 0x254d4cc, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint32_t value);

  /// @brief Method ToInt64, addr 0x254d4d4, size 0x54, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint64_t value);

  /// @brief Method ToInt64, addr 0x254d528, size 0x5c, virtual false, abstract: false, final false
  static inline int64_t ToInt64(float_t value);

  /// @brief Method ToInt64, addr 0x254d584, size 0x110, virtual false, abstract: false, final false
  static inline int64_t ToInt64(double_t value);

  /// @brief Method ToInt64, addr 0x254d694, size 0x74, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::System::Decimal value);

  /// @brief Method ToInt64, addr 0x254d708, size 0x78, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::StringW value);

  /// @brief Method ToInt64, addr 0x254d780, size 0x18, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt64, addr 0x254d798, size 0xf4, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::System::Object* value);

  /// @brief Method ToUInt64, addr 0x254d88c, size 0x104, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt64, addr 0x2544c40, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(bool value);

  /// @brief Method ToUInt64, addr 0x2547a9c, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(char16_t value);

  /// @brief Method ToUInt64, addr 0x254d990, size 0x58, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int8_t value);

  /// @brief Method ToUInt64, addr 0x2546958, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(uint8_t value);

  /// @brief Method ToUInt64, addr 0x254d9e8, size 0x58, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int16_t value);

  /// @brief Method ToUInt64, addr 0x254da40, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(uint16_t value);

  /// @brief Method ToUInt64, addr 0x254da48, size 0x54, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int32_t value);

  /// @brief Method ToUInt64, addr 0x254da9c, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(uint32_t value);

  /// @brief Method ToUInt64, addr 0x254daa4, size 0x54, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int64_t value);

  /// @brief Method ToUInt64, addr 0x254daf8, size 0x5c, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(float_t value);

  /// @brief Method ToUInt64, addr 0x254db54, size 0xfc, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(double_t value);

  /// @brief Method ToUInt64, addr 0x254dc50, size 0x74, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::System::Decimal value);

  /// @brief Method ToUInt64, addr 0x254dcc4, size 0x18, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToSingle, addr 0x254dcdc, size 0xf4, virtual false, abstract: false, final false
  static inline float_t ToSingle(::System::Object* value);

  /// @brief Method ToSingle, addr 0x254ddd0, size 0x104, virtual false, abstract: false, final false
  static inline float_t ToSingle(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToSingle, addr 0x254ded4, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(int8_t value);

  /// @brief Method ToSingle, addr 0x25469b8, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint8_t value);

  /// @brief Method ToSingle, addr 0x254dee0, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(int16_t value);

  /// @brief Method ToSingle, addr 0x254deec, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint16_t value);

  /// @brief Method ToSingle, addr 0x254def8, size 0x8, virtual false, abstract: false, final false
  static inline float_t ToSingle(int32_t value);

  /// @brief Method ToSingle, addr 0x254df00, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint32_t value);

  /// @brief Method ToSingle, addr 0x254df0c, size 0x8, virtual false, abstract: false, final false
  static inline float_t ToSingle(int64_t value);

  /// @brief Method ToSingle, addr 0x254df14, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint64_t value);

  /// @brief Method ToSingle, addr 0x254df20, size 0x8, virtual false, abstract: false, final false
  static inline float_t ToSingle(double_t value);

  /// @brief Method ToSingle, addr 0x254df28, size 0x68, virtual false, abstract: false, final false
  static inline float_t ToSingle(::System::Decimal value);

  /// @brief Method ToSingle, addr 0x254df90, size 0x78, virtual false, abstract: false, final false
  static inline float_t ToSingle(::StringW value);

  /// @brief Method ToSingle, addr 0x254e008, size 0x1c, virtual false, abstract: false, final false
  static inline float_t ToSingle(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToSingle, addr 0x2544cac, size 0x14, virtual false, abstract: false, final false
  static inline float_t ToSingle(bool value);

  /// @brief Method ToDouble, addr 0x254e024, size 0xf4, virtual false, abstract: false, final false
  static inline double_t ToDouble(::System::Object* value);

  /// @brief Method ToDouble, addr 0x254e118, size 0x104, virtual false, abstract: false, final false
  static inline double_t ToDouble(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToDouble, addr 0x254e21c, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(int8_t value);

  /// @brief Method ToDouble, addr 0x2546a1c, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint8_t value);

  /// @brief Method ToDouble, addr 0x254e228, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(int16_t value);

  /// @brief Method ToDouble, addr 0x254e234, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint16_t value);

  /// @brief Method ToDouble, addr 0x254e240, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(int32_t value);

  /// @brief Method ToDouble, addr 0x254e248, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint32_t value);

  /// @brief Method ToDouble, addr 0x254e250, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(int64_t value);

  /// @brief Method ToDouble, addr 0x254e258, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint64_t value);

  /// @brief Method ToDouble, addr 0x254e260, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(float_t value);

  /// @brief Method ToDouble, addr 0x254e268, size 0x68, virtual false, abstract: false, final false
  static inline double_t ToDouble(::System::Decimal value);

  /// @brief Method ToDouble, addr 0x254e2d0, size 0x1c, virtual false, abstract: false, final false
  static inline double_t ToDouble(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToDouble, addr 0x2544d24, size 0x14, virtual false, abstract: false, final false
  static inline double_t ToDouble(bool value);

  /// @brief Method ToDecimal, addr 0x254e2ec, size 0x128, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToDecimal, addr 0x254e414, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int8_t value);

  /// @brief Method ToDecimal, addr 0x2546a80, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint8_t value);

  /// @brief Method ToDecimal, addr 0x254e46c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int16_t value);

  /// @brief Method ToDecimal, addr 0x254e4c4, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint16_t value);

  /// @brief Method ToDecimal, addr 0x254e51c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int32_t value);

  /// @brief Method ToDecimal, addr 0x254e574, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint32_t value);

  /// @brief Method ToDecimal, addr 0x254e5cc, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int64_t value);

  /// @brief Method ToDecimal, addr 0x254e624, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint64_t value);

  /// @brief Method ToDecimal, addr 0x254e67c, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(float_t value);

  /// @brief Method ToDecimal, addr 0x254e6dc, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(double_t value);

  /// @brief Method ToDecimal, addr 0x254e73c, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToDecimal, addr 0x2544d94, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(bool value);

  /// @brief Method ToDateTime, addr 0x254e7c4, size 0x130, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToDateTime, addr 0x254e8f4, size 0x90, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x254e984, size 0x1a0, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x254eb24, size 0x1c, virtual false, abstract: false, final false
  static inline ::StringW ToString(bool value);

  /// @brief Method ToString, addr 0x254eb40, size 0x18, virtual false, abstract: false, final false
  static inline ::StringW ToString(char16_t value, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x254eb58, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t value);

  /// @brief Method ToString, addr 0x254ebc0, size 0x1c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t value, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x254ebdc, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW ToString(int64_t value);

  /// @brief Method ToString, addr 0x254ec44, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW ToString(float_t value);

  /// @brief Method ToByte, addr 0x254ecac, size 0x10c, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::StringW value, int32_t fromBase);

  /// @brief Method ToSByte, addr 0x254edb8, size 0x11c, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::StringW value, int32_t fromBase);

  /// @brief Method ToInt16, addr 0x254eed4, size 0x11c, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::StringW value, int32_t fromBase);

  /// @brief Method ToUInt16, addr 0x254eff0, size 0x10c, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::StringW value, int32_t fromBase);

  /// @brief Method ToInt32, addr 0x254f0fc, size 0xd8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::StringW value, int32_t fromBase);

  /// @brief Method ToUInt32, addr 0x254f1d4, size 0xd8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::StringW value, int32_t fromBase);

  /// @brief Method ToInt64, addr 0x254f2ac, size 0xd8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::StringW value, int32_t fromBase);

  /// @brief Method ToUInt64, addr 0x254f384, size 0xd8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::StringW value, int32_t fromBase);

  /// @brief Method ToString, addr 0x254f45c, size 0x84, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t value, int32_t toBase);

  /// @brief Method ToString, addr 0x254f4e0, size 0x84, virtual false, abstract: false, final false
  static inline ::StringW ToString(int64_t value, int32_t toBase);

  /// @brief Method ToBase64String, addr 0x254f564, size 0xbc, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::ArrayW<uint8_t, ::Array<uint8_t>*> inArray);

  /// @brief Method ToBase64String, addr 0x254f7d4, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::ArrayW<uint8_t, ::Array<uint8_t>*> inArray, int32_t offset, int32_t length);

  /// @brief Method ToBase64String, addr 0x254f844, size 0x1b4, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::ArrayW<uint8_t, ::Array<uint8_t>*> inArray, int32_t offset, int32_t length, ::System::Base64FormattingOptions options);

  /// @brief Method ToBase64String, addr 0x254f620, size 0x1b4, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::System::ReadOnlySpan_1<uint8_t> bytes, ::System::Base64FormattingOptions options);

  /// @brief Method ToBase64CharArray, addr 0x254fcf4, size 0x88, virtual false, abstract: false, final false
  static inline int32_t ToBase64CharArray(::ArrayW<uint8_t, ::Array<uint8_t>*> inArray, int32_t offsetIn, int32_t length, ::ArrayW<char16_t, ::Array<char16_t>*> outArray, int32_t offsetOut);

  /// @brief Method ToBase64CharArray, addr 0x254fd7c, size 0x32c, virtual false, abstract: false, final false
  static inline int32_t ToBase64CharArray(::ArrayW<uint8_t, ::Array<uint8_t>*> inArray, int32_t offsetIn, int32_t length, ::ArrayW<char16_t, ::Array<char16_t>*> outArray, int32_t offsetOut,
                                          ::System::Base64FormattingOptions options);

  /// @brief Method ConvertToBase64Array, addr 0x254fab0, size 0x244, virtual false, abstract: false, final false
  static inline int32_t ConvertToBase64Array(::cordl_internals::Ptr<char16_t> outChars, ::cordl_internals::Ptr<uint8_t> inData, int32_t offset, int32_t length, bool insertLineBreaks);

  /// @brief Method ToBase64_CalculateAndValidateOutputLength, addr 0x254f9f8, size 0xb8, virtual false, abstract: false, final false
  static inline int32_t ToBase64_CalculateAndValidateOutputLength(int32_t inputLength, bool insertLineBreaks);

  /// @brief Method FromBase64String, addr 0x25500a8, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FromBase64String(::StringW s);

  /// @brief Method TryFromBase64Chars, addr 0x2550308, size 0x4f8, virtual false, abstract: false, final false
  static inline bool TryFromBase64Chars(::System::ReadOnlySpan_1<char16_t> chars, ::System::Span_1<uint8_t> bytes, ByRef<int32_t> bytesWritten);

  /// @brief Method CopyToTempBufferWithoutWhiteSpace, addr 0x2550800, size 0x120, virtual false, abstract: false, final false
  static inline void CopyToTempBufferWithoutWhiteSpace(::System::ReadOnlySpan_1<char16_t> chars, ::System::Span_1<char16_t> tempBuffer, ByRef<int32_t> consumed, ByRef<int32_t> charsWritten);

  /// @brief Method IsSpace, addr 0x2550920, size 0x38, virtual false, abstract: false, final false
  static inline bool IsSpace(char16_t c);

  /// @brief Method FromBase64CharArray, addr 0x2550958, size 0x1f0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FromBase64CharArray(::ArrayW<char16_t, ::Array<char16_t>*> inArray, int32_t offset, int32_t length);

  /// @brief Method FromBase64CharPtr, addr 0x2550160, size 0x1a8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FromBase64CharPtr(::cordl_internals::Ptr<char16_t> inputPtr, int32_t inputLength);

  /// @brief Method FromBase64_ComputeResultLength, addr 0x2550b48, size 0xc0, virtual false, abstract: false, final false
  static inline int32_t FromBase64_ComputeResultLength(::cordl_internals::Ptr<char16_t> inputPtr, int32_t inputLength);

  // Ctor Parameters [CppParam { name: "", ty: "Convert", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Convert(Convert&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Convert", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Convert(Convert const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Convert();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Convert, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::Convert);
DEFINE_IL2CPP_ARG_TYPE(::System::Convert*, "System", "Convert");
