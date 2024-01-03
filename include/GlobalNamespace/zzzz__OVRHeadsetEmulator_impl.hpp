#pragma once
#include "GlobalNamespace/zzzz__OVRHeadsetEmulator_impl.hpp"
#include "UnityEngine/zzzz__CursorLockMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRHeadsetEmulator_def.hpp"
#include "GlobalNamespace/zzzz__OVRHeadsetEmulator_def.hpp"
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRHeadsetEmulator__OpMode::__OVRHeadsetEmulator__OpMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRHeadsetEmulator__OpMode::__OVRHeadsetEmulator__OpMode() {}
constexpr ::GlobalNamespace::__OVRHeadsetEmulator__OpMode GlobalNamespace::__OVRHeadsetEmulator__OpMode::Off{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRHeadsetEmulator__OpMode GlobalNamespace::__OVRHeadsetEmulator__OpMode::EditorOnly{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRHeadsetEmulator__OpMode GlobalNamespace::__OVRHeadsetEmulator__OpMode::AlwaysOn{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::OVRHeadsetEmulator.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHeadsetEmulator::*)()>(&::GlobalNamespace::OVRHeadsetEmulator::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2729f60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHeadsetEmulator.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHeadsetEmulator::*)()>(&::GlobalNamespace::OVRHeadsetEmulator::Update)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x2729f64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHeadsetEmulator.IsEmulationActivated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRHeadsetEmulator::*)()>(&::GlobalNamespace::OVRHeadsetEmulator::IsEmulationActivated)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x272a3c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(),
                                                                               "IsEmulationActivated", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHeadsetEmulator.IsTweakingPitch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRHeadsetEmulator::*)()>(&::GlobalNamespace::OVRHeadsetEmulator::IsTweakingPitch)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x272a458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(), "IsTweakingPitch",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHeadsetEmulator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHeadsetEmulator::*)()>(&::GlobalNamespace::OVRHeadsetEmulator::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x272a4d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__OVRHeadsetEmulator__OpMode& GlobalNamespace::OVRHeadsetEmulator::__get_opMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opMode;
}
constexpr ::GlobalNamespace::__OVRHeadsetEmulator__OpMode const& GlobalNamespace::OVRHeadsetEmulator::__get_opMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opMode;
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__set_opMode(::GlobalNamespace::__OVRHeadsetEmulator__OpMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___opMode = value;
}
constexpr bool& GlobalNamespace::OVRHeadsetEmulator::__get_resetHmdPoseOnRelease() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetHmdPoseOnRelease;
}
constexpr bool const& GlobalNamespace::OVRHeadsetEmulator::__get_resetHmdPoseOnRelease() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetHmdPoseOnRelease;
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__set_resetHmdPoseOnRelease(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resetHmdPoseOnRelease = value;
}
constexpr bool& GlobalNamespace::OVRHeadsetEmulator::__get_resetHmdPoseByMiddleMouseButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetHmdPoseByMiddleMouseButton;
}
constexpr bool const& GlobalNamespace::OVRHeadsetEmulator::__get_resetHmdPoseByMiddleMouseButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetHmdPoseByMiddleMouseButton;
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__set_resetHmdPoseByMiddleMouseButton(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resetHmdPoseByMiddleMouseButton = value;
}
constexpr ::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*>& GlobalNamespace::OVRHeadsetEmulator::__get_activateKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activateKeys;
}
constexpr ::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*> const& GlobalNamespace::OVRHeadsetEmulator::__get_activateKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activateKeys;
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__set_activateKeys(::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___activateKeys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*>& GlobalNamespace::OVRHeadsetEmulator::__get_pitchKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pitchKeys;
}
constexpr ::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*> const& GlobalNamespace::OVRHeadsetEmulator::__get_pitchKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pitchKeys;
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__set_pitchKeys(::ArrayW<::UnityEngine::KeyCode, ::Array<::UnityEngine::KeyCode>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pitchKeys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRManager*& GlobalNamespace::OVRHeadsetEmulator::__get_manager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___manager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRManager*> const& GlobalNamespace::OVRHeadsetEmulator::__get_manager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___manager;
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__set_manager(::GlobalNamespace::OVRManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___manager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OVRHeadsetEmulator::__get_lastFrameEmulationActivated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastFrameEmulationActivated;
}
constexpr bool const& GlobalNamespace::OVRHeadsetEmulator::__get_lastFrameEmulationActivated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastFrameEmulationActivated;
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__set_lastFrameEmulationActivated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastFrameEmulationActivated = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OVRHeadsetEmulator::__get_recordedHeadPoseRelativeOffsetTranslation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordedHeadPoseRelativeOffsetTranslation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OVRHeadsetEmulator::__get_recordedHeadPoseRelativeOffsetTranslation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordedHeadPoseRelativeOffsetTranslation;
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__set_recordedHeadPoseRelativeOffsetTranslation(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recordedHeadPoseRelativeOffsetTranslation = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OVRHeadsetEmulator::__get_recordedHeadPoseRelativeOffsetRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordedHeadPoseRelativeOffsetRotation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OVRHeadsetEmulator::__get_recordedHeadPoseRelativeOffsetRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordedHeadPoseRelativeOffsetRotation;
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__set_recordedHeadPoseRelativeOffsetRotation(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recordedHeadPoseRelativeOffsetRotation = value;
}
constexpr bool& GlobalNamespace::OVRHeadsetEmulator::__get_hasSentEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasSentEvent;
}
constexpr bool const& GlobalNamespace::OVRHeadsetEmulator::__get_hasSentEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasSentEvent;
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__set_hasSentEvent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasSentEvent = value;
}
constexpr bool& GlobalNamespace::OVRHeadsetEmulator::__get_emulatorHasInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emulatorHasInitialized;
}
constexpr bool const& GlobalNamespace::OVRHeadsetEmulator::__get_emulatorHasInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emulatorHasInitialized;
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__set_emulatorHasInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___emulatorHasInitialized = value;
}
constexpr ::UnityEngine::CursorLockMode& GlobalNamespace::OVRHeadsetEmulator::__get_previousCursorLockMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousCursorLockMode;
}
constexpr ::UnityEngine::CursorLockMode const& GlobalNamespace::OVRHeadsetEmulator::__get_previousCursorLockMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousCursorLockMode;
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__set_previousCursorLockMode(::UnityEngine::CursorLockMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___previousCursorLockMode = value;
}
inline void GlobalNamespace::OVRHeadsetEmulator::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHeadsetEmulator::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRHeadsetEmulator::IsEmulationActivated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(),
                                                                             "IsEmulationActivated", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRHeadsetEmulator::IsTweakingPitch() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(), "IsTweakingPitch",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRHeadsetEmulator* GlobalNamespace::OVRHeadsetEmulator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRHeadsetEmulator*>());
}
inline void GlobalNamespace::OVRHeadsetEmulator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRHeadsetEmulator::OVRHeadsetEmulator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
