#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/SetSamplingFrequencyCommand.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__SetSamplingFrequencyCommand_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(
    &::UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand::get_Type)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x63f7844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand>::get(), "get_Type",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand.get_typeStatic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (
    ::UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand::*)()>(&::UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand::get_typeStatic)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x63f7850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand>::get(), "get_typeStatic",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand (*)(float_t)>(
    &::UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand::Create)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x63f785c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand>::get(), "Create",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand::__cordl_internal_get_baseCommand() {
  return this->___baseCommand;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand::__cordl_internal_get_baseCommand() const {
  return this->___baseCommand;
}
constexpr void UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand::__cordl_internal_set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value) {
  this->___baseCommand = value;
}
constexpr float_t& UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand::__cordl_internal_get_frequency() {
  return this->___frequency;
}
constexpr float_t const& UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand::__cordl_internal_get_frequency() const {
  return this->___frequency;
}
constexpr void UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand::__cordl_internal_set_frequency(float_t value) {
  this->___frequency = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand::get_Type() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand>::get(), "get_Type",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand::get_typeStatic() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand>::get(), "get_typeStatic",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand::Create(float_t frequency) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand>::get(), "Create",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand, false>(nullptr, ___internal_method, frequency);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand::operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*
UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand::i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: Some("{}") }, CppParam { name: "frequency", ty: "float_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand::SetSamplingFrequencyCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand,
                                                                                                         float_t frequency) noexcept {
  this->baseCommand = baseCommand;
  this->frequency = frequency;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand::SetSamplingFrequencyCommand() {}
