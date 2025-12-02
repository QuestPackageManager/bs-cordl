#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GenericPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GenericPool_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__ObjectPool_1_def.hpp"
template <typename T> inline void UnityEngine::Rendering::GenericPool_1<T>::setStaticF_s_Pool(::UnityEngine::Rendering::ObjectPool_1<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ObjectPool_1<T>*, "s_Pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GenericPool_1<T>*>::get>(
      std::forward<::UnityEngine::Rendering::ObjectPool_1<T>*>(value));
}
template <typename T> inline ::UnityEngine::Rendering::ObjectPool_1<T>* UnityEngine::Rendering::GenericPool_1<T>::getStaticF_s_Pool() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ObjectPool_1<T>*, "s_Pool",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GenericPool_1<T>*>::get>();
}
template <typename T> inline T UnityEngine::Rendering::GenericPool_1<T>::Get() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GenericPool_1<T>*>::get(), "Get",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
template <typename T> inline ::UnityEngine::Rendering::ObjectPool_1_PooledObject<T> UnityEngine::Rendering::GenericPool_1<T>::Get(::ByRef<T> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GenericPool_1<T>*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ObjectPool_1_PooledObject<T>, false>(nullptr, ___internal_method, value);
}
template <typename T> inline void UnityEngine::Rendering::GenericPool_1<T>::Release(T toRelease) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GenericPool_1<T>*>::get(), "Release",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, toRelease);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::GenericPool_1<T>::GenericPool_1() {}
