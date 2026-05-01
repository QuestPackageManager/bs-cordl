#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/EnumParameter_1.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__EnumParameter_1_def.hpp"
template <typename T> inline void UnityEngine::Rendering::EnumParameter_1<T>::_ctor(T value, bool overrideState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::EnumParameter_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, overrideState);
}
template <typename T> inline ::UnityEngine::Rendering::EnumParameter_1<T>* UnityEngine::Rendering::EnumParameter_1<T>::New_ctor(T value, bool overrideState) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::EnumParameter_1<T>*>(value, overrideState));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::EnumParameter_1<T>::EnumParameter_1() {}
