#pragma once
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__QueryKeyboardLayoutCommand_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__QueryKeyboardLayoutCommand_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__QueryKeyboardLayoutCommand_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer::__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer::__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(
    &::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::get_Type)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2bce8d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand>::get(), "get_Type",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand.ReadLayoutName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::*)()>(
    &::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::ReadLayoutName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bce908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand>::get(), "ReadLayoutName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand.WriteLayoutName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::*)(::StringW)>(
    &::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::WriteLayoutName)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2bce918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand>::get(), "WriteLayoutName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand.get_typeStatic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (
    ::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::*)()>(&::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::get_typeStatic)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2bce93c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand>::get(), "get_typeStatic",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand (*)()>(
    &::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::Create)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2bce96c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand>::get(), "Create",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*
UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::__cordl_internal_get_baseCommand() {
  return this->___baseCommand;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::__cordl_internal_get_baseCommand() const {
  return this->___baseCommand;
}
constexpr void UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::__cordl_internal_set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value) {
  this->___baseCommand = value;
}
constexpr ::UnityEngine::InputSystem::LowLevel::__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer&
UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::__cordl_internal_get_nameBuffer() {
  return this->___nameBuffer;
}
constexpr ::UnityEngine::InputSystem::LowLevel::__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer const&
UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::__cordl_internal_get_nameBuffer() const {
  return this->___nameBuffer;
}
constexpr void
UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::__cordl_internal_set_nameBuffer(::UnityEngine::InputSystem::LowLevel::__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer value) {
  this->___nameBuffer = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::get_Type() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand>::get(), "get_Type",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::ReadLayoutName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand>::get(), "ReadLayoutName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::WriteLayoutName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand>::get(), "WriteLayoutName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::get_typeStatic() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand>::get(), "get_typeStatic",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::Create() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand>::get(), "Create",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand, false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: Some("{}") }, CppParam { name: "nameBuffer", ty:
// "::UnityEngine::InputSystem::LowLevel::__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::QueryKeyboardLayoutCommand(
    ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, ::UnityEngine::InputSystem::LowLevel::__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer nameBuffer) noexcept {
  this->baseCommand = baseCommand;
  this->nameBuffer = nameBuffer;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::QueryKeyboardLayoutCommand() {}
