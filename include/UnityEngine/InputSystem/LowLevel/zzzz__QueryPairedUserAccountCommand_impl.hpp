#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\LowLevel\QueryPairedUserAccountCommand.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__QueryPairedUserAccountCommand_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__QueryPairedUserAccountCommand_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand_Result::QueryPairedUserAccountCommand_Result(int64_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand_Result::QueryPairedUserAccountCommand_Result() {}
constexpr ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand_Result UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand_Result::DevicePairedToUserAccount{
  static_cast<int64_t>(0x2)
};
constexpr ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand_Result UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand_Result::UserAccountSelectionInProgress{
  static_cast<int64_t>(0x4)
};
constexpr ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand_Result UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand_Result::UserAccountSelectionComplete{
  static_cast<int64_t>(0x8)
};
constexpr ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand_Result UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand_Result::UserAccountSelectionCanceled{
  static_cast<int64_t>(0x10)
};
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(&::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::get_Type)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65adcc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand.get_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::*)()>(
    &::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::get_id)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65adcd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand>(), { "get_id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand.set_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::*)(::StringW)>(
    &::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::set_id)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x65adcf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand>(), { "set_id", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::*)()>(
    &::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::get_name)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65ade00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand.set_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::*)(::StringW)>(
    &::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::set_name)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x65ade20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand.get_typeStatic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::*)()>(
    &::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::get_typeStatic)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65adf30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand>(), { "get_typeStatic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand (*)()>(
    &::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::Create)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65adf3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::__cordl_internal_get_baseCommand() {
  return this->___baseCommand;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::__cordl_internal_get_baseCommand() const {
  return this->___baseCommand;
}
constexpr void UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::__cordl_internal_set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value) {
  this->___baseCommand = value;
}
constexpr uint64_t& UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::__cordl_internal_get_handle() {
  return this->___handle;
}
constexpr uint64_t const& UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::__cordl_internal_get_handle() const {
  return this->___handle;
}
constexpr void UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::__cordl_internal_set_handle(uint64_t value) {
  this->___handle = value;
}
constexpr ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer&
UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::__cordl_internal_get_nameBuffer() {
  return this->___nameBuffer;
}
constexpr ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer const&
UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::__cordl_internal_get_nameBuffer() const {
  return this->___nameBuffer;
}
constexpr void UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::__cordl_internal_set_nameBuffer(
    ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer value) {
  this->___nameBuffer = value;
}
constexpr ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer&
UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::__cordl_internal_get_idBuffer() {
  return this->___idBuffer;
}
constexpr ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer const&
UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::__cordl_internal_get_idBuffer() const {
  return this->___idBuffer;
}
constexpr void
UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::__cordl_internal_set_idBuffer(::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer value) {
  this->___idBuffer = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::get_Type() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::get_id() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand>(), { "get_id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::set_id(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand>(), { "set_id", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::get_name() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::set_name(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::get_typeStatic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand>(), { "get_typeStatic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::Create() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*
UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: Some("{}") }, CppParam { name: "handle", ty: "uint64_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "nameBuffer", ty: "::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "idBuffer", ty: "::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::QueryPairedUserAccountCommand(
    ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, uint64_t handle, ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer nameBuffer,
    ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer idBuffer) noexcept {
  this->baseCommand = baseCommand;
  this->handle = handle;
  this->nameBuffer = nameBuffer;
  this->idBuffer = idBuffer;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::QueryPairedUserAccountCommand() {}
