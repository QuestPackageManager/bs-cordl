#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJavaException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "UnityEngine/zzzz__AndroidJavaException_def.hpp"
//  Writing Method size for method: ::UnityEngine::AndroidJavaException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AndroidJavaException::*)(::StringW, ::StringW)>(&::UnityEngine::AndroidJavaException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x47cae88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJavaException.get_StackTrace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::AndroidJavaException::*)()>(&::UnityEngine::AndroidJavaException::get_StackTrace)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x47ce420;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaException*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaException*>::get(), 8));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::AndroidJavaException::__cordl_internal_get_mJavaStackTrace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mJavaStackTrace;
}
constexpr ::StringW const& UnityEngine::AndroidJavaException::__cordl_internal_get_mJavaStackTrace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mJavaStackTrace;
}
constexpr void UnityEngine::AndroidJavaException::__cordl_internal_set_mJavaStackTrace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mJavaStackTrace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::AndroidJavaException* UnityEngine::AndroidJavaException::New_ctor(::StringW message, ::StringW javaStackTrace) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AndroidJavaException*>(message, javaStackTrace));
}
inline void UnityEngine::AndroidJavaException::_ctor(::StringW message, ::StringW javaStackTrace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, javaStackTrace);
}
inline ::StringW UnityEngine::AndroidJavaException::get_StackTrace() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaException*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::AndroidJavaException::AndroidJavaException() {}
