#pragma once
#include "GlobalNamespace/zzzz__OVRVirtualKeyboardSampleControls_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRVirtualKeyboardSampleControls_def.hpp"
#include "GlobalNamespace/zzzz__OVRHand_def.hpp"
#include "GlobalNamespace/zzzz__OVRVirtualKeyboardSampleControls_def.hpp"
#include "GlobalNamespace/zzzz__OVRVirtualKeyboardSampleInputHandler_def.hpp"
#include "GlobalNamespace/zzzz__OVRVirtualKeyboard_def.hpp"
#include "UnityEngine/EventSystems/zzzz__OVRPhysicsRaycaster_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__InputField_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup::*)(
    ::GlobalNamespace::OVRVirtualKeyboard*)>(&::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x28f2afc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRVirtualKeyboard*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup.RestoreTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup::*)(
    ::GlobalNamespace::OVRVirtualKeyboard*)>(&::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup::RestoreTo)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x28f25dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup>::get(), "RestoreTo",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRVirtualKeyboard*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup::_ctor(::GlobalNamespace::OVRVirtualKeyboard* keyboard) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRVirtualKeyboard*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyboard);
}
inline void GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup::RestoreTo(::GlobalNamespace::OVRVirtualKeyboard* keyboard) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup>::get(), "RestoreTo",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRVirtualKeyboard*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyboard);
}
// Ctor Parameters [CppParam { name: "_textCommitField", ty: "::UnityW<::UnityEngine::UI::InputField>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_position", ty:
// "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "_rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "_scale",
// ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "_rightControllerDirectTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "_rightControllerRootTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "_leftControllerDirectTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_leftControllerRootTransform", ty:
// "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_controllerRayInteraction", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_controllerDirectInteraction", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_handLeft", ty: "::UnityW<::GlobalNamespace::OVRHand>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "_handRight", ty: "::UnityW<::GlobalNamespace::OVRHand>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_handRayInteraction", ty: "bool",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_handDirectInteraction", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_controllerRaycaster", ty:
// "::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_handRaycaster", ty:
// "::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup(
    ::UnityW<::UnityEngine::UI::InputField> _textCommitField, ::UnityEngine::Vector3 _position, ::UnityEngine::Quaternion _rotation, ::UnityEngine::Vector3 _scale,
    ::UnityW<::UnityEngine::Transform> _rightControllerDirectTransform, ::UnityW<::UnityEngine::Transform> _rightControllerRootTransform,
    ::UnityW<::UnityEngine::Transform> _leftControllerDirectTransform, ::UnityW<::UnityEngine::Transform> _leftControllerRootTransform, bool _controllerRayInteraction,
    bool _controllerDirectInteraction, ::UnityW<::GlobalNamespace::OVRHand> _handLeft, ::UnityW<::GlobalNamespace::OVRHand> _handRight, bool _handRayInteraction, bool _handDirectInteraction,
    ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster> _controllerRaycaster, ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster> _handRaycaster) noexcept {
  this->_textCommitField = _textCommitField;
  this->_position = _position;
  this->_rotation = _rotation;
  this->_scale = _scale;
  this->_rightControllerDirectTransform = _rightControllerDirectTransform;
  this->_rightControllerRootTransform = _rightControllerRootTransform;
  this->_leftControllerDirectTransform = _leftControllerDirectTransform;
  this->_leftControllerRootTransform = _leftControllerRootTransform;
  this->_controllerRayInteraction = _controllerRayInteraction;
  this->_controllerDirectInteraction = _controllerDirectInteraction;
  this->_handLeft = _handLeft;
  this->_handRight = _handRight;
  this->_handRayInteraction = _handRayInteraction;
  this->_handDirectInteraction = _handDirectInteraction;
  this->_controllerRaycaster = _controllerRaycaster;
  this->_handRaycaster = _handRaycaster;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup() {}
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboardSampleControls.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboardSampleControls::*)()>(
    &::GlobalNamespace::OVRVirtualKeyboardSampleControls::Start)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x28f2120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboardSampleControls*>::get(),
                                                                               "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboardSampleControls.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboardSampleControls::*)()>(
    &::GlobalNamespace::OVRVirtualKeyboardSampleControls::OnDestroy)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x28f23f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboardSampleControls*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboardSampleControls.ShowKeyboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboardSampleControls::*)()>(
    &::GlobalNamespace::OVRVirtualKeyboardSampleControls::ShowKeyboard)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x28f22ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboardSampleControls*>::get(),
                                                                               "ShowKeyboard", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboardSampleControls.MoveKeyboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboardSampleControls::*)()>(
    &::GlobalNamespace::OVRVirtualKeyboardSampleControls::MoveKeyboard)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x28f27fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboardSampleControls*>::get(),
                                                                               "MoveKeyboard", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboardSampleControls.MoveKeyboardNear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboardSampleControls::*)()>(
    &::GlobalNamespace::OVRVirtualKeyboardSampleControls::MoveKeyboardNear)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x28f294c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboardSampleControls*>::get(),
                                                                               "MoveKeyboardNear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboardSampleControls.MoveKeyboardFar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboardSampleControls::*)()>(
    &::GlobalNamespace::OVRVirtualKeyboardSampleControls::MoveKeyboardFar)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x28f2994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboardSampleControls*>::get(),
                                                                               "MoveKeyboardFar", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboardSampleControls.HideKeyboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboardSampleControls::*)()>(
    &::GlobalNamespace::OVRVirtualKeyboardSampleControls::HideKeyboard)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x28f29dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboardSampleControls*>::get(),
                                                                               "HideKeyboard", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboardSampleControls.DestroyKeyboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboardSampleControls::*)()>(
    &::GlobalNamespace::OVRVirtualKeyboardSampleControls::DestroyKeyboard)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x28f2a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboardSampleControls*>::get(),
                                                                               "DestroyKeyboard", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboardSampleControls.OnHideKeyboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboardSampleControls::*)()>(
    &::GlobalNamespace::OVRVirtualKeyboardSampleControls::OnHideKeyboard)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28f2bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboardSampleControls*>::get(),
                                                                               "OnHideKeyboard", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboardSampleControls.UpdateButtonInteractable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboardSampleControls::*)()>(
    &::GlobalNamespace::OVRVirtualKeyboardSampleControls::UpdateButtonInteractable)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x28f26a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboardSampleControls*>::get(),
                                                                               "UpdateButtonInteractable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboardSampleControls.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboardSampleControls::*)()>(
    &::GlobalNamespace::OVRVirtualKeyboardSampleControls::Update)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x28f2bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboardSampleControls*>::get(),
                                                                               "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboardSampleControls._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboardSampleControls::*)()>(
    &::GlobalNamespace::OVRVirtualKeyboardSampleControls::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28f3170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboardSampleControls*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_get_ShowButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ShowButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_get_ShowButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ShowButton;
}
constexpr void GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_set_ShowButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ShowButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_get_MoveButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MoveButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_get_MoveButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MoveButton;
}
constexpr void GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_set_MoveButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MoveButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_get_HideButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HideButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_get_HideButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HideButton;
}
constexpr void GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_set_HideButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___HideButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_get_MoveNearButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MoveNearButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_get_MoveNearButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MoveNearButton;
}
constexpr void GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_set_MoveNearButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MoveNearButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_get_MoveFarButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MoveFarButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_get_MoveFarButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MoveFarButton;
}
constexpr void GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_set_MoveFarButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MoveFarButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_get_DestroyKeyboardButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DestroyKeyboardButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_get_DestroyKeyboardButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DestroyKeyboardButton;
}
constexpr void GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_set_DestroyKeyboardButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DestroyKeyboardButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard>& GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_get_keyboard() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboard;
}
constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> const& GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_get_keyboard() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboard;
}
constexpr void GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_set_keyboard(::UnityW<::GlobalNamespace::OVRVirtualKeyboard> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyboard)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler>& GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_get_inputHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputHandler;
}
constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler> const& GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_get_inputHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputHandler;
}
constexpr void GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_set_inputHandler(::UnityW<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inputHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_get_isMovingKeyboard_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMovingKeyboard_;
}
constexpr bool const& GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_get_isMovingKeyboard_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMovingKeyboard_;
}
constexpr void GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_set_isMovingKeyboard_(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isMovingKeyboard_ = value;
}
constexpr bool& GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_get_isMovingKeyboardFinished_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMovingKeyboardFinished_;
}
constexpr bool const& GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_get_isMovingKeyboardFinished_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMovingKeyboardFinished_;
}
constexpr void GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_set_isMovingKeyboardFinished_(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isMovingKeyboardFinished_ = value;
}
constexpr float_t& GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_get_keyboardMoveDistance_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardMoveDistance_;
}
constexpr float_t const& GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_get_keyboardMoveDistance_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardMoveDistance_;
}
constexpr void GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_set_keyboardMoveDistance_(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyboardMoveDistance_ = value;
}
constexpr float_t& GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_get_keyboardScale_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardScale_;
}
constexpr float_t const& GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_get_keyboardScale_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardScale_;
}
constexpr void GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_set_keyboardScale_(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyboardScale_ = value;
}
constexpr ::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup& GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_get_keyboardBackup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardBackup;
}
constexpr ::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup const& GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_get_keyboardBackup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardBackup;
}
constexpr void GlobalNamespace::OVRVirtualKeyboardSampleControls::__cordl_internal_set_keyboardBackup(::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyboardBackup = value;
}
inline void GlobalNamespace::OVRVirtualKeyboardSampleControls::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboardSampleControls*>::get(),
                                                                             "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboardSampleControls::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboardSampleControls*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboardSampleControls::ShowKeyboard() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboardSampleControls*>::get(),
                                                                             "ShowKeyboard", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboardSampleControls::MoveKeyboard() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboardSampleControls*>::get(),
                                                                             "MoveKeyboard", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboardSampleControls::MoveKeyboardNear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboardSampleControls*>::get(),
                                                                             "MoveKeyboardNear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboardSampleControls::MoveKeyboardFar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboardSampleControls*>::get(),
                                                                             "MoveKeyboardFar", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboardSampleControls::HideKeyboard() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboardSampleControls*>::get(),
                                                                             "HideKeyboard", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboardSampleControls::DestroyKeyboard() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboardSampleControls*>::get(),
                                                                             "DestroyKeyboard", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboardSampleControls::OnHideKeyboard() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboardSampleControls*>::get(),
                                                                             "OnHideKeyboard", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboardSampleControls::UpdateButtonInteractable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboardSampleControls*>::get(),
                                                                             "UpdateButtonInteractable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboardSampleControls::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboardSampleControls*>::get(),
                                                                             "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRVirtualKeyboardSampleControls* GlobalNamespace::OVRVirtualKeyboardSampleControls::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRVirtualKeyboardSampleControls*>());
}
inline void GlobalNamespace::OVRVirtualKeyboardSampleControls::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVirtualKeyboardSampleControls*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRVirtualKeyboardSampleControls::OVRVirtualKeyboardSampleControls() {}
