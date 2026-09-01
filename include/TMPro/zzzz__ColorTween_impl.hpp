#pragma once
// IWYU pragma private; include "TMPro\ColorTween.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "TMPro/zzzz__ColorTween_def.hpp"
#include "TMPro/zzzz__ColorTween_def.hpp"
#include "TMPro/zzzz__ITweenValue_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::ColorTween_ColorTweenMode::ColorTween_ColorTweenMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TMPro::ColorTween_ColorTweenMode::ColorTween_ColorTweenMode() {}
constexpr ::TMPro::ColorTween_ColorTweenMode TMPro::ColorTween_ColorTweenMode::All{ static_cast<int32_t>(0x0) };
constexpr ::TMPro::ColorTween_ColorTweenMode TMPro::ColorTween_ColorTweenMode::RGB{ static_cast<int32_t>(0x1) };
constexpr ::TMPro::ColorTween_ColorTweenMode TMPro::ColorTween_ColorTweenMode::Alpha{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::TMPro::ColorTween_ColorTweenCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::ColorTween_ColorTweenCallback::*)()>(&::TMPro::ColorTween_ColorTweenCallback::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x694aa9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween_ColorTweenCallback*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void TMPro::ColorTween_ColorTweenCallback::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween_ColorTweenCallback*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TMPro::ColorTween_ColorTweenCallback* TMPro::ColorTween_ColorTweenCallback::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::ColorTween_ColorTweenCallback*>());
}
// Ctor Parameters []
constexpr ::TMPro::ColorTween_ColorTweenCallback::ColorTween_ColorTweenCallback() {}
//  Writing Method size for method: ::TMPro::ColorTween.get_startColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::TMPro::ColorTween::*)()>(&::TMPro::ColorTween::get_startColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x694a8b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween>(), { "get_startColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ColorTween.set_startColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::ColorTween::*)(::UnityEngine::Color)>(&::TMPro::ColorTween::set_startColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x694a8c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween>(), { "set_startColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ColorTween.get_targetColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::TMPro::ColorTween::*)()>(&::TMPro::ColorTween::get_targetColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x694a8d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween>(), { "get_targetColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ColorTween.set_targetColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::ColorTween::*)(::UnityEngine::Color)>(&::TMPro::ColorTween::set_targetColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x694a8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween>(), { "set_targetColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ColorTween.get_tweenMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::ColorTween_ColorTweenMode (::TMPro::ColorTween::*)()>(&::TMPro::ColorTween::get_tweenMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694a8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween>(), { "get_tweenMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ColorTween.set_tweenMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::ColorTween::*)(::TMPro::ColorTween_ColorTweenMode)>(&::TMPro::ColorTween::set_tweenMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694a8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween>(), { "set_tweenMode", {}, { ::i2c::type_of<::TMPro::ColorTween_ColorTweenMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ColorTween.get_duration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::TMPro::ColorTween::*)()>(&::TMPro::ColorTween::get_duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694a8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween>(), { "get_duration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ColorTween.set_duration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::ColorTween::*)(float_t)>(&::TMPro::ColorTween::set_duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694a900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween>(), { "set_duration", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ColorTween.get_ignoreTimeScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::ColorTween::*)()>(&::TMPro::ColorTween::get_ignoreTimeScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694a908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween>(), { "get_ignoreTimeScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ColorTween.set_ignoreTimeScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::ColorTween::*)(bool)>(&::TMPro::ColorTween::set_ignoreTimeScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694a910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween>(), { "set_ignoreTimeScale", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ColorTween.TweenValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::ColorTween::*)(float_t)>(&::TMPro::ColorTween::TweenValue)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x694a918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween>(), { "TweenValue", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ColorTween.AddOnChangedCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::ColorTween::*)(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*)>(&::TMPro::ColorTween::AddOnChangedCallback)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x694aa04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween>(), { "AddOnChangedCallback", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ColorTween.GetIgnoreTimescale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::ColorTween::*)()>(&::TMPro::ColorTween::GetIgnoreTimescale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694aae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween>(), { "GetIgnoreTimescale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ColorTween.GetDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::TMPro::ColorTween::*)()>(&::TMPro::ColorTween::GetDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694aaf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween>(), { "GetDuration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ColorTween.ValidTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::ColorTween::*)()>(&::TMPro::ColorTween::ValidTarget)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x694a9f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween>(), { "ValidTarget", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Color TMPro::ColorTween::get_startColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween>(), { "get_startColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(*this, ___internal_method);
}
inline void TMPro::ColorTween::set_startColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween>(), { "set_startColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Color TMPro::ColorTween::get_targetColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween>(), { "get_targetColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(*this, ___internal_method);
}
inline void TMPro::ColorTween::set_targetColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween>(), { "set_targetColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::TMPro::ColorTween_ColorTweenMode TMPro::ColorTween::get_tweenMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween>(), { "get_tweenMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::ColorTween_ColorTweenMode>(*this, ___internal_method);
}
inline void TMPro::ColorTween::set_tweenMode(::TMPro::ColorTween_ColorTweenMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween>(), { "set_tweenMode", {}, { ::i2c::type_of<::TMPro::ColorTween_ColorTweenMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t TMPro::ColorTween::get_duration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween>(), { "get_duration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void TMPro::ColorTween::set_duration(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween>(), { "set_duration", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool TMPro::ColorTween::get_ignoreTimeScale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween>(), { "get_ignoreTimeScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void TMPro::ColorTween::set_ignoreTimeScale(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween>(), { "set_ignoreTimeScale", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void TMPro::ColorTween::TweenValue(float_t floatPercentage) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween>(), { "TweenValue", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, floatPercentage);
}
inline void TMPro::ColorTween::AddOnChangedCallback(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween>(), { "AddOnChangedCallback", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, callback);
}
inline bool TMPro::ColorTween::GetIgnoreTimescale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween>(), { "GetIgnoreTimescale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline float_t TMPro::ColorTween::GetDuration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween>(), { "GetDuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline bool TMPro::ColorTween::ValidTarget() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ColorTween>(), { "ValidTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
/// @brief Convert operator to "::TMPro::ITweenValue"
constexpr TMPro::ColorTween::operator ::TMPro::ITweenValue*() {
  return static_cast<::TMPro::ITweenValue*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::TMPro::ITweenValue"
constexpr ::TMPro::ITweenValue* TMPro::ColorTween::i___TMPro__ITweenValue() {
  return static_cast<::TMPro::ITweenValue*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Target", ty: "::TMPro::ColorTween_ColorTweenCallback*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StartColor", ty: "::UnityEngine::Color",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TargetColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TweenMode", ty:
// "::TMPro::ColorTween_ColorTweenMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Duration", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_IgnoreTimeScale", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::ColorTween::ColorTween(::TMPro::ColorTween_ColorTweenCallback* m_Target, ::UnityEngine::Color m_StartColor, ::UnityEngine::Color m_TargetColor,
                                          ::TMPro::ColorTween_ColorTweenMode m_TweenMode, float_t m_Duration, bool m_IgnoreTimeScale) noexcept {
  this->m_Target = m_Target;
  this->m_StartColor = m_StartColor;
  this->m_TargetColor = m_TargetColor;
  this->m_TweenMode = m_TweenMode;
  this->m_Duration = m_Duration;
  this->m_IgnoreTimeScale = m_IgnoreTimeScale;
}
// Ctor Parameters []
constexpr ::TMPro::ColorTween::ColorTween() {}
