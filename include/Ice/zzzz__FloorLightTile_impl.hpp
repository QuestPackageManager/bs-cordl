#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "Ice/zzzz__FloorLightTile_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockColorSetter_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "Ice/zzzz__FloorLightTile_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Tweening/zzzz__ColorTween_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::Ice::__FloorLightTile__Pool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Ice::__FloorLightTile__Pool::*)()>(&::Ice::__FloorLightTile__Pool::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xf6cf7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::__FloorLightTile__Pool*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Ice::__FloorLightTile__Pool* Ice::__FloorLightTile__Pool::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Ice::__FloorLightTile__Pool*>());
}
inline void Ice::__FloorLightTile__Pool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::__FloorLightTile__Pool*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Ice::__FloorLightTile__Pool::__FloorLightTile__Pool() {}
//  Writing Method size for method: ::Ice::FloorLightTile.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Ice::FloorLightTile::*)()>(&::Ice::FloorLightTile::Awake)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xf6cb74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::FloorLightTile*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightTile.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Ice::FloorLightTile::*)()>(&::Ice::FloorLightTile::OnDestroy)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xf6cd64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::FloorLightTile*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightTile.HighlightWithColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Ice::FloorLightTile::*)(::UnityEngine::Color, float_t, float_t)>(
    &::Ice::FloorLightTile::HighlightWithColor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xf6ce04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::FloorLightTile*>::get(), "HighlightWithColor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightTile.HandleFadeInTweenOnCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Ice::FloorLightTile::*)()>(&::Ice::FloorLightTile::HandleFadeInTweenOnCompleted)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xf6ced0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::FloorLightTile*>::get(), "HandleFadeInTweenOnCompleted",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightTile.HandleFadeOutTweenOnCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Ice::FloorLightTile::*)()>(&::Ice::FloorLightTile::HandleFadeOutTweenOnCompleted)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xf6cef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::FloorLightTile*>::get(), "HandleFadeOutTweenOnCompleted",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightTile.SetColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Ice::FloorLightTile::*)(::UnityEngine::Color)>(&::Ice::FloorLightTile::SetColor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xf6cf14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::FloorLightTile*>::get(), "SetColor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightTile._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Ice::FloorLightTile::*)()>(&::Ice::FloorLightTile::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf6cf74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::FloorLightTile*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter>& Ice::FloorLightTile::__cordl_internal_get__colorSetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSetter;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> const& Ice::FloorLightTile::__cordl_internal_get__colorSetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSetter;
}
constexpr void Ice::FloorLightTile::__cordl_internal_set__colorSetter(::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorSetter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight>& Ice::FloorLightTile::__cordl_internal_get__tubeBloomPrePassLight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tubeBloomPrePassLight;
}
constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> const& Ice::FloorLightTile::__cordl_internal_get__tubeBloomPrePassLight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tubeBloomPrePassLight;
}
constexpr void Ice::FloorLightTile::__cordl_internal_set__tubeBloomPrePassLight(::UnityW<::GlobalNamespace::TubeBloomPrePassLight> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tubeBloomPrePassLight)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& Ice::FloorLightTile::__cordl_internal_get__songTimeTweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeTweeningManager;
}
constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& Ice::FloorLightTile::__cordl_internal_get__songTimeTweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeTweeningManager;
}
constexpr void Ice::FloorLightTile::__cordl_internal_set__songTimeTweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songTimeTweeningManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityW<::Ice::FloorLightTile>>*& Ice::FloorLightTile::__cordl_internal_get_didFinish() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinish;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::Ice::FloorLightTile>>*> const& Ice::FloorLightTile::__cordl_internal_get_didFinish() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinish;
}
constexpr void Ice::FloorLightTile::__cordl_internal_set_didFinish(::System::Action_1<::UnityW<::Ice::FloorLightTile>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didFinish)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::ColorTween*& Ice::FloorLightTile::__cordl_internal_get__fadeInTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::ColorTween*> const& Ice::FloorLightTile::__cordl_internal_get__fadeInTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInTween;
}
constexpr void Ice::FloorLightTile::__cordl_internal_set__fadeInTween(::Tweening::ColorTween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fadeInTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::ColorTween*& Ice::FloorLightTile::__cordl_internal_get__fadeOutTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::ColorTween*> const& Ice::FloorLightTile::__cordl_internal_get__fadeOutTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutTween;
}
constexpr void Ice::FloorLightTile::__cordl_internal_set__fadeOutTween(::Tweening::ColorTween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fadeOutTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Ice::FloorLightTile::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::FloorLightTile*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Ice::FloorLightTile::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::FloorLightTile*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Ice::FloorLightTile::HighlightWithColor(::UnityEngine::Color color, float_t fadeInDuration, float_t fadeOutDuration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::FloorLightTile*>::get(), "HighlightWithColor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color, fadeInDuration, fadeOutDuration);
}
inline void Ice::FloorLightTile::HandleFadeInTweenOnCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::FloorLightTile*>::get(), "HandleFadeInTweenOnCompleted",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Ice::FloorLightTile::HandleFadeOutTweenOnCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::FloorLightTile*>::get(), "HandleFadeOutTweenOnCompleted",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Ice::FloorLightTile::SetColor(::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::FloorLightTile*>::get(), "SetColor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline ::Ice::FloorLightTile* Ice::FloorLightTile::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Ice::FloorLightTile*>());
}
inline void Ice::FloorLightTile::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::FloorLightTile*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Ice::FloorLightTile::FloorLightTile() {}
