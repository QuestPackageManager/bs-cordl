#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/INotifyBindablePropertyChanged.hpp"
#include "UnityEngine/UIElements/zzzz__INotifyBindablePropertyChanged_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindablePropertyChangedEventArgs_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::INotifyBindablePropertyChanged.add_propertyChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::INotifyBindablePropertyChanged::*)(
    ::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>*)>(&::UnityEngine::UIElements::INotifyBindablePropertyChanged::add_propertyChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::INotifyBindablePropertyChanged*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::INotifyBindablePropertyChanged*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::INotifyBindablePropertyChanged.remove_propertyChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::INotifyBindablePropertyChanged::*)(
    ::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>*)>(&::UnityEngine::UIElements::INotifyBindablePropertyChanged::remove_propertyChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::INotifyBindablePropertyChanged*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::INotifyBindablePropertyChanged*>::get(), 1));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::INotifyBindablePropertyChanged::add_propertyChanged(::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::INotifyBindablePropertyChanged*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::INotifyBindablePropertyChanged::remove_propertyChanged(::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::INotifyBindablePropertyChanged*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
