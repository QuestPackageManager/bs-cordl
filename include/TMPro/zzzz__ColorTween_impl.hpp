#pragma once
// IWYU pragma private; include "TMPro/ColorTween.hpp"
#include "TMPro/zzzz__ITweenValue_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "TMPro/zzzz__ColorTween_def.hpp"
#include "TMPro/zzzz__ColorTween_def.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::ColorTween_ColorTweenCallback::*)()>(&::TMPro::ColorTween_ColorTweenCallback::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x47c67ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween_ColorTweenCallback*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void TMPro::ColorTween_ColorTweenCallback::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween_ColorTweenCallback*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::TMPro::ColorTween_ColorTweenCallback* TMPro::ColorTween_ColorTweenCallback::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::ColorTween_ColorTweenCallback*>());
}
// Ctor Parameters []
constexpr ::TMPro::ColorTween_ColorTweenCallback::ColorTween_ColorTweenCallback() {}
//  Writing Method size for method: ::TMPro::ColorTween.get_startColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::TMPro::ColorTween::*)()>(&::TMPro::ColorTween::get_startColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x47c6614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween>::get(), "get_startColor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ColorTween.set_startColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::ColorTween::*)(::UnityEngine::Color)>(&::TMPro::ColorTween::set_startColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x47c6620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween>::get(), "set_startColor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ColorTween.get_targetColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::TMPro::ColorTween::*)()>(&::TMPro::ColorTween::get_targetColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x47c662c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween>::get(), "get_targetColor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ColorTween.set_targetColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::ColorTween::*)(::UnityEngine::Color)>(&::TMPro::ColorTween::set_targetColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x47c6638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween>::get(), "set_targetColor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ColorTween.get_tweenMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::ColorTween_ColorTweenMode (::TMPro::ColorTween::*)()>(&::TMPro::ColorTween::get_tweenMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47c6644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween>::get(), "get_tweenMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ColorTween.set_tweenMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::ColorTween::*)(::TMPro::ColorTween_ColorTweenMode)>(&::TMPro::ColorTween::set_tweenMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47c664c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween>::get(), "set_tweenMode", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::ColorTween_ColorTweenMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ColorTween.get_duration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::ColorTween::*)()>(&::TMPro::ColorTween::get_duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47c6654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween>::get(), "get_duration",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ColorTween.set_duration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::ColorTween::*)(float_t)>(&::TMPro::ColorTween::set_duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47c665c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween>::get(), "set_duration", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ColorTween.get_ignoreTimeScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::ColorTween::*)()>(&::TMPro::ColorTween::get_ignoreTimeScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47c6664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween>::get(), "get_ignoreTimeScale",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ColorTween.set_ignoreTimeScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::ColorTween::*)(bool)>(&::TMPro::ColorTween::set_ignoreTimeScale)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x47c666c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween>::get(), "set_ignoreTimeScale", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ColorTween.TweenValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::ColorTween::*)(float_t)>(&::TMPro::ColorTween::TweenValue)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x47c6678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween>::get(), "TweenValue", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ColorTween.AddOnChangedCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::ColorTween::*)(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*)>(
    &::TMPro::ColorTween::AddOnChangedCallback)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x47c6764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween>::get(), "AddOnChangedCallback", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ColorTween.GetIgnoreTimescale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::ColorTween::*)()>(&::TMPro::ColorTween::GetIgnoreTimescale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47c6834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween>::get(), "GetIgnoreTimescale",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ColorTween.GetDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::ColorTween::*)()>(&::TMPro::ColorTween::GetDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47c683c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween>::get(), "GetDuration",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ColorTween.ValidTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::ColorTween::*)()>(&::TMPro::ColorTween::ValidTarget)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x47c6754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween>::get(), "ValidTarget",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::Color TMPro::ColorTween::get_startColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween>::get(), "get_startColor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void TMPro::ColorTween::set_startColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween>::get(), "set_startColor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Color TMPro::ColorTween::get_targetColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween>::get(), "get_targetColor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void TMPro::ColorTween::set_targetColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween>::get(), "set_targetColor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::TMPro::ColorTween_ColorTweenMode TMPro::ColorTween::get_tweenMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween>::get(), "get_tweenMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::TMPro::ColorTween_ColorTweenMode, false>(this, ___internal_method);
}
inline void TMPro::ColorTween::set_tweenMode(::TMPro::ColorTween_ColorTweenMode value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween>::get(), "set_tweenMode", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::ColorTween_ColorTweenMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t TMPro::ColorTween::get_duration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween>::get(), "get_duration",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void TMPro::ColorTween::set_duration(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween>::get(), "set_duration", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool TMPro::ColorTween::get_ignoreTimeScale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween>::get(), "get_ignoreTimeScale",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void TMPro::ColorTween::set_ignoreTimeScale(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween>::get(), "set_ignoreTimeScale", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void TMPro::ColorTween::TweenValue(float_t floatPercentage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween>::get(), "TweenValue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, floatPercentage);
}
inline void TMPro::ColorTween::AddOnChangedCallback(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween>::get(), "AddOnChangedCallback", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback);
}
inline bool TMPro::ColorTween::GetIgnoreTimescale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween>::get(), "GetIgnoreTimescale",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t TMPro::ColorTween::GetDuration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween>::get(), "GetDuration",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool TMPro::ColorTween::ValidTarget() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ColorTween>::get(), "ValidTarget",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
/// @brief Convert operator to "::TMPro::ITweenValue"
constexpr TMPro::ColorTween::operator ::TMPro::ITweenValue*() {
  return static_cast<::TMPro::ITweenValue*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::TMPro::ITweenValue"
constexpr ::TMPro::ITweenValue* TMPro::ColorTween::i___TMPro__ITweenValue() {
  return static_cast<::TMPro::ITweenValue*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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
