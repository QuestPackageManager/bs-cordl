#pragma once
// IWYU pragma private; include "UnityEngine\VFX\VisualEffectControlTrackMixerBehaviour.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlTrackMixerBehaviour_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlTrackController_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlTrack_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffect_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::*)(::UnityEngine::VFX::VisualEffectControlTrack*, bool, bool)>(
    &::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::Init)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69d4e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour*>(),
                                                             { "Init", {}, { ::i2c::type_of<::UnityEngine::VFX::VisualEffectControlTrack*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour.ApplyFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::ApplyFrame)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x69d7c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour*>(),
                                                             { "ApplyFrame", {}, { ::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<::UnityEngine::Playables::FrameData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour.BindVFX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::*)(::UnityEngine::VFX::VisualEffect*)>(
    &::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::BindVFX)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x69d7e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour*>(), { "BindVFX", {}, { ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour.UnbindVFX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::*)()>(
    &::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::UnbindVFX)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x69d7ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour*>(), { "UnbindVFX", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour.PrepareFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::PrepareFrame)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x69d7f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour.OnBehaviourPause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::OnBehaviourPause)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x69d8158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour.InvalidateScrubbingHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::*)()>(
    &::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::InvalidateScrubbingHelper)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x69d8130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour*>(), { "InvalidateScrubbingHelper", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour.OnPlayableCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::*)(::UnityEngine::Playables::Playable)>(
    &::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::OnPlayableCreate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x69d8184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour.OnPlayableDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::*)(::UnityEngine::Playables::Playable)>(
    &::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::OnPlayableDestroy)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x69d81ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::*)()>(&::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69d81d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::VFX::VisualEffectControlTrackController*& UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::__cordl_internal_get_m_ScrubbingCacheHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrubbingCacheHelper;
}
constexpr ::UnityEngine::VFX::VisualEffectControlTrackController* const& UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::__cordl_internal_get_m_ScrubbingCacheHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrubbingCacheHelper;
}
constexpr void UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::__cordl_internal_set_m_ScrubbingCacheHelper(::UnityEngine::VFX::VisualEffectControlTrackController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScrubbingCacheHelper = value;
}
constexpr ::UnityW<::UnityEngine::VFX::VisualEffect>& UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::__cordl_internal_get_m_Target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Target;
}
constexpr ::UnityW<::UnityEngine::VFX::VisualEffect> const& UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::__cordl_internal_get_m_Target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Target;
}
constexpr void UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::__cordl_internal_set_m_Target(::UnityW<::UnityEngine::VFX::VisualEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Target = value;
}
constexpr bool& UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::__cordl_internal_get_m_ReinitWithBinding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReinitWithBinding;
}
constexpr bool const& UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::__cordl_internal_get_m_ReinitWithBinding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReinitWithBinding;
}
constexpr void UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::__cordl_internal_set_m_ReinitWithBinding(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReinitWithBinding = value;
}
constexpr bool& UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::__cordl_internal_get_m_ReinitWithUnbinding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReinitWithUnbinding;
}
constexpr bool const& UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::__cordl_internal_get_m_ReinitWithUnbinding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReinitWithUnbinding;
}
constexpr void UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::__cordl_internal_set_m_ReinitWithUnbinding(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReinitWithUnbinding = value;
}
inline void UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::Init(::UnityEngine::VFX::VisualEffectControlTrack* parentTrack, bool reinitWithBinding, bool reinitWithUnbinding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour*>(),
                                                           { "Init", {}, { ::i2c::type_of<::UnityEngine::VFX::VisualEffectControlTrack*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentTrack, reinitWithBinding, reinitWithUnbinding);
}
inline void UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::ApplyFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour*>(),
                                                           { "ApplyFrame", {}, { ::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<::UnityEngine::Playables::FrameData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, data);
}
inline void UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::BindVFX(::UnityEngine::VFX::VisualEffect* vfx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour*>(), { "BindVFX", {}, { ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vfx);
}
inline void UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::UnbindVFX() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour*>(), { "UnbindVFX", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData data) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, data);
}
inline void UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData data) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, data);
}
inline void UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::InvalidateScrubbingHelper() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour*>(), { "InvalidateScrubbingHelper", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::OnPlayableCreate(::UnityEngine::Playables::Playable playable) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline void UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::OnPlayableDestroy(::UnityEngine::Playables::Playable playable) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline void UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour* UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour::VisualEffectControlTrackMixerBehaviour() {}
