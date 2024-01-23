#pragma once
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
// Type: UnityEngine.InputSystem.Utilities::PrimitiveValue
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 1, natural_alignment: 8, packing: Some(1), specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2496))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6699))
// CS Name: ::UnityEngine.InputSystem.Utilities::PrimitiveValue
struct CORDL_TYPE PrimitiveValue {
public:
  // Declarations
  /// @brief Field m_Type, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Type, put = __cordl_internal_set_m_Type))::System::TypeCode m_Type;

  /// @brief Field m_BoolValue, offset 0x4, size 0x1
  __declspec(property(get = __cordl_internal_get_m_BoolValue, put = __cordl_internal_set_m_BoolValue)) bool m_BoolValue;

  /// @brief Field m_CharValue, offset 0x4, size 0x2
  __declspec(property(get = __cordl_internal_get_m_CharValue, put = __cordl_internal_set_m_CharValue)) char16_t m_CharValue;

  /// @brief Field m_ByteValue, offset 0x4, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ByteValue, put = __cordl_internal_set_m_ByteValue)) uint8_t m_ByteValue;

  /// @brief Field m_SByteValue, offset 0x4, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SByteValue, put = __cordl_internal_set_m_SByteValue)) int8_t m_SByteValue;

  /// @brief Field m_ShortValue, offset 0x4, size 0x2
  __declspec(property(get = __cordl_internal_get_m_ShortValue, put = __cordl_internal_set_m_ShortValue)) int16_t m_ShortValue;

  /// @brief Field m_UShortValue, offset 0x4, size 0x2
  __declspec(property(get = __cordl_internal_get_m_UShortValue, put = __cordl_internal_set_m_UShortValue)) uint16_t m_UShortValue;

  /// @brief Field m_IntValue, offset 0x4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_IntValue, put = __cordl_internal_set_m_IntValue)) int32_t m_IntValue;

  /// @brief Field m_UIntValue, offset 0x4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UIntValue, put = __cordl_internal_set_m_UIntValue)) uint32_t m_UIntValue;

  /// @brief Field m_LongValue, offset 0x4, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LongValue, put = __cordl_internal_set_m_LongValue)) int64_t m_LongValue;

  /// @brief Field m_ULongValue, offset 0x4, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ULongValue, put = __cordl_internal_set_m_ULongValue)) uint64_t m_ULongValue;

  /// @brief Field m_FloatValue, offset 0x4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FloatValue, put = __cordl_internal_set_m_FloatValue)) float_t m_FloatValue;

  /// @brief Field m_DoubleValue, offset 0x4, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DoubleValue, put = __cordl_internal_set_m_DoubleValue)) double_t m_DoubleValue;

  __declspec(property(get = get_valuePtr))::cordl_internals::Ptr<uint8_t> valuePtr;

  __declspec(property(get = get_type))::System::TypeCode type;

  __declspec(property(get = get_isEmpty)) bool isEmpty;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue>*();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue>"
  constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue>* i___System__IEquatable_1___UnityEngine__InputSystem__Utilities__PrimitiveValue_();

  /// @brief Convert operator to "::System::IConvertible"
  constexpr operator ::System::IConvertible*();

  /// @brief Convert to "::System::IConvertible"
  constexpr ::System::IConvertible* i___System__IConvertible();

  constexpr ::System::TypeCode& __cordl_internal_get_m_Type();

  constexpr ::System::TypeCode const& __cordl_internal_get_m_Type() const;

  constexpr void __cordl_internal_set_m_Type(::System::TypeCode value);

  constexpr bool& __cordl_internal_get_m_BoolValue();

  constexpr bool const& __cordl_internal_get_m_BoolValue() const;

  constexpr void __cordl_internal_set_m_BoolValue(bool value);

  constexpr char16_t& __cordl_internal_get_m_CharValue();

  constexpr char16_t const& __cordl_internal_get_m_CharValue() const;

  constexpr void __cordl_internal_set_m_CharValue(char16_t value);

  constexpr uint8_t& __cordl_internal_get_m_ByteValue();

  constexpr uint8_t const& __cordl_internal_get_m_ByteValue() const;

  constexpr void __cordl_internal_set_m_ByteValue(uint8_t value);

  constexpr int8_t& __cordl_internal_get_m_SByteValue();

  constexpr int8_t const& __cordl_internal_get_m_SByteValue() const;

