#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Base64FormattingOptions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Convert)
namespace System {
class IConvertible;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System {
class Object;
}
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
class IFormatProvider;
}
namespace System {
struct TypeCode;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2365))}
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

  /// @brief Method TryDecodeFromUtf16, addr 0x2527474, size 0x374, virtual false, abstract: false, final false
  static inline bool TryDecodeFromUtf16(::System::ReadOnlySpan_1<char16_t> utf16, ::System::Span_1<uint8_t> bytes, ByRef<int32_t> consumed, ByRef<int32_t> written);

  /// @brief Method Decode, addr 0x25277e8, size 0x50, virtual false, abstract: false, final false
  static inline int32_t Decode(ByRef<char16_t> encodedChars, ByRef<int8_t> decodingMap);

  /// @brief Method WriteThreeLowOrderBytes, addr 0x2527838, size 0x18, virtual false, abstract: false, final false
  static inline void WriteThreeLowOrderBytes(ByRef<uint8_t> destination, int32_t value);

  /// @brief Method GetTypeCode, addr 0x2527850, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::TypeCode GetTypeCode(::System::Object* value);

  /// @brief Method ChangeType, addr 0x2527914, size 0x848, virtual false, abstract: false, final false
  static inline ::System::Object* ChangeType(::System::Object* value, ::System::TypeCode typeCode, ::System::IFormatProvider* provider);

  /// @brief Method DefaultToType, addr 0x2523648, size 0xd14, virtual false, abstract: false, final false
  static inline ::System::Object* DefaultToType(::System::IConvertible* value, ::System::Type* targetType, ::System::IFormatProvider* provider);

  /// @brief Method ChangeType, addr 0x252815c, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* conversionType);

  /// @brief Method ChangeType, addr 0x25281f8, size 0xbfc, virtual false, abstract: false, final false
  static inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* conversionType, ::System::IFormatProvider* provider);

  /// @brief Method ThrowCharOverflowException, addr 0x2528df4, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowCharOverflowException();

  /// @brief Method ThrowByteOverflowException, addr 0x2528e44, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowByteOverflowException();

  /// @brief Method ThrowSByteOverflowException, addr 0x2528e94, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowSByteOverflowException();

  /// @brief Method ThrowInt16OverflowException, addr 0x2528ee4, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowInt16OverflowException();

  /// @brief Method ThrowUInt16OverflowException, addr 0x2528f34, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowUInt16OverflowException();

  /// @brief Method ThrowInt32OverflowException, addr 0x2528f84, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowInt32OverflowException();

  /// @brief Method ThrowUInt32OverflowException, addr 0x2528fd4, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowUInt32OverflowException();

  /// @brief Method ThrowInt64OverflowException, addr 0x2529024, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowInt64OverflowException();

  /// @brief Method ThrowUInt64OverflowException, addr 0x2529074, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowUInt64OverflowException();

  /// @brief Method ToBoolean, addr 0x25290c4, size 0xf4, virtual false, abstract: false, final false
  static inline bool ToBoolean(::System::Object* value);

  /// @brief Method ToBoolean, addr 0x25291b8, size 0x104, virtual false, abstract: false, final false
  static inline bool ToBoolean(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToBoolean, addr 0x25292bc, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int8_t value);

  /// @brief Method ToBoolean, addr 0x2524d18, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint8_t value);

  /// @brief Method ToBoolean, addr 0x25292c8, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int16_t value);

  /// @brief Method ToBoolean, addr 0x25292d4, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint16_t value);

  /// @brief Method ToBoolean, addr 0x25292e0, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int32_t value);

  /// @brief Method ToBoolean, addr 0x25292ec, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint32_t value);

  /// @brief Method ToBoolean, addr 0x25292f8, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(int64_t value);

  /// @brief Method ToBoolean, addr 0x2529304, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(uint64_t value);

  /// @brief Method ToBoolean, addr 0x2529310, size 0x68, virtual false, abstract: false, final false
  static inline bool ToBoolean(::StringW value);

  /// @brief Method ToBoolean, addr 0x2529378, size 0x68, virtual false, abstract: false, final false
  static inline bool ToBoolean(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToBoolean, addr 0x25293e0, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(float_t value);

  /// @brief Method ToBoolean, addr 0x25293ec, size 0xc, virtual false, abstract: false, final false
  static inline bool ToBoolean(double_t value);

  /// @brief Method ToBoolean, addr 0x25293f8, size 0x74, virtual false, abstract: false, final false
  static inline bool ToBoolean(::System::Decimal value);

  /// @brief Method ToChar, addr 0x252946c, size 0xf4, virtual false, abstract: false, final false
  static inline char16_t ToChar(::System::Object* value);

  /// @brief Method ToChar, addr 0x2529560, size 0x104, virtual false, abstract: false, final false
  static inline char16_t ToChar(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToChar, addr 0x2529664, size 0x54, virtual false, abstract: false, final false
  static inline char16_t ToChar(int8_t value);

  /// @brief Method ToChar, addr 0x2524d7c, size 0x8, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint8_t value);

  /// @brief Method ToChar, addr 0x25296b8, size 0x58, virtual false, abstract: false, final false
  static inline char16_t ToChar(int16_t value);

  /// @brief Method ToChar, addr 0x2529710, size 0x4, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint16_t value);

  /// @brief Method ToChar, addr 0x2529714, size 0x58, virtual false, abstract: false, final false
  static inline char16_t ToChar(int32_t value);

  /// @brief Method ToChar, addr 0x252976c, size 0x58, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint32_t value);

  /// @brief Method ToChar, addr 0x25297c4, size 0x58, virtual false, abstract: false, final false
  static inline char16_t ToChar(int64_t value);

  /// @brief Method ToChar, addr 0x252981c, size 0x58, virtual false, abstract: false, final false
  static inline char16_t ToChar(uint64_t value);

  /// @brief Method ToChar, addr 0x2529874, size 0x54, virtual false, abstract: false, final false
  static inline char16_t ToChar(::StringW value);

  /// @brief Method ToChar, addr 0x25298c8, size 0xa4, virtual false, abstract: false, final false
  static inline char16_t ToChar(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToSByte, addr 0x252996c, size 0xf4, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::System::Object* value);

  /// @brief Method ToSByte, addr 0x2529a60, size 0x104, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToSByte, addr 0x25230a0, size 0x8, virtual false, abstract: false, final false
  static inline int8_t ToSByte(bool value);

  /// @brief Method ToSByte, addr 0x2525e24, size 0x5c, virtual false, abstract: false, final false
  static inline int8_t ToSByte(char16_t value);

  /// @brief Method ToSByte, addr 0x2524ddc, size 0x58, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint8_t value);

  /// @brief Method ToSByte, addr 0x2529b64, size 0x60, virtual false, abstract: false, final false
  static inline int8_t ToSByte(int16_t value);

  /// @brief Method ToSByte, addr 0x2529bc4, size 0x5c, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint16_t value);

  /// @brief Method ToSByte, addr 0x2529c20, size 0x58, virtual false, abstract: false, final false
  static inline int8_t ToSByte(int32_t value);

  /// @brief Method ToSByte, addr 0x2529c78, size 0x58, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint32_t value);

  /// @brief Method ToSByte, addr 0x2529cd0, size 0x58, virtual false, abstract: false, final false
  static inline int8_t ToSByte(int64_t value);

  /// @brief Method ToSByte, addr 0x2529d28, size 0x58, virtual false, abstract: false, final false
  static inline int8_t ToSByte(uint64_t value);

  /// @brief Method ToSByte, addr 0x2529d80, size 0x5c, virtual false, abstract: false, final false
  static inline int8_t ToSByte(float_t value);

  /// @brief Method ToSByte, addr 0x2529ddc, size 0x60, virtual false, abstract: false, final false
  static inline int8_t ToSByte(double_t value);

  /// @brief Method ToSByte, addr 0x2529f38, size 0x74, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::System::Decimal value);

  /// @brief Method ToSByte, addr 0x2529fac, size 0x10, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToByte, addr 0x2529fbc, size 0xf4, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::System::Object* value);

  /// @brief Method ToByte, addr 0x252a0b0, size 0x104, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToByte, addr 0x2523104, size 0x8, virtual false, abstract: false, final false
  static inline uint8_t ToByte(bool value);

  /// @brief Method ToByte, addr 0x2525ed8, size 0x5c, virtual false, abstract: false, final false
  static inline uint8_t ToByte(char16_t value);

  /// @brief Method ToByte, addr 0x252a1b4, size 0x58, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int8_t value);

  /// @brief Method ToByte, addr 0x252a20c, size 0x5c, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int16_t value);

  /// @brief Method ToByte, addr 0x252a268, size 0x5c, virtual false, abstract: false, final false
  static inline uint8_t ToByte(uint16_t value);

  /// @brief Method ToByte, addr 0x252a2c4, size 0x58, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int32_t value);

  /// @brief Method ToByte, addr 0x252a31c, size 0x58, virtual false, abstract: false, final false
  static inline uint8_t ToByte(uint32_t value);

  /// @brief Method ToByte, addr 0x252a374, size 0x58, virtual false, abstract: false, final false
  static inline uint8_t ToByte(int64_t value);

  /// @brief Method ToByte, addr 0x252a3cc, size 0x58, virtual false, abstract: false, final false
  static inline uint8_t ToByte(uint64_t value);

  /// @brief Method ToByte, addr 0x252a424, size 0x5c, virtual false, abstract: false, final false
  static inline uint8_t ToByte(float_t value);

  /// @brief Method ToByte, addr 0x252a480, size 0x60, virtual false, abstract: false, final false
  static inline uint8_t ToByte(double_t value);

  /// @brief Method ToByte, addr 0x252a4e0, size 0x74, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::System::Decimal value);

  /// @brief Method ToByte, addr 0x252a554, size 0x74, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::StringW value);

  /// @brief Method ToByte, addr 0x252a5c8, size 0x14, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt16, addr 0x252a5dc, size 0xf4, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::System::Object* value);

  /// @brief Method ToInt16, addr 0x252a6d0, size 0x104, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt16, addr 0x2523168, size 0x8, virtual false, abstract: false, final false
  static inline int16_t ToInt16(bool value);

  /// @brief Method ToInt16, addr 0x2525f8c, size 0x58, virtual false, abstract: false, final false
  static inline int16_t ToInt16(char16_t value);

  /// @brief Method ToInt16, addr 0x252a7d4, size 0x8, virtual false, abstract: false, final false
  static inline int16_t ToInt16(int8_t value);

  /// @brief Method ToInt16, addr 0x2524e94, size 0x8, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint8_t value);

  /// @brief Method ToInt16, addr 0x252a7dc, size 0x58, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint16_t value);

  /// @brief Method ToInt16, addr 0x252a834, size 0x58, virtual false, abstract: false, final false
  static inline int16_t ToInt16(int32_t value);

  /// @brief Method ToInt16, addr 0x252a88c, size 0x58, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint32_t value);

  /// @brief Method ToInt16, addr 0x252a8e4, size 0x58, virtual false, abstract: false, final false
  static inline int16_t ToInt16(int64_t value);

  /// @brief Method ToInt16, addr 0x252a93c, size 0x58, virtual false, abstract: false, final false
  static inline int16_t ToInt16(uint64_t value);

  /// @brief Method ToInt16, addr 0x252a994, size 0x5c, virtual false, abstract: false, final false
  static inline int16_t ToInt16(float_t value);

  /// @brief Method ToInt16, addr 0x252a9f0, size 0x60, virtual false, abstract: false, final false
  static inline int16_t ToInt16(double_t value);

  /// @brief Method ToInt16, addr 0x252aa50, size 0x74, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::System::Decimal value);

  /// @brief Method ToInt16, addr 0x252aac4, size 0x18, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt16, addr 0x252aadc, size 0xf4, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::System::Object* value);

  /// @brief Method ToUInt16, addr 0x252abd0, size 0x104, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt16, addr 0x25231cc, size 0x8, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(bool value);

  /// @brief Method ToUInt16, addr 0x252603c, size 0x4, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(char16_t value);

  /// @brief Method ToUInt16, addr 0x252acd4, size 0x54, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int8_t value);

  /// @brief Method ToUInt16, addr 0x2524ef4, size 0x8, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(uint8_t value);

  /// @brief Method ToUInt16, addr 0x252ad28, size 0x58, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int16_t value);

  /// @brief Method ToUInt16, addr 0x252ad80, size 0x58, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int32_t value);

  /// @brief Method ToUInt16, addr 0x252add8, size 0x58, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(uint32_t value);

  /// @brief Method ToUInt16, addr 0x252ae30, size 0x58, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(int64_t value);

  /// @brief Method ToUInt16, addr 0x252ae88, size 0x58, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(uint64_t value);

  /// @brief Method ToUInt16, addr 0x252aee0, size 0x5c, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(float_t value);

  /// @brief Method ToUInt16, addr 0x252af3c, size 0x60, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(double_t value);

  /// @brief Method ToUInt16, addr 0x252af9c, size 0x74, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::System::Decimal value);

  /// @brief Method ToUInt16, addr 0x252b010, size 0x18, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt32, addr 0x252b028, size 0xf4, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::System::Object* value);

  /// @brief Method ToInt32, addr 0x252b11c, size 0x104, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt32, addr 0x2523230, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(bool value);

  /// @brief Method ToInt32, addr 0x2526098, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(char16_t value);

  /// @brief Method ToInt32, addr 0x2524f54, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint8_t value);

  /// @brief Method ToInt32, addr 0x252b220, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(int16_t value);

  /// @brief Method ToInt32, addr 0x252b228, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint16_t value);

  /// @brief Method ToInt32, addr 0x252b230, size 0x54, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint32_t value);

  /// @brief Method ToInt32, addr 0x252b284, size 0x58, virtual false, abstract: false, final false
  static inline int32_t ToInt32(int64_t value);

  /// @brief Method ToInt32, addr 0x252b2dc, size 0x58, virtual false, abstract: false, final false
  static inline int32_t ToInt32(uint64_t value);

  /// @brief Method ToInt32, addr 0x252b334, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t ToInt32(float_t value);

  /// @brief Method ToInt32, addr 0x2529e3c, size 0xfc, virtual false, abstract: false, final false
  static inline int32_t ToInt32(double_t value);

  /// @brief Method ToInt32, addr 0x252b390, size 0x74, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::System::Decimal value);

  /// @brief Method ToInt32, addr 0x252b404, size 0x78, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::StringW value);

  /// @brief Method ToInt32, addr 0x252b47c, size 0x18, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt32, addr 0x252b494, size 0xf4, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::System::Object* value);

  /// @brief Method ToUInt32, addr 0x252b588, size 0x104, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt32, addr 0x2523294, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(bool value);

  /// @brief Method ToUInt32, addr 0x25260f8, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(char16_t value);

  /// @brief Method ToUInt32, addr 0x252b68c, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int8_t value);

  /// @brief Method ToUInt32, addr 0x2524fb4, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(uint8_t value);

  /// @brief Method ToUInt32, addr 0x252b6e0, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int16_t value);

  /// @brief Method ToUInt32, addr 0x252b734, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(uint16_t value);

  /// @brief Method ToUInt32, addr 0x252b73c, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int32_t value);

  /// @brief Method ToUInt32, addr 0x252b790, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(int64_t value);

  /// @brief Method ToUInt32, addr 0x252b7e8, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(uint64_t value);

  /// @brief Method ToUInt32, addr 0x252b840, size 0x5c, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(float_t value);

  /// @brief Method ToUInt32, addr 0x252b89c, size 0xa8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(double_t value);

  /// @brief Method ToUInt32, addr 0x252b944, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::System::Decimal value);

  /// @brief Method ToUInt32, addr 0x252b9b8, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt64, addr 0x252b9d0, size 0xf4, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::System::Object* value);

  /// @brief Method ToInt64, addr 0x252bac4, size 0x104, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToInt64, addr 0x25232f8, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(bool value);

  /// @brief Method ToInt64, addr 0x2526158, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(char16_t value);

  /// @brief Method ToInt64, addr 0x252bbc8, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(int8_t value);

  /// @brief Method ToInt64, addr 0x2525014, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint8_t value);

  /// @brief Method ToInt64, addr 0x252bbd0, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(int16_t value);

  /// @brief Method ToInt64, addr 0x252bbd8, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint16_t value);

  /// @brief Method ToInt64, addr 0x252bbe0, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(int32_t value);

  /// @brief Method ToInt64, addr 0x252bbe8, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint32_t value);

  /// @brief Method ToInt64, addr 0x252bbf0, size 0x54, virtual false, abstract: false, final false
  static inline int64_t ToInt64(uint64_t value);

  /// @brief Method ToInt64, addr 0x252bc44, size 0x5c, virtual false, abstract: false, final false
  static inline int64_t ToInt64(float_t value);

  /// @brief Method ToInt64, addr 0x252bca0, size 0x110, virtual false, abstract: false, final false
  static inline int64_t ToInt64(double_t value);

  /// @brief Method ToInt64, addr 0x252bdb0, size 0x74, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::System::Decimal value);

  /// @brief Method ToInt64, addr 0x252be24, size 0x78, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::StringW value);

  /// @brief Method ToInt64, addr 0x252be9c, size 0x18, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt64, addr 0x252beb4, size 0xf4, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::System::Object* value);

  /// @brief Method ToUInt64, addr 0x252bfa8, size 0x104, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt64, addr 0x252335c, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(bool value);

  /// @brief Method ToUInt64, addr 0x25261b8, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(char16_t value);

  /// @brief Method ToUInt64, addr 0x252c0ac, size 0x58, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int8_t value);

  /// @brief Method ToUInt64, addr 0x2525074, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(uint8_t value);

  /// @brief Method ToUInt64, addr 0x252c104, size 0x58, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int16_t value);

  /// @brief Method ToUInt64, addr 0x252c15c, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(uint16_t value);

  /// @brief Method ToUInt64, addr 0x252c164, size 0x54, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int32_t value);

  /// @brief Method ToUInt64, addr 0x252c1b8, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(uint32_t value);

  /// @brief Method ToUInt64, addr 0x252c1c0, size 0x54, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(int64_t value);

  /// @brief Method ToUInt64, addr 0x252c214, size 0x5c, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(float_t value);

  /// @brief Method ToUInt64, addr 0x252c270, size 0xfc, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(double_t value);

  /// @brief Method ToUInt64, addr 0x252c36c, size 0x74, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::System::Decimal value);

  /// @brief Method ToUInt64, addr 0x252c3e0, size 0x78, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::StringW value);

  /// @brief Method ToUInt64, addr 0x252c458, size 0x18, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToSingle, addr 0x252c470, size 0xf4, virtual false, abstract: false, final false
  static inline float_t ToSingle(::System::Object* value);

  /// @brief Method ToSingle, addr 0x252c564, size 0x104, virtual false, abstract: false, final false
  static inline float_t ToSingle(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToSingle, addr 0x252c668, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(int8_t value);

  /// @brief Method ToSingle, addr 0x25250d4, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint8_t value);

  /// @brief Method ToSingle, addr 0x252c674, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(int16_t value);

  /// @brief Method ToSingle, addr 0x252c680, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint16_t value);

  /// @brief Method ToSingle, addr 0x252c68c, size 0x8, virtual false, abstract: false, final false
  static inline float_t ToSingle(int32_t value);

  /// @brief Method ToSingle, addr 0x252c694, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint32_t value);

  /// @brief Method ToSingle, addr 0x252c6a0, size 0x8, virtual false, abstract: false, final false
  static inline float_t ToSingle(int64_t value);

  /// @brief Method ToSingle, addr 0x252c6a8, size 0xc, virtual false, abstract: false, final false
  static inline float_t ToSingle(uint64_t value);

  /// @brief Method ToSingle, addr 0x252c6b4, size 0x8, virtual false, abstract: false, final false
  static inline float_t ToSingle(double_t value);

  /// @brief Method ToSingle, addr 0x252c6bc, size 0x68, virtual false, abstract: false, final false
  static inline float_t ToSingle(::System::Decimal value);

  /// @brief Method ToSingle, addr 0x252c724, size 0x78, virtual false, abstract: false, final false
  static inline float_t ToSingle(::StringW value);

  /// @brief Method ToSingle, addr 0x252c79c, size 0x1c, virtual false, abstract: false, final false
  static inline float_t ToSingle(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToSingle, addr 0x25233c8, size 0x14, virtual false, abstract: false, final false
  static inline float_t ToSingle(bool value);

  /// @brief Method ToDouble, addr 0x252c7b8, size 0xf4, virtual false, abstract: false, final false
  static inline double_t ToDouble(::System::Object* value);

  /// @brief Method ToDouble, addr 0x252c8ac, size 0x104, virtual false, abstract: false, final false
  static inline double_t ToDouble(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToDouble, addr 0x252c9b0, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(int8_t value);

  /// @brief Method ToDouble, addr 0x2525138, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint8_t value);

  /// @brief Method ToDouble, addr 0x252c9bc, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(int16_t value);

  /// @brief Method ToDouble, addr 0x252c9c8, size 0xc, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint16_t value);

  /// @brief Method ToDouble, addr 0x252c9d4, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(int32_t value);

  /// @brief Method ToDouble, addr 0x252c9dc, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint32_t value);

  /// @brief Method ToDouble, addr 0x252c9e4, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(int64_t value);

  /// @brief Method ToDouble, addr 0x252c9ec, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(uint64_t value);

  /// @brief Method ToDouble, addr 0x252c9f4, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToDouble(float_t value);

  /// @brief Method ToDouble, addr 0x252c9fc, size 0x68, virtual false, abstract: false, final false
  static inline double_t ToDouble(::System::Decimal value);

  /// @brief Method ToDouble, addr 0x252ca64, size 0x1c, virtual false, abstract: false, final false
  static inline double_t ToDouble(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToDouble, addr 0x2523440, size 0x14, virtual false, abstract: false, final false
  static inline double_t ToDouble(bool value);

  /// @brief Method ToDecimal, addr 0x252ca80, size 0x128, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToDecimal, addr 0x252cba8, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int8_t value);

  /// @brief Method ToDecimal, addr 0x252519c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint8_t value);

  /// @brief Method ToDecimal, addr 0x252cc00, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int16_t value);

  /// @brief Method ToDecimal, addr 0x252cc58, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint16_t value);

  /// @brief Method ToDecimal, addr 0x252ccb0, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int32_t value);

  /// @brief Method ToDecimal, addr 0x252cd08, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint32_t value);

  /// @brief Method ToDecimal, addr 0x252cd60, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(int64_t value);

  /// @brief Method ToDecimal, addr 0x252cdb8, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(uint64_t value);

  /// @brief Method ToDecimal, addr 0x252ce10, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(float_t value);

  /// @brief Method ToDecimal, addr 0x252ce70, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(double_t value);

  /// @brief Method ToDecimal, addr 0x252ced0, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToDecimal, addr 0x25234b0, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(bool value);

  /// @brief Method ToDateTime, addr 0x252cf58, size 0x130, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToDateTime, addr 0x252d088, size 0x90, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(::StringW value, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x252d118, size 0x1a0, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Object* value, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x252d2b8, size 0x1c, virtual false, abstract: false, final false
  static inline ::StringW ToString(bool value);

  /// @brief Method ToString, addr 0x252d2d4, size 0x18, virtual false, abstract: false, final false
  static inline ::StringW ToString(char16_t value, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x252d2ec, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t value);

  /// @brief Method ToString, addr 0x252d354, size 0x1c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t value, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x252d370, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW ToString(int64_t value);

  /// @brief Method ToString, addr 0x252d3d8, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW ToString(float_t value);

  /// @brief Method ToByte, addr 0x252d440, size 0x10c, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::StringW value, int32_t fromBase);

  /// @brief Method ToSByte, addr 0x252d54c, size 0x11c, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::StringW value, int32_t fromBase);

  /// @brief Method ToInt16, addr 0x252d668, size 0x11c, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::StringW value, int32_t fromBase);

  /// @brief Method ToUInt16, addr 0x252d784, size 0x10c, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::StringW value, int32_t fromBase);

  /// @brief Method ToInt32, addr 0x252d890, size 0xd8, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::StringW value, int32_t fromBase);

  /// @brief Method ToUInt32, addr 0x252d968, size 0xd8, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::StringW value, int32_t fromBase);

  /// @brief Method ToInt64, addr 0x252da40, size 0xd8, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::StringW value, int32_t fromBase);

  /// @brief Method ToUInt64, addr 0x252db18, size 0xd8, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::StringW value, int32_t fromBase);

  /// @brief Method ToString, addr 0x252dbf0, size 0x84, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t value, int32_t toBase);

  /// @brief Method ToString, addr 0x252dc74, size 0x84, virtual false, abstract: false, final false
  static inline ::StringW ToString(int64_t value, int32_t toBase);

  /// @brief Method ToBase64String, addr 0x252dcf8, size 0xbc, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::ArrayW<uint8_t, ::Array<uint8_t>*> inArray);

  /// @brief Method ToBase64String, addr 0x252df68, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::ArrayW<uint8_t, ::Array<uint8_t>*> inArray, int32_t offset, int32_t length);

  /// @brief Method ToBase64String, addr 0x252dfd8, size 0x1b4, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::ArrayW<uint8_t, ::Array<uint8_t>*> inArray, int32_t offset, int32_t length, ::System::Base64FormattingOptions options);

  /// @brief Method ToBase64String, addr 0x252ddb4, size 0x1b4, virtual false, abstract: false, final false
  /// @param options: ::System::Base64FormattingOptions (default: static_cast<int32_t>(0x0))
  static inline ::StringW ToBase64String(::System::ReadOnlySpan_1<uint8_t> bytes, ::System::Base64FormattingOptions options = static_cast<int32_t>(0x0));

  /// @brief Method ToBase64CharArray, addr 0x252e488, size 0x88, virtual false, abstract: false, final false
  static inline int32_t ToBase64CharArray(::ArrayW<uint8_t, ::Array<uint8_t>*> inArray, int32_t offsetIn, int32_t length, ::ArrayW<char16_t, ::Array<char16_t>*> outArray, int32_t offsetOut);

  /// @brief Method ToBase64CharArray, addr 0x252e510, size 0x32c, virtual false, abstract: false, final false
  static inline int32_t ToBase64CharArray(::ArrayW<uint8_t, ::Array<uint8_t>*> inArray, int32_t offsetIn, int32_t length, ::ArrayW<char16_t, ::Array<char16_t>*> outArray, int32_t offsetOut,
                                          ::System::Base64FormattingOptions options);

  /// @brief Method ConvertToBase64Array, addr 0x252e244, size 0x244, virtual false, abstract: false, final false
  static inline int32_t ConvertToBase64Array(::cordl_internals::Ptr<char16_t> outChars, ::cordl_internals::Ptr<uint8_t> inData, int32_t offset, int32_t length, bool insertLineBreaks);

  /// @brief Method ToBase64_CalculateAndValidateOutputLength, addr 0x252e18c, size 0xb8, virtual false, abstract: false, final false
  static inline int32_t ToBase64_CalculateAndValidateOutputLength(int32_t inputLength, bool insertLineBreaks);

  /// @brief Method FromBase64String, addr 0x252e83c, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FromBase64String(::StringW s);

  /// @brief Method TryFromBase64Chars, addr 0x252ea9c, size 0x4f8, virtual false, abstract: false, final false
  static inline bool TryFromBase64Chars(::System::ReadOnlySpan_1<char16_t> chars, ::System::Span_1<uint8_t> bytes, ByRef<int32_t> bytesWritten);

  /// @brief Method CopyToTempBufferWithoutWhiteSpace, addr 0x252ef94, size 0x120, virtual false, abstract: false, final false
  static inline void CopyToTempBufferWithoutWhiteSpace(::System::ReadOnlySpan_1<char16_t> chars, ::System::Span_1<char16_t> tempBuffer, ByRef<int32_t> consumed, ByRef<int32_t> charsWritten);

  /// @brief Method IsSpace, addr 0x252f0b4, size 0x38, virtual false, abstract: false, final false
  static inline bool IsSpace(char16_t c);

  /// @brief Method FromBase64CharArray, addr 0x252f0ec, size 0x1f0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FromBase64CharArray(::ArrayW<char16_t, ::Array<char16_t>*> inArray, int32_t offset, int32_t length);

  /// @brief Method FromBase64CharPtr, addr 0x252e8f4, size 0x1a8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FromBase64CharPtr(::cordl_internals::Ptr<char16_t> inputPtr, int32_t inputLength);

  /// @brief Method FromBase64_ComputeResultLength, addr 0x252f2dc, size 0xc0, virtual false, abstract: false, final false
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
