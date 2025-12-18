#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/PrimitiveValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__TypeCode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PrimitiveValue)
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
template <typename T> class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
struct PrimitiveValue;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::PrimitiveValue);
// Dependencies System.TypeCode
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Utilities.PrimitiveValue
struct CORDL_TYPE PrimitiveValue {
public:
  // Declarations
  __declspec(property(get = get_isEmpty)) bool isEmpty;

  /// @brief Field m_BoolValue, offset 0x4, size 0x1
  __declspec(property(get = __cordl_internal_get_m_BoolValue, put = __cordl_internal_set_m_BoolValue)) bool m_BoolValue;

  /// @brief Field m_ByteValue, offset 0x4, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ByteValue, put = __cordl_internal_set_m_ByteValue)) uint8_t m_ByteValue;

  /// @brief Field m_CharValue, offset 0x4, size 0x2
  __declspec(property(get = __cordl_internal_get_m_CharValue, put = __cordl_internal_set_m_CharValue)) char16_t m_CharValue;

  /// @brief Field m_DoubleValue, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DoubleValue, put = __cordl_internal_set_m_DoubleValue)) double_t m_DoubleValue;

  /// @brief Field m_FloatValue, offset 0x4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FloatValue, put = __cordl_internal_set_m_FloatValue)) float_t m_FloatValue;

  /// @brief Field m_IntValue, offset 0x4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_IntValue, put = __cordl_internal_set_m_IntValue)) int32_t m_IntValue;

  /// @brief Field m_LongValue, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LongValue, put = __cordl_internal_set_m_LongValue)) int64_t m_LongValue;

  /// @brief Field m_SByteValue, offset 0x4, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SByteValue, put = __cordl_internal_set_m_SByteValue)) int8_t m_SByteValue;

  /// @brief Field m_ShortValue, offset 0x4, size 0x2
  __declspec(property(get = __cordl_internal_get_m_ShortValue, put = __cordl_internal_set_m_ShortValue)) int16_t m_ShortValue;

  /// @brief Field m_Type, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Type, put = __cordl_internal_set_m_Type)) ::System::TypeCode m_Type;

  /// @brief Field m_UIntValue, offset 0x4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UIntValue, put = __cordl_internal_set_m_UIntValue)) uint32_t m_UIntValue;

  /// @brief Field m_ULongValue, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ULongValue, put = __cordl_internal_set_m_ULongValue)) uint64_t m_ULongValue;

  /// @brief Field m_UShortValue, offset 0x4, size 0x2
  __declspec(property(get = __cordl_internal_get_m_UShortValue, put = __cordl_internal_set_m_UShortValue)) uint16_t m_UShortValue;

  __declspec(property(get = get_type)) ::System::TypeCode type;

  __declspec(property(get = get_valuePtr)) uint8_t* valuePtr;

  /// @brief Convert operator to "::System::IConvertible"
  constexpr operator ::System::IConvertible*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue>*();

  /// @brief Method ConvertTo, addr 0x634f670, size 0x208, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue ConvertTo(::System::TypeCode type);

  /// @brief Method Equals, addr 0x6351858, size 0x178, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x63517e4, size 0x74, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::InputSystem::Utilities::PrimitiveValue other);

  /// @brief Method From, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue From(TValue value);

  /// @brief Method FromBoolean, addr 0x63523b8, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromBoolean(bool value);

  /// @brief Method FromByte, addr 0x63523e8, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromByte(uint8_t value);

  /// @brief Method FromChar, addr 0x63523d4, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromChar(char16_t value);

  /// @brief Method FromDouble, addr 0x63524a4, size 0xc8, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromDouble(double_t value);

  /// @brief Method FromInt16, addr 0x6352410, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromInt16(int16_t value);

  /// @brief Method FromInt32, addr 0x6352438, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromInt32(int32_t value);

  /// @brief Method FromInt64, addr 0x6352458, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromInt64(int64_t value);

  /// @brief Method FromObject, addr 0x63519d0, size 0x418, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromObject(::System::Object* value);

  /// @brief Method FromSByte, addr 0x63523fc, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromSByte(int8_t value);