  constexpr void __cordl_internal_set_m_SByteValue(int8_t value);

  constexpr int16_t& __cordl_internal_get_m_ShortValue();

  constexpr int16_t const& __cordl_internal_get_m_ShortValue() const;

  constexpr void __cordl_internal_set_m_ShortValue(int16_t value);

  constexpr uint16_t& __cordl_internal_get_m_UShortValue();

  constexpr uint16_t const& __cordl_internal_get_m_UShortValue() const;

  constexpr void __cordl_internal_set_m_UShortValue(uint16_t value);

  constexpr int32_t& __cordl_internal_get_m_IntValue();

  constexpr int32_t const& __cordl_internal_get_m_IntValue() const;

  constexpr void __cordl_internal_set_m_IntValue(int32_t value);

  constexpr uint32_t& __cordl_internal_get_m_UIntValue();

  constexpr uint32_t const& __cordl_internal_get_m_UIntValue() const;

  constexpr void __cordl_internal_set_m_UIntValue(uint32_t value);

  constexpr int64_t& __cordl_internal_get_m_LongValue();

  constexpr int64_t const& __cordl_internal_get_m_LongValue() const;

  constexpr void __cordl_internal_set_m_LongValue(int64_t value);

  constexpr uint64_t& __cordl_internal_get_m_ULongValue();

  constexpr uint64_t const& __cordl_internal_get_m_ULongValue() const;

  constexpr void __cordl_internal_set_m_ULongValue(uint64_t value);

  constexpr float_t& __cordl_internal_get_m_FloatValue();

  constexpr float_t const& __cordl_internal_get_m_FloatValue() const;

  constexpr void __cordl_internal_set_m_FloatValue(float_t value);

  constexpr double_t& __cordl_internal_get_m_DoubleValue();

  constexpr double_t const& __cordl_internal_get_m_DoubleValue() const;

  constexpr void __cordl_internal_set_m_DoubleValue(double_t value);

  /// @brief Method get_valuePtr, addr 0x2b166ac, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<uint8_t> get_valuePtr();

  /// @brief Method get_type, addr 0x2b166b4, size 0x8, virtual false, abstract: false, final false
  inline ::System::TypeCode get_type();

  /// @brief Method get_isEmpty, addr 0x2b09f48, size 0x10, virtual false, abstract: false, final false
  inline bool get_isEmpty();

  /// @brief Method .ctor, addr 0x2b166bc, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(bool value);

  /// @brief Method .ctor, addr 0x2b166d8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(char16_t value);

  /// @brief Method .ctor, addr 0x2b166f0, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(uint8_t value);

  /// @brief Method .ctor, addr 0x2b16708, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(int8_t value);

  /// @brief Method .ctor, addr 0x2b16720, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(int16_t value);

  /// @brief Method .ctor, addr 0x2b16738, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(uint16_t value);

  /// @brief Method .ctor, addr 0x2b16750, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t value);

  /// @brief Method .ctor, addr 0x2b16760, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint32_t value);

  /// @brief Method .ctor, addr 0x2b16770, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int64_t value);

  /// @brief Method .ctor, addr 0x2b16784, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint64_t value);

  /// @brief Method .ctor, addr 0x2b16798, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(float_t value);

  /// @brief Method .ctor, addr 0x2b167ac, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(double_t value);

  /// @brief Method ConvertTo, addr 0x2b14a18, size 0x1f8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue ConvertTo(::System::TypeCode type);

  /// @brief Method Equals, addr 0x2b16c18, size 0x4c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::InputSystem::Utilities::PrimitiveValue other);

  /// @brief Method Equals, addr 0x2b16c64, size 0x218, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method op_Equality, addr 0x2b14c6c, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::InputSystem::Utilities::PrimitiveValue left, ::UnityEngine::InputSystem::Utilities::PrimitiveValue right);

  /// @brief Method op_Inequality, addr 0x2b17464, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::InputSystem::Utilities::PrimitiveValue left, ::UnityEngine::InputSystem::Utilities::PrimitiveValue right);

  /// @brief Method GetHashCode, addr 0x2b14d84, size 0x88, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x2b17494, size 0x3d0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method FromString, addr 0x2b15280, size 0x2f4, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromString(::StringW value);

  /// @brief Method GetTypeCode, addr 0x2b17864, size 0x8, virtual true, abstract: false, final true
  inline ::System::TypeCode GetTypeCode();

