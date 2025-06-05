#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/JsonParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__Substring_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonParser)
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
class Enum;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::Utilities {
struct JsonParser_JsonString;
}
namespace UnityEngine::InputSystem::Utilities {
struct JsonParser_JsonValueType;
}
namespace UnityEngine::InputSystem::Utilities {
struct JsonParser_JsonValue;
}
namespace UnityEngine::InputSystem::Utilities {
class JsonValue_JsonParser___c;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
struct JsonParser_JsonValueType;
}
namespace UnityEngine::InputSystem::Utilities {
class JsonValue_JsonParser___c;
}
namespace UnityEngine::InputSystem::Utilities {
struct JsonParser;
}
namespace UnityEngine::InputSystem::Utilities {
struct JsonParser_JsonString;
}
namespace UnityEngine::InputSystem::Utilities {
struct JsonParser_JsonValue;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c);
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::JsonParser);
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::JsonParser_JsonString);
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue);
// Dependencies
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Utilities.JsonParser/JsonValueType
struct CORDL_TYPE JsonParser_JsonValueType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __JsonParser_JsonValueType_Unwrapped
  enum struct __JsonParser_JsonValueType_Unwrapped : int32_t {
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
  constexpr operator __JsonParser_JsonValueType_Unwrapped() const noexcept {
    return static_cast<__JsonParser_JsonValueType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonParser_JsonValueType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr JsonParser_JsonValueType(int32_t value__) noexcept;

  /// @brief Field Any value: I32(7)
  static ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType const Any;

  /// @brief Field Array value: I32(5)
  static ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType const Array;

  /// @brief Field Bool value: I32(1)
  static ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType const Bool;

  /// @brief Field Integer value: I32(3)
  static ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType const Integer;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType const None;

  /// @brief Field Object value: I32(6)
  static ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType const Object;

  /// @brief Field Real value: I32(2)
  static ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType const Real;

  /// @brief Field String value: I32(4)
  static ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType const String;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7082 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
// Dependencies System.IEquatable`1<T>, UnityEngine.InputSystem.Utilities.Substring
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Utilities.JsonParser/JsonString
struct CORDL_TYPE JsonParser_JsonString {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>*();

  /// @brief Method Equals, addr 0x456a320, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x456a178, size 0x1a8, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::InputSystem::Utilities::JsonParser_JsonString other);

  /// @brief Method GetHashCode, addr 0x456a3b0, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x456a07c, size 0xfc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>"
  constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>* i___System__IEquatable_1___UnityEngine__InputSystem__Utilities__JsonParser_JsonString_();

  /// @brief Method op_Equality, addr 0x456a42c, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::InputSystem::Utilities::JsonParser_JsonString left, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString right);

  /// @brief Method op_Implicit, addr 0x456a490, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonString(::StringW str);

  /// @brief Method op_Inequality, addr 0x456a45c, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::InputSystem::Utilities::JsonParser_JsonString left, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString right);

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonParser_JsonString();

  // Ctor Parameters [CppParam { name: "text", ty: "::UnityEngine::InputSystem::Utilities::Substring", modifiers: "", def_value: None }, CppParam { name: "hasEscapes", ty: "bool", modifiers: "",
  // def_value: None }]
  constexpr JsonParser_JsonString(::UnityEngine::InputSystem::Utilities::Substring text, bool hasEscapes) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7083 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field text, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::Substring text;

  /// @brief Field hasEscapes, offset: 0x10, size: 0x1, def value: None
  bool hasEscapes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Utilities::JsonParser_JsonString, text) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::JsonParser_JsonString, hasEscapes) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
// Dependencies System.Object
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Utilities.JsonParser/JsonValue/<>c
class CORDL_TYPE JsonValue_JsonParser___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c* __9;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_0, put = setStaticF___9__11_0)) ::System::Func_2<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, ::StringW>* __9__11_0;

  /// @brief Field <>9__11_1, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF___9__11_1,
      put = setStaticF___9__11_1)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>, ::StringW>* __9__11_1;

  static inline ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c* New_ctor();

  /// @brief Method <ToString>b__11_0, addr 0x456b980, size 0x8, virtual false, abstract: false, final false
  inline ::StringW _ToString_b__11_0(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue x);

  /// @brief Method <ToString>b__11_1, addr 0x456b988, size 0xb4, virtual false, abstract: false, final false
  inline ::StringW _ToString_b__11_1(::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue> pair);

  /// @brief Method .ctor, addr 0x456b978, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, ::StringW>* getStaticF___9__11_0();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>, ::StringW>* getStaticF___9__11_1();

  static inline void setStaticF___9(::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c* value);

  static inline void setStaticF___9__11_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, ::StringW>* value);

  static inline void setStaticF___9__11_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonValue_JsonParser___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonValue_JsonParser___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonValue_JsonParser___c(JsonValue_JsonParser___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonValue_JsonParser___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonValue_JsonParser___c(JsonValue_JsonParser___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7084 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
// Dependencies System.IEquatable`1<T>, UnityEngine.InputSystem.Utilities.JsonParser::JsonString, UnityEngine.InputSystem.Utilities.JsonParser::JsonValueType
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Utilities.JsonParser/JsonValue
struct CORDL_TYPE JsonParser_JsonValue {
public:
  // Declarations
  using __c = ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>*();

  /// @brief Method Equals, addr 0x456b708, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x456ae7c, size 0x88c, virtual false, abstract: false, final false
  static inline bool Equals(::System::Object* obj, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue value);

  /// @brief Method Equals, addr 0x456ac80, size 0x1fc, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue other);

  /// @brief Method GetHashCode, addr 0x456b798, size 0x14c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToBoolean, addr 0x456a4b0, size 0x140, virtual false, abstract: false, final false
  inline bool ToBoolean();

  /// @brief Method ToDouble, addr 0x456ab30, size 0xcc, virtual false, abstract: false, final false
  inline double_t ToDouble();

  /// @brief Method ToInteger, addr 0x456aa60, size 0xd0, virtual false, abstract: false, final false
  inline int64_t ToInteger();

  /// @brief Method ToString, addr 0x456a5f0, size 0x470, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>"
  constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>* i___System__IEquatable_1___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue_();

  /// @brief Method op_Equality, addr 0x4569304, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue left, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue right);

  /// @brief Method op_Implicit, addr 0x4569f2c, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue
  op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>* array);

  /// @brief Method op_Implicit, addr 0x456ac38, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue
  op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>* obj);

  /// @brief Method op_Implicit, addr 0x456abfc, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue(::StringW str);

  /// @brief Method op_Implicit, addr 0x4569eb8, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue
  op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue(::UnityEngine::InputSystem::Utilities::JsonParser_JsonString str);

  /// @brief Method op_Implicit, addr 0x456ac5c, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue(::System::Enum* val);

  /// @brief Method op_Implicit, addr 0x456a040, size 0x2c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue(bool val);

  /// @brief Method op_Implicit, addr 0x4569f78, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue(double_t val);

  /// @brief Method op_Implicit, addr 0x4569f50, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue(int64_t val);

  /// @brief Method op_Inequality, addr 0x456b8e4, size 0x38, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue left, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue right);

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonParser_JsonValue();

  // Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType", modifiers: "", def_value: None }, CppParam { name: "boolValue", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "realValue", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "integerValue", ty: "int64_t", modifiers: "", def_value: None },
  // CppParam { name: "stringValue", ty: "::UnityEngine::InputSystem::Utilities::JsonParser_JsonString", modifiers: "", def_value: None }, CppParam { name: "arrayValue", ty:
  // "::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>*", modifiers: "", def_value: None }, CppParam { name: "objectValue", ty:
  // "::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>*", modifiers: "", def_value: None }, CppParam { name: "anyValue", ty:
  // "::System::Object*", modifiers: "", def_value: None }]
  constexpr JsonParser_JsonValue(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType type, bool boolValue, double_t realValue, int64_t integerValue,
                                 ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString stringValue,
                                 ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>* arrayValue,
                                 ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>* objectValue,
                                 ::System::Object* anyValue) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7085 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field type, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType type;

  /// @brief Field boolValue, offset: 0x4, size: 0x1, def value: None
  bool boolValue;

  /// @brief Field realValue, offset: 0x8, size: 0x8, def value: None
  double_t realValue;

  /// @brief Field integerValue, offset: 0x10, size: 0x8, def value: None
  int64_t integerValue;

  /// @brief Field stringValue, offset: 0x18, size: 0x18, def value: None
  ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString stringValue;

  /// @brief Field arrayValue, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>* arrayValue;

  /// @brief Field objectValue, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>* objectValue;

  /// @brief Field anyValue, offset: 0x40, size: 0x8, def value: None
  ::System::Object* anyValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, boolValue) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, realValue) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, integerValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, stringValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, arrayValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, objectValue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, anyValue) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, 0x48>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
