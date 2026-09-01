#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\LowLevel\DualMotorRumbleCommand.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__DualMotorRumbleCommand_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(&::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::get_Type)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65ae1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand.get_typeStatic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::*)()>(
    &::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::get_typeStatic)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65ae1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand>(), { "get_typeStatic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand (*)(float_t, float_t)>(
    &::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::Create)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x65ad498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand>(), { "Create", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::__cordl_internal_get_baseCommand() {
  return this->___baseCommand;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::__cordl_internal_get_baseCommand() const {
  return this->___baseCommand;
}
constexpr void UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::__cordl_internal_set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value) {
  this->___baseCommand = value;
}
constexpr float_t& UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::__cordl_internal_get_lowFrequencyMotorSpeed() {
  return this->___lowFrequencyMotorSpeed;
}
constexpr float_t const& UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::__cordl_internal_get_lowFrequencyMotorSpeed() const {
  return this->___lowFrequencyMotorSpeed;
}
constexpr void UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::__cordl_internal_set_lowFrequencyMotorSpeed(float_t value) {
  this->___lowFrequencyMotorSpeed = value;
}
constexpr float_t& UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::__cordl_internal_get_highFrequencyMotorSpeed() {
  return this->___highFrequencyMotorSpeed;
}
constexpr float_t const& UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::__cordl_internal_get_highFrequencyMotorSpeed() const {
  return this->___highFrequencyMotorSpeed;
}
constexpr void UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::__cordl_internal_set_highFrequencyMotorSpeed(float_t value) {
  this->___highFrequencyMotorSpeed = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::get_typeStatic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand>(), { "get_typeStatic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::Create(float_t lowFrequency, float_t highFrequency) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand>(), { "Create", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand>(nullptr, ___internal_method, lowFrequency, highFrequency);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo* UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: Some("{}") }, CppParam { name: "lowFrequencyMotorSpeed",
// ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "highFrequencyMotorSpeed", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::DualMotorRumbleCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, float_t lowFrequencyMotorSpeed,
                                                                                               float_t highFrequencyMotorSpeed) noexcept {
  this->baseCommand = baseCommand;
  this->lowFrequencyMotorSpeed = lowFrequencyMotorSpeed;
  this->highFrequencyMotorSpeed = highFrequencyMotorSpeed;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::DualMotorRumbleCommand() {}
