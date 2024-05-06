#pragma once
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/UI/CoroutineTween/zzzz__ColorTween_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/UI/CoroutineTween/zzzz__ColorTween_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/UI/CoroutineTween/zzzz__ColorTween_def.hpp"
#include "UnityEngine/UI/CoroutineTween/zzzz__ITweenValue_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode::__ColorTween__ColorTweenMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode::__ColorTween__ColorTweenMode() {}
constexpr ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode::All{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode::RGB{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode::Alpha{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback::*)()>(
    &::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x34e708c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback* UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback*>());
}
inline void UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback::__ColorTween__ColorTweenCallback() {}
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.get_startColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::UnityEngine::UI::CoroutineTween::ColorTween::*)()>(
    &::UnityEngine::UI::CoroutineTween::ColorTween::get_startColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x34e6eb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                                                                               "get_startColor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.set_startColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CoroutineTween::ColorTween::*)(::UnityEngine::Color)>(
    &::UnityEngine::UI::CoroutineTween::ColorTween::set_startColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x34e6ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(), "set_startColor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.get_targetColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::UnityEngine::UI::CoroutineTween::ColorTween::*)()>(
    &::UnityEngine::UI::CoroutineTween::ColorTween::get_targetColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x34e6ecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                                                                               "get_targetColor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.set_targetColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CoroutineTween::ColorTween::*)(::UnityEngine::Color)>(
    &::UnityEngine::UI::CoroutineTween::ColorTween::set_targetColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x34e6ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(), "set_targetColor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.get_tweenMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode (::UnityEngine::UI::CoroutineTween::ColorTween::*)()>(
    &::UnityEngine::UI::CoroutineTween::ColorTween::get_tweenMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34e6ee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                                                                               "get_tweenMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.set_tweenMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CoroutineTween::ColorTween::*)(
    ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode)>(&::UnityEngine::UI::CoroutineTween::ColorTween::set_tweenMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34e6eec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(), "set_tweenMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.get_duration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::CoroutineTween::ColorTween::*)()>(
    &::UnityEngine::UI::CoroutineTween::ColorTween::get_duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34e6ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                                                                               "get_duration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.set_duration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CoroutineTween::ColorTween::*)(float_t)>(
    &::UnityEngine::UI::CoroutineTween::ColorTween::set_duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34e6efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(), "set_duration",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.get_ignoreTimeScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::CoroutineTween::ColorTween::*)()>(
    &::UnityEngine::UI::CoroutineTween::ColorTween::get_ignoreTimeScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34e6f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                                                                               "get_ignoreTimeScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.set_ignoreTimeScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CoroutineTween::ColorTween::*)(bool)>(
    &::UnityEngine::UI::CoroutineTween::ColorTween::set_ignoreTimeScale)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x34e6f0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(), "set_ignoreTimeScale",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.TweenValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CoroutineTween::ColorTween::*)(float_t)>(
    &::UnityEngine::UI::CoroutineTween::ColorTween::TweenValue)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x34e6f18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(), "TweenValue",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.AddOnChangedCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CoroutineTween::ColorTween::*)(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*)>(
    &::UnityEngine::UI::CoroutineTween::ColorTween::AddOnChangedCallback)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x34e7004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(), "AddOnChangedCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.GetIgnoreTimescale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::CoroutineTween::ColorTween::*)()>(
    &::UnityEngine::UI::CoroutineTween::ColorTween::GetIgnoreTimescale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34e70d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                                                                               "GetIgnoreTimescale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.GetDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::CoroutineTween::ColorTween::*)()>(
    &::UnityEngine::UI::CoroutineTween::ColorTween::GetDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34e70dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                                                                               "GetDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.ValidTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::CoroutineTween::ColorTween::*)()>(
    &::UnityEngine::UI::CoroutineTween::ColorTween::ValidTarget)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x34e6ff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                                                                               "ValidTarget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::UI::CoroutineTween::ITweenValue"
constexpr UnityEngine::UI::CoroutineTween::ColorTween::operator ::UnityEngine::UI::CoroutineTween::ITweenValue*() {
  return static_cast<::UnityEngine::UI::CoroutineTween::ITweenValue*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::UI::CoroutineTween::ITweenValue"
constexpr ::UnityEngine::UI::CoroutineTween::ITweenValue* UnityEngine::UI::CoroutineTween::ColorTween::i___UnityEngine__UI__CoroutineTween__ITweenValue() {
  return static_cast<::UnityEngine::UI::CoroutineTween::ITweenValue*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline ::UnityEngine::Color UnityEngine::UI::CoroutineTween::ColorTween::get_startColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                                                                             "get_startColor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void UnityEngine::UI::CoroutineTween::ColorTween::set_startColor(::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(), "set_startColor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Color UnityEngine::UI::CoroutineTween::ColorTween::get_targetColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                                                                             "get_targetColor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void UnityEngine::UI::CoroutineTween::ColorTween::set_targetColor(::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(), "set_targetColor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode UnityEngine::UI::CoroutineTween::ColorTween::get_tweenMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                                                                             "get_tweenMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode, false>(this, ___internal_method);
}
inline void UnityEngine::UI::CoroutineTween::ColorTween::set_tweenMode(::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(), "set_tweenMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::CoroutineTween::ColorTween::get_duration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                                                                             "get_duration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UI::CoroutineTween::ColorTween::set_duration(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(), "set_duration",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::CoroutineTween::ColorTween::get_ignoreTimeScale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                                                                             "get_ignoreTimeScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UI::CoroutineTween::ColorTween::set_ignoreTimeScale(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(), "set_ignoreTimeScale",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UI::CoroutineTween::ColorTween::TweenValue(float_t floatPercentage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(), "TweenValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, floatPercentage);
}
inline void UnityEngine::UI::CoroutineTween::ColorTween::AddOnChangedCallback(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(), "AddOnChangedCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback);
}
inline bool UnityEngine::UI::CoroutineTween::ColorTween::GetIgnoreTimescale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                                                                             "GetIgnoreTimescale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t UnityEngine::UI::CoroutineTween::ColorTween::GetDuration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                                                                             "GetDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool UnityEngine::UI::CoroutineTween::ColorTween::ValidTarget() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                                                                             "ValidTarget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Target", ty: "::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "m_StartColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TargetColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_TweenMode", ty: "::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Duration", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_IgnoreTimeScale", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::CoroutineTween::ColorTween::ColorTween(::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback* m_Target, ::UnityEngine::Color m_StartColor,
                                                                    ::UnityEngine::Color m_TargetColor, ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode m_TweenMode, float_t m_Duration,
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
