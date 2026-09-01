#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\UI\INavigationEventData.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__INavigationEventData_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::INavigationEventData.get_device
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputDevice* (::UnityEngine::InputSystem::UI::INavigationEventData::*)()>(
    &::UnityEngine::InputSystem::UI::INavigationEventData::get_device)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::INavigationEventData*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::UI::INavigationEventData*>(), 0 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::UI::INavigationEventData::get_device() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::UI::INavigationEventData*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*>(this, ___internal_method);
}
