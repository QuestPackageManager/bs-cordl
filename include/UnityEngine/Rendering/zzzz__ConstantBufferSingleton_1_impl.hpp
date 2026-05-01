#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ConstantBufferSingleton_1.hpp"
#include "UnityEngine/Rendering/zzzz__ConstantBuffer_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ConstantBufferSingleton_1_def.hpp"
template <typename CBType> inline void UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>::setStaticF_s_Instance(::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>*, "s_Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>*>::get>(
      std::forward<::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>*>(value));
}
template <typename CBType> inline ::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>* UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>*, "s_Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>*>::get>();
}
template <typename CBType> inline ::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>* UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>::get_instance() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>*>::get(), "get_instance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>*, false>(nullptr, ___internal_method);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>::set_instance(::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>*>::get(), "set_instance", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>::Release() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename CBType> inline ::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>* UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>*>());
}
// Ctor Parameters []
template <typename CBType> constexpr ::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>::ConstantBufferSingleton_1() {}
