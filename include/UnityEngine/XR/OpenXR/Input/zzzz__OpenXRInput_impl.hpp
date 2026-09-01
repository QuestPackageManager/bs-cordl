#pragma once
// IWYU pragma private; include "UnityEngine\XR\OpenXR\Input\OpenXRInput.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_impl.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__OpenXRInput_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionReference_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__OpenXRInput_def.hpp"
#include "UnityEngine/XR/zzzz__InputDeviceCharacteristics_def.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
#include "UnityEngine/XR/zzzz__InputFeatureUsage_def.hpp"
constexpr ::System::Guid& UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedGuid::__cordl_internal_get_guid() {
  return this->___guid;
}
constexpr ::System::Guid const& UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedGuid::__cordl_internal_get_guid() const {
  return this->___guid;
}
constexpr void UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedGuid::__cordl_internal_set_guid(::System::Guid value) {
  this->___guid = value;
}
constexpr uint64_t& UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedGuid::__cordl_internal_get_ulong1() {
  return this->___ulong1;
}
constexpr uint64_t const& UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedGuid::__cordl_internal_get_ulong1() const {
  return this->___ulong1;
}
constexpr void UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedGuid::__cordl_internal_set_ulong1(uint64_t value) {
  this->___ulong1 = value;
}
constexpr uint64_t& UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedGuid::__cordl_internal_get_ulong2() {
  return this->___ulong2;
}
constexpr uint64_t const& UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedGuid::__cordl_internal_get_ulong2() const {
  return this->___ulong2;
}
constexpr void UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedGuid::__cordl_internal_set_ulong2(uint64_t value) {
  this->___ulong2 = value;
}
// Ctor Parameters [CppParam { name: "guid", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "ulong1", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "ulong2", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedGuid::OpenXRInput_SerializedGuid(::System::Guid guid, uint64_t ulong1, uint64_t ulong2) noexcept {
  this->guid = guid;
  this->ulong1 = ulong1;
  this->ulong2 = ulong2;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedGuid::OpenXRInput_SerializedGuid() {}
// Ctor Parameters [CppParam { name: "actionId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedBinding::OpenXRInput_SerializedBinding(uint64_t actionId, ::StringW path) noexcept {
  this->actionId = actionId;
  this->path = path;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedBinding::OpenXRInput_SerializedBinding() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::Input::OpenXRInput_InputSourceNameFlags::OpenXRInput_InputSourceNameFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Input::OpenXRInput_InputSourceNameFlags::OpenXRInput_InputSourceNameFlags() {}
