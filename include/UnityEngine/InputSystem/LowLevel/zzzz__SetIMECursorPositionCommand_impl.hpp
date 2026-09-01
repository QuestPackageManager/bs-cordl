#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\LowLevel\SetIMECursorPositionCommand.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__SetIMECursorPositionCommand_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(&::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand::get_Type)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65ae030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand.get_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand::*)()>(
    &::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand::get_position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65ae03c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand>(), { "get_position", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand.get_typeStatic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand::*)()>(
    &::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand::get_typeStatic)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65ae044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand>(), { "get_typeStatic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand (*)(::UnityEngine::Vector2)>(
    &::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand::Create)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x65ae050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand>(), { "Create", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand::__cordl_internal_get_baseCommand() {
  return this->___baseCommand;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand::__cordl_internal_get_baseCommand() const {
  return this->___baseCommand;
}
constexpr void UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand::__cordl_internal_set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value) {
  this->___baseCommand = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand::__cordl_internal_get_m_Position() {
  return this->___m_Position;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand::__cordl_internal_get_m_Position() const {
  return this->___m_Position;
}
constexpr void UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand::__cordl_internal_set_m_Position(::UnityEngine::Vector2 value) {
  this->___m_Position = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand::get_Type() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand::get_position() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand>(), { "get_position", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand::get_typeStatic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand>(), { "get_typeStatic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand::Create(::UnityEngine::Vector2 cursorPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand>(), { "Create", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand>(nullptr, ___internal_method, cursorPosition);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand::operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*
UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand::i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Position", ty:
// "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand::SetIMECursorPositionCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand,
                                                                                                         ::UnityEngine::Vector2 m_Position) noexcept {
  this->baseCommand = baseCommand;
  this->m_Position = m_Position;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand::SetIMECursorPositionCommand() {}
