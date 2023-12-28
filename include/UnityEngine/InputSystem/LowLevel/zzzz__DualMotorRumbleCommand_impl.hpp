#pragma once
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__DualMotorRumbleCommand_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(
    &::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::get_Type)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2ae87f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand>::get(), "get_Type",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand.get_typeStatic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::*)()>(
    &::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::get_typeStatic)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2ae8820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand>::get(), "get_typeStatic",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand (*)(float_t, float_t)>(
    &::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::Create)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2ae7188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand>::get(), "Create", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::__get_baseCommand() {
  return this->___baseCommand;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::__get_baseCommand() const {
  return this->___baseCommand;
}
constexpr void UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::__set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value) {
  this->___baseCommand = value;
}
constexpr float_t& UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::__get_lowFrequencyMotorSpeed() {
  return this->___lowFrequencyMotorSpeed;
}
constexpr float_t const& UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::__get_lowFrequencyMotorSpeed() const {
  return this->___lowFrequencyMotorSpeed;
}
constexpr void UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::__set_lowFrequencyMotorSpeed(float_t value) {
  this->___lowFrequencyMotorSpeed = value;
}
constexpr float_t& UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::__get_highFrequencyMotorSpeed() {
  return this->___highFrequencyMotorSpeed;
}
constexpr float_t const& UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::__get_highFrequencyMotorSpeed() const {
  return this->___highFrequencyMotorSpeed;
}
constexpr void UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::__set_highFrequencyMotorSpeed(float_t value) {
  this->___highFrequencyMotorSpeed = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::get_Type() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand>::get(), "get_Type",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::get_typeStatic() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand>::get(), "get_typeStatic",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::Create(float_t lowFrequency, float_t highFrequency) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand>::get(), "Create", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand, false>(nullptr, ___internal_method, lowFrequency, highFrequency);
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
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