  /// @brief Method FromSingle, addr 0x6352490, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromSingle(float_t value);

  /// @brief Method FromString, addr 0x634fe78, size 0x328, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromString(::StringW value);

  /// @brief Method FromUInt16, addr 0x6352424, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromUInt16(uint16_t value);

  /// @brief Method FromUInt32, addr 0x6352448, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromUInt32(uint32_t value);

  /// @brief Method FromUInt64, addr 0x6352474, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromUInt64(uint64_t value);

  /// @brief Method GetHashCode, addr 0x634fa40, size 0x30, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetTypeCode, addr 0x6352298, size 0x8, virtual true, abstract: false, final true
  inline ::System::TypeCode GetTypeCode();

  /// @brief Method ToBoolean, addr 0x635120c, size 0x1d4, virtual true, abstract: false, final true
  inline bool ToBoolean(::System::IFormatProvider* provider);

  /// @brief Method ToByte, addr 0x635142c, size 0x10, virtual true, abstract: false, final true
  inline uint8_t ToByte(::System::IFormatProvider* provider);

  /// @brief Method ToChar, addr 0x63513e0, size 0x38, virtual true, abstract: false, final true
  inline char16_t ToChar(::System::IFormatProvider* provider);

  /// @brief Method ToDateTime, addr 0x63522a0, size 0x4c, virtual true, abstract: false, final true
  inline ::System::DateTime ToDateTime(::System::IFormatProvider* provider);

  /// @brief Method ToDecimal, addr 0x63522ec, size 0x4c, virtual true, abstract: false, final true
  inline ::System::Decimal ToDecimal(::System::IFormatProvider* provider);

  /// @brief Method ToDouble, addr 0x63516d4, size 0xf4, virtual true, abstract: false, final true
  inline double_t ToDouble(::System::IFormatProvider* provider);

  /// @brief Method ToInt16, addr 0x6351474, size 0x10, virtual true, abstract: false, final true
  inline int16_t ToInt16(::System::IFormatProvider* provider);

  /// @brief Method ToInt32, addr 0x6351498, size 0x10, virtual true, abstract: false, final true
  inline int32_t ToInt32(::System::IFormatProvider* provider);

  /// @brief Method ToInt64, addr 0x63514b8, size 0xf8, virtual true, abstract: false, final true
  inline int64_t ToInt64(::System::IFormatProvider* provider);

  /// @brief Method ToObject, addr 0x63503b4, size 0x16c, virtual false, abstract: false, final false
  inline ::System::Object* ToObject();

  /// @brief Method ToSByte, addr 0x6351450, size 0x10, virtual true, abstract: false, final true
  inline int8_t ToSByte(::System::IFormatProvider* provider);

