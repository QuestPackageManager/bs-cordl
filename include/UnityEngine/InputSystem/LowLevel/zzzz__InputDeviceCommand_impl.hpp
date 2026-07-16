#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputDeviceCommand.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand.get_payloadSizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::InputDeviceCommand::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputDeviceCommand::get_payloadSizeInBytes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65a8288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>(), { "get_payloadSizeInBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand.get_payloadPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::UnityEngine::InputSystem::LowLevel::InputDeviceCommand::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputDeviceCommand::get_payloadPtr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a8294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>(), { "get_payloadPtr", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputDeviceCommand::*)(::UnityEngine::InputSystem::Utilities::FourCC, int32_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputDeviceCommand::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a7efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand.AllocateNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (*)(::UnityEngine::InputSystem::Utilities::FourCC, int32_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputDeviceCommand::AllocateNative)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x65a829c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>(),
                                                             { "AllocateNative", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand.get_typeStatic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::InputDeviceCommand::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputDeviceCommand::get_typeStatic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a8338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>(), { "get_typeStatic", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Utilities::FourCC& UnityEngine::InputSystem::LowLevel::InputDeviceCommand::__cordl_internal_get_type() {
  return this->___type;
}
constexpr ::UnityEngine::InputSystem::Utilities::FourCC const& UnityEngine::InputSystem::LowLevel::InputDeviceCommand::__cordl_internal_get_type() const {
  return this->___type;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputDeviceCommand::__cordl_internal_set_type(::UnityEngine::InputSystem::Utilities::FourCC value) {
  this->___type = value;
}
constexpr int32_t& UnityEngine::InputSystem::LowLevel::InputDeviceCommand::__cordl_internal_get_sizeInBytes() {
  return this->___sizeInBytes;
}
constexpr int32_t const& UnityEngine::InputSystem::LowLevel::InputDeviceCommand::__cordl_internal_get_sizeInBytes() const {
  return this->___sizeInBytes;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputDeviceCommand::__cordl_internal_set_sizeInBytes(int32_t value) {
  this->___sizeInBytes = value;
}
inline int32_t UnityEngine::InputSystem::LowLevel::InputDeviceCommand::get_payloadSizeInBytes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>(), { "get_payloadSizeInBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void* UnityEngine::InputSystem::LowLevel::InputDeviceCommand::get_payloadPtr() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>(), { "get_payloadPtr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputDeviceCommand::_ctor(::UnityEngine::InputSystem::Utilities::FourCC type, int32_t sizeInBytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type, sizeInBytes);
}
inline ::Unity::Collections::NativeArray_1<uint8_t> UnityEngine::InputSystem::LowLevel::InputDeviceCommand::AllocateNative(::UnityEngine::InputSystem::Utilities::FourCC type, int32_t payloadSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>(),
                                                           { "AllocateNative", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>>(nullptr, ___internal_method, type, payloadSize);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::InputDeviceCommand::get_typeStatic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>(), { "get_typeStatic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr UnityEngine::InputSystem::LowLevel::InputDeviceCommand::operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo* UnityEngine::InputSystem::LowLevel::InputDeviceCommand::i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: Some("{}") }, CppParam { name: "sizeInBytes", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand::InputDeviceCommand(::UnityEngine::InputSystem::Utilities::FourCC type, int32_t sizeInBytes) noexcept {
  this->type = type;
  this->sizeInBytes = sizeInBytes;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand::InputDeviceCommand() {}
