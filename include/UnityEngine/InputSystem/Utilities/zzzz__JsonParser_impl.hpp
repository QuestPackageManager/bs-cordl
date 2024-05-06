#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/JsonParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__JsonParser_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__Substring_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__JsonParser_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__JsonParser_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__Substring_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType::__JsonParser__JsonValueType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType::__JsonParser__JsonValueType() {}
constexpr ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType::Bool{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType::Real{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType::Integer{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType::String{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType::Array{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType::Object{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType::Any{ static_cast<int32_t>(0x7) };
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString::*)()>(
    &::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString::ToString)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x317f1bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString::*)(
    ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString)>(&::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString::Equals)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x317f2b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString::*)(::System::Object*)>(
    &::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x317f458;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString::*)()>(
    &::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString::GetHashCode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x317f4e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString)>(
        &::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString::op_Equality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x317f524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString)>(
        &::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString::op_Inequality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x317f554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString.op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString (*)(::StringW)>(
    &::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString::op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x317f588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>"
constexpr UnityEngine::InputSystem::Utilities::__JsonParser__JsonString::operator ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>"
constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>*
UnityEngine::InputSystem::Utilities::__JsonParser__JsonString::i___System__IEquatable_1___UnityEngine__InputSystem__Utilities____JsonParser__JsonString_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline ::StringW UnityEngine::InputSystem::Utilities::__JsonParser__JsonString::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Utilities::__JsonParser__JsonString::Equals(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool UnityEngine::InputSystem::Utilities::__JsonParser__JsonString::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t UnityEngine::InputSystem::Utilities::__JsonParser__JsonString::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Utilities::__JsonParser__JsonString::op_Equality(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString left,
                                                                                       ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString right) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline bool UnityEngine::InputSystem::Utilities::__JsonParser__JsonString::op_Inequality(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString left,
                                                                                         ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString right) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString
UnityEngine::InputSystem::Utilities::__JsonParser__JsonString::op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonString(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>::get(), "op_Implicit",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString, false>(nullptr, ___internal_method, str);
}
// Ctor Parameters [CppParam { name: "text", ty: "::UnityEngine::InputSystem::Utilities::Substring", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasEscapes", ty: "bool", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString::__JsonParser__JsonString(::UnityEngine::InputSystem::Utilities::Substring text, bool hasEscapes) noexcept {
  this->text = text;
  this->hasEscapes = hasEscapes;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString::__JsonParser__JsonString() {}
//  Writing Method size for method: ::GlobalNamespace::__JsonParser__JsonValue____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__JsonParser__JsonValue____c::*)()>(
    &::GlobalNamespace::__JsonParser__JsonValue____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3180a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__JsonParser__JsonValue____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__JsonParser__JsonValue____c._ToString_b__11_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__JsonParser__JsonValue____c::*)(
    ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue)>(&::GlobalNamespace::__JsonParser__JsonValue____c::_ToString_b__11_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3180a4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__JsonParser__JsonValue____c*>::get(), "<ToString>b__11_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__JsonParser__JsonValue____c._ToString_b__11_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__JsonParser__JsonValue____c::*)(
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>)>(&::GlobalNamespace::__JsonParser__JsonValue____c::_ToString_b__11_1)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3180a54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__JsonParser__JsonValue____c*>::get(), "<ToString>b__11_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__JsonParser__JsonValue____c::setStaticF___9(::GlobalNamespace::__JsonParser__JsonValue____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__JsonParser__JsonValue____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__JsonParser__JsonValue____c*>::get>(
      std::forward<::GlobalNamespace::__JsonParser__JsonValue____c*>(value));
}
inline ::GlobalNamespace::__JsonParser__JsonValue____c* GlobalNamespace::__JsonParser__JsonValue____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__JsonParser__JsonValue____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__JsonParser__JsonValue____c*>::get>();
}
inline void GlobalNamespace::__JsonParser__JsonValue____c::setStaticF___9__11_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, ::StringW>*, "<>9__11_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__JsonParser__JsonValue____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, ::StringW>* GlobalNamespace::__JsonParser__JsonValue____c::getStaticF___9__11_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, ::StringW>*, "<>9__11_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__JsonParser__JsonValue____c*>::get>();
}
inline void GlobalNamespace::__JsonParser__JsonValue____c::setStaticF___9__11_1(
    ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>, ::StringW>*,
                                    "<>9__11_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__JsonParser__JsonValue____c*>::get>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>, ::StringW>*
GlobalNamespace::__JsonParser__JsonValue____c::getStaticF___9__11_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>, ::StringW>*,
                                           "<>9__11_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__JsonParser__JsonValue____c*>::get>();
}
inline ::GlobalNamespace::__JsonParser__JsonValue____c* GlobalNamespace::__JsonParser__JsonValue____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__JsonParser__JsonValue____c*>());
}
inline void GlobalNamespace::__JsonParser__JsonValue____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__JsonParser__JsonValue____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__JsonParser__JsonValue____c::_ToString_b__11_0(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__JsonParser__JsonValue____c*>::get(), "<ToString>b__11_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
inline ::StringW
GlobalNamespace::__JsonParser__JsonValue____c::_ToString_b__11_1(::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue> pair) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__JsonParser__JsonValue____c*>::get(), "<ToString>b__11_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, pair);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__JsonParser__JsonValue____c::__JsonParser__JsonValue____c() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue.ToBoolean
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::*)()>(
    &::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::ToBoolean)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x317f5a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), "ToBoolean",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue.ToInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::*)()>(
    &::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::ToInteger)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x317fb20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), "ToInteger",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue.ToDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::*)()>(
    &::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::ToDouble)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x317fbf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), "ToDouble",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::*)()>(
    &::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::ToString)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x317f6e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue.op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue (*)(bool)>(
    &::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x317f180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), "op_Implicit",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue.op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue (*)(int64_t)>(
    &::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x317f090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue.op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue (*)(double_t)>(
    &::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x317f0b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue.op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue (*)(::StringW)>(
    &::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x317fcbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue.op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue (*)(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString)>(
        &::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x317eff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue.op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue (*)(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>*)>(
        &::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x317f06c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue.op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue (*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>*)>(
    &::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x317fcf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue.op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue (*)(::bs_hook::EnumPtr)>(
    &::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x317fd1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::EnumPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::*)(
    ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue)>(&::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::Equals)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x317fd40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Object*, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue)>(
    &::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::Equals)> {
  constexpr static std::size_t size = 0x878;
  constexpr static std::size_t addrs = 0x317ff44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::*)(::System::Object*)>(
    &::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x31807bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::*)()>(
    &::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::GetHashCode)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x318084c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue)>(
        &::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::op_Equality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x317e43c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue)>(
        &::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::op_Inequality)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x31809a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>"
constexpr UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::operator ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>"
constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>*
UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::i___System__IEquatable_1___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline bool UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::ToBoolean() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), "ToBoolean",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::ToInteger() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), "ToInteger",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::ToDouble() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), "ToDouble",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue
UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue(bool val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), "op_Implicit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, false>(nullptr, ___internal_method, val);
}
inline ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue
UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue(int64_t val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), "op_Implicit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, false>(nullptr, ___internal_method, val);
}
inline ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue
UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue(double_t val) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), "op_Implicit",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, false>(nullptr, ___internal_method, val);
}
inline ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue
UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), "op_Implicit",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, false>(nullptr, ___internal_method, str);
}
inline ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue
UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue(
    ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString str) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, false>(nullptr, ___internal_method, str);
}
inline ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue
UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue(
    ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>* array) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, false>(nullptr, ___internal_method, array);
}
inline ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue
UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>* obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, false>(nullptr, ___internal_method, obj);
}
inline ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue
UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::op_Implicit___UnityEngine__InputSystem__Utilities____JsonParser__JsonValue(::bs_hook::EnumPtr val) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), "op_Implicit",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::EnumPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue, false>(nullptr, ___internal_method, val);
}
inline bool UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::Equals(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::Equals(::System::Object* obj, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, obj, value);
}
inline bool UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::op_Equality(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue left,
                                                                                      ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue right) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline bool UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::op_Inequality(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue left,
                                                                                        ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue right) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
// Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType", modifiers: "", def_value: Some("{}") }, CppParam { name: "boolValue", ty: "bool",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "realValue", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "integerValue", ty: "int64_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "stringValue", ty: "::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "arrayValue", ty: "::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "objectValue", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>*", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "anyValue", ty: "::System::Object*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::__JsonParser__JsonValue(
    ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValueType type, bool boolValue, double_t realValue, int64_t integerValue,
    ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonString stringValue, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>* arrayValue,
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>* objectValue, ::System::Object* anyValue) noexcept {
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
constexpr ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue::__JsonParser__JsonValue() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::JsonParser::*)(::StringW)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x317da4c;

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
  constexpr static std::size_t addrs = 0x317dabc;

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
  constexpr static std::size_t addrs = 0x317dac8;

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
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x317dbb4;

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
    ::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue)>(&::UnityEngine::InputSystem::Utilities::JsonParser::CurrentPropertyHasValueEqualTo)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x317e1e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "CurrentPropertyHasValueEqualTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(char16_t)>(
    &::UnityEngine::InputSystem::Utilities::JsonParser::ParseToken)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x317e040;

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
  constexpr static std::size_t addrs = 0x317e1b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                                                                               "ParseValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(
    ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>)>(&::UnityEngine::InputSystem::Utilities::JsonParser::ParseValue)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x317e32c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "ParseValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseStringValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(
    ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>)>(&::UnityEngine::InputSystem::Utilities::JsonParser::ParseStringValue)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x317e470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "ParseStringValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseArrayValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(
    ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>)>(&::UnityEngine::InputSystem::Utilities::JsonParser::ParseArrayValue)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x317e5f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "ParseArrayValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseObjectValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(
    ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>)>(&::UnityEngine::InputSystem::Utilities::JsonParser::ParseObjectValue)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x317e8bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "ParseObjectValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(
    ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>)>(&::UnityEngine::InputSystem::Utilities::JsonParser::ParseNumber)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x317eb68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "ParseNumber", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseBooleanValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(
    ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>)>(&::UnityEngine::InputSystem::Utilities::JsonParser::ParseBooleanValue)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x317ea2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "ParseBooleanValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseNullValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(
    ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>)>(&::UnityEngine::InputSystem::Utilities::JsonParser::ParseNullValue)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x317eb04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "ParseNullValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.SkipToValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)()>(
    &::UnityEngine::InputSystem::Utilities::JsonParser::SkipToValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x317e150;

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
  constexpr static std::size_t addrs = 0x317f0d8;

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
  constexpr static std::size_t addrs = 0x317e0b4;

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
  constexpr static std::size_t addrs = 0x317f1ac;

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
inline bool UnityEngine::InputSystem::Utilities::JsonParser::CurrentPropertyHasValueEqualTo(::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue expectedValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "CurrentPropertyHasValueEqualTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>::get() })));
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
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseValue(ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "ParseValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseStringValue(ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "ParseStringValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseArrayValue(ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "ParseArrayValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseObjectValue(ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "ParseObjectValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseNumber(ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "ParseNumber", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseBooleanValue(ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "ParseBooleanValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseNullValue(ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::JsonParser>::get(), "ParseNullValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Utilities::__JsonParser__JsonValue>>::get() })));
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
// Ctor Parameters [CppParam { name: "m_Text", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_Position", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MatchAnyElementInArray", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_DryRun", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Utilities::JsonParser::JsonParser(::StringW m_Text, int32_t m_Length, int32_t m_Position, bool m_MatchAnyElementInArray, bool m_DryRun) noexcept {
  this->m_Text = m_Text;
  this->m_Length = m_Length;
  this->m_Position = m_Position;
  this->m_MatchAnyElementInArray = m_MatchAnyElementInArray;
  this->m_DryRun = m_DryRun;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::JsonParser::JsonParser() {}