// Dependencies
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Utilities.JsonParser
struct CORDL_TYPE JsonParser {
public:
  // Declarations
  using JsonString = ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString;

  using JsonValue = ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue;

  using JsonValueType = ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType;

  __declspec(property(get = get_isAtEnd)) bool isAtEnd;

  /// @brief Method CurrentPropertyHasValueEqualTo, addr 0x455fe78, size 0x14c, virtual false, abstract: false, final false
  inline bool CurrentPropertyHasValueEqualTo(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue expectedValue);

  /// @brief Method NavigateToProperty, addr 0x455f9f8, size 0x480, virtual false, abstract: false, final false
  inline bool NavigateToProperty(::StringW path);

  /// @brief Method ParseArrayValue, addr 0x45694c8, size 0x2b8, virtual false, abstract: false, final false
  inline bool ParseArrayValue(::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue> result);

  /// @brief Method ParseBooleanValue, addr 0x45698e8, size 0xd8, virtual false, abstract: false, final false
  inline bool ParseBooleanValue(::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue> result);

  /// @brief Method ParseNullValue, addr 0x45699c0, size 0x64, virtual false, abstract: false, final false
  inline bool ParseNullValue(::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue> result);

  /// @brief Method ParseNumber, addr 0x4569a24, size 0x494, virtual false, abstract: false, final false
  inline bool ParseNumber(::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue> result);

