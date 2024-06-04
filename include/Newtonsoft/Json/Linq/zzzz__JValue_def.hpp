#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/zzzz__JTokenType_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__DynamicProxy_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JValue)
namespace Newtonsoft::Json::Linq {
struct JTokenType;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Linq {
class JsonCloneSettings;
}
namespace Newtonsoft::Json::Linq {
class __JValue__JValueDynamicProxy;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System::Dynamic {
class BinaryOperationBinder;
}
namespace System::Dynamic {
class ConvertBinder;
}
namespace System::Dynamic {
class DynamicMetaObject;
}
namespace System::Linq::Expressions {
struct ExpressionType;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Numerics {
struct BigInteger;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
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
struct Guid;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
class IComparable;
}
namespace System {
class IConvertible;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JValue;
}
namespace Newtonsoft::Json::Linq {
class __JValue__JValueDynamicProxy;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JValue);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::__JValue__JValueDynamicProxy);
// Type: ::JValueDynamicProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: ::JValue::JValueDynamicProxy*
class CORDL_TYPE __JValue__JValueDynamicProxy : public ::Newtonsoft::Json::Utilities::DynamicProxy_1<::Newtonsoft::Json::Linq::JValue*> {
public:
  // Declarations
  static inline ::Newtonsoft::Json::Linq::__JValue__JValueDynamicProxy* New_ctor();

  /// @brief Method TryBinaryOperation, addr 0x2a98954, size 0x304, virtual true, abstract: false, final false
  inline bool TryBinaryOperation(::Newtonsoft::Json::Linq::JValue* instance, ::System::Dynamic::BinaryOperationBinder* binder, ::System::Object* arg, ByRef<::System::Object*> result);

  /// @brief Method TryConvert, addr 0x2a98788, size 0x1cc, virtual true, abstract: false, final false
  inline bool TryConvert(::Newtonsoft::Json::Linq::JValue* instance, ::System::Dynamic::ConvertBinder* binder, ByRef<::System::Object*> result);

  /// @brief Method .ctor, addr 0x2a980ac, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JValue__JValueDynamicProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__JValue__JValueDynamicProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JValue__JValueDynamicProxy(__JValue__JValueDynamicProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JValue__JValueDynamicProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JValue__JValueDynamicProxy(__JValue__JValueDynamicProxy const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::__JValue__JValueDynamicProxy, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
// Type: Newtonsoft.Json.Linq::JValue
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Linq::JValue*
class CORDL_TYPE JValue : public ::Newtonsoft::Json::Linq::JToken {
public:
  // Declarations
  using JValueDynamicProxy = ::Newtonsoft::Json::Linq::__JValue__JValueDynamicProxy;

  __declspec(property(get = get_HasValues)) bool HasValues;

  __declspec(property(get = get_Type))::Newtonsoft::Json::Linq::JTokenType Type;

  __declspec(property(get = get_Value, put = set_Value))::System::Object* Value;

  /// @brief Field _value, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value))::System::Object* _value;

  /// @brief Field _valueType, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__valueType, put = __cordl_internal_set__valueType))::Newtonsoft::Json::Linq::JTokenType _valueType;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*() noexcept;

  /// @brief Convert operator to "::System::IComparable_1<::Newtonsoft::Json::Linq::JValue*>"
  constexpr operator ::System::IComparable_1<::Newtonsoft::Json::Linq::JValue*>*() noexcept;

  /// @brief Convert operator to "::System::IConvertible"
  constexpr operator ::System::IConvertible*() noexcept;

  /// @brief Convert operator to "::System::IEquatable_1<::Newtonsoft::Json::Linq::JValue*>"
  constexpr operator ::System::IEquatable_1<::Newtonsoft::Json::Linq::JValue*>*() noexcept;

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*() noexcept;

  /// @brief Method CloneToken, addr 0x2a972f4, size 0x70, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* CloneToken(::Newtonsoft::Json::Linq::JsonCloneSettings* settings);

  /// @brief Method Compare, addr 0x2a95ffc, size 0x974, virtual false, abstract: false, final false
  static inline int32_t Compare(::Newtonsoft::Json::Linq::JTokenType valueType, ::System::Object* objA, ::System::Object* objB);

  /// @brief Method CompareBigInteger, addr 0x2a95d24, size 0x2d8, virtual false, abstract: false, final false
  static inline int32_t CompareBigInteger(::System::Numerics::BigInteger i1, ::System::Object* i2);

  /// @brief Method CompareFloat, addr 0x2a96970, size 0xfc, virtual false, abstract: false, final false
  static inline int32_t CompareFloat(::System::Object* objA, ::System::Object* objB);

  /// @brief Method CompareTo, addr 0x2a981b0, size 0x44, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Newtonsoft::Json::Linq::JValue* obj);