  /// @brief Method ToBoolean, addr 0x2b167c0, size 0x158, virtual true, abstract: false, final true
  inline bool ToBoolean(::System::IFormatProvider* provider);

  /// @brief Method ToByte, addr 0x2b16964, size 0x10, virtual true, abstract: false, final true
  inline uint8_t ToByte(::System::IFormatProvider* provider);

  /// @brief Method ToChar, addr 0x2b16918, size 0x38, virtual true, abstract: false, final true
  inline char16_t ToChar(::System::IFormatProvider* provider);

  /// @brief Method ToDateTime, addr 0x2b1786c, size 0x50, virtual true, abstract: false, final true
  inline ::System::DateTime ToDateTime(::System::IFormatProvider* provider);

  /// @brief Method ToDecimal, addr 0x2b178bc, size 0x4c, virtual true, abstract: false, final true
  inline ::System::Decimal ToDecimal(::System::IFormatProvider* provider);

  /// @brief Method ToDouble, addr 0x2b16b58, size 0xa8, virtual true, abstract: false, final true
  inline double_t ToDouble(::System::IFormatProvider* provider);

  /// @brief Method ToInt16, addr 0x2b169ac, size 0x10, virtual true, abstract: false, final true
  inline int16_t ToInt16(::System::IFormatProvider* provider);

  /// @brief Method ToInt32, addr 0x2b169d0, size 0x10, virtual true, abstract: false, final true
  inline int32_t ToInt32(::System::IFormatProvider* provider);

  /// @brief Method ToInt64, addr 0x2b169f4, size 0xa0, virtual true, abstract: false, final true
  inline int64_t ToInt64(::System::IFormatProvider* provider);

  /// @brief Method ToSByte, addr 0x2b16988, size 0x10, virtual true, abstract: false, final true
  inline int8_t ToSByte(::System::IFormatProvider* provider);

