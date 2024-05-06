#pragma once
#include "UnityEngine/InputSystem/zzzz__InputSettings_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputSettings_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputSettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputSettings__UpdateMode::__InputSettings__UpdateMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputSettings__UpdateMode::__InputSettings__UpdateMode() {}
constexpr ::UnityEngine::InputSystem::__InputSettings__UpdateMode UnityEngine::InputSystem::__InputSettings__UpdateMode::ProcessEventsInDynamicUpdate{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::__InputSettings__UpdateMode UnityEngine::InputSystem::__InputSettings__UpdateMode::ProcessEventsInFixedUpdate{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputSystem::__InputSettings__UpdateMode UnityEngine::InputSystem::__InputSettings__UpdateMode::ProcessEventsManually{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior::__InputSettings__BackgroundBehavior(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior::__InputSettings__BackgroundBehavior() {}
constexpr ::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior UnityEngine::InputSystem::__InputSettings__BackgroundBehavior::ResetAndDisableNonBackgroundDevices{ static_cast<int32_t>(
    0x0) };
constexpr ::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior UnityEngine::InputSystem::__InputSettings__BackgroundBehavior::ResetAndDisableAllDevices{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior UnityEngine::InputSystem::__InputSettings__BackgroundBehavior::IgnoreFocus{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode::__InputSettings__EditorInputBehaviorInPlayMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode::__InputSettings__EditorInputBehaviorInPlayMode() {}
constexpr ::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode::PointersAndKeyboardsRespectGameViewFocus{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode::AllDevicesRespectGameViewFocus{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode::AllDeviceInputAlwaysGoesToGameView{
  static_cast<int32_t>(0x2)
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_updateMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputSettings__UpdateMode (::UnityEngine::InputSystem::InputSettings::*)()>(
    &::UnityEngine::InputSystem::InputSettings::get_updateMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3128408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                                                                               "get_updateMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_updateMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(::UnityEngine::InputSystem::__InputSettings__UpdateMode)>(
    &::UnityEngine::InputSystem::InputSettings::set_updateMode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3128410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_updateMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputSettings__UpdateMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_compensateForScreenOrientation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputSettings::*)()>(
    &::UnityEngine::InputSystem::InputSettings::get_compensateForScreenOrientation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31284f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "get_compensateForScreenOrientation",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_compensateForScreenOrientation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(bool)>(
    &::UnityEngine::InputSystem::InputSettings::set_compensateForScreenOrientation)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x31284fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_compensateForScreenOrientation",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_filterNoiseOnCurrent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputSettings::*)()>(
    &::UnityEngine::InputSystem::InputSettings::get_filterNoiseOnCurrent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3128518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                                                                               "get_filterNoiseOnCurrent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_filterNoiseOnCurrent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(bool)>(
    &::UnityEngine::InputSystem::InputSettings::set_filterNoiseOnCurrent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3128520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_filterNoiseOnCurrent",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_defaultDeadzoneMin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::InputSettings::*)()>(
    &::UnityEngine::InputSystem::InputSettings::get_defaultDeadzoneMin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3128524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                                                                               "get_defaultDeadzoneMin", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_defaultDeadzoneMin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(float_t)>(
    &::UnityEngine::InputSystem::InputSettings::set_defaultDeadzoneMin)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x312852c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_defaultDeadzoneMin",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_defaultDeadzoneMax
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::InputSettings::*)()>(
    &::UnityEngine::InputSystem::InputSettings::get_defaultDeadzoneMax)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3128544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                                                                               "get_defaultDeadzoneMax", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_defaultDeadzoneMax
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(float_t)>(
    &::UnityEngine::InputSystem::InputSettings::set_defaultDeadzoneMax)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x312854c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_defaultDeadzoneMax",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_defaultButtonPressPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::InputSettings::*)()>(
    &::UnityEngine::InputSystem::InputSettings::get_defaultButtonPressPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3128564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                                                                               "get_defaultButtonPressPoint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_defaultButtonPressPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(float_t)>(
    &::UnityEngine::InputSystem::InputSettings::set_defaultButtonPressPoint)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x312856c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_defaultButtonPressPoint",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_buttonReleaseThreshold
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::InputSettings::*)()>(
    &::UnityEngine::InputSystem::InputSettings::get_buttonReleaseThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31285a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                                                                               "get_buttonReleaseThreshold", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_buttonReleaseThreshold
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(float_t)>(
    &::UnityEngine::InputSystem::InputSettings::set_buttonReleaseThreshold)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x31285a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_buttonReleaseThreshold",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_defaultTapTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::InputSettings::*)()>(
    &::UnityEngine::InputSystem::InputSettings::get_defaultTapTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31285c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                                                                               "get_defaultTapTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_defaultTapTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(float_t)>(
    &::UnityEngine::InputSystem::InputSettings::set_defaultTapTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x31285c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_defaultTapTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_defaultSlowTapTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::InputSettings::*)()>(
    &::UnityEngine::InputSystem::InputSettings::get_defaultSlowTapTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31285e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                                                                               "get_defaultSlowTapTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_defaultSlowTapTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(float_t)>(
    &::UnityEngine::InputSystem::InputSettings::set_defaultSlowTapTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x31285e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_defaultSlowTapTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_defaultHoldTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::InputSettings::*)()>(
    &::UnityEngine::InputSystem::InputSettings::get_defaultHoldTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3128600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                                                                               "get_defaultHoldTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_defaultHoldTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(float_t)>(
    &::UnityEngine::InputSystem::InputSettings::set_defaultHoldTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3128608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_defaultHoldTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_tapRadius
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::InputSettings::*)()>(
    &::UnityEngine::InputSystem::InputSettings::get_tapRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3128620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                                                                               "get_tapRadius", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_tapRadius
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(float_t)>(
    &::UnityEngine::InputSystem::InputSettings::set_tapRadius)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3128628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_tapRadius",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_multiTapDelayTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::InputSettings::*)()>(
    &::UnityEngine::InputSystem::InputSettings::get_multiTapDelayTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3128640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                                                                               "get_multiTapDelayTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_multiTapDelayTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(float_t)>(
    &::UnityEngine::InputSystem::InputSettings::set_multiTapDelayTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3128648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_multiTapDelayTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_backgroundBehavior
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior (::UnityEngine::InputSystem::InputSettings::*)()>(
    &::UnityEngine::InputSystem::InputSettings::get_backgroundBehavior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3128660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                                                                               "get_backgroundBehavior", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_backgroundBehavior
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior)>(
    &::UnityEngine::InputSystem::InputSettings::set_backgroundBehavior)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3128668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_backgroundBehavior", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_editorInputBehaviorInPlayMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode (
    ::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_editorInputBehaviorInPlayMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3128680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "get_editorInputBehaviorInPlayMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_editorInputBehaviorInPlayMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(
    ::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode)>(&::UnityEngine::InputSystem::InputSettings::set_editorInputBehaviorInPlayMode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3128688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_editorInputBehaviorInPlayMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_maxEventBytesPerUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputSettings::*)()>(
    &::UnityEngine::InputSystem::InputSettings::get_maxEventBytesPerUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31286a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                                                                               "get_maxEventBytesPerUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_maxEventBytesPerUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputSettings::set_maxEventBytesPerUpdate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x31286a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_maxEventBytesPerUpdate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_maxQueuedEventsPerUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputSettings::*)()>(
    &::UnityEngine::InputSystem::InputSettings::get_maxQueuedEventsPerUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31286c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                                                                               "get_maxQueuedEventsPerUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_maxQueuedEventsPerUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputSettings::set_maxQueuedEventsPerUpdate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x31286c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_maxQueuedEventsPerUpdate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_supportedDevices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::StringW> (::UnityEngine::InputSystem::InputSettings::*)()>(
    &::UnityEngine::InputSystem::InputSettings::get_supportedDevices)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x31286e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                                                                               "get_supportedDevices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_supportedDevices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::StringW>)>(&::UnityEngine::InputSystem::InputSettings::set_supportedDevices)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x3128740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_supportedDevices", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_disableRedundantEventsMerging
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputSettings::*)()>(
    &::UnityEngine::InputSystem::InputSettings::get_disableRedundantEventsMerging)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3128864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "get_disableRedundantEventsMerging",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_disableRedundantEventsMerging
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(bool)>(
    &::UnityEngine::InputSystem::InputSettings::set_disableRedundantEventsMerging)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x312886c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_disableRedundantEventsMerging",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.SetInternalFeatureFlag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(::StringW, bool)>(
    &::UnityEngine::InputSystem::InputSettings::SetInternalFeatureFlag)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x3128888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "SetInternalFeatureFlag", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.IsFeatureEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputSettings::*)(::StringW)>(
    &::UnityEngine::InputSystem::InputSettings::IsFeatureEnabled)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3128a28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "IsFeatureEnabled",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.OnChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::OnChange)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3128428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "OnChange",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3128ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_SupportedDevices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportedDevices;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_SupportedDevices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportedDevices;
}
constexpr void UnityEngine::InputSystem::InputSettings::__cordl_internal_set_m_SupportedDevices(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SupportedDevices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::__InputSettings__UpdateMode& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_UpdateMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateMode;
}
constexpr ::UnityEngine::InputSystem::__InputSettings__UpdateMode const& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_UpdateMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateMode;
}
constexpr void UnityEngine::InputSystem::InputSettings::__cordl_internal_set_m_UpdateMode(::UnityEngine::InputSystem::__InputSettings__UpdateMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateMode = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_MaxEventBytesPerUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxEventBytesPerUpdate;
}
constexpr int32_t const& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_MaxEventBytesPerUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxEventBytesPerUpdate;
}
constexpr void UnityEngine::InputSystem::InputSettings::__cordl_internal_set_m_MaxEventBytesPerUpdate(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxEventBytesPerUpdate = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_MaxQueuedEventsPerUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxQueuedEventsPerUpdate;
}
constexpr int32_t const& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_MaxQueuedEventsPerUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxQueuedEventsPerUpdate;
}
constexpr void UnityEngine::InputSystem::InputSettings::__cordl_internal_set_m_MaxQueuedEventsPerUpdate(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxQueuedEventsPerUpdate = value;
}
constexpr bool& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_CompensateForScreenOrientation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CompensateForScreenOrientation;
}
constexpr bool const& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_CompensateForScreenOrientation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CompensateForScreenOrientation;
}
constexpr void UnityEngine::InputSystem::InputSettings::__cordl_internal_set_m_CompensateForScreenOrientation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CompensateForScreenOrientation = value;
}
constexpr ::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_BackgroundBehavior() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BackgroundBehavior;
}
constexpr ::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior const& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_BackgroundBehavior() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BackgroundBehavior;
}
constexpr void UnityEngine::InputSystem::InputSettings::__cordl_internal_set_m_BackgroundBehavior(::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BackgroundBehavior = value;
}
constexpr ::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_EditorInputBehaviorInPlayMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EditorInputBehaviorInPlayMode;
}
constexpr ::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode const& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_EditorInputBehaviorInPlayMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EditorInputBehaviorInPlayMode;
}
constexpr void UnityEngine::InputSystem::InputSettings::__cordl_internal_set_m_EditorInputBehaviorInPlayMode(::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EditorInputBehaviorInPlayMode = value;
}
constexpr float_t& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_DefaultDeadzoneMin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultDeadzoneMin;
}
constexpr float_t const& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_DefaultDeadzoneMin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultDeadzoneMin;
}
constexpr void UnityEngine::InputSystem::InputSettings::__cordl_internal_set_m_DefaultDeadzoneMin(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultDeadzoneMin = value;
}
constexpr float_t& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_DefaultDeadzoneMax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultDeadzoneMax;
}
constexpr float_t const& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_DefaultDeadzoneMax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultDeadzoneMax;
}
constexpr void UnityEngine::InputSystem::InputSettings::__cordl_internal_set_m_DefaultDeadzoneMax(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultDeadzoneMax = value;
}
constexpr float_t& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_DefaultButtonPressPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultButtonPressPoint;
}
constexpr float_t const& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_DefaultButtonPressPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultButtonPressPoint;
}
constexpr void UnityEngine::InputSystem::InputSettings::__cordl_internal_set_m_DefaultButtonPressPoint(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultButtonPressPoint = value;
}
constexpr float_t& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_ButtonReleaseThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ButtonReleaseThreshold;
}
constexpr float_t const& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_ButtonReleaseThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ButtonReleaseThreshold;
}
constexpr void UnityEngine::InputSystem::InputSettings::__cordl_internal_set_m_ButtonReleaseThreshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ButtonReleaseThreshold = value;
}
constexpr float_t& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_DefaultTapTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultTapTime;
}
constexpr float_t const& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_DefaultTapTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultTapTime;
}
constexpr void UnityEngine::InputSystem::InputSettings::__cordl_internal_set_m_DefaultTapTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultTapTime = value;
}
constexpr float_t& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_DefaultSlowTapTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultSlowTapTime;
}
constexpr float_t const& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_DefaultSlowTapTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultSlowTapTime;
}
constexpr void UnityEngine::InputSystem::InputSettings::__cordl_internal_set_m_DefaultSlowTapTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultSlowTapTime = value;
}
constexpr float_t& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_DefaultHoldTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultHoldTime;
}
constexpr float_t const& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_DefaultHoldTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultHoldTime;
}
constexpr void UnityEngine::InputSystem::InputSettings::__cordl_internal_set_m_DefaultHoldTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultHoldTime = value;
}
constexpr float_t& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_TapRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TapRadius;
}
constexpr float_t const& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_TapRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TapRadius;
}
constexpr void UnityEngine::InputSystem::InputSettings::__cordl_internal_set_m_TapRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TapRadius = value;
}
constexpr float_t& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_MultiTapDelayTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MultiTapDelayTime;
}
constexpr float_t const& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_MultiTapDelayTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MultiTapDelayTime;
}
constexpr void UnityEngine::InputSystem::InputSettings::__cordl_internal_set_m_MultiTapDelayTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MultiTapDelayTime = value;
}
constexpr bool& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_DisableRedundantEventsMerging() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisableRedundantEventsMerging;
}
constexpr bool const& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_DisableRedundantEventsMerging() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisableRedundantEventsMerging;
}
constexpr void UnityEngine::InputSystem::InputSettings::__cordl_internal_set_m_DisableRedundantEventsMerging(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DisableRedundantEventsMerging = value;
}
constexpr bool& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_ShortcutKeysConsumeInputs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShortcutKeysConsumeInputs;
}
constexpr bool const& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_ShortcutKeysConsumeInputs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShortcutKeysConsumeInputs;
}
constexpr void UnityEngine::InputSystem::InputSettings::__cordl_internal_set_m_ShortcutKeysConsumeInputs(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShortcutKeysConsumeInputs = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_FeatureFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FeatureFlags;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_FeatureFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FeatureFlags;
}
constexpr void UnityEngine::InputSystem::InputSettings::__cordl_internal_set_m_FeatureFlags(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FeatureFlags)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::InputSystem::__InputSettings__UpdateMode UnityEngine::InputSystem::InputSettings::get_updateMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                                                                             "get_updateMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputSettings__UpdateMode, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_updateMode(::UnityEngine::InputSystem::__InputSettings__UpdateMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_updateMode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputSettings__UpdateMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputSettings::get_compensateForScreenOrientation() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "get_compensateForScreenOrientation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_compensateForScreenOrientation(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_compensateForScreenOrientation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputSettings::get_filterNoiseOnCurrent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                                                                             "get_filterNoiseOnCurrent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_filterNoiseOnCurrent(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_filterNoiseOnCurrent",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputSettings::get_defaultDeadzoneMin() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                                                                             "get_defaultDeadzoneMin", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_defaultDeadzoneMin(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_defaultDeadzoneMin",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputSettings::get_defaultDeadzoneMax() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                                                                             "get_defaultDeadzoneMax", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_defaultDeadzoneMax(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_defaultDeadzoneMax",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputSettings::get_defaultButtonPressPoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                                                                             "get_defaultButtonPressPoint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_defaultButtonPressPoint(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_defaultButtonPressPoint",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputSettings::get_buttonReleaseThreshold() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                                                                             "get_buttonReleaseThreshold", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_buttonReleaseThreshold(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_buttonReleaseThreshold",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputSettings::get_defaultTapTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                                                                             "get_defaultTapTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_defaultTapTime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_defaultTapTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputSettings::get_defaultSlowTapTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                                                                             "get_defaultSlowTapTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_defaultSlowTapTime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_defaultSlowTapTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputSettings::get_defaultHoldTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                                                                             "get_defaultHoldTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_defaultHoldTime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_defaultHoldTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputSettings::get_tapRadius() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "get_tapRadius",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_tapRadius(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_tapRadius",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputSettings::get_multiTapDelayTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                                                                             "get_multiTapDelayTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_multiTapDelayTime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_multiTapDelayTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior UnityEngine::InputSystem::InputSettings::get_backgroundBehavior() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                                                                             "get_backgroundBehavior", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_backgroundBehavior(::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_backgroundBehavior", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode UnityEngine::InputSystem::InputSettings::get_editorInputBehaviorInPlayMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "get_editorInputBehaviorInPlayMode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_editorInputBehaviorInPlayMode(::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_editorInputBehaviorInPlayMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::InputSettings::get_maxEventBytesPerUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                                                                             "get_maxEventBytesPerUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_maxEventBytesPerUpdate(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_maxEventBytesPerUpdate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::InputSettings::get_maxQueuedEventsPerUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                                                                             "get_maxQueuedEventsPerUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_maxQueuedEventsPerUpdate(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_maxQueuedEventsPerUpdate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::StringW> UnityEngine::InputSystem::InputSettings::get_supportedDevices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                                                                             "get_supportedDevices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::StringW>, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_supportedDevices(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::StringW> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_supportedDevices", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputSettings::get_disableRedundantEventsMerging() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "get_disableRedundantEventsMerging",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_disableRedundantEventsMerging(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "set_disableRedundantEventsMerging",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSettings::SetInternalFeatureFlag(::StringW featureName, bool enabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "SetInternalFeatureFlag", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, featureName, enabled);
}
inline bool UnityEngine::InputSystem::InputSettings::IsFeatureEnabled(::StringW featureName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "IsFeatureEnabled",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, featureName);
}
inline void UnityEngine::InputSystem::InputSettings::OnChange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), "OnChange",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputSettings* UnityEngine::InputSystem::InputSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::InputSettings*>());
}
inline void UnityEngine::InputSystem::InputSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputSettings::InputSettings() {}
