#pragma once
// IWYU pragma private; include "UnityEngine\UI\CoroutineTween\ColorTween.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/UI/CoroutineTween/zzzz__ColorTween_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/UI/CoroutineTween/zzzz__ColorTween_def.hpp"
#include "UnityEngine/UI/CoroutineTween/zzzz__ITweenValue_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenMode::ColorTween_ColorTweenMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenMode::ColorTween_ColorTweenMode() {}
constexpr ::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenMode UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenMode::All{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenMode UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenMode::RGB{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenMode UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenMode::Alpha{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenCallback::*)()>(
    &::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenCallback::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e14860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenCallback*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenCallback::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenCallback*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenCallback* UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenCallback::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenCallback*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenCallback::ColorTween_ColorTweenCallback() {}
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.get_startColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::UI::CoroutineTween::ColorTween::*)()>(&::UnityEngine::UI::CoroutineTween::ColorTween::get_startColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e1467c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween>(), { "get_startColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.set_startColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CoroutineTween::ColorTween::*)(::UnityEngine::Color)>(&::UnityEngine::UI::CoroutineTween::ColorTween::set_startColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e14688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween>(), { "set_startColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.get_targetColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::UI::CoroutineTween::ColorTween::*)()>(&::UnityEngine::UI::CoroutineTween::ColorTween::get_targetColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e14694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween>(), { "get_targetColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.set_targetColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CoroutineTween::ColorTween::*)(::UnityEngine::Color)>(
    &::UnityEngine::UI::CoroutineTween::ColorTween::set_targetColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e146a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween>(), { "set_targetColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.get_tweenMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenMode (::UnityEngine::UI::CoroutineTween::ColorTween::*)()>(
    &::UnityEngine::UI::CoroutineTween::ColorTween::get_tweenMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e146ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween>(), { "get_tweenMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.set_tweenMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CoroutineTween::ColorTween::*)(::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenMode)>(
    &::UnityEngine::UI::CoroutineTween::ColorTween::set_tweenMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e146b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween>(),
                                                             { "set_tweenMode", {}, { ::i2c::type_of<::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.get_duration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::CoroutineTween::ColorTween::*)()>(&::UnityEngine::UI::CoroutineTween::ColorTween::get_duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e146bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween>(), { "get_duration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.set_duration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CoroutineTween::ColorTween::*)(float_t)>(&::UnityEngine::UI::CoroutineTween::ColorTween::set_duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e146c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween>(), { "set_duration", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.get_ignoreTimeScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::CoroutineTween::ColorTween::*)()>(&::UnityEngine::UI::CoroutineTween::ColorTween::get_ignoreTimeScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e146cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween>(), { "get_ignoreTimeScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.set_ignoreTimeScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CoroutineTween::ColorTween::*)(bool)>(&::UnityEngine::UI::CoroutineTween::ColorTween::set_ignoreTimeScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e146d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween>(), { "set_ignoreTimeScale", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.TweenValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CoroutineTween::ColorTween::*)(float_t)>(&::UnityEngine::UI::CoroutineTween::ColorTween::TweenValue)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6e146dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween>(), { "TweenValue", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.AddOnChangedCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CoroutineTween::ColorTween::*)(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*)>(
    &::UnityEngine::UI::CoroutineTween::ColorTween::AddOnChangedCallback)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6e147c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween>(),
                                                             { "AddOnChangedCallback", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.GetIgnoreTimescale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::CoroutineTween::ColorTween::*)()>(&::UnityEngine::UI::CoroutineTween::ColorTween::GetIgnoreTimescale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e148ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween>(), { "GetIgnoreTimescale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.GetDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::CoroutineTween::ColorTween::*)()>(&::UnityEngine::UI::CoroutineTween::ColorTween::GetDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e148b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween>(), { "GetDuration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.ValidTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::CoroutineTween::ColorTween::*)()>(&::UnityEngine::UI::CoroutineTween::ColorTween::ValidTarget)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e147b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween>(), { "ValidTarget", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Color UnityEngine::UI::CoroutineTween::ColorTween::get_startColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween>(), { "get_startColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(*this, ___internal_method);
}
inline void UnityEngine::UI::CoroutineTween::ColorTween::set_startColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween>(), { "set_startColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Color UnityEngine::UI::CoroutineTween::ColorTween::get_targetColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween>(), { "get_targetColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(*this, ___internal_method);
}
inline void UnityEngine::UI::CoroutineTween::ColorTween::set_targetColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween>(), { "set_targetColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenMode UnityEngine::UI::CoroutineTween::ColorTween::get_tweenMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween>(), { "get_tweenMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenMode>(*this, ___internal_method);
}
inline void UnityEngine::UI::CoroutineTween::ColorTween::set_tweenMode(::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenMode value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween>(),
                                                                                         { "set_tweenMode", {}, { ::i2c::type_of<::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::UI::CoroutineTween::ColorTween::get_duration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween>(), { "get_duration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::UI::CoroutineTween::ColorTween::set_duration(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween>(), { "set_duration", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::UI::CoroutineTween::ColorTween::get_ignoreTimeScale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween>(), { "get_ignoreTimeScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::UI::CoroutineTween::ColorTween::set_ignoreTimeScale(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween>(), { "set_ignoreTimeScale", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::UI::CoroutineTween::ColorTween::TweenValue(float_t floatPercentage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween>(), { "TweenValue", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, floatPercentage);
}
inline void UnityEngine::UI::CoroutineTween::ColorTween::AddOnChangedCallback(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween>(),
                                                           { "AddOnChangedCallback", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, callback);
}
inline bool UnityEngine::UI::CoroutineTween::ColorTween::GetIgnoreTimescale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween>(), { "GetIgnoreTimescale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline float_t UnityEngine::UI::CoroutineTween::ColorTween::GetDuration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween>(), { "GetDuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline bool UnityEngine::UI::CoroutineTween::ColorTween::ValidTarget() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ColorTween>(), { "ValidTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::UI::CoroutineTween::ITweenValue"
constexpr UnityEngine::UI::CoroutineTween::ColorTween::operator ::UnityEngine::UI::CoroutineTween::ITweenValue*() {
  return static_cast<::UnityEngine::UI::CoroutineTween::ITweenValue*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::UI::CoroutineTween::ITweenValue"
constexpr ::UnityEngine::UI::CoroutineTween::ITweenValue* UnityEngine::UI::CoroutineTween::ColorTween::i___UnityEngine__UI__CoroutineTween__ITweenValue() {
  return static_cast<::UnityEngine::UI::CoroutineTween::ITweenValue*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Target", ty: "::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenCallback*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StartColor", ty:
// "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TargetColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TweenMode",
// ty: "::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Duration", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_IgnoreTimeScale", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::CoroutineTween::ColorTween::ColorTween(::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenCallback* m_Target, ::UnityEngine::Color m_StartColor,
                                                                    ::UnityEngine::Color m_TargetColor, ::UnityEngine::UI::CoroutineTween::ColorTween_ColorTweenMode m_TweenMode, float_t m_Duration,
                                                                    bool m_IgnoreTimeScale) noexcept {
  this->m_Target = m_Target;
  this->m_StartColor = m_StartColor;
  this->m_TargetColor = m_TargetColor;
  this->m_TweenMode = m_TweenMode;
  this->m_Duration = m_Duration;
  this->m_IgnoreTimeScale = m_IgnoreTimeScale;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::CoroutineTween::ColorTween::ColorTween() {}
