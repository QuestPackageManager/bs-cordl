#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/zzzz__JTokenType_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JValue)
namespace Newtonsoft::Json::Linq {
struct JTokenType;
}
namespace System {
class IConvertible;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Uri;
}
namespace System {
struct TimeSpan;
}
namespace System {
class IFormattable;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System {
struct Decimal;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace System {
struct Guid;
}
namespace System {
class IComparable;
}
namespace System {
class Object;
}
namespace System {
struct DateTime;
}
namespace System {
class Type;
}
namespace System {
struct TypeCode;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JValue;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JValue);
// Type: Newtonsoft.Json.Linq::JValue
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11930)), TypeDefinitionIndex(TypeDefinitionIndex(11934))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11935))
// CS Name: ::Newtonsoft.Json.Linq::JValue*
class CORDL_TYPE JValue : public ::Newtonsoft::Json::Linq::JToken {
public:
  // Declarations
  /// @brief Field _valueType, offset 0x30, size 0x4
  __declspec(property(get = __get__valueType, put = __set__valueType))::Newtonsoft::Json::Linq::JTokenType _valueType;

  /// @brief Field _value, offset 0x38, size 0x8
  __declspec(property(get = __get__value, put = __set__value))::System::Object* _value;

  __declspec(property(get = get_HasValues)) bool HasValues;

  __declspec(property(get = get_Type))::Newtonsoft::Json::Linq::JTokenType Type;

  __declspec(property(get = get_Value, put = set_Value))::System::Object* Value;

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*() noexcept;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*() noexcept;

  /// @brief Convert operator to "::System::IConvertible"
  constexpr operator ::System::IConvertible*() noexcept;

  constexpr ::Newtonsoft::Json::Linq::JTokenType& __get__valueType();

  constexpr ::Newtonsoft::Json::Linq::JTokenType const& __get__valueType() const;

  constexpr void __set__valueType(::Newtonsoft::Json::Linq::JTokenType value);

  constexpr ::System::Object*& __get__value();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__value() const;

  constexpr void __set__value(::System::Object* value);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(::System::Object* value, ::Newtonsoft::Json::Linq::JTokenType type);

  /// @brief Method .ctor addr 0x2544544 size 0x74 virtual false final false
  inline void _ctor(::System::Object* value, ::Newtonsoft::Json::Linq::JTokenType type);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(::Newtonsoft::Json::Linq::JValue* other);

  /// @brief Method .ctor addr 0x25445b8 size 0x80 virtual false final false
  inline void _ctor(::Newtonsoft::Json::Linq::JValue* other);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(int64_t value);

  /// @brief Method .ctor addr 0x2544638 size 0x6c virtual false final false
  inline void _ctor(int64_t value);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(::System::Decimal value);

  /// @brief Method .ctor addr 0x25446a4 size 0xa0 virtual false final false
  inline void _ctor(::System::Decimal value);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(char16_t value);

  /// @brief Method .ctor addr 0x2544744 size 0x6c virtual false final false
  inline void _ctor(char16_t value);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(uint64_t value);

  /// @brief Method .ctor addr 0x25447b0 size 0x6c virtual false final false
  inline void _ctor(uint64_t value);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(double_t value);

  /// @brief Method .ctor addr 0x254481c size 0x6c virtual false final false
  inline void _ctor(double_t value);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(float_t value);

  /// @brief Method .ctor addr 0x2544888 size 0x6c virtual false final false
  inline void _ctor(float_t value);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(::System::DateTime value);

  /// @brief Method .ctor addr 0x25448f4 size 0x6c virtual false final false
  inline void _ctor(::System::DateTime value);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(::System::DateTimeOffset value);

  /// @brief Method .ctor addr 0x2544960 size 0x78 virtual false final false
  inline void _ctor(::System::DateTimeOffset value);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(bool value);

  /// @brief Method .ctor addr 0x25449d8 size 0x6c virtual false final false
  inline void _ctor(bool value);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(::StringW value);

  /// @brief Method .ctor addr 0x2544a44 size 0x8 virtual false final false
  inline void _ctor(::StringW value);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(::System::Guid value);

  /// @brief Method .ctor addr 0x2544a4c size 0x78 virtual false final false
  inline void _ctor(::System::Guid value);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(::System::Uri* value);

  /// @brief Method .ctor addr 0x2544ac4 size 0x84 virtual false final false
  inline void _ctor(::System::Uri* value);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(::System::TimeSpan value);

  /// @brief Method .ctor addr 0x2544b48 size 0x6c virtual false final false
  inline void _ctor(::System::TimeSpan value);

  static inline ::Newtonsoft::Json::Linq::JValue* New_ctor(::System::Object* value);

  /// @brief Method .ctor addr 0x2544bb4 size 0x30 virtual false final false
  inline void _ctor(::System::Object* value);

  /// @brief Method DeepEquals addr 0x2544ff8 size 0x9c virtual true final false
  inline bool DeepEquals(::Newtonsoft::Json::Linq::JToken* node);

  /// @brief Method get_HasValues addr 0x25450f0 size 0x8 virtual true final false
  inline bool get_HasValues();

  /// @brief Method Compare addr 0x25450f8 size 0x88c virtual false final false
  static inline int32_t Compare(::Newtonsoft::Json::Linq::JTokenType valueType, ::System::Object* objA, ::System::Object* objB);

