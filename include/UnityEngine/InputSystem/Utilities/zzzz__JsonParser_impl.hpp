#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/JsonParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__Substring_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__JsonParser_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Enum_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__JsonParser_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType::JsonParser_JsonValueType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType::JsonParser_JsonValueType() {}
constexpr ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType::Bool{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType::Real{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType::Integer{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType::String{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType::Array{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType::Object{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType::Any{ static_cast<int32_t>(0x7) };
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Utilities::JsonParser_JsonString::*)()>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonString::ToString)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x64fd528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser_JsonString::*)(::UnityEngine::InputSystem::Utilities::JsonParser_JsonString)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonString::Equals)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x64fd628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser_JsonString::*)(::System::Object*)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonString::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x64fd7b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::Utilities::JsonParser_JsonString::*)()>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonString::GetHashCode)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x64fd848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::Utilities::JsonParser_JsonString, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonString::op_Equality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x64fd89c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>(),
                            { "op_Equality",
                              {},
                              { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::Utilities::JsonParser_JsonString, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonString::op_Inequality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x64fd8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>(),
                            { "op_Inequality",
                              {},
                              { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString.op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString (*)(::StringW)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonString::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64fd900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>(), { "op_Implicit", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::InputSystem::Utilities::JsonParser_JsonString::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser_JsonString::Equals(::UnityEngine::InputSystem::Utilities::JsonParser_JsonString other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser_JsonString::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::InputSystem::Utilities::JsonParser_JsonString::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser_JsonString::op_Equality(::UnityEngine::InputSystem::Utilities::JsonParser_JsonString left,
                                                                                    ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>(),
          { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser_JsonString::op_Inequality(::UnityEngine::InputSystem::Utilities::JsonParser_JsonString left,
                                                                                      ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>(),
                          { "op_Inequality",
                            {},
                            { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString
UnityEngine::InputSystem::Utilities::JsonParser_JsonString::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonString(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>(), { "op_Implicit", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>(nullptr, ___internal_method, str);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>"
constexpr UnityEngine::InputSystem::Utilities::JsonParser_JsonString::operator ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>"
constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>*
UnityEngine::InputSystem::Utilities::JsonParser_JsonString::i___System__IEquatable_1___UnityEngine__InputSystem__Utilities__JsonParser_JsonString_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "text", ty: "::UnityEngine::InputSystem::Utilities::Substring", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasEscapes", ty: "bool", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString::JsonParser_JsonString(::UnityEngine::InputSystem::Utilities::Substring text, bool hasEscapes) noexcept {
  this->text = text;
  this->hasEscapes = hasEscapes;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString::JsonParser_JsonString() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::*)()>(
    &::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64fee14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c._ToString_b__11_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::*)(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue)>(
    &::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::_ToString_b__11_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64fee18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>(),
                                                             { "<ToString>b__11_0", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c._ToString_b__11_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::*)(
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>)>(
    &::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::_ToString_b__11_1)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x64fee20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>(),
                         { "<ToString>b__11_1", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::setStaticF___9(::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*, "<>9", ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>(
      std::forward<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>(value));
}
inline ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c* UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*, "<>9", ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>();
}
inline void UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::setStaticF___9__11_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, ::StringW>*, "<>9__11_0",
                                    ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>(
      std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, ::StringW>* UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::getStaticF___9__11_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, ::StringW>*, "<>9__11_0",
                                           ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>();
}
inline void UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::setStaticF___9__11_1(
    ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>, ::StringW>*, "<>9__11_1",
                                    ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>, ::StringW>*
UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::getStaticF___9__11_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>, ::StringW>*,
                                           "<>9__11_1", ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>();
}
inline void UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::_ToString_b__11_0(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>(),
                                                           { "<ToString>b__11_0", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::StringW UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::_ToString_b__11_1(
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue> pair) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>(),
                          { "<ToString>b__11_1", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, pair);
}
inline ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c* UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::JsonValue_JsonParser___c() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::*)()>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::ToBoolean)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x64fd920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(), { "ToBoolean", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.ToInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::*)()>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::ToInteger)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x64fdf3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(), { "ToInteger", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::*)()>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::ToDouble)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x64fe010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(), { "ToDouble", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::*)()>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::ToString)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x64fda64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue (*)(bool)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x64fd4f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(), { "op_Implicit", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue (*)(int64_t)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x64fd40c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(), { "op_Implicit", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue (*)(double_t)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64fd434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(), { "op_Implicit", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue (*)(::StringW)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x64fe0dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(), { "op_Implicit", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue (*)(::UnityEngine::InputSystem::Utilities::JsonParser_JsonString)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x64f25d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(),
                                                                                           { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue (*)(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>*)>(
        &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x64fd3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(),
                                                { "op_Implicit", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue (*)(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>*)>(
        &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x64fe118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(),
                            { "op_Implicit", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue (*)(::System::Enum*)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x64fe13c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Enum*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::*)(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::Equals)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x64fe160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::Equals)> {
  constexpr static std::size_t size = 0x844;
  constexpr static std::size_t addrs = 0x64fe398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(),
                                                { "Equals", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::*)(::System::Object*)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x64febdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::*)()>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::GetHashCode)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x64fec70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Equality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x64fc918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(),
            { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Inequality)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x64fed88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(),
                            { "op_Inequality",
                              {},
                              { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::ToBoolean() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(), { "ToBoolean", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int64_t UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::ToInteger() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(), { "ToInteger", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::ToDouble() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(), { "ToDouble", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue
UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue(bool val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(), { "op_Implicit", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(nullptr, ___internal_method, val);
}
inline ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue
UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue(int64_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(), { "op_Implicit", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(nullptr, ___internal_method, val);
}
inline ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue
UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue(double_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(), { "op_Implicit", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(nullptr, ___internal_method, val);
}
inline ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue
UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(), { "op_Implicit", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(nullptr, ___internal_method, str);
}
inline ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue
UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue(::UnityEngine::InputSystem::Utilities::JsonParser_JsonString str) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(),
                                                                                         { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(nullptr, ___internal_method, str);
}
inline ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue(
    ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>* array) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(),
                                              { "op_Implicit", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(nullptr, ___internal_method, array);
}
inline ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(),
                          { "op_Implicit", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(nullptr, ___internal_method, obj);
}
inline ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue
UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue(::System::Enum* val) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Enum*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(nullptr, ___internal_method, val);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::Equals(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::Equals(::System::Object* obj, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(),
                                                           { "Equals", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj, value);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Equality(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue left,
                                                                                   ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(),
          { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Inequality(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue left,
                                                                                     ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(),
          { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>"
constexpr UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::operator ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>"
constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>*
UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::i___System__IEquatable_1___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType", modifiers: "", def_value: Some("{}") }, CppParam { name: "boolValue", ty: "bool",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "realValue", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "integerValue", ty: "int64_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "stringValue", ty: "::UnityEngine::InputSystem::Utilities::JsonParser_JsonString", modifiers: "", def_value: Some("{}") }, CppParam { name: "arrayValue",
// ty: "::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "objectValue", ty:
// "::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "anyValue", ty:
// "::System::Object*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::JsonParser_JsonValue(
    ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType type, bool boolValue, double_t realValue, int64_t integerValue,
    ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString stringValue, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>* arrayValue,
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>* objectValue, ::System::Object* anyValue) noexcept {
  this->type = type;
  this->boolValue = boolValue;
  this->realValue = realValue;
  this->integerValue = integerValue;
  this->stringValue = stringValue;
  this->arrayValue = arrayValue;
  this->objectValue = objectValue;
  this->anyValue = anyValue;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::JsonParser_JsonValue() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Utilities::JsonParser::*)(::StringW)>(&::UnityEngine::InputSystem::Utilities::JsonParser::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x64f2188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Utilities::JsonParser::*)()>(&::UnityEngine::InputSystem::Utilities::JsonParser::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64fc540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Utilities::JsonParser::*)()>(&::UnityEngine::InputSystem::Utilities::JsonParser::ToString)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x64fc54c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(), { ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.NavigateToProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(::StringW)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser::NavigateToProperty)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x64f21f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(), { "NavigateToProperty", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.CurrentPropertyHasValueEqualTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser::CurrentPropertyHasValueEqualTo)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x64f264c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                                                             { "CurrentPropertyHasValueEqualTo", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(char16_t)>(&::UnityEngine::InputSystem::Utilities::JsonParser::ParseToken)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x64fc65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(), { "ParseToken", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)()>(&::UnityEngine::InputSystem::Utilities::JsonParser::ParseValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64fc7d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(), { "ParseValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(::by_ref<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser::ParseValue)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x64fc7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                                                             { "ParseValue", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseStringValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(::by_ref<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser::ParseStringValue)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x64fc94c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                                                             { "ParseStringValue", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseArrayValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(::by_ref<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser::ParseArrayValue)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x64fca6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                                                             { "ParseArrayValue", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseObjectValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(::by_ref<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser::ParseObjectValue)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x64fcd14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                                                             { "ParseObjectValue", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(::by_ref<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser::ParseNumber)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x64fcfcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                                                             { "ParseNumber", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseBooleanValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(::by_ref<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser::ParseBooleanValue)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x64fce74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                                                             { "ParseBooleanValue", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseNullValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(::by_ref<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser::ParseNullValue)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x64fcf64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                                                             { "ParseNullValue", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.SkipToValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)()>(&::UnityEngine::InputSystem::Utilities::JsonParser::SkipToValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x64fc768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(), { "SkipToValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.SkipString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(::StringW)>(&::UnityEngine::InputSystem::Utilities::JsonParser::SkipString)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x64fd454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(), { "SkipString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.SkipWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Utilities::JsonParser::*)()>(&::UnityEngine::InputSystem::Utilities::JsonParser::SkipWhitespace)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x64fc6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(), { "SkipWhitespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.get_isAtEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)()>(&::UnityEngine::InputSystem::Utilities::JsonParser::get_isAtEnd)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64fd518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(), { "get_isAtEnd", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Utilities::JsonParser::_ctor(::StringW json) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, json);
}
inline void UnityEngine::InputSystem::Utilities::JsonParser::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::Utilities::JsonParser::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::NavigateToProperty(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(), { "NavigateToProperty", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, path);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::CurrentPropertyHasValueEqualTo(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue expectedValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                                                           { "CurrentPropertyHasValueEqualTo", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, expectedValue);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseToken(char16_t token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(), { "ParseToken", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, token);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(), { "ParseValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseValue(::by_ref<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                                                           { "ParseValue", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, result);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseStringValue(::by_ref<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                                                           { "ParseStringValue", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, result);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseArrayValue(::by_ref<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                                                           { "ParseArrayValue", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, result);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseObjectValue(::by_ref<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                                                           { "ParseObjectValue", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, result);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseNumber(::by_ref<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                                                           { "ParseNumber", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, result);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseBooleanValue(::by_ref<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                                                           { "ParseBooleanValue", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, result);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseNullValue(::by_ref<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                                                           { "ParseNullValue", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, result);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::SkipToValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(), { "SkipToValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::SkipString(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(), { "SkipString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, text);
}
inline void UnityEngine::InputSystem::Utilities::JsonParser::SkipWhitespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(), { "SkipWhitespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::get_isAtEnd() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(), { "get_isAtEnd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Text", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_Position", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MatchAnyElementInArray", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_DryRun", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Utilities::JsonParser::JsonParser(::StringW m_Text, int32_t m_Length, int32_t m_Position, bool m_MatchAnyElementInArray, bool m_DryRun) noexcept {
  this->m_Text = m_Text;
  this->m_Length = m_Length;
  this->m_Position = m_Position;
  this->m_MatchAnyElementInArray = m_MatchAnyElementInArray;
  this->m_DryRun = m_DryRun;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::JsonParser::JsonParser() {}
