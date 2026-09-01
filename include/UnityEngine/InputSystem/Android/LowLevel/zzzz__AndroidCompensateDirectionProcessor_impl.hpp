#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Android\LowLevel\AndroidCompensateDirectionProcessor.hpp"
#include "UnityEngine/InputSystem/Processors/zzzz__CompensateDirectionProcessor_impl.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidCompensateDirectionProcessor_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor.Process
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor::*)(
    ::UnityEngine::Vector3, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor::Process)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x65ad1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor*>(),
                                                            { ::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor::*)()>(
    &::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x65ad214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor::Process(::UnityEngine::Vector3 vector,
                                                                                                                        ::UnityEngine::InputSystem::InputControl* control) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, vector, control);
}
inline void UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor* UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor::AndroidCompensateDirectionProcessor() {}
