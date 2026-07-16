#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/UI/ExtendedSubmitCancelEventData.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__ExtendedSubmitCancelEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__INavigationEventData_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData.get_device
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputDevice* (::UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData::*)()>(
    &::UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData::get_device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x658d6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData*>(), { "get_device", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData.set_device
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData::set_device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x658d6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData*>(),
                                                                                           { "set_device", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData::*)(::UnityEngine::EventSystems::EventSystem*)>(
    &::UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x658d6d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::EventSystems::EventSystem*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::InputDevice*& UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData::__cordl_internal_get__device_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____device_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::InputDevice* const& UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData::__cordl_internal_get__device_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____device_k__BackingField;
}
constexpr void UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData::__cordl_internal_set__device_k__BackingField(::UnityEngine::InputSystem::InputDevice* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____device_k__BackingField = value;
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData::get_device() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData*>(), { "get_device", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData::set_device(::UnityEngine::InputSystem::InputDevice* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData*>(),
                                                                                         { "set_device", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData::_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::EventSystems::EventSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventSystem);
}
inline ::UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData* UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData::New_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData*>(eventSystem));
}
/// @brief Convert operator to "::UnityEngine::InputSystem::UI::INavigationEventData"
constexpr UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData::operator ::UnityEngine::InputSystem::UI::INavigationEventData*() noexcept {
  return static_cast<::UnityEngine::InputSystem::UI::INavigationEventData*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::UI::INavigationEventData"
constexpr ::UnityEngine::InputSystem::UI::INavigationEventData* UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData::i___UnityEngine__InputSystem__UI__INavigationEventData() noexcept {
  return static_cast<::UnityEngine::InputSystem::UI::INavigationEventData*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::UI::ExtendedSubmitCancelEventData::ExtendedSubmitCancelEventData() {}