  /// @brief Method ToSingle, addr 0x2b09f58, size 0x14, virtual true, abstract: false, final true
  inline float_t ToSingle(::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x2b17908, size 0x4, virtual true, abstract: false, final true
  inline ::StringW ToString(::System::IFormatProvider* provider);

  /// @brief Method ToType, addr 0x2b1790c, size 0x40, virtual true, abstract: false, final true
  inline ::System::Object* ToType(::System::Type* conversionType, ::System::IFormatProvider* provider);

  /// @brief Method ToUInt16, addr 0x2b1794c, size 0x10, virtual true, abstract: false, final true
  inline uint16_t ToUInt16(::System::IFormatProvider* provider);

  /// @brief Method ToUInt32, addr 0x2b1795c, size 0x10, virtual true, abstract: false, final true
  inline uint32_t ToUInt32(::System::IFormatProvider* provider);

  /// @brief Method ToUInt64, addr 0x2b16aac, size 0x94, virtual true, abstract: false, final true
  inline uint64_t ToUInt64(::System::IFormatProvider* provider);

  /// @brief Method ToObject, addr 0x2b1585c, size 0x1b0, virtual false, abstract: false, final false
  inline ::System::Object* ToObject();

  /// @brief Method From, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue From(TValue value);

  /// @brief Method FromObject, addr 0x2b16e7c, size 0x5e8, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromObject(::System::Object* value);

  /// @brief Method op_Implicit, addr 0x2b1526c, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit___UnityEngine__InputSystem__Utilities__PrimitiveValue(bool value);

  /// @brief Method op_Implicit, addr 0x2b16950, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit___UnityEngine__InputSystem__Utilities__PrimitiveValue(char16_t value);

  /// @brief Method op_Implicit, addr 0x2b16974, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit___UnityEngine__InputSystem__Utilities__PrimitiveValue(uint8_t value);

  /// @brief Method op_Implicit, addr 0x2b16998, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit___UnityEngine__InputSystem__Utilities__PrimitiveValue(int8_t value);

  /// @brief Method op_Implicit, addr 0x2b169bc, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit___UnityEngine__InputSystem__Utilities__PrimitiveValue(int16_t value);

  /// @brief Method op_Implicit, addr 0x2b1796c, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit___UnityEngine__InputSystem__Utilities__PrimitiveValue(uint16_t value);

  /// @brief Method op_Implicit, addr 0x2b169e0, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit___UnityEngine__InputSystem__Utilities__PrimitiveValue(int32_t value);

  /// @brief Method op_Implicit, addr 0x2b17980, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit___UnityEngine__InputSystem__Utilities__PrimitiveValue(uint32_t value);

  /// @brief Method op_Implicit, addr 0x2b16a94, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit___UnityEngine__InputSystem__Utilities__PrimitiveValue(int64_t value);

  /// @brief Method op_Implicit, addr 0x2b16b40, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit___UnityEngine__InputSystem__Utilities__PrimitiveValue(uint64_t value);

  /// @brief Method op_Implicit, addr 0x2b09fc4, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit___UnityEngine__InputSystem__Utilities__PrimitiveValue(float_t value);

  /// @brief Method op_Implicit, addr 0x2b16c00, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit___UnityEngine__InputSystem__Utilities__PrimitiveValue(double_t value);

  /// @brief Method FromBoolean, addr 0x2b17994, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromBoolean(bool value);

  /// @brief Method FromChar, addr 0x2b179a8, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromChar(char16_t value);

  /// @brief Method FromByte, addr 0x2b179bc, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromByte(uint8_t value);

  /// @brief Method FromSByte, addr 0x2b179d0, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromSByte(int8_t value);

  /// @brief Method FromInt16, addr 0x2b179e4, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromInt16(int16_t value);

  /// @brief Method FromUInt16, addr 0x2b179f8, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromUInt16(uint16_t value);

  /// @brief Method FromInt32, addr 0x2b17a0c, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromInt32(int32_t value);

  /// @brief Method FromUInt32, addr 0x2b17a20, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromUInt32(uint32_t value);

  /// @brief Method FromInt64, addr 0x2b17a34, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromInt64(int64_t value);

  /// @brief Method FromUInt64, addr 0x2b17a4c, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromUInt64(uint64_t value);

  /// @brief Method FromSingle, addr 0x2b17a64, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromSingle(float_t value);

  /// @brief Method FromDouble, addr 0x2b17a78, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromDouble(double_t value);

  // Ctor Parameters [CppParam { name: "m_Type", ty: "::System::TypeCode", modifiers: "", def_value: None }, CppParam { name: "m_BoolValue", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "m_CharValue", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "m_ByteValue", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_SByteValue", ty:
  // "int8_t", modifiers: "", def_value: None }, CppParam { name: "m_ShortValue", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "m_UShortValue", ty: "uint16_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_IntValue", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_UIntValue", ty: "uint32_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_LongValue", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "m_ULongValue", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_FloatValue", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "m_DoubleValue", ty: "double_t", modifiers: "", def_value: None }]
  constexpr PrimitiveValue(::System::TypeCode m_Type, bool m_BoolValue, char16_t m_CharValue, uint8_t m_ByteValue, int8_t m_SByteValue, int16_t m_ShortValue, uint16_t m_UShortValue,
                           int32_t m_IntValue, uint32_t m_UIntValue, int64_t m_LongValue, uint64_t m_ULongValue, float_t m_FloatValue, double_t m_DoubleValue) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PrimitiveValue();

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
      /// @brief Padding field 0x4
      uint8_t ___m_LongValue_padding[0x4];
      /// @brief Field m_LongValue, offset: 0x4, size: 0x8, def value: None
      int64_t ___m_LongValue;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___m_LongValue_padding_forAlignment[0x4];
      /// @brief Field m_LongValue, offset: 0x4, size: 0x8, def value: None
      int64_t ___m_LongValue_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___m_ULongValue_padding[0x4];
      /// @brief Field m_ULongValue, offset: 0x4, size: 0x8, def value: None
      uint64_t ___m_ULongValue;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___m_ULongValue_padding_forAlignment[0x4];
      /// @brief Field m_ULongValue, offset: 0x4, size: 0x8, def value: None
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
      /// @brief Padding field 0x4
      uint8_t ___m_DoubleValue_padding[0x4];
      /// @brief Field m_DoubleValue, offset: 0x4, size: 0x8, def value: None
      double_t ___m_DoubleValue;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___m_DoubleValue_padding_forAlignment[0x4];
      /// @brief Field m_DoubleValue, offset: 0x4, size: 0x8, def value: None
      double_t ___m_DoubleValue_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::PrimitiveValue, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::PrimitiveValue, "UnityEngine.InputSystem.Utilities", "PrimitiveValue");
