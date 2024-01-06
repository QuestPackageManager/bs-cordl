#pragma once
#include "GlobalNamespace/zzzz__ICoroutineStarter_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ICoroutineStarter.StartCoroutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Coroutine* (::GlobalNamespace::ICoroutineStarter::*)(::System::Collections::IEnumerator*)>(
    &::GlobalNamespace::ICoroutineStarter::StartCoroutine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ICoroutineStarter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ICoroutineStarter*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ICoroutineStarter.StopCoroutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ICoroutineStarter::*)(::UnityEngine::Coroutine*)>(
    &::GlobalNamespace::ICoroutineStarter::StopCoroutine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ICoroutineStarter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ICoroutineStarter*>::get(), 1));
    return ___internal_method;
  }
};
inline ::UnityEngine::Coroutine* GlobalNamespace::ICoroutineStarter::StartCoroutine(::System::Collections::IEnumerator* routine) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ICoroutineStarter*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Coroutine*, false>(this, ___internal_method, routine);
}
inline void GlobalNamespace::ICoroutineStarter::StopCoroutine(::UnityEngine::Coroutine* routine) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ICoroutineStarter*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, routine);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
