#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\LowLevel\InitiateUserAccountPairingCommand.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InitiateUserAccountPairingCommand_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InitiateUserAccountPairingCommand_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand_Result::InitiateUserAccountPairingCommand_Result(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand_Result::InitiateUserAccountPairingCommand_Result() {}
constexpr ::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand_Result UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand_Result::SuccessfullyInitiated{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand_Result UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand_Result::ErrorNotSupported{
  static_cast<int32_t>(0xffffffff)
};
constexpr ::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand_Result UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand_Result::ErrorAlreadyInProgress{
  static_cast<int32_t>(0xfffffffe)
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(&::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand::get_Type)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65ad788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand.get_typeStatic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand::get_typeStatic)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65ad794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand>(), { "get_typeStatic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand (*)()>(
    &::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand::Create)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x65ad7a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand::__cordl_internal_get_baseCommand() {
  return this->___baseCommand;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand::__cordl_internal_get_baseCommand() const {
  return this->___baseCommand;
}
constexpr void UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand::__cordl_internal_set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value) {
  this->___baseCommand = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand::get_Type() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand::get_typeStatic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand>(), { "get_typeStatic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand::Create() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand::operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*
UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand::i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand::InitiateUserAccountPairingCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand) noexcept {
  this->baseCommand = baseCommand;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand::InitiateUserAccountPairingCommand() {}
