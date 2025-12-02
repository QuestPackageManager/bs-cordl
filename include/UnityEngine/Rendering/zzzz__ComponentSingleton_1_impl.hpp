#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ComponentSingleton_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ComponentSingleton_1_def.hpp"
template <typename TType> inline void UnityEngine::Rendering::ComponentSingleton_1<TType>::setStaticF_s_Instance(TType value) {
  ::cordl_internals::setStaticField<TType, "s_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ComponentSingleton_1<TType>*>::get>(
      std::forward<TType>(value));
}
template <typename TType> inline TType UnityEngine::Rendering::ComponentSingleton_1<TType>::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<TType, "s_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ComponentSingleton_1<TType>*>::get>();
}
template <typename TType> inline TType UnityEngine::Rendering::ComponentSingleton_1<TType>::get_instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ComponentSingleton_1<TType>*>::get(),
                                                                             "get_instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TType, false>(nullptr, ___internal_method);
}
template <typename TType> inline void UnityEngine::Rendering::ComponentSingleton_1<TType>::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ComponentSingleton_1<TType>*>::get(),
                                                                             "Release", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TType> constexpr ::UnityEngine::Rendering::ComponentSingleton_1<TType>::ComponentSingleton_1() {}
