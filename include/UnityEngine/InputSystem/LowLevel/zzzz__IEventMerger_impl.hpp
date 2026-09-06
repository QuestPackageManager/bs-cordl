#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/IEventMerger.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IEventMerger_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IEventMerger.MergeForward
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::IEventMerger::*)(
    ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::LowLevel::IEventMerger::MergeForward)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IEventMerger*>(), { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IEventMerger*>(), 0 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::InputSystem::LowLevel::IEventMerger::MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr,
                                                                           ::UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::IEventMerger*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, currentEventPtr, nextEventPtr);
}
