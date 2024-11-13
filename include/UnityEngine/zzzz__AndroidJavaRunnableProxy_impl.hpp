#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJavaRunnableProxy.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_impl.hpp"
#include "UnityEngine/zzzz__AndroidJavaRunnableProxy_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaRunnable_def.hpp"
//  Writing Method size for method: ::UnityEngine::AndroidJavaRunnableProxy._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AndroidJavaRunnableProxy::*)(::UnityEngine::AndroidJavaRunnable*)>(
    &::UnityEngine::AndroidJavaRunnableProxy::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x47e2cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaRunnableProxy*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AndroidJavaRunnable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJavaRunnableProxy.run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AndroidJavaRunnableProxy::*)()>(&::UnityEngine::AndroidJavaRunnableProxy::run)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x47e2db8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaRunnableProxy*>::get(), "run",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJavaRunnableProxy.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::UnityEngine::AndroidJavaRunnableProxy::*)(::StringW, ::System::IntPtr)>(
    &::UnityEngine::AndroidJavaRunnableProxy::Invoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x47e2ddc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaRunnableProxy*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaRunnableProxy*>::get(), 6));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AndroidJavaRunnable*& UnityEngine::AndroidJavaRunnableProxy::__cordl_internal_get_mRunnable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRunnable;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AndroidJavaRunnable*> const& UnityEngine::AndroidJavaRunnableProxy::__cordl_internal_get_mRunnable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRunnable;
}
constexpr void UnityEngine::AndroidJavaRunnableProxy::__cordl_internal_set_mRunnable(::UnityEngine::AndroidJavaRunnable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mRunnable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::AndroidJavaRunnableProxy* UnityEngine::AndroidJavaRunnableProxy::New_ctor(::UnityEngine::AndroidJavaRunnable* runnable) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AndroidJavaRunnableProxy*>(runnable));
}
inline void UnityEngine::AndroidJavaRunnableProxy::_ctor(::UnityEngine::AndroidJavaRunnable* runnable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaRunnableProxy*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AndroidJavaRunnable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, runnable);
}
inline void UnityEngine::AndroidJavaRunnableProxy::run() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaRunnableProxy*>::get(), "run",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::AndroidJavaRunnableProxy::Invoke(::StringW methodName, ::System::IntPtr javaArgs) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaRunnableProxy*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, methodName, javaArgs);
}
// Ctor Parameters []
constexpr ::UnityEngine::AndroidJavaRunnableProxy::AndroidJavaRunnableProxy() {}
