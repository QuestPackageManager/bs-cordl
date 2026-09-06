#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/IEventPreProcessor.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IEventPreProcessor_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IEventPreProcessor.PreProcessEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::IEventPreProcessor::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::LowLevel::IEventPreProcessor::PreProcessEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IEventPreProcessor*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IEventPreProcessor*>(), 0 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::InputSystem::LowLevel::IEventPreProcessor::PreProcessEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IEventPreProcessor*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, currentEventPtr);
}
