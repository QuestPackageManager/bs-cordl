#pragma once
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__SetIMECursorPositionCommand_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(
    &::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand::get_Type)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2bcf01c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand>::get(), "get_Type",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand.get_position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand::*)()>(
    &::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand::get_position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bcf04c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand>::get(), "get_position",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand.get_typeStatic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (
    ::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand::*)()>(&::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand::get_typeStatic)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2bcf054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand>::get(), "get_typeStatic",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand (*)(::UnityEngine::Vector2)>(
    &::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand::Create)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2bcf084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand::operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*
UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand::i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
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
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand>::get(), "get_Type",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand::get_position() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand>::get(), "get_position",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand::get_typeStatic() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand>::get(), "get_typeStatic",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand::Create(::UnityEngine::Vector2 cursorPosition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand, false>(nullptr, ___internal_method, cursorPosition);
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
