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
class Type;
}
namespace System {
struct Base64FormattingOptions;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
struct DateTime;
}
namespace System {
class Object;
}
namespace System {
class IFormatProvider;
}
namespace System {
struct TypeCode;
}
namespace System {
class IConvertible;
}
namespace System {
struct Decimal;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
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

  /// @brief Method TryDecodeFromUtf16 addr 0x23ce1a8 size 0x374 virtual false final false
  static inline bool TryDecodeFromUtf16(::System::ReadOnlySpan_1<char16_t> utf16, ::System::Span_1<uint8_t> bytes, ByRef<int32_t> consumed, ByRef<int32_t> written);

  /// @brief Method Decode addr 0x23ce51c size 0x50 virtual false final false
  static inline int32_t Decode(ByRef<char16_t> encodedChars, ByRef<int8_t> decodingMap);

  /// @brief Method WriteThreeLowOrderBytes addr 0x23ce56c size 0x18 virtual false final false
  static inline void WriteThreeLowOrderBytes(ByRef<uint8_t> destination, int32_t value);

  /// @brief Method GetTypeCode addr 0x23ce584 size 0xc4 virtual false final false
  static inline ::System::TypeCode GetTypeCode(::System::Object* value);

  /// @brief Method ChangeType addr 0x23ce648 size 0x848 virtual false final false
  static inline ::System::Object* ChangeType(::System::Object* value, ::System::TypeCode typeCode, ::System::IFormatProvider* provider);

  /// @brief Method DefaultToType addr 0x23ca37c size 0xd14 virtual false final false
  static inline ::System::Object* DefaultToType(::System::IConvertible* value, ::System::Type* targetType, ::System::IFormatProvider* provider);

