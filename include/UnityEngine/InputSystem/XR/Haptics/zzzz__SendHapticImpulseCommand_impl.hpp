#pragma once
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_impl.hpp"
#include "UnityEngine/InputSystem/XR/Haptics/zzzz__SendHapticImpulseCommand_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(
    &::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::get_Type)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2ac99a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand>::get(), "get_Type",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand.get_typeStatic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (
    ::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::*)()>(&::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::get_typeStatic)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2ac99d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand>::get(), "get_typeStatic",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand (*)(int32_t, float_t, float_t)>(
    &::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::Create)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2ac5ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand>::get(), "Create", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::__get_baseCommand() {
  return this->___baseCommand;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::__get_baseCommand() const {
  return this->___baseCommand;
}
constexpr void UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::__set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value) {
  this->___baseCommand = value;
}
constexpr int32_t& UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::__get_channel() {
  return this->___channel;
}
constexpr int32_t const& UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::__get_channel() const {
  return this->___channel;
}
constexpr void UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::__set_channel(int32_t value) {
  this->___channel = value;
}
constexpr float_t& UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::__get_amplitude() {
  return this->___amplitude;
}
constexpr float_t const& UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::__get_amplitude() const {
  return this->___amplitude;
}
constexpr void UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::__set_amplitude(float_t value) {
  this->___amplitude = value;
}
constexpr float_t& UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::__get_duration() {
  return this->___duration;
}
constexpr float_t const& UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::__get_duration() const {
  return this->___duration;
}
constexpr void UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::__set_duration(float_t value) {
  this->___duration = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::get_Type() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand>::get(), "get_Type",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::get_typeStatic() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand>::get(), "get_typeStatic",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::Create(int32_t motorChannel, float_t motorAmplitude,
                                                                                                                                                 float_t motorDuration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand>::get(), "Create", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand, false>(nullptr, ___internal_method, motorChannel, motorAmplitude, motorDuration);
}
// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: Some("{}") }, CppParam { name: "channel", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "amplitude", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "duration", ty: "float_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::SendHapticImpulseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, int32_t channel,
                                                                                                      float_t amplitude, float_t duration) noexcept {
  this->baseCommand = baseCommand;
  this->channel = channel;
  this->amplitude = amplitude;
  this->duration = duration;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::SendHapticImpulseCommand() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
