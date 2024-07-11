#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRControllerHelper.hpp"
#include "GlobalNamespace/zzzz__OVRControllerHelper_impl.hpp"
#include "GlobalNamespace/zzzz__OVRInput_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRControllerHelper_def.hpp"
#include "GlobalNamespace/zzzz__OVRControllerHelper_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRControllerHelper__ControllerType::__OVRControllerHelper__ControllerType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRControllerHelper__ControllerType::__OVRControllerHelper__ControllerType() {}
constexpr ::GlobalNamespace::__OVRControllerHelper__ControllerType GlobalNamespace::__OVRControllerHelper__ControllerType::QuestAndRiftS{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRControllerHelper__ControllerType GlobalNamespace::__OVRControllerHelper__ControllerType::Rift{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__OVRControllerHelper__ControllerType GlobalNamespace::__OVRControllerHelper__ControllerType::Quest2{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__OVRControllerHelper__ControllerType GlobalNamespace::__OVRControllerHelper__ControllerType::TouchPro{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__OVRControllerHelper__ControllerType GlobalNamespace::__OVRControllerHelper__ControllerType::TouchPlus{ static_cast<int32_t>(0x5) };
//  Writing Method size for method: ::GlobalNamespace::OVRControllerHelper.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRControllerHelper::*)()>(&::GlobalNamespace::OVRControllerHelper::Start)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2bab3a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerHelper*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerHelper.InitializeControllerModels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRControllerHelper::*)()>(
    &::GlobalNamespace::OVRControllerHelper::InitializeControllerModels)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x2bab414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerHelper*>::get(),
                                                                               "InitializeControllerModels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerHelper.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRControllerHelper::*)()>(&::GlobalNamespace::OVRControllerHelper::Update)> {
  constexpr static std::size_t size = 0x880;
  constexpr static std::size_t addrs = 0x2bab8b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerHelper*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerHelper.InputFocusAquired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRControllerHelper::*)()>(&::GlobalNamespace::OVRControllerHelper::InputFocusAquired)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2bac130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerHelper*>::get(),
                                                                               "InputFocusAquired", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerHelper.InputFocusLost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRControllerHelper::*)()>(&::GlobalNamespace::OVRControllerHelper::InputFocusLost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bac13c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerHelper*>::get(), "InputFocusLost",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerHelper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRControllerHelper::*)()>(&::GlobalNamespace::OVRControllerHelper::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2bac144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerHelper*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_modelOculusTouchQuestAndRiftSLeftController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_modelOculusTouchQuestAndRiftSLeftController;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_modelOculusTouchQuestAndRiftSLeftController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_modelOculusTouchQuestAndRiftSLeftController;
}
constexpr void GlobalNamespace::OVRControllerHelper::__cordl_internal_set_m_modelOculusTouchQuestAndRiftSLeftController(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_modelOculusTouchQuestAndRiftSLeftController)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_modelOculusTouchQuestAndRiftSRightController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_modelOculusTouchQuestAndRiftSRightController;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_modelOculusTouchQuestAndRiftSRightController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_modelOculusTouchQuestAndRiftSRightController;
}
constexpr void GlobalNamespace::OVRControllerHelper::__cordl_internal_set_m_modelOculusTouchQuestAndRiftSRightController(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_modelOculusTouchQuestAndRiftSRightController)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_modelOculusTouchRiftLeftController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_modelOculusTouchRiftLeftController;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_modelOculusTouchRiftLeftController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_modelOculusTouchRiftLeftController;
}
constexpr void GlobalNamespace::OVRControllerHelper::__cordl_internal_set_m_modelOculusTouchRiftLeftController(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_modelOculusTouchRiftLeftController)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_modelOculusTouchRiftRightController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_modelOculusTouchRiftRightController;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_modelOculusTouchRiftRightController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_modelOculusTouchRiftRightController;
}
constexpr void GlobalNamespace::OVRControllerHelper::__cordl_internal_set_m_modelOculusTouchRiftRightController(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_modelOculusTouchRiftRightController)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_modelOculusTouchQuest2LeftController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_modelOculusTouchQuest2LeftController;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_modelOculusTouchQuest2LeftController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_modelOculusTouchQuest2LeftController;
}
constexpr void GlobalNamespace::OVRControllerHelper::__cordl_internal_set_m_modelOculusTouchQuest2LeftController(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_modelOculusTouchQuest2LeftController)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_modelOculusTouchQuest2RightController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_modelOculusTouchQuest2RightController;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_modelOculusTouchQuest2RightController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_modelOculusTouchQuest2RightController;
}
constexpr void GlobalNamespace::OVRControllerHelper::__cordl_internal_set_m_modelOculusTouchQuest2RightController(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_modelOculusTouchQuest2RightController)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_modelMetaTouchProLeftController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_modelMetaTouchProLeftController;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_modelMetaTouchProLeftController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_modelMetaTouchProLeftController;
}
constexpr void GlobalNamespace::OVRControllerHelper::__cordl_internal_set_m_modelMetaTouchProLeftController(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_modelMetaTouchProLeftController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_modelMetaTouchProRightController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_modelMetaTouchProRightController;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_modelMetaTouchProRightController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_modelMetaTouchProRightController;
}
constexpr void GlobalNamespace::OVRControllerHelper::__cordl_internal_set_m_modelMetaTouchProRightController(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_modelMetaTouchProRightController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_modelMetaTouchPlusLeftController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_modelMetaTouchPlusLeftController;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_modelMetaTouchPlusLeftController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_modelMetaTouchPlusLeftController;
}
constexpr void GlobalNamespace::OVRControllerHelper::__cordl_internal_set_m_modelMetaTouchPlusLeftController(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_modelMetaTouchPlusLeftController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_modelMetaTouchPlusRightController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_modelMetaTouchPlusRightController;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_modelMetaTouchPlusRightController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_modelMetaTouchPlusRightController;
}
constexpr void GlobalNamespace::OVRControllerHelper::__cordl_internal_set_m_modelMetaTouchPlusRightController(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_modelMetaTouchPlusRightController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__OVRInput__Controller& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_controller() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_controller;
}
constexpr ::GlobalNamespace::__OVRInput__Controller const& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_controller() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_controller;
}
constexpr void GlobalNamespace::OVRControllerHelper::__cordl_internal_set_m_controller(::GlobalNamespace::__OVRInput__Controller value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_controller = value;
}
constexpr ::GlobalNamespace::__OVRInput__InputDeviceShowState& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_showState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_showState;
}
constexpr ::GlobalNamespace::__OVRInput__InputDeviceShowState const& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_showState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_showState;
}
constexpr void GlobalNamespace::OVRControllerHelper::__cordl_internal_set_m_showState(::GlobalNamespace::__OVRInput__InputDeviceShowState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_showState = value;
}
constexpr bool& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_showWhenHandsArePoweredByNaturalControllerPoses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showWhenHandsArePoweredByNaturalControllerPoses;
}
constexpr bool const& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_showWhenHandsArePoweredByNaturalControllerPoses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showWhenHandsArePoweredByNaturalControllerPoses;
}
constexpr void GlobalNamespace::OVRControllerHelper::__cordl_internal_set_showWhenHandsArePoweredByNaturalControllerPoses(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___showWhenHandsArePoweredByNaturalControllerPoses = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_animator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_animator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_animator;
}
constexpr void GlobalNamespace::OVRControllerHelper::__cordl_internal_set_m_animator(::UnityW<::UnityEngine::Animator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_animator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_activeController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_activeController;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_activeController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_activeController;
}
constexpr void GlobalNamespace::OVRControllerHelper::__cordl_internal_set_m_activeController(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_activeController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_controllerModelsInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_controllerModelsInitialized;
}
constexpr bool const& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_controllerModelsInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_controllerModelsInitialized;
}
constexpr void GlobalNamespace::OVRControllerHelper::__cordl_internal_set_m_controllerModelsInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_controllerModelsInitialized = value;
}
constexpr bool& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_hasInputFocus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_hasInputFocus;
}
constexpr bool const& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_hasInputFocus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_hasInputFocus;
}
constexpr void GlobalNamespace::OVRControllerHelper::__cordl_internal_set_m_hasInputFocus(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_hasInputFocus = value;
}
constexpr bool& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_hasInputFocusPrev() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_hasInputFocusPrev;
}
constexpr bool const& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_hasInputFocusPrev() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_hasInputFocusPrev;
}
constexpr void GlobalNamespace::OVRControllerHelper::__cordl_internal_set_m_hasInputFocusPrev(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_hasInputFocusPrev = value;
}
constexpr ::GlobalNamespace::__OVRControllerHelper__ControllerType& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_activeControllerType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeControllerType;
}
constexpr ::GlobalNamespace::__OVRControllerHelper__ControllerType const& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_activeControllerType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeControllerType;
}
constexpr void GlobalNamespace::OVRControllerHelper::__cordl_internal_set_activeControllerType(::GlobalNamespace::__OVRControllerHelper__ControllerType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___activeControllerType = value;
}
constexpr bool& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_prevControllerConnected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_prevControllerConnected;
}
constexpr bool const& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_prevControllerConnected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_prevControllerConnected;
}
constexpr void GlobalNamespace::OVRControllerHelper::__cordl_internal_set_m_prevControllerConnected(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_prevControllerConnected = value;
}
constexpr bool& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_prevControllerConnectedCached() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_prevControllerConnectedCached;
}
constexpr bool const& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_prevControllerConnectedCached() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_prevControllerConnectedCached;
}
constexpr void GlobalNamespace::OVRControllerHelper::__cordl_internal_set_m_prevControllerConnectedCached(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_prevControllerConnectedCached = value;
}
constexpr ::GlobalNamespace::__OVRInput__ControllerInHandState& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_prevControllerInHandState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_prevControllerInHandState;
}
constexpr ::GlobalNamespace::__OVRInput__ControllerInHandState const& GlobalNamespace::OVRControllerHelper::__cordl_internal_get_m_prevControllerInHandState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_prevControllerInHandState;
}
constexpr void GlobalNamespace::OVRControllerHelper::__cordl_internal_set_m_prevControllerInHandState(::GlobalNamespace::__OVRInput__ControllerInHandState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_prevControllerInHandState = value;
}
inline void GlobalNamespace::OVRControllerHelper::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerHelper*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRControllerHelper::InitializeControllerModels() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerHelper*>::get(),
                                                                             "InitializeControllerModels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRControllerHelper::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerHelper*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRControllerHelper::InputFocusAquired() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerHelper*>::get(),
                                                                             "InputFocusAquired", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRControllerHelper::InputFocusLost() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerHelper*>::get(), "InputFocusLost",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRControllerHelper* GlobalNamespace::OVRControllerHelper::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRControllerHelper*>());
}
inline void GlobalNamespace::OVRControllerHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerHelper*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRControllerHelper::OVRControllerHelper() {}
