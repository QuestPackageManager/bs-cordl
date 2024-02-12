#pragma once
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_impl.hpp"
#include "UnityEngine/InputSystem/XR/Haptics/zzzz__SendBufferedHapticCommand_impl.hpp"
#include "UnityEngine/InputSystem/XR/Haptics/zzzz__SendBufferedHapticCommand_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/XR/Haptics/zzzz__SendBufferedHapticCommand_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XR::Haptics::__SendBufferedHapticCommand___buffer_e__FixedBuffer::__SendBufferedHapticCommand___buffer_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::Haptics::__SendBufferedHapticCommand___buffer_e__FixedBuffer::__SendBufferedHapticCommand___buffer_e__FixedBuffer() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(
    &::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::get_Type)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2aca4ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand>::get(), "get_Type",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand.get_typeStatic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (
    ::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::*)()>(&::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::get_typeStatic)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2aca4dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand>::get(), "get_typeStatic",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::Create)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2aca1cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*
UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::__cordl_internal_get_baseCommand() {
  return this->___baseCommand;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::__cordl_internal_get_baseCommand() const {
  return this->___baseCommand;
}
constexpr void UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::__cordl_internal_set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value) {
  this->___baseCommand = value;
}
constexpr int32_t& UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::__cordl_internal_get_channel() {
  return this->___channel;
}
constexpr int32_t const& UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::__cordl_internal_get_channel() const {
  return this->___channel;
}
constexpr void UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::__cordl_internal_set_channel(int32_t value) {
  this->___channel = value;
}
constexpr int32_t& UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::__cordl_internal_get_bufferSize() {
  return this->___bufferSize;
}
constexpr int32_t const& UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::__cordl_internal_get_bufferSize() const {
  return this->___bufferSize;
}
constexpr void UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::__cordl_internal_set_bufferSize(int32_t value) {
  this->___bufferSize = value;
}
constexpr ::UnityEngine::InputSystem::XR::Haptics::__SendBufferedHapticCommand___buffer_e__FixedBuffer&
UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::__cordl_internal_get_buffer() {
  return this->___buffer;
}
constexpr ::UnityEngine::InputSystem::XR::Haptics::__SendBufferedHapticCommand___buffer_e__FixedBuffer const&
UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::__cordl_internal_get_buffer() const {
  return this->___buffer;
}
constexpr void
UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::__cordl_internal_set_buffer(::UnityEngine::InputSystem::XR::Haptics::__SendBufferedHapticCommand___buffer_e__FixedBuffer value) {
  this->___buffer = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::get_Type() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand>::get(), "get_Type",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::get_typeStatic() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand>::get(), "get_typeStatic",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::Create(::ArrayW<uint8_t, ::Array<uint8_t>*> rumbleBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand, false>(nullptr, ___internal_method, rumbleBuffer);
}
// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: Some("{}") }, CppParam { name: "channel", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "buffer", ty:
// "::UnityEngine::InputSystem::XR::Haptics::__SendBufferedHapticCommand___buffer_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::SendBufferedHapticCommand(
    ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, int32_t channel, int32_t bufferSize,
    ::UnityEngine::InputSystem::XR::Haptics::__SendBufferedHapticCommand___buffer_e__FixedBuffer buffer) noexcept {
  this->baseCommand = baseCommand;
  this->channel = channel;
  this->bufferSize = bufferSize;
  this->buffer = buffer;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::SendBufferedHapticCommand() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
