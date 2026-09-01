#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\LowLevel\DeviceConfigurationEvent.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__DeviceConfigurationEvent_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputEventTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent.get_typeStatic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::*)()>(
    &::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::get_typeStatic)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65af1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent>(), { "get_typeStatic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent.ToEventPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventPtr (::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::*)()>(
    &::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::ToEventPtr)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65af1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent>(), { "ToEventPtr", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent (*)(int32_t, double_t)>(
    &::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::Create)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x65af1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent>(),
                                                                                           { "Create", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent& UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::__cordl_internal_get_baseEvent() {
  return this->___baseEvent;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent const& UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::__cordl_internal_get_baseEvent() const {
  return this->___baseEvent;
}
constexpr void UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::__cordl_internal_set_baseEvent(::UnityEngine::InputSystem::LowLevel::InputEvent value) {
  this->___baseEvent = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::get_typeStatic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent>(), { "get_typeStatic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::ToEventPtr() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent>(), { "ToEventPtr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::Create(int32_t deviceId, double_t time) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent>(),
                                                                                         { "Create", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent>(nullptr, ___internal_method, deviceId, time);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
constexpr UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::operator ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo* UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::i___UnityEngine__InputSystem__LowLevel__IInputEventTypeInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "baseEvent", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::DeviceConfigurationEvent(::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent) noexcept {
  this->baseEvent = baseEvent;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::DeviceConfigurationEvent() {}
