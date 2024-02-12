#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AnimatorControllerParameterType_impl.hpp"
#include "UnityEngine/zzzz__AnimatorControllerParameter_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::AnimatorControllerParameter.get_name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::AnimatorControllerParameter::*)()>(&::UnityEngine::AnimatorControllerParameter::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c8bbac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorControllerParameter*>::get(), "get_name",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimatorControllerParameter.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::AnimatorControllerParameter::*)(::System::Object*)>(
    &::UnityEngine::AnimatorControllerParameter::Equals)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2c8bbb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorControllerParameter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorControllerParameter*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimatorControllerParameter.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::AnimatorControllerParameter::*)()>(
    &::UnityEngine::AnimatorControllerParameter::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2c8bc90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorControllerParameter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorControllerParameter*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimatorControllerParameter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AnimatorControllerParameter::*)()>(&::UnityEngine::AnimatorControllerParameter::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2c8bcb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorControllerParameter*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::AnimatorControllerParameter::__cordl_internal_get_m_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr ::StringW const& UnityEngine::AnimatorControllerParameter::__cordl_internal_get_m_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr void UnityEngine::AnimatorControllerParameter::__cordl_internal_set_m_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimatorControllerParameterType& UnityEngine::AnimatorControllerParameter::__cordl_internal_get_m_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Type;
}
constexpr ::UnityEngine::AnimatorControllerParameterType const& UnityEngine::AnimatorControllerParameter::__cordl_internal_get_m_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Type;
}
constexpr void UnityEngine::AnimatorControllerParameter::__cordl_internal_set_m_Type(::UnityEngine::AnimatorControllerParameterType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Type = value;
}
constexpr float_t& UnityEngine::AnimatorControllerParameter::__cordl_internal_get_m_DefaultFloat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultFloat;
}
constexpr float_t const& UnityEngine::AnimatorControllerParameter::__cordl_internal_get_m_DefaultFloat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultFloat;
}
constexpr void UnityEngine::AnimatorControllerParameter::__cordl_internal_set_m_DefaultFloat(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultFloat = value;
}
constexpr int32_t& UnityEngine::AnimatorControllerParameter::__cordl_internal_get_m_DefaultInt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultInt;
}
constexpr int32_t const& UnityEngine::AnimatorControllerParameter::__cordl_internal_get_m_DefaultInt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultInt;
}
constexpr void UnityEngine::AnimatorControllerParameter::__cordl_internal_set_m_DefaultInt(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultInt = value;
}
constexpr bool& UnityEngine::AnimatorControllerParameter::__cordl_internal_get_m_DefaultBool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultBool;
}
constexpr bool const& UnityEngine::AnimatorControllerParameter::__cordl_internal_get_m_DefaultBool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultBool;
}
constexpr void UnityEngine::AnimatorControllerParameter::__cordl_internal_set_m_DefaultBool(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultBool = value;
}
inline ::StringW UnityEngine::AnimatorControllerParameter::get_name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorControllerParameter*>::get(), "get_name",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool UnityEngine::AnimatorControllerParameter::Equals(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorControllerParameter*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, o);
}
inline int32_t UnityEngine::AnimatorControllerParameter::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorControllerParameter*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::AnimatorControllerParameter* UnityEngine::AnimatorControllerParameter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AnimatorControllerParameter*>());
}
inline void UnityEngine::AnimatorControllerParameter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorControllerParameter*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::AnimatorControllerParameter::AnimatorControllerParameter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