  /// @brief Method ChangeType addr 0x23cee90 size 0x9c virtual false final false
  static inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* conversionType);

  /// @brief Method ChangeType addr 0x23cef2c size 0xbfc virtual false final false
  static inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* conversionType, ::System::IFormatProvider* provider);

  /// @brief Method ThrowCharOverflowException addr 0x23cfb28 size 0x50 virtual false final false
  static inline void ThrowCharOverflowException();

  /// @brief Method ThrowByteOverflowException addr 0x23cfb78 size 0x50 virtual false final false
  static inline void ThrowByteOverflowException();

  /// @brief Method ThrowSByteOverflowException addr 0x23cfbc8 size 0x50 virtual false final false
  static inline void ThrowSByteOverflowException();

  /// @brief Method ThrowInt16OverflowException addr 0x23cfc18 size 0x50 virtual false final false
  static inline void ThrowInt16OverflowException();

  /// @brief Method ThrowUInt16OverflowException addr 0x23cfc68 size 0x50 virtual false final false
  static inline void ThrowUInt16OverflowException();

  /// @brief Method ThrowInt32OverflowException addr 0x23cfcb8 size 0x50 virtual false final false
  static inline void ThrowInt32OverflowException();

  /// @brief Method ThrowUInt32OverflowException addr 0x23cfd08 size 0x50 virtual false final false
  static inline void ThrowUInt32OverflowException();

  /// @brief Method ThrowInt64OverflowException addr 0x23cfd58 size 0x50 virtual false final false
  static inline void ThrowInt64OverflowException();

  /// @brief Method ThrowUInt64OverflowException addr 0x23cfda8 size 0x50 virtual false final false
  static inline void ThrowUInt64OverflowException();

  /// @brief Method ToBoolean addr 0x23cfdf8 size 0xf4 virtual false final false
  static inline bool ToBoolean(::System::Object* value);

  /// @brief Method ToBoolean addr 0x23cfeec size 0x104 virtual false final false
  static inline bool ToBoolean(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToBoolean addr 0x23cfff0 size 0xc virtual false final false
  static inline bool ToBoolean(int8_t value);

  /// @brief Method ToBoolean addr 0x23cba4c size 0xc virtual false final false
  static inline bool ToBoolean(uint8_t value);

  /// @brief Method ToBoolean addr 0x23cfffc size 0xc virtual false final false
  static inline bool ToBoolean(int16_t value);

  /// @brief Method ToBoolean addr 0x23d0008 size 0xc virtual false final false
  static inline bool ToBoolean(uint16_t value);

  /// @brief Method ToBoolean addr 0x23d0014 size 0xc virtual false final false
  static inline bool ToBoolean(int32_t value);

  /// @brief Method ToBoolean addr 0x23d0020 size 0xc virtual false final false
  static inline bool ToBoolean(uint32_t value);

  /// @brief Method ToBoolean addr 0x23d002c size 0xc virtual false final false
  static inline bool ToBoolean(int64_t value);

  /// @brief Method ToBoolean addr 0x23d0038 size 0xc virtual false final false
  static inline bool ToBoolean(uint64_t value);

  /// @brief Method ToBoolean addr 0x23d0044 size 0x68 virtual false final false
  static inline bool ToBoolean(::StringW value);

  /// @brief Method ToBoolean addr 0x23d00ac size 0x68 virtual false final false
  static inline bool ToBoolean(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToBoolean addr 0x23d0114 size 0xc virtual false final false
  static inline bool ToBoolean(float_t value);

  /// @brief Method ToBoolean addr 0x23d0120 size 0xc virtual false final false
  static inline bool ToBoolean(double_t value);

  /// @brief Method ToBoolean addr 0x23d012c size 0x74 virtual false final false
  static inline bool ToBoolean(::System::Decimal value);

  /// @brief Method ToChar addr 0x23d01a0 size 0xf4 virtual false final false
  static inline char16_t ToChar(::System::Object* value);

  /// @brief Method ToChar addr 0x23d0294 size 0x104 virtual false final false
  static inline char16_t ToChar(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToChar addr 0x23d0398 size 0x54 virtual false final false
  static inline char16_t ToChar(int8_t value);

  /// @brief Method ToChar addr 0x23cbab0 size 0x8 virtual false final false
  static inline char16_t ToChar(uint8_t value);

  /// @brief Method ToChar addr 0x23d03ec size 0x58 virtual false final false
  static inline char16_t ToChar(int16_t value);

  /// @brief Method ToChar addr 0x23d0444 size 0x4 virtual false final false
  static inline char16_t ToChar(uint16_t value);

  /// @brief Method ToChar addr 0x23d0448 size 0x58 virtual false final false
  static inline char16_t ToChar(int32_t value);

  /// @brief Method ToChar addr 0x23d04a0 size 0x58 virtual false final false
  static inline char16_t ToChar(uint32_t value);

  /// @brief Method ToChar addr 0x23d04f8 size 0x58 virtual false final false
  static inline char16_t ToChar(int64_t value);

  /// @brief Method ToChar addr 0x23d0550 size 0x58 virtual false final false
  static inline char16_t ToChar(uint64_t value);

  /// @brief Method ToChar addr 0x23d05a8 size 0x54 virtual false final false
  static inline char16_t ToChar(::StringW value);

  /// @brief Method ToChar addr 0x23d05fc size 0xa4 virtual false final false
  static inline char16_t ToChar(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToSByte addr 0x23d06a0 size 0xf4 virtual false final false
  static inline int8_t ToSByte(::System::Object* value);

  /// @brief Method ToSByte addr 0x23d0794 size 0x104 virtual false final false
  static inline int8_t ToSByte(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToSByte addr 0x23c9dd4 size 0x8 virtual false final false
  static inline int8_t ToSByte(bool value);

  /// @brief Method ToSByte addr 0x23ccb58 size 0x5c virtual false final false
  static inline int8_t ToSByte(char16_t value);

  /// @brief Method ToSByte addr 0x23cbb10 size 0x58 virtual false final false
  static inline int8_t ToSByte(uint8_t value);

  /// @brief Method ToSByte addr 0x23d0898 size 0x60 virtual false final false
  static inline int8_t ToSByte(int16_t value);

  /// @brief Method ToSByte addr 0x23d08f8 size 0x5c virtual false final false
  static inline int8_t ToSByte(uint16_t value);

  /// @brief Method ToSByte addr 0x23d0954 size 0x58 virtual false final false
  static inline int8_t ToSByte(int32_t value);

  /// @brief Method ToSByte addr 0x23d09ac size 0x58 virtual false final false
  static inline int8_t ToSByte(uint32_t value);

  /// @brief Method ToSByte addr 0x23d0a04 size 0x58 virtual false final false
  static inline int8_t ToSByte(int64_t value);

  /// @brief Method ToSByte addr 0x23d0a5c size 0x58 virtual false final false
  static inline int8_t ToSByte(uint64_t value);

  /// @brief Method ToSByte addr 0x23d0ab4 size 0x5c virtual false final false
  static inline int8_t ToSByte(float_t value);

  /// @brief Method ToSByte addr 0x23d0b10 size 0x60 virtual false final false
  static inline int8_t ToSByte(double_t value);

  /// @brief Method ToSByte addr 0x23d0c6c size 0x74 virtual false final false
  static inline int8_t ToSByte(::System::Decimal value);

  /// @brief Method ToSByte addr 0x23d0ce0 size 0x10 virtual false final false
  static inline int8_t ToSByte(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToByte addr 0x23d0cf0 size 0xf4 virtual false final false
  static inline uint8_t ToByte(::System::Object* value);

  /// @brief Method ToByte addr 0x23d0de4 size 0x104 virtual false final false
  static inline uint8_t ToByte(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToByte addr 0x23c9e38 size 0x8 virtual false final false
  static inline uint8_t ToByte(bool value);

  /// @brief Method ToByte addr 0x23ccc0c size 0x5c virtual false final false
  static inline uint8_t ToByte(char16_t value);

  /// @brief Method ToByte addr 0x23d0ee8 size 0x58 virtual false final false
  static inline uint8_t ToByte(int8_t value);

  /// @brief Method ToByte addr 0x23d0f40 size 0x5c virtual false final false
  static inline uint8_t ToByte(int16_t value);

  /// @brief Method ToByte addr 0x23d0f9c size 0x5c virtual false final false
  static inline uint8_t ToByte(uint16_t value);

  /// @brief Method ToByte addr 0x23d0ff8 size 0x58 virtual false final false
  static inline uint8_t ToByte(int32_t value);

  /// @brief Method ToByte addr 0x23d1050 size 0x58 virtual false final false
  static inline uint8_t ToByte(uint32_t value);

  /// @brief Method ToByte addr 0x23d10a8 size 0x58 virtual false final false
  static inline uint8_t ToByte(int64_t value);

  /// @brief Method ToByte addr 0x23d1100 size 0x58 virtual false final false
  static inline uint8_t ToByte(uint64_t value);

  /// @brief Method ToByte addr 0x23d1158 size 0x5c virtual false final false
  static inline uint8_t ToByte(float_t value);

  /// @brief Method ToByte addr 0x23d11b4 size 0x60 virtual false final false
  static inline uint8_t ToByte(double_t value);

  /// @brief Method ToByte addr 0x23d1214 size 0x74 virtual false final false
  static inline uint8_t ToByte(::System::Decimal value);

  /// @brief Method ToByte addr 0x23d1288 size 0x74 virtual false final false
  static inline uint8_t ToByte(::StringW value);

  /// @brief Method ToByte addr 0x23d12fc size 0x14 virtual false final false
  static inline uint8_t ToByte(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt16 addr 0x23d1310 size 0xf4 virtual false final false
  static inline int16_t ToInt16(::System::Object* value);

  /// @brief Method ToInt16 addr 0x23d1404 size 0x104 virtual false final false
  static inline int16_t ToInt16(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt16 addr 0x23c9e9c size 0x8 virtual false final false
  static inline int16_t ToInt16(bool value);

  /// @brief Method ToInt16 addr 0x23cccc0 size 0x58 virtual false final false
  static inline int16_t ToInt16(char16_t value);

  /// @brief Method ToInt16 addr 0x23d1508 size 0x8 virtual false final false
  static inline int16_t ToInt16(int8_t value);

  /// @brief Method ToInt16 addr 0x23cbbc8 size 0x8 virtual false final false
  static inline int16_t ToInt16(uint8_t value);

  /// @brief Method ToInt16 addr 0x23d1510 size 0x58 virtual false final false
  static inline int16_t ToInt16(uint16_t value);

  /// @brief Method ToInt16 addr 0x23d1568 size 0x58 virtual false final false
  static inline int16_t ToInt16(int32_t value);

  /// @brief Method ToInt16 addr 0x23d15c0 size 0x58 virtual false final false
  static inline int16_t ToInt16(uint32_t value);

  /// @brief Method ToInt16 addr 0x23d1618 size 0x58 virtual false final false
  static inline int16_t ToInt16(int64_t value);

  /// @brief Method ToInt16 addr 0x23d1670 size 0x58 virtual false final false
  static inline int16_t ToInt16(uint64_t value);

  /// @brief Method ToInt16 addr 0x23d16c8 size 0x5c virtual false final false
  static inline int16_t ToInt16(float_t value);

  /// @brief Method ToInt16 addr 0x23d1724 size 0x60 virtual false final false
  static inline int16_t ToInt16(double_t value);

  /// @brief Method ToInt16 addr 0x23d1784 size 0x74 virtual false final false
  static inline int16_t ToInt16(::System::Decimal value);

  /// @brief Method ToInt16 addr 0x23d17f8 size 0x18 virtual false final false
  static inline int16_t ToInt16(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt16 addr 0x23d1810 size 0xf4 virtual false final false
  static inline uint16_t ToUInt16(::System::Object* value);

  /// @brief Method ToUInt16 addr 0x23d1904 size 0x104 virtual false final false
  static inline uint16_t ToUInt16(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt16 addr 0x23c9f00 size 0x8 virtual false final false
  static inline uint16_t ToUInt16(bool value);

  /// @brief Method ToUInt16 addr 0x23ccd70 size 0x4 virtual false final false
  static inline uint16_t ToUInt16(char16_t value);

  /// @brief Method ToUInt16 addr 0x23d1a08 size 0x54 virtual false final false
  static inline uint16_t ToUInt16(int8_t value);

  /// @brief Method ToUInt16 addr 0x23cbc28 size 0x8 virtual false final false
  static inline uint16_t ToUInt16(uint8_t value);

  /// @brief Method ToUInt16 addr 0x23d1a5c size 0x58 virtual false final false
  static inline uint16_t ToUInt16(int16_t value);

  /// @brief Method ToUInt16 addr 0x23d1ab4 size 0x58 virtual false final false
  static inline uint16_t ToUInt16(int32_t value);

  /// @brief Method ToUInt16 addr 0x23d1b0c size 0x58 virtual false final false
  static inline uint16_t ToUInt16(uint32_t value);

  /// @brief Method ToUInt16 addr 0x23d1b64 size 0x58 virtual false final false
  static inline uint16_t ToUInt16(int64_t value);

  /// @brief Method ToUInt16 addr 0x23d1bbc size 0x58 virtual false final false
  static inline uint16_t ToUInt16(uint64_t value);

  /// @brief Method ToUInt16 addr 0x23d1c14 size 0x5c virtual false final false
  static inline uint16_t ToUInt16(float_t value);

  /// @brief Method ToUInt16 addr 0x23d1c70 size 0x60 virtual false final false
  static inline uint16_t ToUInt16(double_t value);

  /// @brief Method ToUInt16 addr 0x23d1cd0 size 0x74 virtual false final false
  static inline uint16_t ToUInt16(::System::Decimal value);

  /// @brief Method ToUInt16 addr 0x23d1d44 size 0x18 virtual false final false
  static inline uint16_t ToUInt16(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt32 addr 0x23d1d5c size 0xf4 virtual false final false
  static inline int32_t ToInt32(::System::Object* value);

  /// @brief Method ToInt32 addr 0x23d1e50 size 0x104 virtual false final false
  static inline int32_t ToInt32(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt32 addr 0x23c9f64 size 0x8 virtual false final false
  static inline int32_t ToInt32(bool value);

  /// @brief Method ToInt32 addr 0x23ccdcc size 0x8 virtual false final false
  static inline int32_t ToInt32(char16_t value);

  /// @brief Method ToInt32 addr 0x23cbc88 size 0x8 virtual false final false
  static inline int32_t ToInt32(uint8_t value);

  /// @brief Method ToInt32 addr 0x23d1f54 size 0x8 virtual false final false
  static inline int32_t ToInt32(int16_t value);

  /// @brief Method ToInt32 addr 0x23d1f5c size 0x8 virtual false final false
  static inline int32_t ToInt32(uint16_t value);

  /// @brief Method ToInt32 addr 0x23d1f64 size 0x54 virtual false final false
  static inline int32_t ToInt32(uint32_t value);

  /// @brief Method ToInt32 addr 0x23d1fb8 size 0x58 virtual false final false
  static inline int32_t ToInt32(int64_t value);

  /// @brief Method ToInt32 addr 0x23d2010 size 0x58 virtual false final false
  static inline int32_t ToInt32(uint64_t value);

  /// @brief Method ToInt32 addr 0x23d2068 size 0x5c virtual false final false
  static inline int32_t ToInt32(float_t value);

  /// @brief Method ToInt32 addr 0x23d0b70 size 0xfc virtual false final false
  static inline int32_t ToInt32(double_t value);

  /// @brief Method ToInt32 addr 0x23d20c4 size 0x74 virtual false final false
  static inline int32_t ToInt32(::System::Decimal value);

  /// @brief Method ToInt32 addr 0x23d2138 size 0x78 virtual false final false
  static inline int32_t ToInt32(::StringW value);

  /// @brief Method ToInt32 addr 0x23d21b0 size 0x18 virtual false final false
  static inline int32_t ToInt32(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt32 addr 0x23d21c8 size 0xf4 virtual false final false
  static inline uint32_t ToUInt32(::System::Object* value);

  /// @brief Method ToUInt32 addr 0x23d22bc size 0x104 virtual false final false
  static inline uint32_t ToUInt32(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt32 addr 0x23c9fc8 size 0x8 virtual false final false
  static inline uint32_t ToUInt32(bool value);

  /// @brief Method ToUInt32 addr 0x23cce2c size 0x8 virtual false final false
  static inline uint32_t ToUInt32(char16_t value);

  /// @brief Method ToUInt32 addr 0x23d23c0 size 0x54 virtual false final false
  static inline uint32_t ToUInt32(int8_t value);

  /// @brief Method ToUInt32 addr 0x23cbce8 size 0x8 virtual false final false
  static inline uint32_t ToUInt32(uint8_t value);

  /// @brief Method ToUInt32 addr 0x23d2414 size 0x54 virtual false final false
  static inline uint32_t ToUInt32(int16_t value);

  /// @brief Method ToUInt32 addr 0x23d2468 size 0x8 virtual false final false
  static inline uint32_t ToUInt32(uint16_t value);

  /// @brief Method ToUInt32 addr 0x23d2470 size 0x54 virtual false final false
  static inline uint32_t ToUInt32(int32_t value);

  /// @brief Method ToUInt32 addr 0x23d24c4 size 0x58 virtual false final false
  static inline uint32_t ToUInt32(int64_t value);

  /// @brief Method ToUInt32 addr 0x23d251c size 0x58 virtual false final false
  static inline uint32_t ToUInt32(uint64_t value);

  /// @brief Method ToUInt32 addr 0x23d2574 size 0x5c virtual false final false
  static inline uint32_t ToUInt32(float_t value);

  /// @brief Method ToUInt32 addr 0x23d25d0 size 0xa8 virtual false final false
  static inline uint32_t ToUInt32(double_t value);

  /// @brief Method ToUInt32 addr 0x23d2678 size 0x74 virtual false final false
  static inline uint32_t ToUInt32(::System::Decimal value);

  /// @brief Method ToUInt32 addr 0x23d26ec size 0x18 virtual false final false
  static inline uint32_t ToUInt32(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt64 addr 0x23d2704 size 0xf4 virtual false final false
  static inline int64_t ToInt64(::System::Object* value);

  /// @brief Method ToInt64 addr 0x23d27f8 size 0x104 virtual false final false
  static inline int64_t ToInt64(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt64 addr 0x23ca02c size 0x8 virtual false final false
  static inline int64_t ToInt64(bool value);

  /// @brief Method ToInt64 addr 0x23cce8c size 0x8 virtual false final false
  static inline int64_t ToInt64(char16_t value);

  /// @brief Method ToInt64 addr 0x23d28fc size 0x8 virtual false final false
  static inline int64_t ToInt64(int8_t value);

  /// @brief Method ToInt64 addr 0x23cbd48 size 0x8 virtual false final false
  static inline int64_t ToInt64(uint8_t value);

  /// @brief Method ToInt64 addr 0x23d2904 size 0x8 virtual false final false
  static inline int64_t ToInt64(int16_t value);

  /// @brief Method ToInt64 addr 0x23d290c size 0x8 virtual false final false
  static inline int64_t ToInt64(uint16_t value);

  /// @brief Method ToInt64 addr 0x23d2914 size 0x8 virtual false final false
  static inline int64_t ToInt64(int32_t value);

  /// @brief Method ToInt64 addr 0x23d291c size 0x8 virtual false final false
  static inline int64_t ToInt64(uint32_t value);

  /// @brief Method ToInt64 addr 0x23d2924 size 0x54 virtual false final false
  static inline int64_t ToInt64(uint64_t value);

  /// @brief Method ToInt64 addr 0x23d2978 size 0x5c virtual false final false
  static inline int64_t ToInt64(float_t value);

  /// @brief Method ToInt64 addr 0x23d29d4 size 0x110 virtual false final false
  static inline int64_t ToInt64(double_t value);

  /// @brief Method ToInt64 addr 0x23d2ae4 size 0x74 virtual false final false
  static inline int64_t ToInt64(::System::Decimal value);

  /// @brief Method ToInt64 addr 0x23d2b58 size 0x78 virtual false final false
  static inline int64_t ToInt64(::StringW value);

  /// @brief Method ToInt64 addr 0x23d2bd0 size 0x18 virtual false final false
  static inline int64_t ToInt64(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt64 addr 0x23d2be8 size 0xf4 virtual false final false
  static inline uint64_t ToUInt64(::System::Object* value);

  /// @brief Method ToUInt64 addr 0x23d2cdc size 0x104 virtual false final false
  static inline uint64_t ToUInt64(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt64 addr 0x23ca090 size 0x8 virtual false final false
  static inline uint64_t ToUInt64(bool value);

  /// @brief Method ToUInt64 addr 0x23cceec size 0x8 virtual false final false
  static inline uint64_t ToUInt64(char16_t value);

  /// @brief Method ToUInt64 addr 0x23d2de0 size 0x58 virtual false final false
  static inline uint64_t ToUInt64(int8_t value);

  /// @brief Method ToUInt64 addr 0x23cbda8 size 0x8 virtual false final false
  static inline uint64_t ToUInt64(uint8_t value);

  /// @brief Method ToUInt64 addr 0x23d2e38 size 0x58 virtual false final false
  static inline uint64_t ToUInt64(int16_t value);

  /// @brief Method ToUInt64 addr 0x23d2e90 size 0x8 virtual false final false
  static inline uint64_t ToUInt64(uint16_t value);

  /// @brief Method ToUInt64 addr 0x23d2e98 size 0x54 virtual false final false
  static inline uint64_t ToUInt64(int32_t value);

  /// @brief Method ToUInt64 addr 0x23d2eec size 0x8 virtual false final false
  static inline uint64_t ToUInt64(uint32_t value);

  /// @brief Method ToUInt64 addr 0x23d2ef4 size 0x54 virtual false final false
  static inline uint64_t ToUInt64(int64_t value);

  /// @brief Method ToUInt64 addr 0x23d2f48 size 0x5c virtual false final false
  static inline uint64_t ToUInt64(float_t value);

  /// @brief Method ToUInt64 addr 0x23d2fa4 size 0xfc virtual false final false
  static inline uint64_t ToUInt64(double_t value);

  /// @brief Method ToUInt64 addr 0x23d30a0 size 0x74 virtual false final false
  static inline uint64_t ToUInt64(::System::Decimal value);

  /// @brief Method ToUInt64 addr 0x23d3114 size 0x18 virtual false final false
  static inline uint64_t ToUInt64(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToSingle addr 0x23d312c size 0xf4 virtual false final false
  static inline float_t ToSingle(::System::Object* value);

  /// @brief Method ToSingle addr 0x23d3220 size 0x104 virtual false final false
  static inline float_t ToSingle(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToSingle addr 0x23d3324 size 0xc virtual false final false
  static inline float_t ToSingle(int8_t value);

  /// @brief Method ToSingle addr 0x23cbe08 size 0xc virtual false final false
  static inline float_t ToSingle(uint8_t value);

  /// @brief Method ToSingle addr 0x23d3330 size 0xc virtual false final false
  static inline float_t ToSingle(int16_t value);

  /// @brief Method ToSingle addr 0x23d333c size 0xc virtual false final false
  static inline float_t ToSingle(uint16_t value);

  /// @brief Method ToSingle addr 0x23d3348 size 0x8 virtual false final false
  static inline float_t ToSingle(int32_t value);

  /// @brief Method ToSingle addr 0x23d3350 size 0xc virtual false final false
  static inline float_t ToSingle(uint32_t value);

  /// @brief Method ToSingle addr 0x23d335c size 0x8 virtual false final false
  static inline float_t ToSingle(int64_t value);

  /// @brief Method ToSingle addr 0x23d3364 size 0xc virtual false final false
  static inline float_t ToSingle(uint64_t value);

  /// @brief Method ToSingle addr 0x23d3370 size 0x8 virtual false final false
  static inline float_t ToSingle(double_t value);

  /// @brief Method ToSingle addr 0x23d3378 size 0x68 virtual false final false
  static inline float_t ToSingle(::System::Decimal value);

  /// @brief Method ToSingle addr 0x23d33e0 size 0x78 virtual false final false
  static inline float_t ToSingle(::StringW value);

  /// @brief Method ToSingle addr 0x23d3458 size 0x1c virtual false final false
  static inline float_t ToSingle(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToSingle addr 0x23ca0fc size 0x14 virtual false final false
  static inline float_t ToSingle(bool value);

  /// @brief Method ToDouble addr 0x23d3474 size 0xf4 virtual false final false
  static inline double_t ToDouble(::System::Object* value);

  /// @brief Method ToDouble addr 0x23d3568 size 0x104 virtual false final false
  static inline double_t ToDouble(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToDouble addr 0x23d366c size 0xc virtual false final false
  static inline double_t ToDouble(int8_t value);

  /// @brief Method ToDouble addr 0x23cbe6c size 0xc virtual false final false
  static inline double_t ToDouble(uint8_t value);

  /// @brief Method ToDouble addr 0x23d3678 size 0xc virtual false final false
  static inline double_t ToDouble(int16_t value);

  /// @brief Method ToDouble addr 0x23d3684 size 0xc virtual false final false
  static inline double_t ToDouble(uint16_t value);

  /// @brief Method ToDouble addr 0x23d3690 size 0x8 virtual false final false
  static inline double_t ToDouble(int32_t value);

  /// @brief Method ToDouble addr 0x23d3698 size 0x8 virtual false final false
  static inline double_t ToDouble(uint32_t value);

  /// @brief Method ToDouble addr 0x23d36a0 size 0x8 virtual false final false
  static inline double_t ToDouble(int64_t value);

  /// @brief Method ToDouble addr 0x23d36a8 size 0x8 virtual false final false
  static inline double_t ToDouble(uint64_t value);

  /// @brief Method ToDouble addr 0x23d36b0 size 0x8 virtual false final false
  static inline double_t ToDouble(float_t value);

  /// @brief Method ToDouble addr 0x23d36b8 size 0x68 virtual false final false
  static inline double_t ToDouble(::System::Decimal value);

  /// @brief Method ToDouble addr 0x23d3720 size 0x1c virtual false final false
  static inline double_t ToDouble(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToDouble addr 0x23ca174 size 0x14 virtual false final false
  static inline double_t ToDouble(bool value);

  /// @brief Method ToDecimal addr 0x23d373c size 0x128 virtual false final false
  static inline ::System::Decimal ToDecimal(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToDecimal addr 0x23d3864 size 0x58 virtual false final false
  static inline ::System::Decimal ToDecimal(int8_t value);

  /// @brief Method ToDecimal addr 0x23cbed0 size 0x58 virtual false final false
  static inline ::System::Decimal ToDecimal(uint8_t value);

  /// @brief Method ToDecimal addr 0x23d38bc size 0x58 virtual false final false
  static inline ::System::Decimal ToDecimal(int16_t value);

  /// @brief Method ToDecimal addr 0x23d3914 size 0x58 virtual false final false
  static inline ::System::Decimal ToDecimal(uint16_t value);

  /// @brief Method ToDecimal addr 0x23d396c size 0x58 virtual false final false
  static inline ::System::Decimal ToDecimal(int32_t value);

  /// @brief Method ToDecimal addr 0x23d39c4 size 0x58 virtual false final false
  static inline ::System::Decimal ToDecimal(uint32_t value);

  /// @brief Method ToDecimal addr 0x23d3a1c size 0x58 virtual false final false
  static inline ::System::Decimal ToDecimal(int64_t value);

  /// @brief Method ToDecimal addr 0x23d3a74 size 0x58 virtual false final false
  static inline ::System::Decimal ToDecimal(uint64_t value);

  /// @brief Method ToDecimal addr 0x23d3acc size 0x60 virtual false final false
  static inline ::System::Decimal ToDecimal(float_t value);

  /// @brief Method ToDecimal addr 0x23d3b2c size 0x60 virtual false final false
  static inline ::System::Decimal ToDecimal(double_t value);

  /// @brief Method ToDecimal addr 0x23d3b8c size 0x88 virtual false final false
  static inline ::System::Decimal ToDecimal(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToDecimal addr 0x23ca1e4 size 0x5c virtual false final false
  static inline ::System::Decimal ToDecimal(bool value);

  /// @brief Method ToDateTime addr 0x23d3c14 size 0x130 virtual false final false
  static inline ::System::DateTime ToDateTime(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToDateTime addr 0x23d3d44 size 0x90 virtual false final false
  static inline ::System::DateTime ToDateTime(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToString addr 0x23d3dd4 size 0x1a0 virtual false final false
  static inline ::StringW ToString(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToString addr 0x23d3f74 size 0x1c virtual false final false
  static inline ::StringW ToString(bool value);

  /// @brief Method ToString addr 0x23d3f90 size 0x18 virtual false final false
  static inline ::StringW ToString(char16_t value, ::System::IFormatProvider* provider);

  /// @brief Method ToString addr 0x23d3fa8 size 0x68 virtual false final false
  static inline ::StringW ToString(int32_t value);

  /// @brief Method ToString addr 0x23d4010 size 0x1c virtual false final false
  static inline ::StringW ToString(int32_t value, ::System::IFormatProvider* provider);

  /// @brief Method ToString addr 0x23d402c size 0x68 virtual false final false
  static inline ::StringW ToString(int64_t value);

  /// @brief Method ToString addr 0x23d4094 size 0x68 virtual false final false
  static inline ::StringW ToString(float_t value);

  /// @brief Method ToByte addr 0x23d40fc size 0x10c virtual false final false
  static inline uint8_t ToByte(::StringW value, int32_t fromBase);

  /// @brief Method ToSByte addr 0x23d4208 size 0x11c virtual false final false
  static inline int8_t ToSByte(::StringW value, int32_t fromBase);

  /// @brief Method ToInt16 addr 0x23d4324 size 0x11c virtual false final false
  static inline int16_t ToInt16(::StringW value, int32_t fromBase);

  /// @brief Method ToUInt16 addr 0x23d4440 size 0x10c virtual false final false
  static inline uint16_t ToUInt16(::StringW value, int32_t fromBase);

  /// @brief Method ToInt32 addr 0x23d454c size 0xd8 virtual false final false
  static inline int32_t ToInt32(::StringW value, int32_t fromBase);

  /// @brief Method ToUInt32 addr 0x23d4624 size 0xd8 virtual false final false
  static inline uint32_t ToUInt32(::StringW value, int32_t fromBase);

  /// @brief Method ToInt64 addr 0x23d46fc size 0xd8 virtual false final false
  static inline int64_t ToInt64(::StringW value, int32_t fromBase);

  /// @brief Method ToUInt64 addr 0x23d47d4 size 0xd8 virtual false final false
  static inline uint64_t ToUInt64(::StringW value, int32_t fromBase);

  /// @brief Method ToString addr 0x23d48ac size 0x84 virtual false final false
  static inline ::StringW ToString(int32_t value, int32_t toBase);

  /// @brief Method ToString addr 0x23d4930 size 0x84 virtual false final false
  static inline ::StringW ToString(int64_t value, int32_t toBase);

  /// @brief Method ToBase64String addr 0x23d49b4 size 0xbc virtual false final false
  static inline ::StringW ToBase64String(::ArrayW<uint8_t, ::Array<uint8_t>*> inArray);

  /// @brief Method ToBase64String addr 0x23d4c24 size 0x70 virtual false final false
  static inline ::StringW ToBase64String(::ArrayW<uint8_t, ::Array<uint8_t>*> inArray, int32_t offset, int32_t length);

  /// @brief Method ToBase64String addr 0x23d4c94 size 0x1b4 virtual false final false
  static inline ::StringW ToBase64String(::ArrayW<uint8_t, ::Array<uint8_t>*> inArray, int32_t offset, int32_t length, ::System::Base64FormattingOptions options);

  /// @brief Method ToBase64String addr 0x23d4a70 size 0x1b4 virtual false final false
  static inline ::StringW ToBase64String(::System::ReadOnlySpan_1<uint8_t> bytes, ::System::Base64FormattingOptions options);

  /// @brief Method ToBase64CharArray addr 0x23d5144 size 0x88 virtual false final false
  static inline int32_t ToBase64CharArray(::ArrayW<uint8_t, ::Array<uint8_t>*> inArray, int32_t offsetIn, int32_t length, ::ArrayW<char16_t, ::Array<char16_t>*> outArray, int32_t offsetOut);

  /// @brief Method ToBase64CharArray addr 0x23d51cc size 0x32c virtual false final false
  static inline int32_t ToBase64CharArray(::ArrayW<uint8_t, ::Array<uint8_t>*> inArray, int32_t offsetIn, int32_t length, ::ArrayW<char16_t, ::Array<char16_t>*> outArray, int32_t offsetOut,
                                          ::System::Base64FormattingOptions options);

  /// @brief Method ConvertToBase64Array addr 0x23d4f00 size 0x244 virtual false final false
  static inline int32_t ConvertToBase64Array(::cordl_internals::Ptr<char16_t> outChars, ::cordl_internals::Ptr<uint8_t> inData, int32_t offset, int32_t length, bool insertLineBreaks);

  /// @brief Method ToBase64_CalculateAndValidateOutputLength addr 0x23d4e48 size 0xb8 virtual false final false
  static inline int32_t ToBase64_CalculateAndValidateOutputLength(int32_t inputLength, bool insertLineBreaks);

  /// @brief Method FromBase64String addr 0x23d54f8 size 0xb8 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FromBase64String(::StringW s);

  /// @brief Method TryFromBase64Chars addr 0x23d5758 size 0x4f8 virtual false final false
  static inline bool TryFromBase64Chars(::System::ReadOnlySpan_1<char16_t> chars, ::System::Span_1<uint8_t> bytes, ByRef<int32_t> bytesWritten);

  /// @brief Method CopyToTempBufferWithoutWhiteSpace addr 0x23d5c50 size 0x120 virtual false final false
  static inline void CopyToTempBufferWithoutWhiteSpace(::System::ReadOnlySpan_1<char16_t> chars, ::System::Span_1<char16_t> tempBuffer, ByRef<int32_t> consumed, ByRef<int32_t> charsWritten);

  /// @brief Method IsSpace addr 0x23d5d70 size 0x38 virtual false final false
  static inline bool IsSpace(char16_t c);

  /// @brief Method FromBase64CharArray addr 0x23d5da8 size 0x1f0 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FromBase64CharArray(::ArrayW<char16_t, ::Array<char16_t>*> inArray, int32_t offset, int32_t length);

  /// @brief Method FromBase64CharPtr addr 0x23d55b0 size 0x1a8 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FromBase64CharPtr(::cordl_internals::Ptr<char16_t> inputPtr, int32_t inputLength);

  /// @brief Method FromBase64_ComputeResultLength addr 0x23d5f98 size 0xc0 virtual false final false
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
