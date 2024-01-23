#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ComponentSingleton_1_def.hpp"
template <typename T> inline void UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::setStaticF_s_Instance(T value) {
  ::cordl_internals::setStaticField<T, "s_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>*>::get>(
      std::forward<T>(value));
}
template <typename T> inline T UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<T, "s_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>*>::get>();
}
template <typename T> inline bool UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::get_Exists() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>*>::get(), "get_Exists",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
template <typename T> inline T UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::get_Instance() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>*>::get(), "get_Instance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
template <typename T> inline T UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::FindInstance() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>*>::get(), "FindInstance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
template <typename T> inline ::StringW UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::GetGameObjectName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::CreateNewSingleton() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>*>::get(), "CreateNewSingleton",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
template <typename T> inline void UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::Awake() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>*>::get(), "Awake",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::DestroySingleton() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>*>::get(), "DestroySingleton",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
template <typename T> inline ::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>* UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>*>());
}
template <typename T> inline void UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::ComponentSingleton_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
