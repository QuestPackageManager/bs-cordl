#pragma once
// IWYU pragma private; include "Meta\XR\BuildingBlocks\ControllerButtonsMapper.hpp"
#include "GlobalNamespace/zzzz__OVRInput_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__ControllerButtonsMapper_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__ControllerButtonsMapper_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionReference_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::BuildingBlocks::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode() {}
constexpr ::Meta::XR::BuildingBlocks::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode Meta::XR::BuildingBlocks::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode::OnButtonUp{
  static_cast<int32_t>(0x0)
};
constexpr ::Meta::XR::BuildingBlocks::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode Meta::XR::BuildingBlocks::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode::OnButtonDown{
  static_cast<int32_t>(0x1)
};
constexpr ::Meta::XR::BuildingBlocks::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode Meta::XR::BuildingBlocks::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode::OnButton{
  static_cast<int32_t>(0x2)
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction.OnCallbackWithContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction::OnCallbackWithContext)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5a3424c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>(),
                                                             { "OnCallbackWithContext", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
inline void Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction::OnCallbackWithContext(::UnityEngine::InputSystem::InputAction_CallbackContext callbackContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>(),
                                                           { "OnCallbackWithContext", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, callbackContext);
}
// Ctor Parameters [CppParam { name: "Title", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "Button", ty: "::GlobalNamespace::OVRInput_Button", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "ButtonMode", ty: "::Meta::XR::BuildingBlocks::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "InputActionReference", ty: "::UnityW<::UnityEngine::InputSystem::InputActionReference>", modifiers: "", def_value: Some("{}") }, CppParam { name: "CallbackWithContext", ty:
// "::UnityEngine::Events::UnityEvent_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Callback", ty:
// "::UnityEngine::Events::UnityEvent*", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction::ControllerButtonsMapper_ButtonClickAction(
    ::StringW Title, ::GlobalNamespace::OVRInput_Button Button, ::Meta::XR::BuildingBlocks::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode ButtonMode,
    ::UnityW<::UnityEngine::InputSystem::InputActionReference> InputActionReference, ::UnityEngine::Events::UnityEvent_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* CallbackWithContext,
    ::UnityEngine::Events::UnityEvent* Callback) noexcept {
  this->Title = Title;
  this->Button = Button;
  this->ButtonMode = ButtonMode;
  this->InputActionReference = InputActionReference;
  this->CallbackWithContext = CallbackWithContext;
  this->Callback = Callback;
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction::ControllerButtonsMapper_ButtonClickAction() {}
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::ControllerButtonsMapper.get_ButtonClickActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>* (
    ::Meta::XR::BuildingBlocks::ControllerButtonsMapper::*)()>(&::Meta::XR::BuildingBlocks::ControllerButtonsMapper::get_ButtonClickActions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a33a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(), { "get_ButtonClickActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::ControllerButtonsMapper.set_ButtonClickActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::ControllerButtonsMapper::*)(
    ::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>*)>(&::Meta::XR::BuildingBlocks::ControllerButtonsMapper::set_ButtonClickActions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a33a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(),
                            { "set_ButtonClickActions", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::ControllerButtonsMapper.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::ControllerButtonsMapper::*)()>(&::Meta::XR::BuildingBlocks::ControllerButtonsMapper::OnEnable)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5a33a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::ControllerButtonsMapper.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::ControllerButtonsMapper::*)()>(&::Meta::XR::BuildingBlocks::ControllerButtonsMapper::OnDisable)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5a33ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::ControllerButtonsMapper.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::ControllerButtonsMapper::*)()>(&::Meta::XR::BuildingBlocks::ControllerButtonsMapper::Update)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5a33f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::ControllerButtonsMapper.IsActionTriggered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction)>(
    &::Meta::XR::BuildingBlocks::ControllerButtonsMapper::IsActionTriggered)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5a34070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(),
                                                             { "IsActionTriggered", {}, { ::i2c::type_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::ControllerButtonsMapper.IsLegacyInputActionTriggered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Meta::XR::BuildingBlocks::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode, ::GlobalNamespace::OVRInput_Button)>(
    &::Meta::XR::BuildingBlocks::ControllerButtonsMapper::IsLegacyInputActionTriggered)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5a340bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(),
                            { "IsLegacyInputActionTriggered",
                              {},
                              { ::i2c::type_of<::Meta::XR::BuildingBlocks::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Button>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::ControllerButtonsMapper.IsNewInputSystemActionTriggered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction)>(
    &::Meta::XR::BuildingBlocks::ControllerButtonsMapper::IsNewInputSystemActionTriggered)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a341b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(),
                                                             { "IsNewInputSystemActionTriggered", {}, { ::i2c::type_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::ControllerButtonsMapper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::ControllerButtonsMapper::*)()>(&::Meta::XR::BuildingBlocks::ControllerButtonsMapper::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a34248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>*&
Meta::XR::BuildingBlocks::ControllerButtonsMapper::__cordl_internal_get__buttonClickActions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonClickActions;
}
constexpr ::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>* const&
Meta::XR::BuildingBlocks::ControllerButtonsMapper::__cordl_internal_get__buttonClickActions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonClickActions;
}
constexpr void Meta::XR::BuildingBlocks::ControllerButtonsMapper::__cordl_internal_set__buttonClickActions(
    ::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buttonClickActions = value;
}
inline ::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>* Meta::XR::BuildingBlocks::ControllerButtonsMapper::get_ButtonClickActions() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(), { "get_ButtonClickActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>*>(this, ___internal_method);
}
inline void
Meta::XR::BuildingBlocks::ControllerButtonsMapper::set_ButtonClickActions(::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(),
                          { "set_ButtonClickActions", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::BuildingBlocks::ControllerButtonsMapper::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::ControllerButtonsMapper::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::ControllerButtonsMapper::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::XR::BuildingBlocks::ControllerButtonsMapper::IsActionTriggered(::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction buttonClickAction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(),
                                                           { "IsActionTriggered", {}, { ::i2c::type_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buttonClickAction);
}
inline bool Meta::XR::BuildingBlocks::ControllerButtonsMapper::IsLegacyInputActionTriggered(::Meta::XR::BuildingBlocks::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode buttonMode,
                                                                                            ::GlobalNamespace::OVRInput_Button button) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(),
                          { "IsLegacyInputActionTriggered",
                            {},
                            { ::i2c::type_of<::Meta::XR::BuildingBlocks::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Button>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buttonMode, button);
}
inline bool Meta::XR::BuildingBlocks::ControllerButtonsMapper::IsNewInputSystemActionTriggered(::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction buttonClickAction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(),
                                                           { "IsNewInputSystemActionTriggered", {}, { ::i2c::type_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buttonClickAction);
}
inline void Meta::XR::BuildingBlocks::ControllerButtonsMapper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::BuildingBlocks::ControllerButtonsMapper* Meta::XR::BuildingBlocks::ControllerButtonsMapper::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::ControllerButtonsMapper::ControllerButtonsMapper() {}
