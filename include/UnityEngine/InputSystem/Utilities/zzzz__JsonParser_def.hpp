#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__JsonParser_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__Substring_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonParser)
namespace GlobalNamespace {
class __JsonParser__JsonValue____c;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::Utilities {
struct Substring;
}
namespace UnityEngine::InputSystem::Utilities {
struct __JsonParser__JsonString;
}
namespace UnityEngine::InputSystem::Utilities {
struct __JsonParser__JsonValueType;
}
namespace UnityEngine::InputSystem::Utilities {
struct __JsonParser__JsonValue;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
struct __JsonParser__JsonValueType;
}
namespace GlobalNamespace {
class __JsonParser__JsonValue____c;
}
namespace UnityEngine::InputSystem::Utilities {
struct JsonParser;
}
namespace UnityEngine::InputSystem::Utilities {
struct __JsonParser__JsonString;
}
namespace UnityEngine::InputSystem::Utilities {
struct __JsonParser__JsonValue;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType);
MARK_REF_PTR_T(::GlobalNamespace::__JsonParser__JsonValue____c);
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::JsonParser);
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString);
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue);
// Type: ::JsonValueType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6672))
// CS Name: ::JsonParser::JsonValueType
struct CORDL_TYPE __JsonParser__JsonValueType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____JsonParser__JsonValueType_Unwrapped
  enum struct ____JsonParser__JsonValueType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Bool = static_cast<int32_t>(0x1),
    __E_Real = static_cast<int32_t>(0x2),
    __E_Integer = static_cast<int32_t>(0x3),
    __E_String = static_cast<int32_t>(0x4),
    __E_Array = static_cast<int32_t>(0x5),
    __E_Object = static_cast<int32_t>(0x6),
    __E_Any = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____JsonParser__JsonValueType_Unwrapped() const noexcept {
    return static_cast<____JsonParser__JsonValueType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __JsonParser__JsonValueType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonParser__JsonValueType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType const None;

  /// @brief Field Bool value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType const Bool;

  /// @brief Field Real value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType const Real;

  /// @brief Field Integer value: static_cast<int32_t>(0x3)
  static ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType const Integer;

  /// @brief Field String value: static_cast<int32_t>(0x4)
  static ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType const String;

  /// @brief Field Array value: static_cast<int32_t>(0x5)
  static ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType const Array;

  /// @brief Field Object value: static_cast<int32_t>(0x6)
  static ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType const Object;

  /// @brief Field Any value: static_cast<int32_t>(0x7)
  static ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType const Any;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
// Type: ::JsonString
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6709))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6673))
// CS Name: ::JsonParser::JsonString
struct CORDL_TYPE __JsonParser__JsonString {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>*();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>"
  constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>* i___System__IEquatable_1___UnityEngine__InputSystem__Utilities____JsonParser__JsonString_();

  /// @brief Method ToString, addr 0x2b11b0c, size 0xf4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Equals, addr 0x2b11c00, size 0x1a8, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString other);

  /// @brief Method Equals, addr 0x2b11da8, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2b11e38, size 0x3c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method op_Equality, addr 0x2b11e74, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString left, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString right);

  /// @brief Method op_Inequality, addr 0x2b11ea4, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString left, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString right);

  /// @brief Method op_Implicit, addr 0x2b11ed8, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonString(::StringW str);

  // Ctor Parameters [CppParam { name: "text", ty: "::UnityEngine::InputSystem::Utilities::Substring", modifiers: "", def_value: None }, CppParam { name: "hasEscapes", ty: "bool", modifiers: "",
  // def_value: None }]
  constexpr __JsonParser__JsonString(::UnityEngine::InputSystem::Utilities::Substring text, bool hasEscapes) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonParser__JsonString();

  /// @brief Field text, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::Substring text;

  /// @brief Field hasEscapes, offset: 0x10, size: 0x1, def value: None
  bool hasEscapes;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString, text) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString, hasEscapes) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6674))
