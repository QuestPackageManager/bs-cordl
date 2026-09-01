#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\XR\Haptics\GetCurrentHapticStateCommand.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_impl.hpp"
#include "UnityEngine/InputSystem/XR/Haptics/zzzz__GetCurrentHapticStateCommand_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/XR/Haptics/zzzz__HapticState_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(&::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand::get_Type)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x658c308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand.get_typeStatic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand::*)()>(
    &::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand::get_typeStatic)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x658c314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand>(), { "get_typeStatic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand.get_currentState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::XR::Haptics::HapticState (::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand::*)()>(
    &::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand::get_currentState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x658c320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand>(), { "get_currentState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand (*)()>(
    &::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand::Create)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x658c328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand::__cordl_internal_get_baseCommand() {
  return this->___baseCommand;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand::__cordl_internal_get_baseCommand() const {
  return this->___baseCommand;
}
constexpr void UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand::__cordl_internal_set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value) {
  this->___baseCommand = value;
}
constexpr uint32_t& UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand::__cordl_internal_get_samplesQueued() {
  return this->___samplesQueued;
}
constexpr uint32_t const& UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand::__cordl_internal_get_samplesQueued() const {
  return this->___samplesQueued;
}
constexpr void UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand::__cordl_internal_set_samplesQueued(uint32_t value) {
  this->___samplesQueued = value;
}
constexpr uint32_t& UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand::__cordl_internal_get_samplesAvailable() {
  return this->___samplesAvailable;
}
constexpr uint32_t const& UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand::__cordl_internal_get_samplesAvailable() const {
  return this->___samplesAvailable;
}
constexpr void UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand::__cordl_internal_set_samplesAvailable(uint32_t value) {
  this->___samplesAvailable = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand::get_Type() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand::get_typeStatic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand>(), { "get_typeStatic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XR::Haptics::HapticState UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand::get_currentState() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand>(), { "get_currentState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::Haptics::HapticState>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand::Create() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand::operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*
UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand::i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: Some("{}") }, CppParam { name: "samplesQueued", ty:
// "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "samplesAvailable", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand::GetCurrentHapticStateCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand,
                                                                                                              uint32_t samplesQueued, uint32_t samplesAvailable) noexcept {
  this->baseCommand = baseCommand;
  this->samplesQueued = samplesQueued;
  this->samplesAvailable = samplesAvailable;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand::GetCurrentHapticStateCommand() {}
