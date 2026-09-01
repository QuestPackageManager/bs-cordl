#pragma once
// IWYU pragma private; include "UnityEngine\EventSystems\ISelectHandler.hpp"
#include "UnityEngine/EventSystems/zzzz__ISelectHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
//  Writing Method size for method: ::UnityEngine::EventSystems::ISelectHandler.OnSelect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::ISelectHandler::*)(::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::ISelectHandler::OnSelect)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::ISelectHandler*>(), { ::i2c::class_of<::UnityEngine::EventSystems::ISelectHandler*>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::EventSystems::ISelectHandler::OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::ISelectHandler*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr UnityEngine::EventSystems::ISelectHandler::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* UnityEngine::EventSystems::ISelectHandler::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