// CS Name: ::JsonParser::JsonValue::<>c*
class CORDL_TYPE __JsonParser__JsonValue____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__JsonParser__JsonValue____c* __9;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_0, put = setStaticF___9__11_0))::System::Func_2<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, ::StringW>* __9__11_0;

  /// @brief Field <>9__11_1, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF___9__11_1,
      put = setStaticF___9__11_1))::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>, ::StringW>* __9__11_1;

  static inline void setStaticF___9(::GlobalNamespace::__JsonParser__JsonValue____c* value);

  static inline ::GlobalNamespace::__JsonParser__JsonValue____c* getStaticF___9();

  static inline void setStaticF___9__11_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, ::StringW>* value);

  static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, ::StringW>* getStaticF___9__11_0();

  static inline void
  setStaticF___9__11_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>, ::StringW>* value);

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>, ::StringW>* getStaticF___9__11_1();

  static inline ::GlobalNamespace::__JsonParser__JsonValue____c* New_ctor();

  /// @brief Method .ctor, addr 0x2b13394, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <ToString>b__11_0, addr 0x2b1339c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW _ToString_b__11_0(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue x);

  /// @brief Method <ToString>b__11_1, addr 0x2b133a4, size 0xb4, virtual false, abstract: false, final false
  inline ::StringW _ToString_b__11_1(::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue> pair);

  // Ctor Parameters [CppParam { name: "", ty: "__JsonParser__JsonValue____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JsonParser__JsonValue____c(__JsonParser__JsonValue____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JsonParser__JsonValue____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JsonParser__JsonValue____c(__JsonParser__JsonValue____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonParser__JsonValue____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__JsonParser__JsonValue____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::JsonValue
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6673)), TypeDefinitionIndex(TypeDefinitionIndex(6672))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6675))
// CS Name: ::JsonParser::JsonValue
struct CORDL_TYPE __JsonParser__JsonValue {
public:
  // Declarations
  using __c = ::GlobalNamespace::__JsonParser__JsonValue____c;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>*();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>"
  constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>* i___System__IEquatable_1___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue_();

  /// @brief Method ToBoolean, addr 0x2b11ef8, size 0x140, virtual false, abstract: false, final false
  inline bool ToBoolean();

  /// @brief Method ToInteger, addr 0x2b12470, size 0xd0, virtual false, abstract: false, final false
  inline int64_t ToInteger();

  /// @brief Method ToDouble, addr 0x2b12540, size 0xcc, virtual false, abstract: false, final false
  inline double_t ToDouble();

  /// @brief Method ToString, addr 0x2b12038, size 0x438, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method op_Implicit, addr 0x2b11ad0, size 0x2c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue(bool val);

  /// @brief Method op_Implicit, addr 0x2b119e0, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue(int64_t val);

  /// @brief Method op_Implicit, addr 0x2b11a08, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue(double_t val);

  /// @brief Method op_Implicit, addr 0x2b1260c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue(::StringW str);

  /// @brief Method op_Implicit, addr 0x2b11948, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue
  op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString str);

  /// @brief Method op_Implicit, addr 0x2b119bc, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue
  op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>* array);

  /// @brief Method op_Implicit, addr 0x2b12648, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue(
      ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>* obj);

  /// @brief Method op_Implicit, addr 0x2b1266c, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue(::bs_hook::EnumPtr val);

  /// @brief Method Equals, addr 0x2b12690, size 0x204, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue other);

  /// @brief Method Equals, addr 0x2b12894, size 0x878, virtual false, abstract: false, final false
  static inline bool Equals(::System::Object* obj, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue value);

  /// @brief Method Equals, addr 0x2b1310c, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2b1319c, size 0x15c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method op_Equality, addr 0x2b10d8c, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue left, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue right);

  /// @brief Method op_Inequality, addr 0x2b132f8, size 0x38, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue left, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue right);

  // Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType", modifiers: "", def_value: None }, CppParam { name: "boolValue", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "realValue", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "integerValue", ty: "int64_t", modifiers: "", def_value: None },
  // CppParam { name: "stringValue", ty: "::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString", modifiers: "", def_value: None }, CppParam { name: "arrayValue", ty:
  // "::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>*", modifiers: "", def_value: None }, CppParam { name: "objectValue", ty:
  // "::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>*", modifiers: "", def_value: None }, CppParam { name: "anyValue", ty:
  // "::System::Object*", modifiers: "", def_value: None }]
  constexpr __JsonParser__JsonValue(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType type, bool boolValue, double_t realValue, int64_t integerValue,
                                    ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString stringValue,
                                    ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>* arrayValue,
                                    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>* objectValue,
                                    ::System::Object* anyValue) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonParser__JsonValue();

  /// @brief Field type, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType type;

  /// @brief Field boolValue, offset: 0x4, size: 0x1, def value: None
  bool boolValue;

  /// @brief Field realValue, offset: 0x8, size: 0x8, def value: None
  double_t realValue;

  /// @brief Field integerValue, offset: 0x10, size: 0x8, def value: None
  int64_t integerValue;

  /// @brief Field stringValue, offset: 0x18, size: 0x18, def value: None
  ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString stringValue;

  /// @brief Field arrayValue, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>* arrayValue;

  /// @brief Field objectValue, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>* objectValue;

  /// @brief Field anyValue, offset: 0x40, size: 0x8, def value: None
  ::System::Object* anyValue;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, boolValue) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, realValue) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, integerValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, stringValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, arrayValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, objectValue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, anyValue) == 0x40, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::JsonParser
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 34, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6676))
// CS Name: ::UnityEngine.InputSystem.Utilities::JsonParser
struct CORDL_TYPE JsonParser {
public:
  // Declarations
  using JsonValue = ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue;

