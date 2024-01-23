#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "RootMotion/zzzz__Singleton_1_def.hpp"
template <typename T> inline void RootMotion::Singleton_1<T>::setStaticF_sInstance(T value) {
  ::cordl_internals::setStaticField<T, "sInstance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Singleton_1<T>*>::get>(std::forward<T>(value));
}
template <typename T> inline T RootMotion::Singleton_1<T>::getStaticF_sInstance() {
  return ::cordl_internals::getStaticField<T, "sInstance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Singleton_1<T>*>::get>();
}
template <typename T> inline T RootMotion::Singleton_1<T>::get_instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Singleton_1<T>*>::get(), "get_instance",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
template <typename T> inline void RootMotion::Singleton_1<T>::Awake() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Singleton_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::RootMotion::Singleton_1<T>* RootMotion::Singleton_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::Singleton_1<T>*>());
}
template <typename T> inline void RootMotion::Singleton_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Singleton_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::RootMotion::Singleton_1<T>::Singleton_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
