#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/JsonParser.hpp"
#include "System/zzzz__IEquatable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__Substring_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__JsonParser_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Enum_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Utilities::JsonParser_JsonString::*)()>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonString::ToString)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x456a0f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser_JsonString::*)(
    ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString)>(&::UnityEngine::InputSystem::Utilities::JsonParser_JsonString::Equals)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x456a1f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser_JsonString::*)(::System::Object*)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonString::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x456a398;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::Utilities::JsonParser_JsonString::*)()>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonString::GetHashCode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x456a428;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::InputSystem::Utilities::JsonParser_JsonString, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString)>(
        &::UnityEngine::InputSystem::Utilities::JsonParser_JsonString::op_Equality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x456a4a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::InputSystem::Utilities::JsonParser_JsonString, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString)>(
        &::UnityEngine::InputSystem::Utilities::JsonParser_JsonString::op_Inequality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x456a4d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString.op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString (*)(::StringW)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonString::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x456a508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::InputSystem::Utilities::JsonParser_JsonString::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser_JsonString::Equals(::UnityEngine::InputSystem::Utilities::JsonParser_JsonString other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser_JsonString::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t UnityEngine::InputSystem::Utilities::JsonParser_JsonString::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser_JsonString::op_Equality(::UnityEngine::InputSystem::Utilities::JsonParser_JsonString left,
                                                                                    ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString right) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser_JsonString::op_Inequality(::UnityEngine::InputSystem::Utilities::JsonParser_JsonString left,
                                                                                      ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString right) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString
UnityEngine::InputSystem::Utilities::JsonParser_JsonString::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonString(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>::get(), "op_Implicit",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString, false>(nullptr, ___internal_method, str);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>"
constexpr UnityEngine::InputSystem::Utilities::JsonParser_JsonString::operator ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>"
constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>*
UnityEngine::InputSystem::Utilities::JsonParser_JsonString::i___System__IEquatable_1___UnityEngine__InputSystem__Utilities__JsonParser_JsonString_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::*)()>(
    &::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x456b9f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c._ToString_b__11_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::*)(
    ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue)>(&::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::_ToString_b__11_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x456b9f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>::get(), "<ToString>b__11_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c._ToString_b__11_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::*)(
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>)>(
    &::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::_ToString_b__11_1)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x456ba00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>::get(), "<ToString>b__11_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::setStaticF___9(::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>::get>(
      std::forward<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>(value));
}
inline ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c* UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>::get>();
}
inline void UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::setStaticF___9__11_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, ::StringW>*, "<>9__11_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, ::StringW>* UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::getStaticF___9__11_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, ::StringW>*, "<>9__11_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>::get>();
}
inline void UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::setStaticF___9__11_1(
    ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>, ::StringW>*, "<>9__11_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>::get>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>, ::StringW>*
UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::getStaticF___9__11_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>, ::StringW>*,
                                           "<>9__11_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>::get>();
}
inline void UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::_ToString_b__11_0(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>::get(), "<ToString>b__11_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
inline ::StringW UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::_ToString_b__11_1(
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue> pair) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>::get(), "<ToString>b__11_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, pair);
}
inline ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c* UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::JsonValue_JsonParser___c() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.ToBoolean
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::*)()>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::ToBoolean)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x456a528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), "ToBoolean",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.ToInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::*)()>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::ToInteger)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x456aad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), "ToInteger",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.ToDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::*)()>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::ToDouble)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x456aba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), "ToDouble",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::*)()>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::ToString)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x456a668;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue (*)(bool)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x456a0b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), "op_Implicit",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue (*)(int64_t)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4569fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue (*)(double_t)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4569ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue (*)(::StringW)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x456ac74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue (*)(::UnityEngine::InputSystem::Utilities::JsonParser_JsonString)>(
        &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x4569f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue (*)(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>*)>(
        &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4569fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue (*)(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>*)>(
        &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x456acb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue (*)(::System::Enum*)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x456acd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Enum*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::*)(
    ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue)>(&::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::Equals)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x456acf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Object*, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::Equals)> {
  constexpr static std::size_t size = 0x88c;
  constexpr static std::size_t addrs = 0x456aef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::*)(::System::Object*)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x456b780;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::*)()>(
    &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::GetHashCode)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x456b810;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue)>(
        &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Equality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x456937c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue)>(
        &::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Inequality)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x456b95c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::ToBoolean() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(),
                                                                             "ToBoolean", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::ToInteger() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(),
                                                                             "ToInteger", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::ToDouble() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(),
                                                                             "ToDouble", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue
UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue(bool val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), "op_Implicit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, false>(nullptr, ___internal_method, val);
}
inline ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue
UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue(int64_t val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), "op_Implicit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, false>(nullptr, ___internal_method, val);
}
inline ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue
UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue(double_t val) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), "op_Implicit",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, false>(nullptr, ___internal_method, val);
}
inline ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue
UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), "op_Implicit",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, false>(nullptr, ___internal_method, str);
}
inline ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue
UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue(::UnityEngine::InputSystem::Utilities::JsonParser_JsonString str) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::JsonParser_JsonString>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, false>(nullptr, ___internal_method, str);
}
inline ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue(
    ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>* array) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, false>(nullptr, ___internal_method, array);
}
inline ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>* obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, false>(nullptr, ___internal_method, obj);
}
inline ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue
UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue(::System::Enum* val) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), "op_Implicit",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Enum*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, false>(nullptr, ___internal_method, val);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::Equals(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::Equals(::System::Object* obj, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, obj, value);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Equality(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue left,
                                                                                   ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue right) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::op_Inequality(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue left,
                                                                                     ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue right) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>"
constexpr UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::operator ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>"
constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>*
UnityEngine::InputSystem::Utilities::JsonParser_JsonValue::i___System__IEquatable_1___UnityEngine__InputSystem__Utilities__JsonParser_JsonValue_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::JsonParser::*)(::StringW)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x455f9b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::JsonParser::*)()>(
    &::UnityEngine::InputSystem::Utilities::JsonParser::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4568fd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                                                                               "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Utilities::JsonParser::*)()>(
    &::UnityEngine::InputSystem::Utilities::JsonParser::ToString)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x4568fe0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.NavigateToProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(::StringW)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser::NavigateToProperty)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x455fa70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "NavigateToProperty",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.CurrentPropertyHasValueEqualTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(
    ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue)>(&::UnityEngine::InputSystem::Utilities::JsonParser::CurrentPropertyHasValueEqualTo)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x455fef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "CurrentPropertyHasValueEqualTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(char16_t)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser::ParseToken)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x45690cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "ParseToken",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)()>(
    &::UnityEngine::InputSystem::Utilities::JsonParser::ParseValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x456923c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                                                                               "ParseValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(
    ::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>)>(&::UnityEngine::InputSystem::Utilities::JsonParser::ParseValue)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x456926c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "ParseValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseStringValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(
    ::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>)>(&::UnityEngine::InputSystem::Utilities::JsonParser::ParseStringValue)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x45693b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "ParseStringValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseArrayValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(
    ::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>)>(&::UnityEngine::InputSystem::Utilities::JsonParser::ParseArrayValue)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x4569540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "ParseArrayValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseObjectValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(
    ::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>)>(&::UnityEngine::InputSystem::Utilities::JsonParser::ParseObjectValue)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x45697f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "ParseObjectValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(
    ::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>)>(&::UnityEngine::InputSystem::Utilities::JsonParser::ParseNumber)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x4569a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "ParseNumber", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseBooleanValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(
    ::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>)>(&::UnityEngine::InputSystem::Utilities::JsonParser::ParseBooleanValue)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x4569960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "ParseBooleanValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseNullValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(
    ::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>)>(&::UnityEngine::InputSystem::Utilities::JsonParser::ParseNullValue)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x4569a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "ParseNullValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.SkipToValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)()>(
    &::UnityEngine::InputSystem::Utilities::JsonParser::SkipToValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x45691dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                                                                               "SkipToValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.SkipString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(::StringW)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser::SkipString)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x456a010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "SkipString",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.SkipWhitespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::JsonParser::*)()>(
    &::UnityEngine::InputSystem::Utilities::JsonParser::SkipWhitespace)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4569140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                                                                               "SkipWhitespace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.get_isAtEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)()>(
    &::UnityEngine::InputSystem::Utilities::JsonParser::get_isAtEnd)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x456a0e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                                                                               "get_isAtEnd", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Utilities::JsonParser::_ctor(::StringW json) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, json);
}
inline void UnityEngine::InputSystem::Utilities::JsonParser::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::Utilities::JsonParser::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::NavigateToProperty(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "NavigateToProperty",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, path);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::CurrentPropertyHasValueEqualTo(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue expectedValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "CurrentPropertyHasValueEqualTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, expectedValue);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseToken(char16_t token) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "ParseToken",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, token);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                                                                             "ParseValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseValue(::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "ParseValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseStringValue(::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "ParseStringValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseArrayValue(::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "ParseArrayValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseObjectValue(::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "ParseObjectValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseNumber(::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "ParseNumber", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseBooleanValue(::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "ParseBooleanValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseNullValue(::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "ParseNullValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::SkipToValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                                                                             "SkipToValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::SkipString(::StringW text) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "SkipString",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, text);
}
inline void UnityEngine::InputSystem::Utilities::JsonParser::SkipWhitespace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                                                                             "SkipWhitespace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::get_isAtEnd() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                                                                             "get_isAtEnd", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
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
