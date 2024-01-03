#pragma once
#include "UnityEngine/zzzz__AndroidJavaProxy_impl.hpp"
#include "UnityEngine/zzzz__AndroidJavaRunnableProxy_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaRunnable_def.hpp"
//  Writing Method size for method: ::UnityEngine::AndroidJavaRunnableProxy._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AndroidJavaRunnableProxy::*)(::UnityEngine::AndroidJavaRunnable*)>(
    &::UnityEngine::AndroidJavaRunnableProxy::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2c840b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaRunnableProxy*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AndroidJavaRunnable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJavaRunnableProxy.run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AndroidJavaRunnableProxy::*)()>(&::UnityEngine::AndroidJavaRunnableProxy::run)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c841ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaRunnableProxy*>::get(), "run",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AndroidJavaRunnable*& UnityEngine::AndroidJavaRunnableProxy::__get_mRunnable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRunnable;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AndroidJavaRunnable*> const& UnityEngine::AndroidJavaRunnableProxy::__get_mRunnable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRunnable;
}
constexpr void UnityEngine::AndroidJavaRunnableProxy::__set_mRunnable(::UnityEngine::AndroidJavaRunnable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mRunnable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::AndroidJavaRunnableProxy* UnityEngine::AndroidJavaRunnableProxy::New_ctor(::UnityEngine::AndroidJavaRunnable* runnable) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::AndroidJavaRunnableProxy*>(runnable));
}
inline void UnityEngine::AndroidJavaRunnableProxy::_ctor(::UnityEngine::AndroidJavaRunnable* runnable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaRunnableProxy*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AndroidJavaRunnable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, runnable);
}
inline void UnityEngine::AndroidJavaRunnableProxy::run() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaRunnableProxy*>::get(), "run",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::AndroidJavaRunnableProxy::AndroidJavaRunnableProxy() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
