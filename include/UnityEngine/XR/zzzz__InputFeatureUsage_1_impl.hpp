#pragma once
// IWYU pragma private; include "UnityEngine/XR/InputFeatureUsage_1.hpp"
#include "System/zzzz__IEquatable_1_impl.hpp"
#include "UnityEngine/XR/zzzz__InputFeatureUsage_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> inline ::StringW UnityEngine::XR::InputFeatureUsage_1<T>::get_name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputFeatureUsage_1<T>>::get(), "get_name",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::XR::InputFeatureUsage_1<T>::set_name(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputFeatureUsage_1<T>>::get(), "set_name", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::XR::InputFeatureUsage_1<T>::_ctor(::StringW usageName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputFeatureUsage_1<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, usageName);
}
template <typename T> inline bool UnityEngine::XR::InputFeatureUsage_1<T>::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputFeatureUsage_1<T>>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template <typename T> inline bool UnityEngine::XR::InputFeatureUsage_1<T>::Equals(::UnityEngine::XR::InputFeatureUsage_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputFeatureUsage_1<T>>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::InputFeatureUsage_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template <typename T> inline int32_t UnityEngine::XR::InputFeatureUsage_1<T>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputFeatureUsage_1<T>>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage_1<T>>"
template <typename T> constexpr UnityEngine::XR::InputFeatureUsage_1<T>::operator ::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage_1<T>>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage_1<T>>"
template <typename T>
constexpr ::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage_1<T>>* UnityEngine::XR::InputFeatureUsage_1<T>::i___System__IEquatable_1___UnityEngine__XR__InputFeatureUsage_1_T__() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::UnityEngine::XR::InputFeatureUsage_1<T>::InputFeatureUsage_1(::StringW _name_k__BackingField) noexcept {
  this->_name_k__BackingField = _name_k__BackingField;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::XR::InputFeatureUsage_1<T>::InputFeatureUsage_1() {}