  /// @brief Method CompareFloat addr 0x2545984 size 0xfc virtual false final false
  static inline int32_t CompareFloat(::System::Object* objA, ::System::Object* objB);

  /// @brief Method CloneToken addr 0x2545a80 size 0x60 virtual true final false
  inline ::Newtonsoft::Json::Linq::JToken* CloneToken();

  /// @brief Method CreateComment addr 0x2545ae0 size 0x64 virtual false final false
  static inline ::Newtonsoft::Json::Linq::JValue* CreateComment(::StringW value);

  /// @brief Method CreateString addr 0x2545b44 size 0x64 virtual false final false
  static inline ::Newtonsoft::Json::Linq::JValue* CreateString(::StringW value);

  /// @brief Method CreateNull addr 0x2543670 size 0x60 virtual false final false
  static inline ::Newtonsoft::Json::Linq::JValue* CreateNull();

  /// @brief Method CreateUndefined addr 0x2545ba8 size 0x60 virtual false final false
  static inline ::Newtonsoft::Json::Linq::JValue* CreateUndefined();

  /// @brief Method GetValueType addr 0x2544be4 size 0x414 virtual false final false
  static inline ::Newtonsoft::Json::Linq::JTokenType GetValueType(::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType> current, ::System::Object* value);

  /// @brief Method GetStringValueType addr 0x2545c08 size 0x7c virtual false final false
  static inline ::Newtonsoft::Json::Linq::JTokenType GetStringValueType(::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType> current);

  /// @brief Method get_Type addr 0x2545c84 size 0x8 virtual true final false
  inline ::Newtonsoft::Json::Linq::JTokenType get_Type();

  /// @brief Method get_Value addr 0x2545c8c size 0x8 virtual false final false
  inline ::System::Object* get_Value();

  /// @brief Method set_Value addr 0x2545c94 size 0xb0 virtual false final false
  inline void set_Value(::System::Object* value);

  /// @brief Method WriteTo addr 0x2545d44 size 0x760 virtual true final false
  inline void WriteTo(::Newtonsoft::Json::JsonWriter* writer, ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  /// @brief Method GetDeepHashCode addr 0x25464a4 size 0x54 virtual true final false
  inline int32_t GetDeepHashCode();

  /// @brief Method ValuesEquals addr 0x2545094 size 0x5c virtual false final false
  static inline bool ValuesEquals(::Newtonsoft::Json::Linq::JValue* v1, ::Newtonsoft::Json::Linq::JValue* v2);

  /// @brief Method Equals addr 0x25464f8 size 0x10 virtual false final false
  inline bool Equals(::Newtonsoft::Json::Linq::JValue* other);

  /// @brief Method Equals addr 0x2546508 size 0xa4 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x25465ac size 0x18 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x25465c4 size 0x68 virtual true final false
  inline ::StringW ToString();

  /// @brief Method ToString addr 0x254662c size 0x70 virtual false final false
  inline ::StringW ToString(::StringW format);

  /// @brief Method ToString addr 0x25467b4 size 0xc virtual true final true
  inline ::StringW ToString(::System::IFormatProvider* formatProvider);

  /// @brief Method ToString addr 0x254669c size 0x118 virtual true final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method System.IComparable.CompareTo addr 0x25467c0 size 0x94 virtual true final true
  inline int32_t System_IComparable_CompareTo(::System::Object* obj);

  /// @brief Method CompareTo addr 0x2546854 size 0x20 virtual false final false
  inline int32_t CompareTo(::Newtonsoft::Json::Linq::JValue* obj);

  /// @brief Method System.IConvertible.GetTypeCode addr 0x2546874 size 0xbc virtual true final true
  inline ::System::TypeCode System_IConvertible_GetTypeCode();

  /// @brief Method System.IConvertible.ToBoolean addr 0x2546930 size 0x58 virtual true final true
  inline bool System_IConvertible_ToBoolean(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToChar addr 0x2546988 size 0x58 virtual true final true
  inline char16_t System_IConvertible_ToChar(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSByte addr 0x25469e0 size 0x58 virtual true final true
  inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToByte addr 0x2546a38 size 0x58 virtual true final true
  inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt16 addr 0x2546a90 size 0x58 virtual true final true
  inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt16 addr 0x2546ae8 size 0x58 virtual true final true
  inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt32 addr 0x2546b40 size 0x58 virtual true final true
  inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt32 addr 0x2546b98 size 0x58 virtual true final true
  inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt64 addr 0x2546bf0 size 0x58 virtual true final true
  inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt64 addr 0x2546c48 size 0x58 virtual true final true
  inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSingle addr 0x2546ca0 size 0x58 virtual true final true
  inline float_t System_IConvertible_ToSingle(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDouble addr 0x2546cf8 size 0x58 virtual true final true
  inline double_t System_IConvertible_ToDouble(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDecimal addr 0x2546d50 size 0x58 virtual true final true
  inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDateTime addr 0x2546da8 size 0x58 virtual true final true
  inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToType addr 0x2546e00 size 0x8 virtual true final true
  inline ::System::Object* System_IConvertible_ToType(::System::Type* conversionType, ::System::IFormatProvider* provider);

  // Ctor Parameters [CppParam { name: "", ty: "JValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JValue(JValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JValue(JValue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JValue();

public:
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
