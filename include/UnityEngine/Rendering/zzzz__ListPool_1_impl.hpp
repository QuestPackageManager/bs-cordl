#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ListPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ListPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__ListPool_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__ObjectPool_1_def.hpp"
template <typename T> inline void UnityEngine::Rendering::ListPool_1___c<T>::setStaticF___9(::UnityEngine::Rendering::ListPool_1___c<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ListPool_1___c<T>*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ListPool_1___c<T>*>::get>(
      std::forward<::UnityEngine::Rendering::ListPool_1___c<T>*>(value));
}
template <typename T> inline ::UnityEngine::Rendering::ListPool_1___c<T>* UnityEngine::Rendering::ListPool_1___c<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ListPool_1___c<T>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ListPool_1___c<T>*>::get>();
}
template <typename T> inline void UnityEngine::Rendering::ListPool_1___c<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ListPool_1___c<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::ListPool_1___c<T>::__cctor_b__4_0(::System::Collections::Generic::List_1<T>* l) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ListPool_1___c<T>*>::get(), "<.cctor>b__4_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, l);
}
template <typename T> inline ::UnityEngine::Rendering::ListPool_1___c<T>* UnityEngine::Rendering::ListPool_1___c<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ListPool_1___c<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::ListPool_1___c<T>::ListPool_1___c() {}
template <typename T> inline void UnityEngine::Rendering::ListPool_1<T>::setStaticF_s_Pool(::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::List_1<T>*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::List_1<T>*>*, "s_Pool",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ListPool_1<T>*>::get>(
      std::forward<::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::List_1<T>*>*>(value));
}
template <typename T> inline ::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::List_1<T>*>* UnityEngine::Rendering::ListPool_1<T>::getStaticF_s_Pool() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::List_1<T>*>*, "s_Pool",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ListPool_1<T>*>::get>();
}
template <typename T> inline ::System::Collections::Generic::List_1<T>* UnityEngine::Rendering::ListPool_1<T>::Get() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ListPool_1<T>*>::get(), "Get",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(nullptr, ___internal_method);
}
template <typename T>
inline ::UnityEngine::Rendering::ObjectPool_1_PooledObject<::System::Collections::Generic::List_1<T>*>
UnityEngine::Rendering::ListPool_1<T>::Get(::ByRef<::System::Collections::Generic::List_1<T>*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ListPool_1<T>*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<T>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ObjectPool_1_PooledObject<::System::Collections::Generic::List_1<T>*>, false>(nullptr, ___internal_method, value);
}
template <typename T> inline void UnityEngine::Rendering::ListPool_1<T>::Release(::System::Collections::Generic::List_1<T>* toRelease) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ListPool_1<T>*>::get(), "Release", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, toRelease);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::ListPool_1<T>::ListPool_1() {}
