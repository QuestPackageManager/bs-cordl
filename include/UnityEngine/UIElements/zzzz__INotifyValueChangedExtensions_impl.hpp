#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__INotifyValueChangedExtensions_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallback_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ChangeEvent_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__INotifyValueChanged_1_def.hpp"
template <typename T>
inline bool UnityEngine::UIElements::INotifyValueChangedExtensions::RegisterValueChangedCallback(::UnityEngine::UIElements::INotifyValueChanged_1<T>* control,
                                                                                                 ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<T>*>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::INotifyValueChangedExtensions*>::get(), "RegisterValueChangedCallback",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::INotifyValueChanged_1<T>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<T>*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control, callback);
}
template <typename T>
inline bool UnityEngine::UIElements::INotifyValueChangedExtensions::UnregisterValueChangedCallback(::UnityEngine::UIElements::INotifyValueChanged_1<T>* control,
                                                                                                   ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<T>*>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::INotifyValueChangedExtensions*>::get(), "UnregisterValueChangedCallback",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::INotifyValueChanged_1<T>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<T>*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control, callback);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::INotifyValueChangedExtensions::INotifyValueChangedExtensions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