  /// @brief Method ToSingle, addr 0x6343e8c, size 0x14, virtual true, abstract: false, final true
  inline float_t ToSingle(::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x6351e5c, size 0x43c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x6352338, size 0x4, virtual true, abstract: false, final true
  inline ::StringW ToString(::System::IFormatProvider* provider);

  /// @brief Method ToType, addr 0x635233c, size 0x38, virtual true, abstract: false, final true
  inline ::System::Object* ToType(::System::Type* conversionType, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt16, addr 0x6352374, size 0x10, virtual true, abstract: false, final true
  inline uint16_t ToUInt16(::System::IFormatProvider* provider);

  /// @brief Method ToUInt32, addr 0x6352384, size 0x10, virtual true, abstract: false, final true
  inline uint32_t ToUInt32(::System::IFormatProvider* provider);

  /// @brief Method ToUInt64, addr 0x63515cc, size 0xec, virtual true, abstract: false, final true
  inline uint64_t ToUInt64(::System::IFormatProvider* provider);

  constexpr bool const& __cordl_internal_get_m_BoolValue() const;

  constexpr bool& __cordl_internal_get_m_BoolValue();

  constexpr uint8_t const& __cordl_internal_get_m_ByteValue() const;

  constexpr uint8_t& __cordl_internal_get_m_ByteValue();

  constexpr char16_t const& __cordl_internal_get_m_CharValue() const;

  constexpr char16_t& __cordl_internal_get_m_CharValue();

  constexpr double_t const& __cordl_internal_get_m_DoubleValue() const;

  constexpr double_t& __cordl_internal_get_m_DoubleValue();

  constexpr float_t const& __cordl_internal_get_m_FloatValue() const;

  constexpr float_t& __cordl_internal_get_m_FloatValue();

  constexpr int32_t const& __cordl_internal_get_m_IntValue() const;

  constexpr int32_t& __cordl_internal_get_m_IntValue();

  constexpr int64_t const& __cordl_internal_get_m_LongValue() const;

  constexpr int64_t& __cordl_internal_get_m_LongValue();

  constexpr int8_t const& __cordl_internal_get_m_SByteValue() const;

  constexpr int8_t& __cordl_internal_get_m_SByteValue();

  constexpr int16_t const& __cordl_internal_get_m_ShortValue() const;

  constexpr int16_t& __cordl_internal_get_m_ShortValue();

  constexpr ::System::TypeCode const& __cordl_internal_get_m_Type() const;

  constexpr ::System::TypeCode& __cordl_internal_get_m_Type();

  constexpr uint32_t const& __cordl_internal_get_m_UIntValue() const;

  constexpr uint32_t& __cordl_internal_get_m_UIntValue();

  constexpr uint64_t const& __cordl_internal_get_m_ULongValue() const;

  constexpr uint64_t& __cordl_internal_get_m_ULongValue();

  constexpr uint16_t const& __cordl_internal_get_m_UShortValue() const;

  constexpr uint16_t& __cordl_internal_get_m_UShortValue();

  constexpr void __cordl_internal_set_m_BoolValue(bool value);

  constexpr void __cordl_internal_set_m_ByteValue(uint8_t value);

  constexpr void __cordl_internal_set_m_CharValue(char16_t value);

  constexpr void __cordl_internal_set_m_DoubleValue(double_t value);

  constexpr void __cordl_internal_set_m_FloatValue(float_t value);

  constexpr void __cordl_internal_set_m_IntValue(int32_t value);

  constexpr void __cordl_internal_set_m_LongValue(int64_t value);

  constexpr void __cordl_internal_set_m_SByteValue(int8_t value);

  constexpr void __cordl_internal_set_m_ShortValue(int16_t value);

  constexpr void __cordl_internal_set_m_Type(::System::TypeCode value);

  constexpr void __cordl_internal_set_m_UIntValue(uint32_t value);

  constexpr void __cordl_internal_set_m_ULongValue(uint64_t value);

  constexpr void __cordl_internal_set_m_UShortValue(uint16_t value);

  /// @brief Method .ctor, addr 0x635110c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(bool value);

  /// @brief Method .ctor, addr 0x6351124, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(char16_t value);

  /// @brief Method .ctor, addr 0x63511f8, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(double_t value);

  /// @brief Method .ctor, addr 0x63511e4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(float_t value);

  /// @brief Method .ctor, addr 0x635116c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(int16_t value);

  /// @brief Method .ctor, addr 0x635119c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t value);

  /// @brief Method .ctor, addr 0x63511bc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int64_t value);

  /// @brief Method .ctor, addr 0x6351154, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(int8_t value);

  /// @brief Method .ctor, addr 0x6351184, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(uint16_t value);

  /// @brief Method .ctor, addr 0x63511ac, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint32_t value);

  /// @brief Method .ctor, addr 0x63511d0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint64_t value);

  /// @brief Method .ctor, addr 0x635113c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(uint8_t value);

  /// @brief Method get_isEmpty, addr 0x6343e7c, size 0x10, virtual false, abstract: false, final false
  inline bool get_isEmpty();

  /// @brief Method get_type, addr 0x6351104, size 0x8, virtual false, abstract: false, final false
  inline ::System::TypeCode get_type();

  /// @brief Method get_valuePtr, addr 0x63510fc, size 0x8, virtual false, abstract: false, final false
  inline uint8_t* get_valuePtr();

  /// @brief Convert to "::System::IConvertible"
  constexpr ::System::IConvertible* i___System__IConvertible();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue>"
  constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue>* i___System__IEquatable_1___UnityEngine__InputSystem__Utilities__PrimitiveValue_();

  /// @brief Method op_Equality, addr 0x634f8c4, size 0x74, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::InputSystem::Utilities::PrimitiveValue left, ::UnityEngine::InputSystem::Utilities::PrimitiveValue right);

  /// @brief Method op_Implicit, addr 0x634fe5c, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit___UnityEngine__InputSystem__Utilities__PrimitiveValue(bool value);

  /// @brief Method op_Implicit, addr 0x6351418, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit___UnityEngine__InputSystem__Utilities__PrimitiveValue(char16_t value);

  /// @brief Method op_Implicit, addr 0x63517c8, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit___UnityEngine__InputSystem__Utilities__PrimitiveValue(double_t value);

  /// @brief Method op_Implicit, addr 0x6344078, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit___UnityEngine__InputSystem__Utilities__PrimitiveValue(float_t value);

  /// @brief Method op_Implicit, addr 0x6351484, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit___UnityEngine__InputSystem__Utilities__PrimitiveValue(int16_t value);

  /// @brief Method op_Implicit, addr 0x63514a8, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit___UnityEngine__InputSystem__Utilities__PrimitiveValue(int32_t value);

  /// @brief Method op_Implicit, addr 0x63515b0, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit___UnityEngine__InputSystem__Utilities__PrimitiveValue(int64_t value);

  /// @brief Method op_Implicit, addr 0x6351460, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit___UnityEngine__InputSystem__Utilities__PrimitiveValue(int8_t value);

  /// @brief Method op_Implicit, addr 0x6352394, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit___UnityEngine__InputSystem__Utilities__PrimitiveValue(uint16_t value);

  /// @brief Method op_Implicit, addr 0x63523a8, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit___UnityEngine__InputSystem__Utilities__PrimitiveValue(uint32_t value);

  /// @brief Method op_Implicit, addr 0x63516b8, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit___UnityEngine__InputSystem__Utilities__PrimitiveValue(uint64_t value);

  /// @brief Method op_Implicit, addr 0x635143c, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit___UnityEngine__InputSystem__Utilities__PrimitiveValue(uint8_t value);

  /// @brief Method op_Inequality, addr 0x6351de8, size 0x74, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::InputSystem::Utilities::PrimitiveValue left, ::UnityEngine::InputSystem::Utilities::PrimitiveValue right);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PrimitiveValue();

  // Ctor Parameters [CppParam { name: "m_Type", ty: "::System::TypeCode", modifiers: "", def_value: None }, CppParam { name: "m_BoolValue", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "m_CharValue", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "m_ByteValue", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_SByteValue", ty:
  // "int8_t", modifiers: "", def_value: None }, CppParam { name: "m_ShortValue", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "m_UShortValue", ty: "uint16_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_IntValue", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_UIntValue", ty: "uint32_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_LongValue", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "m_ULongValue", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_FloatValue", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "m_DoubleValue", ty: "double_t", modifiers: "", def_value: None }]
  constexpr PrimitiveValue(::System::TypeCode m_Type, bool m_BoolValue, char16_t m_CharValue, uint8_t m_ByteValue, int8_t m_SByteValue, int16_t m_ShortValue, uint16_t m_UShortValue,
                           int32_t m_IntValue, uint32_t m_UIntValue, int64_t m_LongValue, uint64_t m_ULongValue, float_t m_FloatValue, double_t m_DoubleValue) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___m_Type_padding[0x0];
      /// @brief Field m_Type, offset: 0x0, size: 0x4, def value: None
      ::System::TypeCode ___m_Type;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___m_Type_padding_forAlignment[0x0];
      /// @brief Field m_Type, offset: 0x0, size: 0x4, def value: None
      ::System::TypeCode ___m_Type_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___m_BoolValue_padding[0x4];
      /// @brief Field m_BoolValue, offset: 0x4, size: 0x1, def value: None
      bool ___m_BoolValue;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___m_BoolValue_padding_forAlignment[0x4];
      /// @brief Field m_BoolValue, offset: 0x4, size: 0x1, def value: None
      bool ___m_BoolValue_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___m_CharValue_padding[0x4];
      /// @brief Field m_CharValue, offset: 0x4, size: 0x2, def value: None
      char16_t ___m_CharValue;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___m_CharValue_padding_forAlignment[0x4];
      /// @brief Field m_CharValue, offset: 0x4, size: 0x2, def value: None
      char16_t ___m_CharValue_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___m_ByteValue_padding[0x4];
      /// @brief Field m_ByteValue, offset: 0x4, size: 0x1, def value: None
      uint8_t ___m_ByteValue;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___m_ByteValue_padding_forAlignment[0x4];
      /// @brief Field m_ByteValue, offset: 0x4, size: 0x1, def value: None
      uint8_t ___m_ByteValue_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___m_SByteValue_padding[0x4];
      /// @brief Field m_SByteValue, offset: 0x4, size: 0x1, def value: None
      int8_t ___m_SByteValue;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___m_SByteValue_padding_forAlignment[0x4];
      /// @brief Field m_SByteValue, offset: 0x4, size: 0x1, def value: None
      int8_t ___m_SByteValue_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___m_ShortValue_padding[0x4];
      /// @brief Field m_ShortValue, offset: 0x4, size: 0x2, def value: None
      int16_t ___m_ShortValue;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___m_ShortValue_padding_forAlignment[0x4];
      /// @brief Field m_ShortValue, offset: 0x4, size: 0x2, def value: None
      int16_t ___m_ShortValue_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___m_UShortValue_padding[0x4];
      /// @brief Field m_UShortValue, offset: 0x4, size: 0x2, def value: None
      uint16_t ___m_UShortValue;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___m_UShortValue_padding_forAlignment[0x4];
      /// @brief Field m_UShortValue, offset: 0x4, size: 0x2, def value: None
      uint16_t ___m_UShortValue_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___m_IntValue_padding[0x4];
      /// @brief Field m_IntValue, offset: 0x4, size: 0x4, def value: None
      int32_t ___m_IntValue;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___m_IntValue_padding_forAlignment[0x4];
      /// @brief Field m_IntValue, offset: 0x4, size: 0x4, def value: None
      int32_t ___m_IntValue_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___m_UIntValue_padding[0x4];
      /// @brief Field m_UIntValue, offset: 0x4, size: 0x4, def value: None
      uint32_t ___m_UIntValue;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___m_UIntValue_padding_forAlignment[0x4];
      /// @brief Field m_UIntValue, offset: 0x4, size: 0x4, def value: None
      uint32_t ___m_UIntValue_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___m_LongValue_padding[0x8];
      /// @brief Field m_LongValue, offset: 0x8, size: 0x8, def value: None
      int64_t ___m_LongValue;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___m_LongValue_padding_forAlignment[0x8];
      /// @brief Field m_LongValue, offset: 0x8, size: 0x8, def value: None
      int64_t ___m_LongValue_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___m_ULongValue_padding[0x8];
      /// @brief Field m_ULongValue, offset: 0x8, size: 0x8, def value: None
      uint64_t ___m_ULongValue;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___m_ULongValue_padding_forAlignment[0x8];
      /// @brief Field m_ULongValue, offset: 0x8, size: 0x8, def value: None
      uint64_t ___m_ULongValue_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___m_FloatValue_padding[0x4];
      /// @brief Field m_FloatValue, offset: 0x4, size: 0x4, def value: None
      float_t ___m_FloatValue;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___m_FloatValue_padding_forAlignment[0x4];
      /// @brief Field m_FloatValue, offset: 0x4, size: 0x4, def value: None
      float_t ___m_FloatValue_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___m_DoubleValue_padding[0x8];
      /// @brief Field m_DoubleValue, offset: 0x8, size: 0x8, def value: None
      double_t ___m_DoubleValue;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___m_DoubleValue_padding_forAlignment[0x8];
      /// @brief Field m_DoubleValue, offset: 0x8, size: 0x8, def value: None
      double_t ___m_DoubleValue_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9171 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::PrimitiveValue, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::PrimitiveValue, "UnityEngine.InputSystem.Utilities", "PrimitiveValue");
