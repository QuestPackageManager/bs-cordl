#pragma once
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand.get_payloadSizeInBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::InputDeviceCommand::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputDeviceCommand::get_payloadSizeInBytes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3016324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>::get(),
                                                                               "get_payloadSizeInBytes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand.get_payloadPtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<void> (::UnityEngine::InputSystem::LowLevel::InputDeviceCommand::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputDeviceCommand::get_payloadPtr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3016330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>::get(),
                                                                               "get_payloadPtr", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputDeviceCommand::*)(
    ::UnityEngine::InputSystem::Utilities::FourCC, int32_t)>(&::UnityEngine::InputSystem::LowLevel::InputDeviceCommand::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3015df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::FourCC>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand.AllocateNative
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (*)(::UnityEngine::InputSystem::Utilities::FourCC, int32_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputDeviceCommand::AllocateNative)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3016338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>::get(), "AllocateNative", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::FourCC>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand.get_typeStatic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::InputDeviceCommand::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputDeviceCommand::get_typeStatic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30163e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>::get(),
                                                                               "get_typeStatic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr UnityEngine::InputSystem::LowLevel::InputDeviceCommand::operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo* UnityEngine::InputSystem::LowLevel::InputDeviceCommand::i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>::get(),
                                                                             "get_payloadSizeInBytes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::cordl_internals::Ptr<void> UnityEngine::InputSystem::LowLevel::InputDeviceCommand::get_payloadPtr() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>::get(),
                                                                             "get_payloadPtr", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<void>, false>(this, ___internal_method);
}
/// @param sizeInBytes: int32_t (default: static_cast<int32_t>(0x8))
inline void UnityEngine::InputSystem::LowLevel::InputDeviceCommand::_ctor(::UnityEngine::InputSystem::Utilities::FourCC type, int32_t sizeInBytes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::FourCC>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, sizeInBytes);
}
inline ::Unity::Collections::NativeArray_1<uint8_t> UnityEngine::InputSystem::LowLevel::InputDeviceCommand::AllocateNative(::UnityEngine::InputSystem::Utilities::FourCC type, int32_t payloadSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>::get(), "AllocateNative", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::FourCC>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>, false>(nullptr, ___internal_method, type, payloadSize);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::InputDeviceCommand::get_typeStatic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>::get(),
                                                                             "get_typeStatic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: Some("{}") }, CppParam { name: "sizeInBytes", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand::InputDeviceCommand(::UnityEngine::InputSystem::Utilities::FourCC type, int32_t sizeInBytes) noexcept {
  this->type = type;
  this->sizeInBytes = sizeInBytes;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand::InputDeviceCommand() {}
