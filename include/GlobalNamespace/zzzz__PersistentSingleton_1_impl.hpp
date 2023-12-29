#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PersistentSingleton_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> inline void GlobalNamespace::PersistentSingleton_1<T>::setStaticF__instance(T value) {
  ::cordl_internals::setStaticField<T, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PersistentSingleton_1<T>*>::get>(std::forward<T>(value));
}
template <typename T> inline T GlobalNamespace::PersistentSingleton_1<T>::getStaticF__instance() {
  return ::cordl_internals::getStaticField<T, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PersistentSingleton_1<T>*>::get>();
}
template <typename T> inline void GlobalNamespace::PersistentSingleton_1<T>::setStaticF__lock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "_lock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PersistentSingleton_1<T>*>::get>(
      std::forward<::System::Object*>(value));
}
template <typename T> inline ::System::Object* GlobalNamespace::PersistentSingleton_1<T>::getStaticF__lock() {
  return ::cordl_internals::getStaticField<::System::Object*, "_lock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PersistentSingleton_1<T>*>::get>();
}
template <typename T> inline void GlobalNamespace::PersistentSingleton_1<T>::setStaticF__applicationIsQuitting(bool value) {
  ::cordl_internals::setStaticField<bool, "_applicationIsQuitting", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PersistentSingleton_1<T>*>::get>(
      std::forward<bool>(value));
}
template <typename T> inline bool GlobalNamespace::PersistentSingleton_1<T>::getStaticF__applicationIsQuitting() {
  return ::cordl_internals::getStaticField<bool, "_applicationIsQuitting", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PersistentSingleton_1<T>*>::get>();
}
template <typename T> inline T GlobalNamespace::PersistentSingleton_1<T>::get_instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PersistentSingleton_1<T>*>::get(),
                                                                             "get_instance", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
template <typename T> inline void GlobalNamespace::PersistentSingleton_1<T>::TouchInstance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PersistentSingleton_1<T>*>::get(),
                                                                             "TouchInstance", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::PersistentSingleton_1<T>::get_IsSingletonAvailable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PersistentSingleton_1<T>*>::get(),
                                                                             "get_IsSingletonAvailable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
template <typename T> inline void GlobalNamespace::PersistentSingleton_1<T>::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PersistentSingleton_1<T>*>::get(), "OnEnable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::PersistentSingleton_1<T>::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PersistentSingleton_1<T>*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::PersistentSingleton_1<T>* GlobalNamespace::PersistentSingleton_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PersistentSingleton_1<T>*>());
}
template <typename T> inline void GlobalNamespace::PersistentSingleton_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PersistentSingleton_1<T>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::PersistentSingleton_1<T>::PersistentSingleton_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