  /// @brief Method ParseObjectValue, addr 0x4569780, size 0x168, virtual false, abstract: false, final false
  inline bool ParseObjectValue(::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue> result);

  /// @brief Method ParseStringValue, addr 0x4569338, size 0x190, virtual false, abstract: false, final false
  inline bool ParseStringValue(::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue> result);

  /// @brief Method ParseToken, addr 0x4569054, size 0x74, virtual false, abstract: false, final false
  inline bool ParseToken(char16_t token);

  /// @brief Method ParseValue, addr 0x45691c4, size 0x30, virtual false, abstract: false, final false
  inline bool ParseValue();

  /// @brief Method ParseValue, addr 0x45691f4, size 0x110, virtual false, abstract: false, final false
  inline bool ParseValue(::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue> result);

  /// @brief Method Reset, addr 0x4568f5c, size 0xc, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SkipString, addr 0x4569f98, size 0xa8, virtual false, abstract: false, final false
  inline bool SkipString(::StringW text);

  /// @brief Method SkipToValue, addr 0x4569164, size 0x60, virtual false, abstract: false, final false
  inline bool SkipToValue();

  /// @brief Method SkipWhitespace, addr 0x45690c8, size 0x9c, virtual false, abstract: false, final false
  inline void SkipWhitespace();

  /// @brief Method ToString, addr 0x4568f68, size 0xec, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x455f938, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW json);

  /// @brief Method get_isAtEnd, addr 0x456a06c, size 0x10, virtual false, abstract: false, final false
  inline bool get_isAtEnd();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonParser();

  // Ctor Parameters [CppParam { name: "m_Text", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_Position", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_MatchAnyElementInArray", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_DryRun", ty: "bool",
  // modifiers: "", def_value: None }]
  constexpr JsonParser(::StringW m_Text, int32_t m_Length, int32_t m_Position, bool m_MatchAnyElementInArray, bool m_DryRun) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7086 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Utilities::JsonParser, m_Text) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::JsonParser, m_Length) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::JsonParser, m_Position) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::JsonParser, m_MatchAnyElementInArray) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::JsonParser, m_DryRun) == 0x11, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::JsonParser, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType, "UnityEngine.InputSystem.Utilities", "JsonParser/JsonValueType");
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*, "UnityEngine.InputSystem.Utilities", "JsonParser/JsonValue/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::JsonParser, "UnityEngine.InputSystem.Utilities", "JsonParser");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::JsonParser_JsonString, "UnityEngine.InputSystem.Utilities", "JsonParser/JsonString");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, "UnityEngine.InputSystem.Utilities", "JsonParser/JsonValue");