  /// @brief Method CreateComment, addr 0x2a93b5c, size 0x64, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JValue* CreateComment(::StringW value);

  /// @brief Method CreateNull, addr 0x2a9390c, size 0x60, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JValue* CreateNull();

  /// @brief Method CreateString, addr 0x2a97364, size 0x64, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JValue* CreateString(::StringW value);

  /// @brief Method CreateUndefined, addr 0x2a93a44, size 0x60, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JValue* CreateUndefined();

  /// @brief Method DeepEquals, addr 0x2a95c24, size 0x9c, virtual true, abstract: false, final false
  inline bool DeepEquals(::Newtonsoft::Json::Linq::JToken* node);

  /// @brief Method Equals, addr 0x2a97d58, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2a97d48, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::Newtonsoft::Json::Linq::JValue* other);

  /// @brief Method GetDeepHashCode, addr 0x2a97cf4, size 0x54, virtual true, abstract: false, final false
  inline int32_t GetDeepHashCode();

  /// @brief Method GetHashCode, addr 0x2a97de4, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetMetaObject, addr 0x2a97ff8, size 0xb4, virtual true, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* GetMetaObject(::System::Linq::Expressions::Expression* parameter);

  /// @brief Method GetStringValueType, addr 0x2a973c8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JTokenType GetStringValueType(::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType> current);

  /// @brief Method GetValueType, addr 0x2a957f0, size 0x434, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JTokenType GetValueType(::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType> current, ::System::Object* value);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(::Newtonsoft::Json::Linq::JValue* other);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(::Newtonsoft::Json::Linq::JValue* other, ::Newtonsoft::Json::Linq::JsonCloneSettings* settings);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(::StringW value);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(::System::DateTime value);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(::System::DateTimeOffset value);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(::System::Decimal value);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(::System::Guid value);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(::System::Object* value);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(::System::Object* value, ::Newtonsoft::Json::Linq::JTokenType type);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(::System::TimeSpan value);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(::System::Uri* value);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(bool value);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(char16_t value);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(double_t value);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(float_t value);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(int64_t value);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(uint64_t value);

  /// @brief Method Operation, addr 0x2a96a6c, size 0x888, virtual false, abstract: false, final false
  static inline bool Operation(::System::Linq::Expressions::ExpressionType operation, ::System::Object* objA, ::System::Object* objB, ByRef<::System::Object*> result);

  /// @brief Method System.IComparable.CompareTo, addr 0x2a980f4, size 0xbc, virtual true, abstract: false, final true
  inline int32_t System_IComparable_CompareTo(::System::Object* obj);

  /// @brief Method System.IConvertible.GetTypeCode, addr 0x2a981f4, size 0xbc, virtual true, abstract: false, final true
  inline ::System::TypeCode System_IConvertible_GetTypeCode();

