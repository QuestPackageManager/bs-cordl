#pragma once
// IWYU pragma private; include "UnityEngine\IntegratedSubsystemDescriptor_1.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystemDescriptor_impl.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystemDescriptor_1_def.hpp"
#include "UnityEngine/zzzz__ISubsystem_def.hpp"
template <typename TSubsystem> inline ::UnityEngine::ISubsystem* UnityEngine::IntegratedSubsystemDescriptor_1<TSubsystem>::CreateImpl() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::IntegratedSubsystemDescriptor_1<TSubsystem>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ISubsystem*>(this, ___internal_method);
}
template <typename TSubsystem> inline TSubsystem UnityEngine::IntegratedSubsystemDescriptor_1<TSubsystem>::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegratedSubsystemDescriptor_1<TSubsystem>*>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TSubsystem>(this, ___internal_method);
}
template <typename TSubsystem> inline void UnityEngine::IntegratedSubsystemDescriptor_1<TSubsystem>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::IntegratedSubsystemDescriptor_1<TSubsystem>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TSubsystem> inline ::UnityEngine::IntegratedSubsystemDescriptor_1<TSubsystem>* UnityEngine::IntegratedSubsystemDescriptor_1<TSubsystem>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::IntegratedSubsystemDescriptor_1<TSubsystem>*>());
}
// Ctor Parameters []
template <typename TSubsystem> constexpr ::UnityEngine::IntegratedSubsystemDescriptor_1<TSubsystem>::IntegratedSubsystemDescriptor_1() {}
