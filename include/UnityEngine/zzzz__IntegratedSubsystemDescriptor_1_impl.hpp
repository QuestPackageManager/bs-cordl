#pragma once
#include "UnityEngine/zzzz__IntegratedSubsystemDescriptor_impl.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystemDescriptor_1_def.hpp"
#include "UnityEngine/zzzz__ISubsystem_def.hpp"
template <typename TSubsystem> inline ::UnityEngine::ISubsystem* UnityEngine::IntegratedSubsystemDescriptor_1<TSubsystem>::CreateImpl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::IntegratedSubsystemDescriptor_1<TSubsystem>*>::get(),
                                                                             "CreateImpl", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ISubsystem*, false>(this, ___internal_method);
}
template <typename TSubsystem> inline TSubsystem UnityEngine::IntegratedSubsystemDescriptor_1<TSubsystem>::Create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::IntegratedSubsystemDescriptor_1<TSubsystem>*>::get(),
                                                                             "Create", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TSubsystem, false>(this, ___internal_method);
}
template <typename TSubsystem> inline ::UnityEngine::IntegratedSubsystemDescriptor_1<TSubsystem>* UnityEngine::IntegratedSubsystemDescriptor_1<TSubsystem>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::IntegratedSubsystemDescriptor_1<TSubsystem>*>());
}
template <typename TSubsystem> inline void UnityEngine::IntegratedSubsystemDescriptor_1<TSubsystem>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::IntegratedSubsystemDescriptor_1<TSubsystem>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TSubsystem> constexpr ::UnityEngine::IntegratedSubsystemDescriptor_1<TSubsystem>::IntegratedSubsystemDescriptor_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
