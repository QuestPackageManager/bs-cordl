#pragma once
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_impl.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__OpenXRInput_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionReference_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__OpenXRInput_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "System/zzzz__Guid_def.hpp"
constexpr ::System::Guid& UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedGuid::__get_guid() {
  return this->___guid;
}
constexpr ::System::Guid const& UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedGuid::__get_guid() const {
  return this->___guid;
}
constexpr void UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedGuid::__set_guid(::System::Guid value) {
  this->___guid = value;
}
constexpr uint64_t& UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedGuid::__get_ulong1() {
  return this->___ulong1;
}
constexpr uint64_t const& UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedGuid::__get_ulong1() const {
  return this->___ulong1;
}
constexpr void UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedGuid::__set_ulong1(uint64_t value) {
  this->___ulong1 = value;
}
constexpr uint64_t& UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedGuid::__get_ulong2() {
  return this->___ulong2;
}
constexpr uint64_t const& UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedGuid::__get_ulong2() const {
  return this->___ulong2;
}
constexpr void UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedGuid::__set_ulong2(uint64_t value) {
  this->___ulong2 = value;
}
// Ctor Parameters [CppParam { name: "guid", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "ulong1", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "ulong2", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedGuid::__OpenXRInput__SerializedGuid(::System::Guid guid, uint64_t ulong1, uint64_t ulong2) noexcept {
  this->guid = guid;
  this->ulong1 = ulong1;
  this->ulong2 = ulong2;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedGuid::__OpenXRInput__SerializedGuid() {}
// Ctor Parameters [CppParam { name: "actionId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedBinding::__OpenXRInput__SerializedBinding(uint64_t actionId, ::StringW path) noexcept {
  this->actionId = actionId;
  this->path = path;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedBinding::__OpenXRInput__SerializedBinding() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__InputSourceNameFlags::__OpenXRInput__InputSourceNameFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__InputSourceNameFlags::__OpenXRInput__InputSourceNameFlags() {}
