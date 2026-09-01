#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\IEventHandler.hpp"
#include "UnityEngine/UIElements/zzzz__IEventHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IEventHandler.SendEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IEventHandler::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::IEventHandler::SendEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IEventHandler*>(), { ::i2c::class_of<::UnityEngine::UIElements::IEventHandler*>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::IEventHandler::SendEvent(::UnityEngine::UIElements::EventBase* e) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IEventHandler*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