constexpr ::UnityEngine::XR::OpenXR::Input::OpenXRInput_InputSourceNameFlags UnityEngine::XR::OpenXR::Input::OpenXRInput_InputSourceNameFlags::UserPath{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::Input::OpenXRInput_InputSourceNameFlags UnityEngine::XR::OpenXR::Input::OpenXRInput_InputSourceNameFlags::InteractionProfile{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::OpenXR::Input::OpenXRInput_InputSourceNameFlags UnityEngine::XR::OpenXR::Input::OpenXRInput_InputSourceNameFlags::Component{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::XR::OpenXR::Input::OpenXRInput_InputSourceNameFlags UnityEngine::XR::OpenXR::Input::OpenXRInput_InputSourceNameFlags::All{ static_cast<int32_t>(0x7) };
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand::get_Type)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69fad0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand.get_typeStatic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand::*)()>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand::get_typeStatic)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69fad18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand>(), { "get_typeStatic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand (*)()>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand::Create)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x69fa5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand::__cordl_internal_get_baseCommand() {
  return this->___baseCommand;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand::__cordl_internal_get_baseCommand() const {
  return this->___baseCommand;
}
constexpr void UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand::__cordl_internal_set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value) {
  this->___baseCommand = value;
}
constexpr uint32_t& UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand::__cordl_internal_get_deviceId() {
  return this->___deviceId;
}
constexpr uint32_t const& UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand::__cordl_internal_get_deviceId() const {
  return this->___deviceId;
}
constexpr void UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand::__cordl_internal_set_deviceId(uint32_t value) {
  this->___deviceId = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand::get_Type() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand::get_typeStatic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand>(), { "get_typeStatic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(*this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand::Create() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand::operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*
UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand::i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: Some("{}") }, CppParam { name: "deviceId", ty: "uint32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand::OpenXRInput_GetInternalDeviceIdCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand,
                                                                                                                           uint32_t deviceId) noexcept {
  this->baseCommand = baseCommand;
  this->deviceId = deviceId;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand::OpenXRInput_GetInternalDeviceIdCommand() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Input::OpenXRInput___c::*)()>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69fad78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput___c._AttachActionSets_b__9_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::Input::OpenXRInput___c::*)(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput___c::_AttachActionSets_b__9_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x69fad7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*>(),
                                                             { "<AttachActionSets>b__9_0", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput___c._AttachActionSets_b__9_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::Input::OpenXRInput___c::*)(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput___c::_AttachActionSets_b__9_1)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x69fadc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*>(),
                                                             { "<AttachActionSets>b__9_1", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput___c._CreateActions_b__11_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::Input::OpenXRInput___c::*)(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput___c::_CreateActions_b__11_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x69fae04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*>(),
                                                             { "<CreateActions>b__11_0", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput___c._CreateActions_b__11_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::Input::OpenXRInput___c::*)(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput___c::_CreateActions_b__11_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x69fae18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*>(),
                                                             { "<CreateActions>b__11_1", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput___c._CreateActions_b__11_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (
    ::UnityEngine::XR::OpenXR::Input::OpenXRInput___c::*)(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput___c::_CreateActions_b__11_2)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x69fae34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*>(),
                                                             { "<CreateActions>b__11_2", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput___c::setStaticF___9(::UnityEngine::XR::OpenXR::Input::OpenXRInput___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*, "<>9", ::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*>(
      std::forward<::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*>(value));
}
inline ::UnityEngine::XR::OpenXR::Input::OpenXRInput___c* UnityEngine::XR::OpenXR::Input::OpenXRInput___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*, "<>9", ::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*>();
}
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput___c::setStaticF___9__9_0(::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>, bool>*, "<>9__9_0", ::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*>(
      std::forward<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>, bool>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>, bool>* UnityEngine::XR::OpenXR::Input::OpenXRInput___c::getStaticF___9__9_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>, bool>*, "<>9__9_0",
                                           ::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*>();
}
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput___c::setStaticF___9__9_1(::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>, bool>*, "<>9__9_1", ::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*>(
      std::forward<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>, bool>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>, bool>* UnityEngine::XR::OpenXR::Input::OpenXRInput___c::getStaticF___9__9_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>, bool>*, "<>9__9_1",
                                           ::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*>();
}
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput___c::setStaticF___9__11_0(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*, ::StringW>*, "<>9__11_0",
                                    ::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*>(
      std::forward<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*, ::StringW>* UnityEngine::XR::OpenXR::Input::OpenXRInput___c::getStaticF___9__11_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*, ::StringW>*, "<>9__11_0",
                                           ::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*>();
}
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput___c::setStaticF___9__11_1(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*, bool>*, "<>9__11_1",
                                    ::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*>(
      std::forward<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*, bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*, bool>* UnityEngine::XR::OpenXR::Input::OpenXRInput___c::getStaticF___9__11_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*, bool>*, "<>9__11_1",
                                           ::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*>();
}
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput___c::setStaticF___9__11_2(
    ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*, ::System::Collections::Generic::IEnumerable_1<::StringW>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*, ::System::Collections::Generic::IEnumerable_1<::StringW>*>*,
                                    "<>9__11_2", ::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*>(
      std::forward<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*, ::System::Collections::Generic::IEnumerable_1<::StringW>*>*>(value));
}
inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*, ::System::Collections::Generic::IEnumerable_1<::StringW>*>*
UnityEngine::XR::OpenXR::Input::OpenXRInput___c::getStaticF___9__11_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*, ::System::Collections::Generic::IEnumerable_1<::StringW>*>*,
                                           "<>9__11_2", ::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*>();
}
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::Input::OpenXRInput___c::_AttachActionSets_b__9_0(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature* f) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*>(),
                                                           { "<AttachActionSets>b__9_0", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, f);
}
inline bool UnityEngine::XR::OpenXR::Input::OpenXRInput___c::_AttachActionSets_b__9_1(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature* f) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*>(),
                                                           { "<AttachActionSets>b__9_1", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, f);
}
inline ::StringW UnityEngine::XR::OpenXR::Input::OpenXRInput___c::_CreateActions_b__11_0(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig* d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*>(),
                                                           { "<CreateActions>b__11_0", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, d);
}
inline bool UnityEngine::XR::OpenXR::Input::OpenXRInput___c::_CreateActions_b__11_1(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding* b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*>(),
                                                           { "<CreateActions>b__11_1", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, b);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>*
UnityEngine::XR::OpenXR::Input::OpenXRInput___c::_CreateActions_b__11_2(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding* b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*>(),
                                                           { "<CreateActions>b__11_2", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method, b);
}
inline ::UnityEngine::XR::OpenXR::Input::OpenXRInput___c* UnityEngine::XR::OpenXR::Input::OpenXRInput___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Input::OpenXRInput___c::OpenXRInput___c() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.RegisterLayouts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::RegisterLayouts)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x69f0724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(), { "RegisterLayouts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.ValidateActionMapConfig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*, ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*)>(
        &::UnityEngine::XR::OpenXR::Input::OpenXRInput::ValidateActionMapConfig)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x69f722c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                                                           { "ValidateActionMapConfig",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>(),
                                                                                               ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.AttachActionSets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::AttachActionSets)> {
  constexpr static std::size_t size = 0xc18;
  constexpr static std::size_t addrs = 0x69f1ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(), { "AttachActionSets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.RegisterDevices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>*, bool)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput::RegisterDevices)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x69f7470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                         { "RegisterDevices",
                           {},
                           { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.CreateActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>*,
                         ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedBinding>*>*)>(
        &::UnityEngine::XR::OpenXR::Input::OpenXRInput::CreateActions)> {
  constexpr static std::size_t size = 0xa28;
  constexpr static std::size_t addrs = 0x69f7718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
            { "CreateActions",
              {},
              { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>*>(),
                ::i2c::type_of<
                    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedBinding>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.SetDpadBindingCustomValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::SetDpadBindingCustomValues)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x69f8140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(), { "SetDpadBindingCustomValues", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.SanitizeCharForOpenXRPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(char16_t)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::SanitizeCharForOpenXRPath)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x69f8d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(), { "SanitizeCharForOpenXRPath", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.SanitizeStringForOpenXRPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::SanitizeStringForOpenXRPath)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x69f8768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(), { "SanitizeStringForOpenXRPath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.GetActionHandleName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::GetActionHandleName)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x69f8ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                                                           { "GetActionHandleName", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.SendHapticImpulse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionReference*, float_t, float_t, ::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput::SendHapticImpulse)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x69f8ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                                                           { "SendHapticImpulse",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>(), ::i2c::type_of<float_t>(),
                                                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.SendHapticImpulse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionReference*, float_t, float_t, float_t, ::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput::SendHapticImpulse)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x69f8f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                             { "SendHapticImpulse",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.SendHapticImpulse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputAction*, float_t, float_t, ::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput::SendHapticImpulse)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x69f90e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                                                           { "SendHapticImpulse",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<float_t>(),
                                                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.SendHapticImpulse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputAction*, float_t, float_t, float_t, ::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput::SendHapticImpulse)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x69f8ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                             { "SendHapticImpulse",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.StopHaptics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionReference*, ::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput::StopHaptics)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x69f94ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                         { "StopHaptics", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.SendHapticImpulse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::InputDevice, float_t, float_t, float_t)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::SendHapticImpulse)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x69f9660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                            { "SendHapticImpulse", {}, { ::i2c::type_of<::UnityEngine::XR::InputDevice>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.StopHapticImpulse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::InputDevice)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::StopHapticImpulse)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x69f98a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(), { "StopHapticImpulse", {}, { ::i2c::type_of<::UnityEngine::XR::InputDevice>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.StopHaptics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput::StopHaptics)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x69f95bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                { "StopHaptics", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.TryGetInputSourceName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputAction*, int32_t, ::by_ref<::StringW>,
                                                                ::UnityEngine::XR::OpenXR::Input::OpenXRInput_InputSourceNameFlags, ::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput::TryGetInputSourceName)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x69f9a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                         { "TryGetInputSourceName",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>(),
                                             ::i2c::type_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput_InputSourceNameFlags>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.GetActionIsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::GetActionIsActive)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x69f9c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                                                           { "GetActionIsActive", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.GetActionIsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::InputDevice, ::UnityEngine::XR::InputFeatureUsage)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput::GetActionIsActive)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x69f9ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                { "GetActionIsActive", {}, { ::i2c::type_of<::UnityEngine::XR::InputDevice>(), ::i2c::type_of<::UnityEngine::XR::InputFeatureUsage>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.GetActionIsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::InputDevice, ::StringW)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::GetActionIsActive)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x69f9f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                             { "GetActionIsActive", {}, { ::i2c::type_of<::UnityEngine::XR::InputDevice>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.TrySetControllerLateLatchAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::TrySetControllerLateLatchAction)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x69fa058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                                                           { "TrySetControllerLateLatchAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.TrySetControllerLateLatchAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::InputDevice, ::UnityEngine::XR::InputFeatureUsage)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput::TrySetControllerLateLatchAction)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x69fa244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                         { "TrySetControllerLateLatchAction", {}, { ::i2c::type_of<::UnityEngine::XR::InputDevice>(), ::i2c::type_of<::UnityEngine::XR::InputFeatureUsage>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.TrySetControllerLateLatchAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::InputDevice, ::StringW)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::TrySetControllerLateLatchAction)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x69fa2b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                             { "TrySetControllerLateLatchAction", {}, { ::i2c::type_of<::UnityEngine::XR::InputDevice>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.GetActionHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::UnityEngine::XR::InputDevice, ::UnityEngine::XR::InputFeatureUsage)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput::GetActionHandle)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x69fa424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                             { "GetActionHandle", {}, { ::i2c::type_of<::UnityEngine::XR::InputDevice>(), ::i2c::type_of<::UnityEngine::XR::InputFeatureUsage>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.GetActionHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::UnityEngine::XR::InputDevice, ::StringW)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::GetActionHandle)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x69fa380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                             { "GetActionHandle", {}, { ::i2c::type_of<::UnityEngine::XR::InputDevice>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.GetActionHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput::GetActionHandle)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x69f9168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                         { "GetActionHandle", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.GetDeviceId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::GetDeviceId)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x69f9390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(), { "GetDeviceId", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.GetDeviceId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::XR::InputDevice)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::GetDeviceId)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x69f9748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(), { "GetDeviceId", {}, { ::i2c::type_of<::UnityEngine::XR::InputDevice>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.UserPathToDeviceName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::UserPathToDeviceName)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x69f8424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(), { "UserPathToDeviceName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_SetDpadBindingCustomValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, float_t, float_t, float_t, float_t, bool)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_SetDpadBindingCustomValues)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x69f8c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                            { "Internal_SetDpadBindingCustomValues",
                              {},
                              { ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_SendHapticImpulse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t, uint64_t, float_t, float_t, float_t)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_SendHapticImpulse)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x69f9440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
            { "Internal_SendHapticImpulse", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_SendHapticImpulseNoISX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t, float_t, float_t, float_t)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_SendHapticImpulseNoISX)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x69f9800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                         { "Internal_SendHapticImpulseNoISX", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_StopHaptics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t, uint64_t)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_StopHaptics)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x69f99d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                                                           { "Internal_StopHaptics", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_StopHapticsNoISX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_StopHapticsNoISX)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x69f995c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(), { "Internal_StopHapticsNoISX", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_GetActionId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint32_t, ::StringW)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_GetActionId)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x69fa530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                                                           { "Internal_GetActionId", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_GetActionIdNoISX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint32_t, ::StringW)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_GetActionIdNoISX)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x69fa494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                                                           { "Internal_GetActionIdNoISX", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_TryGetInputSourceNamePtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, uint64_t, uint32_t, uint32_t, ::by_ref<::System::IntPtr>)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_TryGetInputSourceNamePtr)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x69fa684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                            { "Internal_TryGetInputSourceNamePtr",
                              {},
                              { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_TryGetInputSourceName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, uint64_t, uint32_t, uint32_t, ::by_ref<::StringW>)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_TryGetInputSourceName)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x69f9b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                            { "Internal_TryGetInputSourceName",
                              {},
                              { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_TrySetControllerLateLatchAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, uint64_t)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_TrySetControllerLateLatchAction)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x69fa1b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                             { "Internal_TrySetControllerLateLatchAction", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_GetActionIsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, ::StringW)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_GetActionIsActive)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x69f9e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                                                           { "Internal_GetActionIsActive", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_GetActionIsActiveNoISX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, ::StringW)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_GetActionIsActiveNoISX)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x69f9fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                                                           { "Internal_GetActionIsActiveNoISX", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_RegisterDeviceDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::StringW, ::StringW, bool, uint32_t, ::StringW, ::StringW, ::StringW)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_RegisterDeviceDefinition)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x69f862c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                             { "Internal_RegisterDeviceDefinition",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint32_t>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_CreateActionSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::StringW, ::StringW, ::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedGuid)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_CreateActionSet)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x69f8924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
            { "Internal_CreateActionSet", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedGuid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_CreateAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t, ::StringW, ::StringW, uint32_t, ::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedGuid, ::ArrayW<::StringW>,
                                                                    uint32_t, bool, ::ArrayW<::StringW>, uint32_t)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_CreateAction)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x69f89f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                             { "Internal_CreateAction",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedGuid>(), ::i2c::type_of<::ArrayW<::StringW>>(),
                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_SuggestBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::ArrayW<::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedBinding>, uint32_t)>(
    &::UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_SuggestBindings)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x69f8274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                            { "Internal_SuggestBindings",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedBinding>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_AttachActionSets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_AttachActionSets)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x69f83c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(), { "Internal_AttachActionSets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_GetDeviceId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::XR::InputDeviceCharacteristics, ::StringW)>(&::UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_GetDeviceId)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x69fa5e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                             { "Internal_GetDeviceId", {}, { ::i2c::type_of<::UnityEngine::XR::InputDeviceCharacteristics>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput::setStaticF_ExpectedControlTypeToActionType(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionType>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionType>*,
                                    "ExpectedControlTypeToActionType", ::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionType>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionType>*
UnityEngine::XR::OpenXR::Input::OpenXRInput::getStaticF_ExpectedControlTypeToActionType() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionType>*,
                                           "ExpectedControlTypeToActionType", ::UnityEngine::XR::OpenXR::Input::OpenXRInput*>();
}
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput::setStaticF_kVirtualControlMap(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "kVirtualControlMap", ::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* UnityEngine::XR::OpenXR::Input::OpenXRInput::getStaticF_kVirtualControlMap() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "kVirtualControlMap", ::UnityEngine::XR::OpenXR::Input::OpenXRInput*>();
}
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput::RegisterLayouts() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(), { "RegisterLayouts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::Input::OpenXRInput::ValidateActionMapConfig(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature* interactionFeature,
                                                                                 ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig* actionMapConfig) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                                                         { "ValidateActionMapConfig",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>(),
                                                                                             ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, interactionFeature, actionMapConfig);
}
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput::AttachActionSets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(), { "AttachActionSets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool
UnityEngine::XR::OpenXR::Input::OpenXRInput::RegisterDevices(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>* actionMaps,
                                                             bool isAdditive) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                          { "RegisterDevices",
                            {},
                            { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, actionMaps, isAdditive);
}
inline bool UnityEngine::XR::OpenXR::Input::OpenXRInput::CreateActions(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>* actionMaps,
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedBinding>*>* interactionProfiles) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
          { "CreateActions",
            {},
            { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>*>(),
              ::i2c::type_of<
                  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedBinding>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, actionMaps, interactionProfiles);
}
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput::SetDpadBindingCustomValues() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(), { "SetDpadBindingCustomValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline char16_t UnityEngine::XR::OpenXR::Input::OpenXRInput::SanitizeCharForOpenXRPath(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(), { "SanitizeCharForOpenXRPath", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, c);
}
inline ::StringW UnityEngine::XR::OpenXR::Input::OpenXRInput::SanitizeStringForOpenXRPath(::StringW input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(), { "SanitizeStringForOpenXRPath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, input);
}
inline ::StringW UnityEngine::XR::OpenXR::Input::OpenXRInput::GetActionHandleName(::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                                                         { "GetActionHandleName", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, control);
}
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput::SendHapticImpulse(::UnityEngine::InputSystem::InputActionReference* actionRef, float_t amplitude, float_t duration,
                                                                           ::UnityEngine::InputSystem::InputDevice* inputDevice) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                                                         { "SendHapticImpulse",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>(), ::i2c::type_of<float_t>(),
                                                                                             ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, actionRef, amplitude, duration, inputDevice);
}
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput::SendHapticImpulse(::UnityEngine::InputSystem::InputActionReference* actionRef, float_t amplitude, float_t frequency, float_t duration,
                                                                           ::UnityEngine::InputSystem::InputDevice* inputDevice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                           { "SendHapticImpulse",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, actionRef, amplitude, frequency, duration, inputDevice);
}
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput::SendHapticImpulse(::UnityEngine::InputSystem::InputAction* action, float_t amplitude, float_t duration,
                                                                           ::UnityEngine::InputSystem::InputDevice* inputDevice) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                                                         { "SendHapticImpulse",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<float_t>(),
                                                                                             ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, action, amplitude, duration, inputDevice);
}
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput::SendHapticImpulse(::UnityEngine::InputSystem::InputAction* action, float_t amplitude, float_t frequency, float_t duration,
                                                                           ::UnityEngine::InputSystem::InputDevice* inputDevice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                           { "SendHapticImpulse",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, action, amplitude, frequency, duration, inputDevice);
}
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput::StopHaptics(::UnityEngine::InputSystem::InputActionReference* actionRef, ::UnityEngine::InputSystem::InputDevice* inputDevice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                       { "StopHaptics", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, actionRef, inputDevice);
}
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput::SendHapticImpulse(::UnityEngine::XR::InputDevice device, float_t amplitude, float_t frequency, float_t duration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                          { "SendHapticImpulse", {}, { ::i2c::type_of<::UnityEngine::XR::InputDevice>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, device, amplitude, frequency, duration);
}
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput::StopHapticImpulse(::UnityEngine::XR::InputDevice device) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(), { "StopHapticImpulse", {}, { ::i2c::type_of<::UnityEngine::XR::InputDevice>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, device);
}
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput::StopHaptics(::UnityEngine::InputSystem::InputAction* inputAction, ::UnityEngine::InputSystem::InputDevice* inputDevice) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                              { "StopHaptics", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inputAction, inputDevice);
}
inline bool UnityEngine::XR::OpenXR::Input::OpenXRInput::TryGetInputSourceName(::UnityEngine::InputSystem::InputAction* inputAction, int32_t index, ::by_ref<::StringW> name,
                                                                               ::UnityEngine::XR::OpenXR::Input::OpenXRInput_InputSourceNameFlags flags,
                                                                               ::UnityEngine::InputSystem::InputDevice* inputDevice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                       { "TryGetInputSourceName",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>(),
                                           ::i2c::type_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput_InputSourceNameFlags>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, inputAction, index, name, flags, inputDevice);
}
inline bool UnityEngine::XR::OpenXR::Input::OpenXRInput::GetActionIsActive(::UnityEngine::InputSystem::InputAction* inputAction) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                                                         { "GetActionIsActive", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, inputAction);
}
inline bool UnityEngine::XR::OpenXR::Input::OpenXRInput::GetActionIsActive(::UnityEngine::XR::InputDevice device, ::UnityEngine::XR::InputFeatureUsage usage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                           { "GetActionIsActive", {}, { ::i2c::type_of<::UnityEngine::XR::InputDevice>(), ::i2c::type_of<::UnityEngine::XR::InputFeatureUsage>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, device, usage);
}
inline bool UnityEngine::XR::OpenXR::Input::OpenXRInput::GetActionIsActive(::UnityEngine::XR::InputDevice device, ::StringW usageName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                           { "GetActionIsActive", {}, { ::i2c::type_of<::UnityEngine::XR::InputDevice>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, device, usageName);
}
inline bool UnityEngine::XR::OpenXR::Input::OpenXRInput::TrySetControllerLateLatchAction(::UnityEngine::InputSystem::InputAction* inputAction) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                                                         { "TrySetControllerLateLatchAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, inputAction);
}
inline bool UnityEngine::XR::OpenXR::Input::OpenXRInput::TrySetControllerLateLatchAction(::UnityEngine::XR::InputDevice device, ::UnityEngine::XR::InputFeatureUsage usage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                       { "TrySetControllerLateLatchAction", {}, { ::i2c::type_of<::UnityEngine::XR::InputDevice>(), ::i2c::type_of<::UnityEngine::XR::InputFeatureUsage>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, device, usage);
}
inline bool UnityEngine::XR::OpenXR::Input::OpenXRInput::TrySetControllerLateLatchAction(::UnityEngine::XR::InputDevice device, ::StringW usageName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                           { "TrySetControllerLateLatchAction", {}, { ::i2c::type_of<::UnityEngine::XR::InputDevice>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, device, usageName);
}
inline uint64_t UnityEngine::XR::OpenXR::Input::OpenXRInput::GetActionHandle(::UnityEngine::XR::InputDevice device, ::UnityEngine::XR::InputFeatureUsage usage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                           { "GetActionHandle", {}, { ::i2c::type_of<::UnityEngine::XR::InputDevice>(), ::i2c::type_of<::UnityEngine::XR::InputFeatureUsage>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, device, usage);
}
inline uint64_t UnityEngine::XR::OpenXR::Input::OpenXRInput::GetActionHandle(::UnityEngine::XR::InputDevice device, ::StringW usageName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                           { "GetActionHandle", {}, { ::i2c::type_of<::UnityEngine::XR::InputDevice>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, device, usageName);
}
inline uint64_t UnityEngine::XR::OpenXR::Input::OpenXRInput::GetActionHandle(::UnityEngine::InputSystem::InputAction* inputAction, ::UnityEngine::InputSystem::InputDevice* inputDevice) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                              { "GetActionHandle", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, inputAction, inputDevice);
}
inline uint32_t UnityEngine::XR::OpenXR::Input::OpenXRInput::GetDeviceId(::UnityEngine::InputSystem::InputDevice* inputDevice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(), { "GetDeviceId", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, inputDevice);
}
inline uint32_t UnityEngine::XR::OpenXR::Input::OpenXRInput::GetDeviceId(::UnityEngine::XR::InputDevice inputDevice) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(), { "GetDeviceId", {}, { ::i2c::type_of<::UnityEngine::XR::InputDevice>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, inputDevice);
}
inline ::StringW UnityEngine::XR::OpenXR::Input::OpenXRInput::UserPathToDeviceName(::StringW userPath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(), { "UserPathToDeviceName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, userPath);
}
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_SetDpadBindingCustomValues(bool isLeft, float_t forceThreshold, float_t forceThresholdReleased, float_t centerRegion,
                                                                                             float_t wedgeAngle, bool isSticky) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                          { "Internal_SetDpadBindingCustomValues",
                            {},
                            { ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, isLeft, forceThreshold, forceThresholdReleased, centerRegion, wedgeAngle, isSticky);
}
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_SendHapticImpulse(uint32_t deviceId, uint64_t actionId, float_t amplitude, float_t frequency, float_t duration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
          { "Internal_SendHapticImpulse", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, deviceId, actionId, amplitude, frequency, duration);
}
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_SendHapticImpulseNoISX(uint32_t deviceId, float_t amplitude, float_t frequency, float_t duration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                       { "Internal_SendHapticImpulseNoISX", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, deviceId, amplitude, frequency, duration);
}
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_StopHaptics(uint32_t deviceId, uint64_t actionId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(), { "Internal_StopHaptics", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, deviceId, actionId);
}
inline void UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_StopHapticsNoISX(uint32_t deviceId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(), { "Internal_StopHapticsNoISX", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, deviceId);
}
inline uint64_t UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_GetActionId(uint32_t deviceId, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                                                         { "Internal_GetActionId", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, deviceId, name);
}
inline uint64_t UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_GetActionIdNoISX(uint32_t deviceId, ::StringW usageName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                                                         { "Internal_GetActionIdNoISX", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, deviceId, usageName);
}
inline bool UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_TryGetInputSourceNamePtr(uint32_t deviceId, uint64_t actionId, uint32_t index, uint32_t flags, ::by_ref<::System::IntPtr> outName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(), { "Internal_TryGetInputSourceNamePtr",
                                                                                                                   {},
                                                                                                                   { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>(),
                                                                                                                     ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, deviceId, actionId, index, flags, outName);
}
inline bool UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_TryGetInputSourceName(uint32_t deviceId, uint64_t actionId, uint32_t index, uint32_t flags, ::by_ref<::StringW> outName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                       { "Internal_TryGetInputSourceName",
                                         {},
                                         { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, deviceId, actionId, index, flags, outName);
}
inline bool UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_TrySetControllerLateLatchAction(uint32_t deviceId, uint64_t actionId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                           { "Internal_TrySetControllerLateLatchAction", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, deviceId, actionId);
}
inline bool UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_GetActionIsActive(uint32_t deviceId, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                                                         { "Internal_GetActionIsActive", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, deviceId, name);
}
inline bool UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_GetActionIsActiveNoISX(uint32_t deviceId, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                                                         { "Internal_GetActionIsActiveNoISX", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, deviceId, name);
}
inline uint64_t UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_RegisterDeviceDefinition(::StringW userPath, ::StringW interactionProfile, bool isAdditive, uint32_t characteristics,
                                                                                               ::StringW name, ::StringW manufacturer, ::StringW serialNumber) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                           { "Internal_RegisterDeviceDefinition",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint32_t>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, userPath, interactionProfile, isAdditive, characteristics, name, manufacturer, serialNumber);
}
inline uint64_t UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_CreateActionSet(::StringW name, ::StringW localizedName, ::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedGuid guid) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
          { "Internal_CreateActionSet", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedGuid>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, name, localizedName, guid);
}
inline uint64_t UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_CreateAction(uint64_t actionSetId, ::StringW name, ::StringW localizedName, uint32_t actionType,
                                                                                   ::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedGuid guid, ::ArrayW<::StringW> userPaths,
                                                                                   uint32_t userPathCount, bool isAdditive, ::ArrayW<::StringW> usages, uint32_t usageCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                           { "Internal_CreateAction",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(),
                                                               ::i2c::type_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedGuid>(), ::i2c::type_of<::ArrayW<::StringW>>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, actionSetId, name, localizedName, actionType, guid, userPaths, userPathCount, isAdditive, usages, usageCount);
}
inline bool UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_SuggestBindings(::StringW interactionProfile,
                                                                                  ::ArrayW<::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedBinding> serializedBindings,
                                                                                  uint32_t serializedBindingCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                       { "Internal_SuggestBindings",
                                         {},
                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedBinding>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, interactionProfile, serializedBindings, serializedBindingCount);
}
inline bool UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_AttachActionSets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(), { "Internal_AttachActionSets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline uint32_t UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_GetDeviceId(::UnityEngine::XR::InputDeviceCharacteristics characteristics, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::OpenXRInput*>(),
                                                           { "Internal_GetDeviceId", {}, { ::i2c::type_of<::UnityEngine::XR::InputDeviceCharacteristics>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, characteristics, name);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Input::OpenXRInput::OpenXRInput() {}
