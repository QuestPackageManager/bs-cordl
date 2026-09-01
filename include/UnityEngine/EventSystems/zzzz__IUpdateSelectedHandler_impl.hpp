#pragma once
// IWYU pragma private; include "UnityEngine\EventSystems\IUpdateSelectedHandler.hpp"
#include "UnityEngine/EventSystems/zzzz__IUpdateSelectedHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
//  Writing Method size for method: ::UnityEngine::EventSystems::IUpdateSelectedHandler.OnUpdateSelected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::IUpdateSelectedHandler::*)(::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::IUpdateSelectedHandler::OnUpdateSelected)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::IUpdateSelectedHandler*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::EventSystems::IUpdateSelectedHandler*>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::EventSystems::IUpdateSelectedHandler::OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData* eventData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::IUpdateSelectedHandler*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr UnityEngine::EventSystems::IUpdateSelectedHandler::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* UnityEngine::EventSystems::IUpdateSelectedHandler::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
