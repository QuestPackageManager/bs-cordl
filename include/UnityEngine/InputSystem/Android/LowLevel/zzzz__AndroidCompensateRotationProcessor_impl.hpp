#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/LowLevel/AndroidCompensateRotationProcessor.hpp"
#include "UnityEngine/InputSystem/Processors/zzzz__CompensateRotationProcessor_impl.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidCompensateRotationProcessor_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor.Process
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor::*)(
    ::UnityEngine::Quaternion, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor::Process)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x65a7a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor*>(),
                                                            { ::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor::*)()>(
    &::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x65a7a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Quaternion UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor::Process(::UnityEngine::Quaternion value,
                                                                                                                          ::UnityEngine::InputSystem::InputControl* control) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, value, control);
}
inline void UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor* UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor::AndroidCompensateRotationProcessor() {}
