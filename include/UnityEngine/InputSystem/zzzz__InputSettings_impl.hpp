#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\InputSettings.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputSettings_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputSettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputSettings_UpdateMode::InputSettings_UpdateMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputSettings_UpdateMode::InputSettings_UpdateMode() {}
constexpr ::UnityEngine::InputSystem::InputSettings_UpdateMode UnityEngine::InputSystem::InputSettings_UpdateMode::ProcessEventsInDynamicUpdate{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::InputSettings_UpdateMode UnityEngine::InputSystem::InputSettings_UpdateMode::ProcessEventsInFixedUpdate{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputSystem::InputSettings_UpdateMode UnityEngine::InputSystem::InputSettings_UpdateMode::ProcessEventsManually{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior::InputSettings_ScrollDeltaBehavior(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior::InputSettings_ScrollDeltaBehavior() {}
constexpr ::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior::UniformAcrossAllPlatforms{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior::KeepPlatformSpecificInputRange{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputSettings_BackgroundBehavior::InputSettings_BackgroundBehavior(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputSettings_BackgroundBehavior::InputSettings_BackgroundBehavior() {}
constexpr ::UnityEngine::InputSystem::InputSettings_BackgroundBehavior UnityEngine::InputSystem::InputSettings_BackgroundBehavior::ResetAndDisableNonBackgroundDevices{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::InputSettings_BackgroundBehavior UnityEngine::InputSystem::InputSettings_BackgroundBehavior::ResetAndDisableAllDevices{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::InputSettings_BackgroundBehavior UnityEngine::InputSystem::InputSettings_BackgroundBehavior::IgnoreFocus{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode::InputSettings_EditorInputBehaviorInPlayMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode::InputSettings_EditorInputBehaviorInPlayMode() {}
constexpr ::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode::PointersAndKeyboardsRespectGameViewFocus{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode::AllDevicesRespectGameViewFocus{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode::AllDeviceInputAlwaysGoesToGameView{
  static_cast<int32_t>(0x2)
};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode::InputSettings_InputActionPropertyDrawerMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode::InputSettings_InputActionPropertyDrawerMode() {}
constexpr ::UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode::Compact{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode::MultilineEffective{ static_cast<int32_t>(
    0x1) };
constexpr ::UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode::MultilineBoth{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_updateMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputSettings_UpdateMode (::UnityEngine::InputSystem::InputSettings::*)()>(
    &::UnityEngine::InputSystem::InputSettings::get_updateMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x657761c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_updateMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_updateMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(::UnityEngine::InputSystem::InputSettings_UpdateMode)>(
    &::UnityEngine::InputSystem::InputSettings::set_updateMode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6577624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(),
                                                                                           { "set_updateMode", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputSettings_UpdateMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_scrollDeltaBehavior
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior (::UnityEngine::InputSystem::InputSettings::*)()>(
    &::UnityEngine::InputSystem::InputSettings::get_scrollDeltaBehavior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6577710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_scrollDeltaBehavior", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_scrollDeltaBehavior
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior)>(
    &::UnityEngine::InputSystem::InputSettings::set_scrollDeltaBehavior)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6577718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(),
                                                             { "set_scrollDeltaBehavior", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_compensateForScreenOrientation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_compensateForScreenOrientation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6577730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_compensateForScreenOrientation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_compensateForScreenOrientation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(bool)>(&::UnityEngine::InputSystem::InputSettings::set_compensateForScreenOrientation)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6577738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "set_compensateForScreenOrientation", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_filterNoiseOnCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_filterNoiseOnCurrent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6577754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_filterNoiseOnCurrent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_filterNoiseOnCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(bool)>(&::UnityEngine::InputSystem::InputSettings::set_filterNoiseOnCurrent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x657775c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "set_filterNoiseOnCurrent", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_defaultDeadzoneMin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_defaultDeadzoneMin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6577760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_defaultDeadzoneMin", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_defaultDeadzoneMin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(float_t)>(&::UnityEngine::InputSystem::InputSettings::set_defaultDeadzoneMin)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6577768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "set_defaultDeadzoneMin", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_defaultDeadzoneMax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_defaultDeadzoneMax)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6577780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_defaultDeadzoneMax", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_defaultDeadzoneMax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(float_t)>(&::UnityEngine::InputSystem::InputSettings::set_defaultDeadzoneMax)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6577788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "set_defaultDeadzoneMax", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_defaultButtonPressPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_defaultButtonPressPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65777a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_defaultButtonPressPoint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_defaultButtonPressPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(float_t)>(&::UnityEngine::InputSystem::InputSettings::set_defaultButtonPressPoint)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x65777a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "set_defaultButtonPressPoint", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_buttonReleaseThreshold
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_buttonReleaseThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65777e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_buttonReleaseThreshold", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_buttonReleaseThreshold
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(float_t)>(&::UnityEngine::InputSystem::InputSettings::set_buttonReleaseThreshold)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65777e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "set_buttonReleaseThreshold", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_defaultTapTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_defaultTapTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6577800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_defaultTapTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_defaultTapTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(float_t)>(&::UnityEngine::InputSystem::InputSettings::set_defaultTapTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6577808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "set_defaultTapTime", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_defaultSlowTapTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_defaultSlowTapTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6577820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_defaultSlowTapTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_defaultSlowTapTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(float_t)>(&::UnityEngine::InputSystem::InputSettings::set_defaultSlowTapTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6577828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "set_defaultSlowTapTime", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_defaultHoldTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_defaultHoldTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6577840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_defaultHoldTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_defaultHoldTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(float_t)>(&::UnityEngine::InputSystem::InputSettings::set_defaultHoldTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6577848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "set_defaultHoldTime", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_tapRadius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_tapRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6577860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_tapRadius", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_tapRadius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(float_t)>(&::UnityEngine::InputSystem::InputSettings::set_tapRadius)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6577868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "set_tapRadius", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_multiTapDelayTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_multiTapDelayTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6577880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_multiTapDelayTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_multiTapDelayTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(float_t)>(&::UnityEngine::InputSystem::InputSettings::set_multiTapDelayTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6577888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "set_multiTapDelayTime", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_backgroundBehavior
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputSettings_BackgroundBehavior (::UnityEngine::InputSystem::InputSettings::*)()>(
    &::UnityEngine::InputSystem::InputSettings::get_backgroundBehavior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65778a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_backgroundBehavior", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_backgroundBehavior
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(::UnityEngine::InputSystem::InputSettings_BackgroundBehavior)>(
    &::UnityEngine::InputSystem::InputSettings::set_backgroundBehavior)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65778a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(),
                                                             { "set_backgroundBehavior", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputSettings_BackgroundBehavior>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_editorInputBehaviorInPlayMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode (::UnityEngine::InputSystem::InputSettings::*)()>(
    &::UnityEngine::InputSystem::InputSettings::get_editorInputBehaviorInPlayMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65778c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_editorInputBehaviorInPlayMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_editorInputBehaviorInPlayMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode)>(
    &::UnityEngine::InputSystem::InputSettings::set_editorInputBehaviorInPlayMode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65778c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(),
                                                { "set_editorInputBehaviorInPlayMode", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_inputActionPropertyDrawerMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode (::UnityEngine::InputSystem::InputSettings::*)()>(
    &::UnityEngine::InputSystem::InputSettings::get_inputActionPropertyDrawerMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65778e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_inputActionPropertyDrawerMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_inputActionPropertyDrawerMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(::UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode)>(
    &::UnityEngine::InputSystem::InputSettings::set_inputActionPropertyDrawerMode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65778e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(),
                                                { "set_inputActionPropertyDrawerMode", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_maxEventBytesPerUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_maxEventBytesPerUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6577900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_maxEventBytesPerUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_maxEventBytesPerUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(int32_t)>(&::UnityEngine::InputSystem::InputSettings::set_maxEventBytesPerUpdate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6577908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "set_maxEventBytesPerUpdate", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_maxQueuedEventsPerUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_maxQueuedEventsPerUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6577920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_maxQueuedEventsPerUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_maxQueuedEventsPerUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(int32_t)>(&::UnityEngine::InputSystem::InputSettings::set_maxQueuedEventsPerUpdate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6577928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "set_maxQueuedEventsPerUpdate", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_supportedDevices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::StringW> (::UnityEngine::InputSystem::InputSettings::*)()>(
    &::UnityEngine::InputSystem::InputSettings::get_supportedDevices)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6577940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_supportedDevices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_supportedDevices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::StringW>)>(
    &::UnityEngine::InputSystem::InputSettings::set_supportedDevices)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6577998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(),
                                                             { "set_supportedDevices", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_disableRedundantEventsMerging
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_disableRedundantEventsMerging)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6577abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_disableRedundantEventsMerging", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_disableRedundantEventsMerging
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(bool)>(&::UnityEngine::InputSystem::InputSettings::set_disableRedundantEventsMerging)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6577ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "set_disableRedundantEventsMerging", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_shortcutKeysConsumeInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_shortcutKeysConsumeInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6577ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_shortcutKeysConsumeInput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_shortcutKeysConsumeInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(bool)>(&::UnityEngine::InputSystem::InputSettings::set_shortcutKeysConsumeInput)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6577ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "set_shortcutKeysConsumeInput", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.SetInternalFeatureFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(::StringW, bool)>(&::UnityEngine::InputSystem::InputSettings::SetInternalFeatureFlag)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6577b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "SetInternalFeatureFlag", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.IsFeatureEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputSettings::*)(::StringW)>(&::UnityEngine::InputSystem::InputSettings::IsFeatureEnabled)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6577c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "IsFeatureEnabled", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.OnChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::OnChange)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x657763c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "OnChange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.CompareFloats
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, float_t)>(&::UnityEngine::InputSystem::InputSettings::CompareFloats)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6577cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "CompareFloats", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.CompareFeatureFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputSettings*, ::UnityEngine::InputSystem::InputSettings*, ::StringW)>(
    &::UnityEngine::InputSystem::InputSettings::CompareFeatureFlag)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6577d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(),
                            { "CompareFeatureFlag",
                              {},
                              { ::i2c::type_of<::UnityEngine::InputSystem::InputSettings*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputSettings*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.AreEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputSettings*, ::UnityEngine::InputSystem::InputSettings*)>(
    &::UnityEngine::InputSystem::InputSettings::AreEqual)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x6577d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(),
                                                { "AreEqual", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputSettings*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x65780a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_SupportedDevices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportedDevices;
}
constexpr ::ArrayW<::StringW> const& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_SupportedDevices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportedDevices;
}
constexpr void UnityEngine::InputSystem::InputSettings::__cordl_internal_set_m_SupportedDevices(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SupportedDevices = value;
}
constexpr ::UnityEngine::InputSystem::InputSettings_UpdateMode& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_UpdateMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateMode;
}
constexpr ::UnityEngine::InputSystem::InputSettings_UpdateMode const& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_UpdateMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateMode;
}
constexpr void UnityEngine::InputSystem::InputSettings::__cordl_internal_set_m_UpdateMode(::UnityEngine::InputSystem::InputSettings_UpdateMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateMode = value;
}
constexpr ::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_ScrollDeltaBehavior() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollDeltaBehavior;
}
constexpr ::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior const& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_ScrollDeltaBehavior() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollDeltaBehavior;
}
constexpr void UnityEngine::InputSystem::InputSettings::__cordl_internal_set_m_ScrollDeltaBehavior(::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScrollDeltaBehavior = value;
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
constexpr ::UnityEngine::InputSystem::InputSettings_BackgroundBehavior& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_BackgroundBehavior() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BackgroundBehavior;
}
constexpr ::UnityEngine::InputSystem::InputSettings_BackgroundBehavior const& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_BackgroundBehavior() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BackgroundBehavior;
}
constexpr void UnityEngine::InputSystem::InputSettings::__cordl_internal_set_m_BackgroundBehavior(::UnityEngine::InputSystem::InputSettings_BackgroundBehavior value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BackgroundBehavior = value;
}
constexpr ::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_EditorInputBehaviorInPlayMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EditorInputBehaviorInPlayMode;
}
constexpr ::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode const& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_EditorInputBehaviorInPlayMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EditorInputBehaviorInPlayMode;
}
constexpr void UnityEngine::InputSystem::InputSettings::__cordl_internal_set_m_EditorInputBehaviorInPlayMode(::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EditorInputBehaviorInPlayMode = value;
}
constexpr ::UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_InputActionPropertyDrawerMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputActionPropertyDrawerMode;
}
constexpr ::UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode const& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_InputActionPropertyDrawerMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputActionPropertyDrawerMode;
}
constexpr void UnityEngine::InputSystem::InputSettings::__cordl_internal_set_m_InputActionPropertyDrawerMode(::UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InputActionPropertyDrawerMode = value;
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
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& UnityEngine::InputSystem::InputSettings::__cordl_internal_get_m_FeatureFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FeatureFlags;
}
constexpr void UnityEngine::InputSystem::InputSettings::__cordl_internal_set_m_FeatureFlags(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FeatureFlags = value;
}
inline ::UnityEngine::InputSystem::InputSettings_UpdateMode UnityEngine::InputSystem::InputSettings::get_updateMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_updateMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputSettings_UpdateMode>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_updateMode(::UnityEngine::InputSystem::InputSettings_UpdateMode value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(),
                                                                                         { "set_updateMode", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputSettings_UpdateMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior UnityEngine::InputSystem::InputSettings::get_scrollDeltaBehavior() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_scrollDeltaBehavior", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_scrollDeltaBehavior(::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(),
                                                           { "set_scrollDeltaBehavior", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputSettings::get_compensateForScreenOrientation() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_compensateForScreenOrientation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_compensateForScreenOrientation(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "set_compensateForScreenOrientation", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputSettings::get_filterNoiseOnCurrent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_filterNoiseOnCurrent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_filterNoiseOnCurrent(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "set_filterNoiseOnCurrent", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputSettings::get_defaultDeadzoneMin() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_defaultDeadzoneMin", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_defaultDeadzoneMin(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "set_defaultDeadzoneMin", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputSettings::get_defaultDeadzoneMax() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_defaultDeadzoneMax", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_defaultDeadzoneMax(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "set_defaultDeadzoneMax", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputSettings::get_defaultButtonPressPoint() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_defaultButtonPressPoint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_defaultButtonPressPoint(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "set_defaultButtonPressPoint", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputSettings::get_buttonReleaseThreshold() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_buttonReleaseThreshold", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_buttonReleaseThreshold(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "set_buttonReleaseThreshold", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputSettings::get_defaultTapTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_defaultTapTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_defaultTapTime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "set_defaultTapTime", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputSettings::get_defaultSlowTapTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_defaultSlowTapTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_defaultSlowTapTime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "set_defaultSlowTapTime", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputSettings::get_defaultHoldTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_defaultHoldTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_defaultHoldTime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "set_defaultHoldTime", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputSettings::get_tapRadius() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_tapRadius", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_tapRadius(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "set_tapRadius", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputSettings::get_multiTapDelayTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_multiTapDelayTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_multiTapDelayTime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "set_multiTapDelayTime", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputSettings_BackgroundBehavior UnityEngine::InputSystem::InputSettings::get_backgroundBehavior() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_backgroundBehavior", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputSettings_BackgroundBehavior>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_backgroundBehavior(::UnityEngine::InputSystem::InputSettings_BackgroundBehavior value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(),
                                                           { "set_backgroundBehavior", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputSettings_BackgroundBehavior>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode UnityEngine::InputSystem::InputSettings::get_editorInputBehaviorInPlayMode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_editorInputBehaviorInPlayMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_editorInputBehaviorInPlayMode(::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(),
                                              { "set_editorInputBehaviorInPlayMode", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode UnityEngine::InputSystem::InputSettings::get_inputActionPropertyDrawerMode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_inputActionPropertyDrawerMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_inputActionPropertyDrawerMode(::UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(),
                                              { "set_inputActionPropertyDrawerMode", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::InputSettings::get_maxEventBytesPerUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_maxEventBytesPerUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_maxEventBytesPerUpdate(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "set_maxEventBytesPerUpdate", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::InputSettings::get_maxQueuedEventsPerUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_maxQueuedEventsPerUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_maxQueuedEventsPerUpdate(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "set_maxQueuedEventsPerUpdate", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::StringW> UnityEngine::InputSystem::InputSettings::get_supportedDevices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_supportedDevices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::StringW>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_supportedDevices(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::StringW> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(),
                                                           { "set_supportedDevices", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputSettings::get_disableRedundantEventsMerging() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_disableRedundantEventsMerging", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_disableRedundantEventsMerging(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "set_disableRedundantEventsMerging", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputSettings::get_shortcutKeysConsumeInput() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "get_shortcutKeysConsumeInput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_shortcutKeysConsumeInput(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "set_shortcutKeysConsumeInput", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSettings::SetInternalFeatureFlag(::StringW featureName, bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "SetInternalFeatureFlag", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, featureName, enabled);
}
inline bool UnityEngine::InputSystem::InputSettings::IsFeatureEnabled(::StringW featureName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "IsFeatureEnabled", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, featureName);
}
inline void UnityEngine::InputSystem::InputSettings::OnChange() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "OnChange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputSettings::CompareFloats(float_t a, float_t b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "CompareFloats", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
template <typename T>
inline bool UnityEngine::InputSystem::InputSettings::CompareSets(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<T> a, ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<T> b) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { "CompareSets",
                                                                                                               { ::i2c::class_of<T>() },
                                                                                                               { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<T>>(),
                                                                                                                 ::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::InputSystem::InputSettings::CompareFeatureFlag(::UnityEngine::InputSystem::InputSettings* a, ::UnityEngine::InputSystem::InputSettings* b, ::StringW featureName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(),
          { "CompareFeatureFlag", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputSettings*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputSettings*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, featureName);
}
inline bool UnityEngine::InputSystem::InputSettings::AreEqual(::UnityEngine::InputSystem::InputSettings* a, ::UnityEngine::InputSystem::InputSettings* b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(),
                                              { "AreEqual", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputSettings*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline void UnityEngine::InputSystem::InputSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputSettings* UnityEngine::InputSystem::InputSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputSettings*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputSettings::InputSettings() {}