  using JsonString = ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString;

  using JsonValueType = ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType;

  __declspec(property(get = get_isAtEnd)) bool isAtEnd;

  /// @brief Method .ctor, addr 0x2b1039c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW json);

  /// @brief Method Reset, addr 0x2b1040c, size 0xc, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method ToString, addr 0x2b10418, size 0xec, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method NavigateToProperty, addr 0x2b10504, size 0x48c, virtual false, abstract: false, final false
  inline bool NavigateToProperty(::StringW path);

  /// @brief Method CurrentPropertyHasValueEqualTo, addr 0x2b10b30, size 0x14c, virtual false, abstract: false, final false
  inline bool CurrentPropertyHasValueEqualTo(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue expectedValue);

  /// @brief Method ParseToken, addr 0x2b10990, size 0x74, virtual false, abstract: false, final false
  inline bool ParseToken(char16_t token);

  /// @brief Method ParseValue, addr 0x2b10b00, size 0x30, virtual false, abstract: false, final false
  inline bool ParseValue();

  /// @brief Method ParseValue, addr 0x2b10c7c, size 0x110, virtual false, abstract: false, final false
  inline bool ParseValue(ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue> result);

  /// @brief Method ParseStringValue, addr 0x2b10dc0, size 0x184, virtual false, abstract: false, final false
  inline bool ParseStringValue(ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue> result);

  /// @brief Method ParseArrayValue, addr 0x2b10f44, size 0x2c8, virtual false, abstract: false, final false
  inline bool ParseArrayValue(ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue> result);

  /// @brief Method ParseObjectValue, addr 0x2b1120c, size 0x170, virtual false, abstract: false, final false
  inline bool ParseObjectValue(ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue> result);

  /// @brief Method ParseNumber, addr 0x2b114b8, size 0x490, virtual false, abstract: false, final false
  inline bool ParseNumber(ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue> result);

  /// @brief Method ParseBooleanValue, addr 0x2b1137c, size 0xd8, virtual false, abstract: false, final false
  inline bool ParseBooleanValue(ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue> result);

  /// @brief Method ParseNullValue, addr 0x2b11454, size 0x64, virtual false, abstract: false, final false
  inline bool ParseNullValue(ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue> result);

  /// @brief Method SkipToValue, addr 0x2b10aa0, size 0x60, virtual false, abstract: false, final false
  inline bool SkipToValue();

  /// @brief Method SkipString, addr 0x2b11a28, size 0xa8, virtual false, abstract: false, final false
  inline bool SkipString(::StringW text);

  /// @brief Method SkipWhitespace, addr 0x2b10a04, size 0x9c, virtual false, abstract: false, final false
  inline void SkipWhitespace();

  /// @brief Method get_isAtEnd, addr 0x2b11afc, size 0x10, virtual false, abstract: false, final false
  inline bool get_isAtEnd();

  // Ctor Parameters [CppParam { name: "m_Text", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_Position", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_MatchAnyElementInArray", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_DryRun", ty: "bool",
  // modifiers: "", def_value: None }]
  constexpr JsonParser(::StringW m_Text, int32_t m_Length, int32_t m_Position, bool m_MatchAnyElementInArray, bool m_DryRun) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonParser();

  /// @brief Field m_Text, offset: 0x0, size: 0x8, def value: None
  ::StringW m_Text;

  /// @brief Field m_Length, offset: 0x8, size: 0x4, def value: None
  int32_t m_Length;

  /// @brief Field m_Position, offset: 0xc, size: 0x4, def value: None
  int32_t m_Position;

  /// @brief Field m_MatchAnyElementInArray, offset: 0x10, size: 0x1, def value: None
  bool m_MatchAnyElementInArray;

  /// @brief Field m_DryRun, offset: 0x11, size: 0x1, def value: None
  bool m_DryRun;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::JsonParser, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::JsonParser, m_Text) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::JsonParser, m_Length) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::JsonParser, m_Position) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::JsonParser, m_MatchAnyElementInArray) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::JsonParser, m_DryRun) == 0x11, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType, "UnityEngine.InputSystem.Utilities", "JsonParser/JsonValueType");
NEED_NO_BOX(::GlobalNamespace::__JsonParser__JsonValue____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__JsonParser__JsonValue____c*, "UnityEngine.InputSystem.Utilities", "JsonParser/JsonValue/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::JsonParser, "UnityEngine.InputSystem.Utilities", "JsonParser");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString, "UnityEngine.InputSystem.Utilities", "JsonParser/JsonString");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, "UnityEngine.InputSystem.Utilities", "JsonParser/JsonValue");