  /// @brief Method System.IConvertible.ToBoolean, addr 0x2a982b0, size 0x58, virtual true, abstract: false, final true
  inline bool System_IConvertible_ToBoolean(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToByte, addr 0x2a983b8, size 0x58, virtual true, abstract: false, final true
  inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToChar, addr 0x2a98308, size 0x58, virtual true, abstract: false, final true
  inline char16_t System_IConvertible_ToChar(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDateTime, addr 0x2a98728, size 0x58, virtual true, abstract: false, final true
  inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDecimal, addr 0x2a986d0, size 0x58, virtual true, abstract: false, final true
  inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDouble, addr 0x2a98678, size 0x58, virtual true, abstract: false, final true
  inline double_t System_IConvertible_ToDouble(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt16, addr 0x2a98410, size 0x58, virtual true, abstract: false, final true
  inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt32, addr 0x2a984c0, size 0x58, virtual true, abstract: false, final true
  inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt64, addr 0x2a98570, size 0x58, virtual true, abstract: false, final true
  inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSByte, addr 0x2a98360, size 0x58, virtual true, abstract: false, final true
  inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSingle, addr 0x2a98620, size 0x58, virtual true, abstract: false, final true
  inline float_t System_IConvertible_ToSingle(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToType, addr 0x2a98780, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_IConvertible_ToType(::System::Type* conversionType, ::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt16, addr 0x2a98468, size 0x58, virtual true, abstract: false, final true
  inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt32, addr 0x2a98518, size 0x58, virtual true, abstract: false, final true
  inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt64, addr 0x2a985c8, size 0x58, virtual true, abstract: false, final true
  inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x2a97dfc, size 0x68, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x2a97e64, size 0x70, virtual false, abstract: false, final false
  inline ::StringW ToString(::StringW format);

  /// @brief Method ToString, addr 0x2a97ed4, size 0x118, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method ToString, addr 0x2a97fec, size 0xc, virtual true, abstract: false, final true
  inline ::StringW ToString(::System::IFormatProvider* formatProvider);

  /// @brief Method ValuesEquals, addr 0x2a95cc0, size 0x5c, virtual false, abstract: false, final false
  static inline bool ValuesEquals(::Newtonsoft::Json::Linq::JValue* v1, ::Newtonsoft::Json::Linq::JValue* v2);

  /// @brief Method WriteTo, addr 0x2a97540, size 0x7b4, virtual true, abstract: false, final false
  inline void WriteTo(::Newtonsoft::Json::JsonWriter* writer, ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  /// @brief Method WriteToAsync, addr 0x2a94dfc, size 0x80c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteToAsync(::Newtonsoft::Json::JsonWriter* writer, ::System::Threading::CancellationToken cancellationToken,
                                                        ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  constexpr ::System::Object*& __cordl_internal_get__value();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__value() const;

  constexpr ::Newtonsoft::Json::Linq::JTokenType const& __cordl_internal_get__valueType() const;

  constexpr ::Newtonsoft::Json::Linq::JTokenType& __cordl_internal_get__valueType();

  constexpr void __cordl_internal_set__value(::System::Object* value);

  constexpr void __cordl_internal_set__valueType(::Newtonsoft::Json::Linq::JTokenType value);

  /// @brief Method .ctor, addr 0x2a956d4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Linq::JValue* other);

  /// @brief Method .ctor, addr 0x2a95608, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Linq::JValue* other, ::Newtonsoft::Json::Linq::JsonCloneSettings* settings);

  /// @brief Method .ctor, addr 0x2a93c44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  /// @brief Method .ctor, addr 0x2a9469c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::DateTime value);

  /// @brief Method .ctor, addr 0x2a94794, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::DateTimeOffset value);

  /// @brief Method .ctor, addr 0x2a94560, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Decimal value);

  /// @brief Method .ctor, addr 0x2a94a08, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Guid value);

  /// @brief Method .ctor, addr 0x2a957c0, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* value);

  /// @brief Method .ctor, addr 0x2a9380c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* value, ::Newtonsoft::Json::Linq::JTokenType type);

  /// @brief Method .ctor, addr 0x2a94910, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::TimeSpan value);

  /// @brief Method .ctor, addr 0x2a94b00, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::Uri* value);

  /// @brief Method .ctor, addr 0x2a94190, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(bool value);

  /// @brief Method .ctor, addr 0x2a95754, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(char16_t value);

  /// @brief Method .ctor, addr 0x2a94098, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(double_t value);

  /// @brief Method .ctor, addr 0x2a93fac, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(float_t value);

  /// @brief Method .ctor, addr 0x2a93dcc, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(int64_t value);

  /// @brief Method .ctor, addr 0x2a93ec0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(uint64_t value);

  /// @brief Method get_HasValues, addr 0x2a95d1c, size 0x8, virtual true, abstract: false, final false
  inline bool get_HasValues();

  /// @brief Method get_Type, addr 0x2a97444, size 0x8, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JTokenType get_Type();

  /// @brief Method get_Value, addr 0x2a9744c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Value();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable() noexcept;

  /// @brief Convert to "::System::IComparable_1<::Newtonsoft::Json::Linq::JValue*>"
  constexpr ::System::IComparable_1<::Newtonsoft::Json::Linq::JValue*>* i___System__IComparable_1___Newtonsoft__Json__Linq__JValue__() noexcept;

  /// @brief Convert to "::System::IConvertible"
  constexpr ::System::IConvertible* i___System__IConvertible() noexcept;

  /// @brief Convert to "::System::IEquatable_1<::Newtonsoft::Json::Linq::JValue*>"
  constexpr ::System::IEquatable_1<::Newtonsoft::Json::Linq::JValue*>* i___System__IEquatable_1___Newtonsoft__Json__Linq__JValue__() noexcept;

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable() noexcept;

  /// @brief Method set_Value, addr 0x2a97454, size 0xec, virtual false, abstract: false, final false
  inline void set_Value(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JValue(JValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JValue(JValue const&) = delete;

  /// @brief Field _valueType, offset: 0x30, size: 0x4, def value: None
  ::Newtonsoft::Json::Linq::JTokenType ____valueType;

  /// @brief Field _value, offset: 0x38, size: 0x8, def value: None
  ::System::Object* ____value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JValue, 0x40>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JValue, ____valueType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JValue, ____value) == 0x38, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JValue);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JValue*, "Newtonsoft.Json.Linq", "JValue");
NEED_NO_BOX(::Newtonsoft::Json::Linq::__JValue__JValueDynamicProxy);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::__JValue__JValueDynamicProxy*, "Newtonsoft.Json.Linq", "JValue/JValueDynamicProxy");
