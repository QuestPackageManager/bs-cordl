#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\XR\Haptics\GetHapticCapabilitiesCommand.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_impl.hpp"
#include "UnityEngine/InputSystem/XR/Haptics/zzzz__GetHapticCapabilitiesCommand_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/XR/Haptics/zzzz__HapticCapabilities_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(&::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::get_Type)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x658c398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand.get_typeStatic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::*)()>(
    &::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::get_typeStatic)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x658c3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand>(), { "get_typeStatic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand.get_capabilities
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities (::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::*)()>(
    &::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::get_capabilities)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x658c0d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand>(), { "get_capabilities", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand (*)()>(
    &::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::Create)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x658c0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::__cordl_internal_get_baseCommand() {
  return this->___baseCommand;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::__cordl_internal_get_baseCommand() const {
  return this->___baseCommand;
}
constexpr void UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::__cordl_internal_set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value) {
  this->___baseCommand = value;
}
constexpr uint32_t& UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::__cordl_internal_get_numChannels() {
  return this->___numChannels;
}
constexpr uint32_t const& UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::__cordl_internal_get_numChannels() const {
  return this->___numChannels;
}
constexpr void UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::__cordl_internal_set_numChannels(uint32_t value) {
  this->___numChannels = value;
}
constexpr bool& UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::__cordl_internal_get_supportsImpulse() {
  return this->___supportsImpulse;
}
constexpr bool const& UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::__cordl_internal_get_supportsImpulse() const {
  return this->___supportsImpulse;
}
constexpr void UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::__cordl_internal_set_supportsImpulse(bool value) {
  this->___supportsImpulse = value;
}
constexpr bool& UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::__cordl_internal_get_supportsBuffer() {
  return this->___supportsBuffer;
}
constexpr bool const& UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::__cordl_internal_get_supportsBuffer() const {
  return this->___supportsBuffer;
}
constexpr void UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::__cordl_internal_set_supportsBuffer(bool value) {
  this->___supportsBuffer = value;
}
constexpr uint32_t& UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::__cordl_internal_get_frequencyHz() {
  return this->___frequencyHz;
}
constexpr uint32_t const& UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::__cordl_internal_get_frequencyHz() const {
  return this->___frequencyHz;
}
constexpr void UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::__cordl_internal_set_frequencyHz(uint32_t value) {
  this->___frequencyHz = value;
}
constexpr uint32_t& UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::__cordl_internal_get_maxBufferSize() {
  return this->___maxBufferSize;
}
constexpr uint32_t const& UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::__cordl_internal_get_maxBufferSize() const {
  return this->___maxBufferSize;
}
constexpr void UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::__cordl_internal_set_maxBufferSize(uint32_t value) {
  this->___maxBufferSize = value;
}
constexpr uint32_t& UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::__cordl_internal_get_optimalBufferSize() {
  return this->___optimalBufferSize;
}
constexpr uint32_t const& UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::__cordl_internal_get_optimalBufferSize() const {
  return this->___optimalBufferSize;
}
constexpr void UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::__cordl_internal_set_optimalBufferSize(uint32_t value) {
  this->___optimalBufferSize = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::get_Type() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::get_typeStatic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand>(), { "get_typeStatic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::get_capabilities() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand>(), { "get_capabilities", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::Create() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*
UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: Some("{}") }, CppParam { name: "numChannels", ty:
// "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "supportsImpulse", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "supportsBuffer", ty: "bool", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "frequencyHz", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxBufferSize", ty: "uint32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "optimalBufferSize", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::GetHapticCapabilitiesCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand,
                                                                                                              uint32_t numChannels, bool supportsImpulse, bool supportsBuffer, uint32_t frequencyHz,
                                                                                                              uint32_t maxBufferSize, uint32_t optimalBufferSize) noexcept {
  this->baseCommand = baseCommand;
  this->numChannels = numChannels;
  this->supportsImpulse = supportsImpulse;
  this->supportsBuffer = supportsBuffer;
  this->frequencyHz = frequencyHz;
  this->maxBufferSize = maxBufferSize;
  this->optimalBufferSize = optimalBufferSize;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::GetHapticCapabilitiesCommand() {}
