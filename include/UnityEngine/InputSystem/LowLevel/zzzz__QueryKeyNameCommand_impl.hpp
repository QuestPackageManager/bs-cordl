#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/QueryKeyNameCommand.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__QueryKeyNameCommand_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__QueryKeyNameCommand_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Key_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand__nameBuffer_e__FixedBuffer::QueryKeyNameCommand__nameBuffer_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand__nameBuffer_e__FixedBuffer::QueryKeyNameCommand__nameBuffer_e__FixedBuffer() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(
    &::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand::get_Type)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x46081b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand>::get(),
                                                                               "get_Type", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand.ReadKeyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand::*)()>(
    &::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand::ReadKeyName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x46081e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand>::get(),
                                                                               "ReadKeyName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand.get_typeStatic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand::*)()>(
    &::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand::get_typeStatic)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x46081f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand>::get(),
                                                                               "get_typeStatic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand (*)(::UnityEngine::InputSystem::Key)>(
    &::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand::Create)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x4608220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand::__cordl_internal_get_baseCommand() {
  return this->___baseCommand;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand::__cordl_internal_get_baseCommand() const {
  return this->___baseCommand;
}
constexpr void UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand::__cordl_internal_set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value) {
  this->___baseCommand = value;
}
constexpr int32_t& UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand::__cordl_internal_get_scanOrKeyCode() {
  return this->___scanOrKeyCode;
}
constexpr int32_t const& UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand::__cordl_internal_get_scanOrKeyCode() const {
  return this->___scanOrKeyCode;
}
constexpr void UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand::__cordl_internal_set_scanOrKeyCode(int32_t value) {
  this->___scanOrKeyCode = value;
}
constexpr ::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand__nameBuffer_e__FixedBuffer& UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand::__cordl_internal_get_nameBuffer() {
  return this->___nameBuffer;
}
constexpr ::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand__nameBuffer_e__FixedBuffer const& UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand::__cordl_internal_get_nameBuffer() const {
  return this->___nameBuffer;
}
constexpr void UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand::__cordl_internal_set_nameBuffer(::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand__nameBuffer_e__FixedBuffer value) {
  this->___nameBuffer = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand::get_Type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand>::get(),
                                                                             "get_Type", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand::ReadKeyName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand>::get(),
                                                                             "ReadKeyName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand::get_typeStatic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand>::get(),
                                                                             "get_typeStatic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand::Create(::UnityEngine::InputSystem::Key key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand, false>(nullptr, ___internal_method, key);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand::operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo* UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand::i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: Some("{}") }, CppParam { name: "scanOrKeyCode", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nameBuffer", ty: "::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand__nameBuffer_e__FixedBuffer", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand::QueryKeyNameCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, int32_t scanOrKeyCode,
                                                                                         ::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand__nameBuffer_e__FixedBuffer nameBuffer) noexcept {
  this->baseCommand = baseCommand;
  this->scanOrKeyCode = scanOrKeyCode;
  this->nameBuffer = nameBuffer;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand::QueryKeyNameCommand() {}
