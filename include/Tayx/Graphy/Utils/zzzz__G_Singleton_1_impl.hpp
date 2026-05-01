#pragma once
// IWYU pragma private; include "Tayx/Graphy/Utils/G_Singleton_1.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Tayx/Graphy/Utils/zzzz__G_Singleton_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> inline void Tayx::Graphy::Utils::G_Singleton_1<T>::setStaticF__instance(T value) {
  ::cordl_internals::setStaticField<T, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Utils::G_Singleton_1<T>*>::get>(std::forward<T>(value));
}
template <typename T> inline T Tayx::Graphy::Utils::G_Singleton_1<T>::getStaticF__instance() {
  return ::cordl_internals::getStaticField<T, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Utils::G_Singleton_1<T>*>::get>();
}
template <typename T> inline void Tayx::Graphy::Utils::G_Singleton_1<T>::setStaticF__lock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "_lock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Utils::G_Singleton_1<T>*>::get>(
      std::forward<::System::Object*>(value));
}
template <typename T> inline ::System::Object* Tayx::Graphy::Utils::G_Singleton_1<T>::getStaticF__lock() {
  return ::cordl_internals::getStaticField<::System::Object*, "_lock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Utils::G_Singleton_1<T>*>::get>();
}
template <typename T> inline T Tayx::Graphy::Utils::G_Singleton_1<T>::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Utils::G_Singleton_1<T>*>::get(), "get_Instance",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
template <typename T> inline void Tayx::Graphy::Utils::G_Singleton_1<T>::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Utils::G_Singleton_1<T>*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Tayx::Graphy::Utils::G_Singleton_1<T>::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Utils::G_Singleton_1<T>*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Tayx::Graphy::Utils::G_Singleton_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Utils::G_Singleton_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::Tayx::Graphy::Utils::G_Singleton_1<T>* Tayx::Graphy::Utils::G_Singleton_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Tayx::Graphy::Utils::G_Singleton_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::Tayx::Graphy::Utils::G_Singleton_1<T>::G_Singleton_1() {}