constexpr ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__InputSourceNameFlags UnityEngine::XR::OpenXR::Input::__OpenXRInput__InputSourceNameFlags::UserPath{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__InputSourceNameFlags UnityEngine::XR::OpenXR::Input::__OpenXRInput__InputSourceNameFlags::InteractionProfile{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__InputSourceNameFlags UnityEngine::XR::OpenXR::Input::__OpenXRInput__InputSourceNameFlags::Component{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__InputSourceNameFlags UnityEngine::XR::OpenXR::Input::__OpenXRInput__InputSourceNameFlags::All{ static_cast<int32_t>(0x7) };
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(
    &::UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand::get_Type)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2b054d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand>::get(), "get_Type",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand.get_typeStatic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (
    ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand::*)()>(&::UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand::get_typeStatic)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2b05500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand>::get(),
                                                 "get_typeStatic", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand (*)()>(
    &::UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand::Create)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2b04fbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand>::get(), "Create",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand::operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand::__get_baseCommand() {
  return this->___baseCommand;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand::__get_baseCommand() const {
  return this->___baseCommand;
}
constexpr void UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand::__set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value) {
  this->___baseCommand = value;
}
constexpr uint32_t& UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand::__get_deviceId() {
  return this->___deviceId;
}
constexpr uint32_t const& UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand::__get_deviceId() const {
  return this->___deviceId;
}
constexpr void UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand::__set_deviceId(uint32_t value) {
  this->___deviceId = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand::get_Type() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand>::get(), "get_Type",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand::get_typeStatic() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand>::get(),
                                               "get_typeStatic", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand::Create() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand>::get(), "Create",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand, false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: Some("{}") }, CppParam { name: "deviceId", ty: "uint32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand::__OpenXRInput__GetInternalDeviceIdCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand,
                                                                                                                                 uint32_t deviceId) noexcept {
  this->baseCommand = baseCommand;
  this->deviceId = deviceId;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand::__OpenXRInput__GetInternalDeviceIdCommand() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c::*)()>(
    &::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b05594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c._AttachActionSets_b__9_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c::*)(
    ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*)>(&::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c::_AttachActionSets_b__9_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2b0559c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c*>::get(), "<AttachActionSets>b__9_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c._AttachActionSets_b__9_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c::*)(
    ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig*)>(&::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c::_AttachActionSets_b__9_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2b055b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c*>::get(), "<AttachActionSets>b__9_1", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c._AttachActionSets_b__9_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c::*)(
    ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*)>(&::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c::_AttachActionSets_b__9_2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2b055c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c*>::get(), "<AttachActionSets>b__9_2", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c._AttachActionSets_b__9_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (
    ::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c::*)(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*)>(
    &::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c::_AttachActionSets_b__9_3)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2b055e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c*>::get(), "<AttachActionSets>b__9_3", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::Input::__OpenXRInput____c::setStaticF___9(::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c*>::get>(
      std::forward<::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c*>(value));
}
inline ::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c* UnityEngine::XR::OpenXR::Input::__OpenXRInput____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c*>::get>();
}
inline void UnityEngine::XR::OpenXR::Input::__OpenXRInput____c::setStaticF___9__9_0(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*, bool>*, "<>9__9_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*, bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*, bool>* UnityEngine::XR::OpenXR::Input::__OpenXRInput____c::getStaticF___9__9_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*, bool>*, "<>9__9_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c*>::get>();
}
inline void
UnityEngine::XR::OpenXR::Input::__OpenXRInput____c::setStaticF___9__9_1(::System::Func_2<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig*, ::StringW>*, "<>9__9_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig*, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig*, ::StringW>* UnityEngine::XR::OpenXR::Input::__OpenXRInput____c::getStaticF___9__9_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig*, ::StringW>*, "<>9__9_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c*>::get>();
}
inline void UnityEngine::XR::OpenXR::Input::__OpenXRInput____c::setStaticF___9__9_2(::System::Func_2<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*, bool>*, "<>9__9_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*, bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*, bool>* UnityEngine::XR::OpenXR::Input::__OpenXRInput____c::getStaticF___9__9_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*, bool>*, "<>9__9_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c*>::get>();
}
inline void UnityEngine::XR::OpenXR::Input::__OpenXRInput____c::setStaticF___9__9_3(
    ::System::Func_2<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*, ::System::Collections::Generic::IEnumerable_1<::StringW>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*, ::System::Collections::Generic::IEnumerable_1<::StringW>*>*,
                                    "<>9__9_3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*, ::System::Collections::Generic::IEnumerable_1<::StringW>*>*>(value));
}
inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*, ::System::Collections::Generic::IEnumerable_1<::StringW>*>*
UnityEngine::XR::OpenXR::Input::__OpenXRInput____c::getStaticF___9__9_3() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*, ::System::Collections::Generic::IEnumerable_1<::StringW>*>*, "<>9__9_3",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c*>::get>();
}
inline ::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c* UnityEngine::XR::OpenXR::Input::__OpenXRInput____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c*>());
}
inline void UnityEngine::XR::OpenXR::Input::__OpenXRInput____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::Input::__OpenXRInput____c::_AttachActionSets_b__9_0(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature* f) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c*>::get(), "<AttachActionSets>b__9_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, f);
}
inline ::StringW UnityEngine::XR::OpenXR::Input::__OpenXRInput____c::_AttachActionSets_b__9_1(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig* d) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c*>::get(), "<AttachActionSets>b__9_1", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, d);
}
inline bool UnityEngine::XR::OpenXR::Input::__OpenXRInput____c::_AttachActionSets_b__9_2(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding* b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c*>::get(), "<AttachActionSets>b__9_2", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, b);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>*
UnityEngine::XR::OpenXR::Input::__OpenXRInput____c::_AttachActionSets_b__9_3(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding* b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c*>::get(), "<AttachActionSets>b__9_3", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*, false>(this, ___internal_method, b);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c::__OpenXRInput____c() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.RegisterLayouts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::RegisterLayouts)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2afd938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(),
                                                                               "RegisterLayouts", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.ValidateActionMapConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*, ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig*)>(
        &::UnityEngine::XR::OpenXR::Input::OpenXRInput::ValidateActionMapConfig)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2b0383c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "ValidateActionMapConfig", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.AttachActionSets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::AttachActionSets)> {
  constexpr static std::size_t size = 0x1568;
  constexpr static std::size_t addrs = 0x2aff0f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(),
                                                                               "AttachActionSets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.SanitizeCharForOpenXRPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(char16_t)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::SanitizeCharForOpenXRPath)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2b04354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "SanitizeCharForOpenXRPath",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.SanitizeStringForOpenXRPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::SanitizeStringForOpenXRPath)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2b03cf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "SanitizeStringForOpenXRPath",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.GetActionHandleName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput::GetActionHandleName)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2b04450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "GetActionHandleName", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.SendHapticImpulse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::InputSystem::InputActionReference*, float_t, float_t, ::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::SendHapticImpulse)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2b04528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "SendHapticImpulse", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.SendHapticImpulse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::InputSystem::InputActionReference*, float_t, float_t, float_t, ::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::SendHapticImpulse)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2b045a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "SendHapticImpulse", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.SendHapticImpulse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputAction*, float_t, float_t, ::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput::SendHapticImpulse)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2b04724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "SendHapticImpulse", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.SendHapticImpulse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::InputSystem::InputAction*, float_t, float_t, float_t, ::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::SendHapticImpulse)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2b04648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "SendHapticImpulse", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.StopHaptics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionReference*, ::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput::StopHaptics)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2b04b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "StopHaptics", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.StopHaptics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput::StopHaptics)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2b04c28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "StopHaptics", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.TryGetInputSourceName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::UnityEngine::InputSystem::InputAction*, int32_t, ByRef<::StringW>, ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__InputSourceNameFlags, ::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput::TryGetInputSourceName)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2b04d40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "TryGetInputSourceName", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Input::__OpenXRInput__InputSourceNameFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.GetActionHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput::GetActionHandle)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x2b047a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "GetActionHandle", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.GetDeviceId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput::GetDeviceId)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2b04a10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "GetDeviceId", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.UserPathToDeviceName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::UserPathToDeviceName)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x2b03a08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "UserPathToDeviceName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_SendHapticImpulse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint32_t, uint64_t, float_t, float_t, float_t)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_SendHapticImpulse)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2b04ab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "Internal_SendHapticImpulse", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_StopHaptics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint32_t, uint64_t)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_StopHaptics)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2b04cbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "Internal_StopHaptics", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_GetActionId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint32_t, ::StringW)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_GetActionId)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2b04f1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "Internal_GetActionId", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_TryGetInputSourceNamePtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t, uint64_t, uint32_t, uint32_t, ByRef<void*>)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_TryGetInputSourceNamePtr)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2b0500c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "Internal_TryGetInputSourceNamePtr", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_TryGetInputSourceName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t, uint64_t, uint32_t, uint32_t, ByRef<::StringW>)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_TryGetInputSourceName)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2b04e24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "Internal_TryGetInputSourceName", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_RegisterDeviceDefinition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::StringW, ::StringW, uint32_t, ::StringW, ::StringW, ::StringW)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_RegisterDeviceDefinition)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2b03be4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "Internal_RegisterDeviceDefinition", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_CreateActionSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::StringW, ::StringW, ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedGuid)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_CreateActionSet)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2b03eac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "Internal_CreateActionSet", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedGuid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_CreateAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<uint64_t (*)(uint64_t, ::StringW, ::StringW, uint32_t, ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedGuid, ::ArrayW<::StringW, ::Array<::StringW>*>, uint32_t,
                             ::ArrayW<::StringW, ::Array<::StringW>*>, uint32_t)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_CreateAction)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x2b03f70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "Internal_CreateAction", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedGuid>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_SuggestBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::StringW, ::ArrayW<::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedBinding, ::Array<::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedBinding>*>, uint32_t)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_SuggestBindings)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2b041a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "Internal_SuggestBindings", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedBinding, ::Array<::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedBinding>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_AttachActionSets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_AttachActionSets)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b042f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(),
                                                                               "Internal_AttachActionSets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput::setStaticF_ExpectedControlTypeToActionType(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType>*,
                                    "ExpectedControlTypeToActionType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType>*
