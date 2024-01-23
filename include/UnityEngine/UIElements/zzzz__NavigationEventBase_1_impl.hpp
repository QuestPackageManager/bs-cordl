#pragma once
#include "UnityEngine/UIElements/zzzz__EventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationEventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__INavigationEvent_def.hpp"
/// @brief Convert operator to "::UnityEngine::UIElements::INavigationEvent"
template <typename T> constexpr UnityEngine::UIElements::NavigationEventBase_1<T>::operator ::UnityEngine::UIElements::INavigationEvent*() noexcept {
  return static_cast<::UnityEngine::UIElements::INavigationEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::INavigationEvent"
template <typename T> constexpr ::UnityEngine::UIElements::INavigationEvent* UnityEngine::UIElements::NavigationEventBase_1<T>::i___UnityEngine__UIElements__INavigationEvent() noexcept {
  return static_cast<::UnityEngine::UIElements::INavigationEvent*>(static_cast<void*>(this));
}
template <typename T> inline ::UnityEngine::UIElements::NavigationEventBase_1<T>* UnityEngine::UIElements::NavigationEventBase_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::NavigationEventBase_1<T>*>());
}
template <typename T> inline void UnityEngine::UIElements::NavigationEventBase_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationEventBase_1<T>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::NavigationEventBase_1<T>::Init() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationEventBase_1<T>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::NavigationEventBase_1<T>::LocalInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationEventBase_1<T>*>::get(),
                                                                             "LocalInit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::NavigationEventBase_1<T>::NavigationEventBase_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
