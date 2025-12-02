#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/ControllerButtonsMapper.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction::*)(
    ::UnityEngine::InputSystem::InputAction_CallbackContext)>(&::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction::OnCallbackWithContext)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x581e29c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>::get(), "OnCallbackWithContext",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction_CallbackContext>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction::OnCallbackWithContext(::UnityEngine::InputSystem::InputAction_CallbackContext callbackContext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>::get(), "OnCallbackWithContext",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction_CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callbackContext);
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>* (
    ::Meta::XR::BuildingBlocks::ControllerButtonsMapper::*)()>(&::Meta::XR::BuildingBlocks::ControllerButtonsMapper::get_ButtonClickActions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x581dac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>::get(),
                                                                               "get_ButtonClickActions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::ControllerButtonsMapper.set_ButtonClickActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::ControllerButtonsMapper::*)(
    ::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>*)>(&::Meta::XR::BuildingBlocks::ControllerButtonsMapper::set_ButtonClickActions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x581dad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>::get(), "set_ButtonClickActions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::ControllerButtonsMapper.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::ControllerButtonsMapper::*)()>(
    &::Meta::XR::BuildingBlocks::ControllerButtonsMapper::OnEnable)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x581dad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>::get(),
                                                                               "OnEnable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::ControllerButtonsMapper.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::ControllerButtonsMapper::*)()>(
    &::Meta::XR::BuildingBlocks::ControllerButtonsMapper::OnDisable)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x581dd30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>::get(),
                                                                               "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::ControllerButtonsMapper.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::ControllerButtonsMapper::*)()>(
    &::Meta::XR::BuildingBlocks::ControllerButtonsMapper::Update)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x581df88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>::get(),
                                                                               "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::ControllerButtonsMapper.IsActionTriggered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction)>(
    &::Meta::XR::BuildingBlocks::ControllerButtonsMapper::IsActionTriggered)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x581e0c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>::get(), "IsActionTriggered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::ControllerButtonsMapper.IsLegacyInputActionTriggered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::Meta::XR::BuildingBlocks::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode, ::GlobalNamespace::OVRInput_Button)>(
        &::Meta::XR::BuildingBlocks::ControllerButtonsMapper::IsLegacyInputActionTriggered)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x581e10c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>::get(), "IsLegacyInputActionTriggered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::BuildingBlocks::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Button>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::ControllerButtonsMapper.IsNewInputSystemActionTriggered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction)>(
    &::Meta::XR::BuildingBlocks::ControllerButtonsMapper::IsNewInputSystemActionTriggered)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x581e204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>::get(), "IsNewInputSystemActionTriggered",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::ControllerButtonsMapper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::ControllerButtonsMapper::*)()>(
    &::Meta::XR::BuildingBlocks::ControllerButtonsMapper::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x581e298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buttonClickActions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>* Meta::XR::BuildingBlocks::ControllerButtonsMapper::get_ButtonClickActions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>::get(),
                                                                             "get_ButtonClickActions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>*, false>(this, ___internal_method);
}
inline void
Meta::XR::BuildingBlocks::ControllerButtonsMapper::set_ButtonClickActions(::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>::get(), "set_ButtonClickActions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Meta::XR::BuildingBlocks::ControllerButtonsMapper::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>::get(),
                                                                             "OnEnable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::ControllerButtonsMapper::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>::get(),
                                                                             "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::ControllerButtonsMapper::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>::get(),
                                                                             "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Meta::XR::BuildingBlocks::ControllerButtonsMapper::IsActionTriggered(::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction buttonClickAction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>::get(), "IsActionTriggered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, buttonClickAction);
}
inline bool Meta::XR::BuildingBlocks::ControllerButtonsMapper::IsLegacyInputActionTriggered(::Meta::XR::BuildingBlocks::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode buttonMode,
                                                                                            ::GlobalNamespace::OVRInput_Button button) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>::get(), "IsLegacyInputActionTriggered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::BuildingBlocks::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Button>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, buttonMode, button);
}
inline bool Meta::XR::BuildingBlocks::ControllerButtonsMapper::IsNewInputSystemActionTriggered(::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction buttonClickAction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>::get(), "IsNewInputSystemActionTriggered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, buttonClickAction);
}
inline void Meta::XR::BuildingBlocks::ControllerButtonsMapper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::BuildingBlocks::ControllerButtonsMapper* Meta::XR::BuildingBlocks::ControllerButtonsMapper::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::BuildingBlocks::ControllerButtonsMapper*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::ControllerButtonsMapper::ControllerButtonsMapper() {}
