#pragma once
// IWYU pragma private; include "UnityEngine\IntegratedSubsystem_1.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystem_impl.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystem_1_def.hpp"
template <typename TSubsystemDescriptor> inline void UnityEngine::IntegratedSubsystem_1<TSubsystemDescriptor>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegratedSubsystem_1<TSubsystemDescriptor>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TSubsystemDescriptor> inline ::UnityEngine::IntegratedSubsystem_1<TSubsystemDescriptor>* UnityEngine::IntegratedSubsystem_1<TSubsystemDescriptor>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::IntegratedSubsystem_1<TSubsystemDescriptor>*>());
}
// Ctor Parameters []
template <typename TSubsystemDescriptor> constexpr ::UnityEngine::IntegratedSubsystem_1<TSubsystemDescriptor>::IntegratedSubsystem_1() {}
