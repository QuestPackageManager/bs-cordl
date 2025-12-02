#pragma once
// IWYU pragma private; include "UnityEngine/Pool/GenericPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Pool/zzzz__GenericPool_1_def.hpp"
#include "UnityEngine/Pool/zzzz__GenericPool_1_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/Pool/zzzz__PooledObject_1_def.hpp"
template <typename T> inline void UnityEngine::Pool::GenericPool_1___c<T>::setStaticF___9(::UnityEngine::Pool::GenericPool_1___c<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pool::GenericPool_1___c<T>*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::GenericPool_1___c<T>*>::get>(
      std::forward<::UnityEngine::Pool::GenericPool_1___c<T>*>(value));
}
template <typename T> inline ::UnityEngine::Pool::GenericPool_1___c<T>* UnityEngine::Pool::GenericPool_1___c<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pool::GenericPool_1___c<T>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::GenericPool_1___c<T>*>::get>();
}
template <typename T> inline void UnityEngine::Pool::GenericPool_1___c<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::GenericPool_1___c<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::Pool::GenericPool_1___c<T>::__cctor_b__5_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::GenericPool_1___c<T>*>::get(),
                                                                             "<.cctor>b__5_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::Pool::GenericPool_1___c<T>* UnityEngine::Pool::GenericPool_1___c<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Pool::GenericPool_1___c<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Pool::GenericPool_1___c<T>::GenericPool_1___c() {}
template <typename T> inline void UnityEngine::Pool::GenericPool_1<T>::setStaticF_s_Pool(::UnityEngine::Pool::ObjectPool_1<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<T>*, "s_Pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::GenericPool_1<T>*>::get>(
      std::forward<::UnityEngine::Pool::ObjectPool_1<T>*>(value));
}
template <typename T> inline ::UnityEngine::Pool::ObjectPool_1<T>* UnityEngine::Pool::GenericPool_1<T>::getStaticF_s_Pool() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<T>*, "s_Pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::GenericPool_1<T>*>::get>();
}
template <typename T> inline T UnityEngine::Pool::GenericPool_1<T>::Get() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::GenericPool_1<T>*>::get(), "Get",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
template <typename T> inline ::UnityEngine::Pool::PooledObject_1<T> UnityEngine::Pool::GenericPool_1<T>::Get(::ByRef<T> value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::GenericPool_1<T>*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pool::PooledObject_1<T>, false>(nullptr, ___internal_method, value);
}
template <typename T> inline void UnityEngine::Pool::GenericPool_1<T>::Release(T toRelease) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::GenericPool_1<T>*>::get(), "Release",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, toRelease);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Pool::GenericPool_1<T>::GenericPool_1() {}