UnityEngine::XR::OpenXR::Input::OpenXRInput::getStaticF_ExpectedControlTypeToActionType() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType>*,
                                           "ExpectedControlTypeToActionType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get>();
}
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput::setStaticF_kVirtualControlMap(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "kVirtualControlMap",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* UnityEngine::XR::OpenXR::Input::OpenXRInput::getStaticF_kVirtualControlMap() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "kVirtualControlMap",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get>();
}
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput::RegisterLayouts() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(),
                                                                             "RegisterLayouts", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::Input::OpenXRInput::ValidateActionMapConfig(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature* interactionFeature,
                                                                                 ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig* actionMapConfig) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "ValidateActionMapConfig", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, interactionFeature, actionMapConfig);
}
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput::AttachActionSets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(),
                                                                             "AttachActionSets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline char16_t UnityEngine::XR::OpenXR::Input::OpenXRInput::SanitizeCharForOpenXRPath(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "SanitizeCharForOpenXRPath",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, c);
}
inline ::StringW UnityEngine::XR::OpenXR::Input::OpenXRInput::SanitizeStringForOpenXRPath(::StringW input) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "SanitizeStringForOpenXRPath",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, input);
}
inline ::StringW UnityEngine::XR::OpenXR::Input::OpenXRInput::GetActionHandleName(::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "GetActionHandleName", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, control);
}
/// @param inputDevice: ::UnityEngine::InputSystem::InputDevice* (default: nullptr)
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput::SendHapticImpulse(::UnityEngine::InputSystem::InputActionReference* actionRef, float_t amplitude, float_t duration,
                                                                           ::UnityEngine::InputSystem::InputDevice* inputDevice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "SendHapticImpulse", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actionRef, amplitude, duration, inputDevice);
}
/// @param inputDevice: ::UnityEngine::InputSystem::InputDevice* (default: nullptr)
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput::SendHapticImpulse(::UnityEngine::InputSystem::InputActionReference* actionRef, float_t amplitude, float_t frequency, float_t duration,
                                                                           ::UnityEngine::InputSystem::InputDevice* inputDevice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "SendHapticImpulse", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actionRef, amplitude, frequency, duration, inputDevice);
}
/// @param inputDevice: ::UnityEngine::InputSystem::InputDevice* (default: nullptr)
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput::SendHapticImpulse(::UnityEngine::InputSystem::InputAction* action, float_t amplitude, float_t duration,
                                                                           ::UnityEngine::InputSystem::InputDevice* inputDevice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "SendHapticImpulse", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action, amplitude, duration, inputDevice);
}
/// @param inputDevice: ::UnityEngine::InputSystem::InputDevice* (default: nullptr)
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput::SendHapticImpulse(::UnityEngine::InputSystem::InputAction* action, float_t amplitude, float_t frequency, float_t duration,
                                                                           ::UnityEngine::InputSystem::InputDevice* inputDevice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "SendHapticImpulse", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action, amplitude, frequency, duration, inputDevice);
}
/// @param inputDevice: ::UnityEngine::InputSystem::InputDevice* (default: nullptr)
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput::StopHaptics(::UnityEngine::InputSystem::InputActionReference* actionRef, ::UnityEngine::InputSystem::InputDevice* inputDevice) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "StopHaptics", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actionRef, inputDevice);
}
/// @param inputDevice: ::UnityEngine::InputSystem::InputDevice* (default: nullptr)
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput::StopHaptics(::UnityEngine::InputSystem::InputAction* inputAction, ::UnityEngine::InputSystem::InputDevice* inputDevice) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "StopHaptics", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, inputAction, inputDevice);
}
/// @param flags: ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__InputSourceNameFlags (default: static_cast<int32_t>(0x7))
/// @param inputDevice: ::UnityEngine::InputSystem::InputDevice* (default: nullptr)
inline bool UnityEngine::XR::OpenXR::Input::OpenXRInput::TryGetInputSourceName(::UnityEngine::InputSystem::InputAction* inputAction, int32_t index, ByRef<::StringW> name,
                                                                               ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__InputSourceNameFlags flags,
                                                                               ::UnityEngine::InputSystem::InputDevice* inputDevice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "TryGetInputSourceName", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Input::__OpenXRInput__InputSourceNameFlags>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, inputAction, index, name, flags, inputDevice);
}
/// @param inputDevice: ::UnityEngine::InputSystem::InputDevice* (default: nullptr)
inline uint64_t UnityEngine::XR::OpenXR::Input::OpenXRInput::GetActionHandle(::UnityEngine::InputSystem::InputAction* inputAction, ::UnityEngine::InputSystem::InputDevice* inputDevice) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "GetActionHandle", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, inputAction, inputDevice);
}
inline uint32_t UnityEngine::XR::OpenXR::Input::OpenXRInput::GetDeviceId(::UnityEngine::InputSystem::InputDevice* inputDevice) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "GetDeviceId", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, inputDevice);
}
inline ::StringW UnityEngine::XR::OpenXR::Input::OpenXRInput::UserPathToDeviceName(::StringW userPath) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "UserPathToDeviceName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, userPath);
}
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_SendHapticImpulse(uint32_t deviceId, uint64_t actionId, float_t amplitude, float_t frequency, float_t duration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "Internal_SendHapticImpulse", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, deviceId, actionId, amplitude, frequency, duration);
}
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_StopHaptics(uint32_t deviceId, uint64_t actionId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "Internal_StopHaptics", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, deviceId, actionId);
}
inline uint64_t UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_GetActionId(uint32_t deviceId, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "Internal_GetActionId", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, deviceId, name);
}
inline bool UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_TryGetInputSourceNamePtr(uint32_t deviceId, uint64_t actionId, uint32_t index, uint32_t flags, ByRef<void*> outName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "Internal_TryGetInputSourceNamePtr", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, deviceId, actionId, index, flags, outName);
}
inline bool UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_TryGetInputSourceName(uint32_t deviceId, uint64_t actionId, uint32_t index, uint32_t flags, ByRef<::StringW> outName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "Internal_TryGetInputSourceName", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, deviceId, actionId, index, flags, outName);
}
inline uint64_t UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_RegisterDeviceDefinition(::StringW userPath, ::StringW interactionProfile, uint32_t characteristics, ::StringW name,
                                                                                               ::StringW manufacturer, ::StringW serialNumber) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "Internal_RegisterDeviceDefinition", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, userPath, interactionProfile, characteristics, name, manufacturer, serialNumber);
}
inline uint64_t UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_CreateActionSet(::StringW name, ::StringW localizedName, ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedGuid guid) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "Internal_CreateActionSet", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedGuid>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, name, localizedName, guid);
}
inline uint64_t UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_CreateAction(uint64_t actionSetId, ::StringW name, ::StringW localizedName, uint32_t actionType,
                                                                                   ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedGuid guid,
                                                                                   ::ArrayW<::StringW, ::Array<::StringW>*> userPaths, uint32_t userPathCount,
                                                                                   ::ArrayW<::StringW, ::Array<::StringW>*> usages, uint32_t usageCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "Internal_CreateAction", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedGuid>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, actionSetId, name, localizedName, actionType, guid, userPaths, userPathCount, usages, usageCount);
}
inline bool UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_SuggestBindings(
    ::StringW interactionProfile,
    ::ArrayW<::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedBinding, ::Array<::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedBinding>*> serializedBindings,
    uint32_t serializedBindingCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(), "Internal_SuggestBindings", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedBinding, ::Array<::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedBinding>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, interactionProfile, serializedBindings, serializedBindingCount);
}
inline bool UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_AttachActionSets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>::get(),
                                                                             "Internal_AttachActionSets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Input::OpenXRInput::OpenXRInput() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
