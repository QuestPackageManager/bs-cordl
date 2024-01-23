#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ReflectionValueProvider_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__IValueProvider_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ReflectionValueProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::ReflectionValueProvider::*)(::System::Reflection::MemberInfo*)>(
    &::Newtonsoft::Json::Serialization::ReflectionValueProvider::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x268f5a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ReflectionValueProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ReflectionValueProvider.SetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::ReflectionValueProvider::*)(::System::Object*, ::System::Object*)>(
    &::Newtonsoft::Json::Serialization::ReflectionValueProvider::SetValue)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x268f614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ReflectionValueProvider*>::get(), "SetValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ReflectionValueProvider.GetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Newtonsoft::Json::Serialization::ReflectionValueProvider::*)(::System::Object*)>(
    &::Newtonsoft::Json::Serialization::ReflectionValueProvider::GetValue)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x268f7b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ReflectionValueProvider*>::get(), "GetValue",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Newtonsoft::Json::Serialization::IValueProvider"
constexpr Newtonsoft::Json::Serialization::ReflectionValueProvider::operator ::Newtonsoft::Json::Serialization::IValueProvider*() noexcept {
  return static_cast<::Newtonsoft::Json::Serialization::IValueProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Serialization::IValueProvider"
constexpr ::Newtonsoft::Json::Serialization::IValueProvider* Newtonsoft::Json::Serialization::ReflectionValueProvider::i___Newtonsoft__Json__Serialization__IValueProvider() noexcept {
  return static_cast<::Newtonsoft::Json::Serialization::IValueProvider*>(static_cast<void*>(this));
}
constexpr ::System::Reflection::MemberInfo*& Newtonsoft::Json::Serialization::ReflectionValueProvider::__cordl_internal_get__memberInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____memberInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MemberInfo*> const& Newtonsoft::Json::Serialization::ReflectionValueProvider::__cordl_internal_get__memberInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____memberInfo;
}
constexpr void Newtonsoft::Json::Serialization::ReflectionValueProvider::__cordl_internal_set__memberInfo(::System::Reflection::MemberInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____memberInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Newtonsoft::Json::Serialization::ReflectionValueProvider* Newtonsoft::Json::Serialization::ReflectionValueProvider::New_ctor(::System::Reflection::MemberInfo* memberInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Serialization::ReflectionValueProvider*>(memberInfo));
}
inline void Newtonsoft::Json::Serialization::ReflectionValueProvider::_ctor(::System::Reflection::MemberInfo* memberInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ReflectionValueProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, memberInfo);
}
inline void Newtonsoft::Json::Serialization::ReflectionValueProvider::SetValue(::System::Object* target, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ReflectionValueProvider*>::get(),
                                                                             "SetValue", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target, value);
}
inline ::System::Object* Newtonsoft::Json::Serialization::ReflectionValueProvider::GetValue(::System::Object* target) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ReflectionValueProvider*>::get(), "GetValue",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, target);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::ReflectionValueProvider::ReflectionValueProvider() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
