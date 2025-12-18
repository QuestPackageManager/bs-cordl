#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRHeadsetEmulator.hpp"
#include "UnityEngine/zzzz__CursorLockMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRHeadsetEmulator_def.hpp"
#include "GlobalNamespace/zzzz__OVRHeadsetEmulator_def.hpp"
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRHeadsetEmulator_OpMode::OVRHeadsetEmulator_OpMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRHeadsetEmulator_OpMode::OVRHeadsetEmulator_OpMode() {}
constexpr ::GlobalNamespace::OVRHeadsetEmulator_OpMode GlobalNamespace::OVRHeadsetEmulator_OpMode::Off{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRHeadsetEmulator_OpMode GlobalNamespace::OVRHeadsetEmulator_OpMode::EditorOnly{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRHeadsetEmulator_OpMode GlobalNamespace::OVRHeadsetEmulator_OpMode::AlwaysOn{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::OVRHeadsetEmulator.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHeadsetEmulator::*)()>(&::GlobalNamespace::OVRHeadsetEmulator::Start)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x5cab3a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHeadsetEmulator.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHeadsetEmulator::*)()>(&::GlobalNamespace::OVRHeadsetEmulator::Update)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x5cab67c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHeadsetEmulator.IsEmulationActivated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRHeadsetEmulator::*)()>(&::GlobalNamespace::OVRHeadsetEmulator::IsEmulationActivated)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5cabba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(),
                                                                               "IsEmulationActivated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHeadsetEmulator.IsTweakingPitch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRHeadsetEmulator::*)()>(&::GlobalNamespace::OVRHeadsetEmulator::IsTweakingPitch)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5cabc9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(), "IsTweakingPitch",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHeadsetEmulator.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHeadsetEmulator::*)()>(&::GlobalNamespace::OVRHeadsetEmulator::OnDestroy)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5cabd4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHeadsetEmulator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHeadsetEmulator::*)()>(&::GlobalNamespace::OVRHeadsetEmulator::_ctor)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5cabe40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRHeadsetEmulator_OpMode& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_opMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opMode;
}
constexpr ::GlobalNamespace::OVRHeadsetEmulator_OpMode const& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_opMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opMode;
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_set_opMode(::GlobalNamespace::OVRHeadsetEmulator_OpMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___opMode = value;
}
constexpr bool& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_resetHmdPoseOnRelease() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetHmdPoseOnRelease;
}
constexpr bool const& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_resetHmdPoseOnRelease() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetHmdPoseOnRelease;
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_set_resetHmdPoseOnRelease(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resetHmdPoseOnRelease = value;
}
constexpr bool& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_resetHmdPoseByMiddleMouseButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetHmdPoseByMiddleMouseButton;
}
constexpr bool const& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_resetHmdPoseByMiddleMouseButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetHmdPoseByMiddleMouseButton;
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_set_resetHmdPoseByMiddleMouseButton(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resetHmdPoseByMiddleMouseButton = value;
}
constexpr ::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*>& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_activateKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activateKeys;
}
constexpr ::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*> const& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_activateKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activateKeys;
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_set_activateKeys(::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___activateKeys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_activateKeyBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activateKeyBindings;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_activateKeyBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activateKeyBindings;
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_set_activateKeyBindings(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___activateKeyBindings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*>& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_pitchKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pitchKeys;
}
constexpr ::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*> const& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_pitchKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pitchKeys;
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_set_pitchKeys(::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pitchKeys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_pitchKeyBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pitchKeyBindings;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_pitchKeyBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pitchKeyBindings;
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_set_pitchKeyBindings(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pitchKeyBindings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputAction*, ::Array<::UnityEngine::InputSystem::InputAction*>*>& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_activateKeyActions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activateKeyActions;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputAction*, ::Array<::UnityEngine::InputSystem::InputAction*>*> const&
GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_activateKeyActions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activateKeyActions;
}
constexpr void
GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_set_activateKeyActions(::ArrayW<::UnityEngine::InputSystem::InputAction*, ::Array<::UnityEngine::InputSystem::InputAction*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___activateKeyActions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputAction*, ::Array<::UnityEngine::InputSystem::InputAction*>*>& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_pitchKeyActions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pitchKeyActions;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputAction*, ::Array<::UnityEngine::InputSystem::InputAction*>*> const&
GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_pitchKeyActions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pitchKeyActions;
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_set_pitchKeyActions(::ArrayW<::UnityEngine::InputSystem::InputAction*, ::Array<::UnityEngine::InputSystem::InputAction*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pitchKeyActions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::InputAction*& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_middleMouseButtonAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___middleMouseButtonAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_middleMouseButtonAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___middleMouseButtonAction;
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_set_middleMouseButtonAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___middleMouseButtonAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::InputAction*& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_mouseScrollAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mouseScrollAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_mouseScrollAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mouseScrollAction;
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_set_mouseScrollAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mouseScrollAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::InputAction*& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_mouseMoveAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mouseMoveAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_mouseMoveAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mouseMoveAction;
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_set_mouseMoveAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mouseMoveAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVRManager>& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_manager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___manager;
}
constexpr ::UnityW<::GlobalNamespace::OVRManager> const& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_manager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___manager;
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_set_manager(::UnityW<::GlobalNamespace::OVRManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___manager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_lastFrameEmulationActivated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastFrameEmulationActivated;
}
constexpr bool const& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_lastFrameEmulationActivated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastFrameEmulationActivated;
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_set_lastFrameEmulationActivated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastFrameEmulationActivated = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_recordedHeadPoseRelativeOffsetTranslation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordedHeadPoseRelativeOffsetTranslation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_recordedHeadPoseRelativeOffsetTranslation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordedHeadPoseRelativeOffsetTranslation;
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_set_recordedHeadPoseRelativeOffsetTranslation(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recordedHeadPoseRelativeOffsetTranslation = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_recordedHeadPoseRelativeOffsetRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordedHeadPoseRelativeOffsetRotation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_recordedHeadPoseRelativeOffsetRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordedHeadPoseRelativeOffsetRotation;
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_set_recordedHeadPoseRelativeOffsetRotation(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recordedHeadPoseRelativeOffsetRotation = value;
}
constexpr bool& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_hasSentEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasSentEvent;
}
constexpr bool const& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_hasSentEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasSentEvent;
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_set_hasSentEvent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasSentEvent = value;
}
constexpr bool& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_emulatorHasInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emulatorHasInitialized;
}
constexpr bool const& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_emulatorHasInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emulatorHasInitialized;
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_set_emulatorHasInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___emulatorHasInitialized = value;
}
constexpr ::UnityEngine::CursorLockMode& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_previousCursorLockMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousCursorLockMode;
}
constexpr ::UnityEngine::CursorLockMode const& GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_get_previousCursorLockMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousCursorLockMode;
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__cordl_internal_set_previousCursorLockMode(::UnityEngine::CursorLockMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___previousCursorLockMode = value;
}
inline void GlobalNamespace::OVRHeadsetEmulator::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHeadsetEmulator::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRHeadsetEmulator::IsEmulationActivated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(),
                                                                             "IsEmulationActivated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRHeadsetEmulator::IsTweakingPitch() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(), "IsTweakingPitch",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHeadsetEmulator::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHeadsetEmulator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRHeadsetEmulator* GlobalNamespace::OVRHeadsetEmulator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRHeadsetEmulator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRHeadsetEmulator::OVRHeadsetEmulator() {}
