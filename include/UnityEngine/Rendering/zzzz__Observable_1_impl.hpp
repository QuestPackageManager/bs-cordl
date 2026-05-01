#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Observable_1.hpp"
#include "UnityEngine/Rendering/zzzz__Observable_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template <typename T> inline void UnityEngine::Rendering::Observable_1<T>::add_onValueChanged(::System::Action_1<T>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Observable_1<T>>::get(), "add_onValueChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::Rendering::Observable_1<T>::remove_onValueChanged(::System::Action_1<T>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Observable_1<T>>::get(), "remove_onValueChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline T UnityEngine::Rendering::Observable_1<T>::get_value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Observable_1<T>>::get(), "get_value",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::Observable_1<T>::set_value(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Observable_1<T>>::get(), "set_value",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::Rendering::Observable_1<T>::_ctor(T newValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Observable_1<T>>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newValue);
}
// Ctor Parameters [CppParam { name: "onValueChanged", ty: "::System::Action_1<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Value", ty: "T", modifiers: "", def_value: Some("{}")
// }]
template <typename T> constexpr ::UnityEngine::Rendering::Observable_1<T>::Observable_1(::System::Action_1<T>* onValueChanged, T m_Value) noexcept {
  this->onValueChanged = onValueChanged;
  this->m_Value = m_Value;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::Observable_1<T>::Observable_1() {}
