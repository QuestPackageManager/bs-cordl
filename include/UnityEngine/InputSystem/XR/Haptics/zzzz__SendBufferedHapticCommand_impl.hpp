#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XR/Haptics/SendBufferedHapticCommand.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_impl.hpp"
#include "UnityEngine/InputSystem/XR/Haptics/zzzz__SendBufferedHapticCommand_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/XR/Haptics/zzzz__SendBufferedHapticCommand_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand__buffer_e__FixedBuffer::SendBufferedHapticCommand__buffer_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand__buffer_e__FixedBuffer::SendBufferedHapticCommand__buffer_e__FixedBuffer() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(&::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::get_Type)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6586b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand.get_typeStatic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::*)()>(
    &::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::get_typeStatic)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6586ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand>(), { "get_typeStatic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand (*)(::ArrayW<uint8_t>)>(
    &::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::Create)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x65869a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand>(), { "Create", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
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
constexpr ::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand__buffer_e__FixedBuffer& UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::__cordl_internal_get_buffer() {
  return this->___buffer;
}
constexpr ::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand__buffer_e__FixedBuffer const&
UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::__cordl_internal_get_buffer() const {
  return this->___buffer;
}
constexpr void
UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::__cordl_internal_set_buffer(::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand__buffer_e__FixedBuffer value) {
  this->___buffer = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::get_Type() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::get_typeStatic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand>(), { "get_typeStatic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::Create(::ArrayW<uint8_t> rumbleBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand>(), { "Create", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand>(nullptr, ___internal_method, rumbleBuffer);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*
UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: Some("{}") }, CppParam { name: "channel", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "buffer", ty:
// "::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand__buffer_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::SendBufferedHapticCommand(
    ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, int32_t channel, int32_t bufferSize,
    ::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand__buffer_e__FixedBuffer buffer) noexcept {
  this->baseCommand = baseCommand;
  this->channel = channel;
  this->bufferSize = bufferSize;
  this->buffer = buffer;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::SendBufferedHapticCommand() {}
