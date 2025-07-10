#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XR/Haptics/GetHapticCapabilitiesCommand.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_impl.hpp"
#include "UnityEngine/InputSystem/XR/Haptics/zzzz__GetHapticCapabilitiesCommand_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/XR/Haptics/zzzz__HapticCapabilities_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(
    &::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::get_Type)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x45e8cd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand>::get(), "get_Type",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand.get_typeStatic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (
    ::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::*)()>(&::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::get_typeStatic)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x45e8d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand>::get(), "get_typeStatic",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand.get_capabilities
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities (
    ::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::*)()>(&::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::get_capabilities)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x45e89a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand>::get(),
                                                 "get_capabilities", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand (*)()>(
    &::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::Create)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x45e8944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand>::get(), "Create",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::get_Type() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand>::get(), "get_Type",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::get_typeStatic() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand>::get(), "get_typeStatic",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::get_capabilities() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand>::get(), "get_capabilities",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::Create() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand>::get(), "Create",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand, false>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*
UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: Some("{}") }, CppParam { name: "numChannels", ty:
// "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "frequencyHz", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxBufferSize", ty: "uint32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::GetHapticCapabilitiesCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand,
                                                                                                              uint32_t numChannels, uint32_t frequencyHz, uint32_t maxBufferSize) noexcept {
  this->baseCommand = baseCommand;
  this->numChannels = numChannels;
  this->frequencyHz = frequencyHz;
  this->maxBufferSize = maxBufferSize;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::GetHapticCapabilitiesCommand() {}
