#pragma once
// IWYU pragma private; include "UnityEngine/LazyLoadReference_1.hpp"
#include "UnityEngine/zzzz__LazyLoadReference_1_def.hpp"
template <typename T> inline bool UnityEngine::LazyLoadReference_1<T>::get_isSet() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LazyLoadReference_1<T>>::get(), "get_isSet",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::LazyLoadReference_1<T>::get_asset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LazyLoadReference_1<T>>::get(), "get_asset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::LazyLoadReference_1<T>::set_asset(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LazyLoadReference_1<T>>::get(), "set_asset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::LazyLoadReference_1<T> UnityEngine::LazyLoadReference_1<T>::op_Implicit___UnityEngine__LazyLoadReference_1_T_(T asset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LazyLoadReference_1<T>>::get(), "op_Implicit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LazyLoadReference_1<T>, false>(nullptr, ___internal_method, asset);
}
// Ctor Parameters [CppParam { name: "m_InstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::UnityEngine::LazyLoadReference_1<T>::LazyLoadReference_1(int32_t m_InstanceID) noexcept {
  this->m_InstanceID = m_InstanceID;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::LazyLoadReference_1<T>::LazyLoadReference_1() {}
