#pragma once
// IWYU pragma private; include "UnityEngine\VFX\VisualEffectControlTrack.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_impl.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlTrack_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Timeline/zzzz__IPropertyCollector_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlTrack_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::VFX::VisualEffectControlTrack_ReinitMode::VisualEffectControlTrack_ReinitMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VisualEffectControlTrack_ReinitMode::VisualEffectControlTrack_ReinitMode() {}
constexpr ::UnityEngine::VFX::VisualEffectControlTrack_ReinitMode UnityEngine::VFX::VisualEffectControlTrack_ReinitMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::VFX::VisualEffectControlTrack_ReinitMode UnityEngine::VFX::VisualEffectControlTrack_ReinitMode::OnBindingEnable{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::VFX::VisualEffectControlTrack_ReinitMode UnityEngine::VFX::VisualEffectControlTrack_ReinitMode::OnBindingDisable{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::VFX::VisualEffectControlTrack_ReinitMode UnityEngine::VFX::VisualEffectControlTrack_ReinitMode::OnBindingEnableOrDisable{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrack___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlTrack___c::*)()>(&::UnityEngine::VFX::VisualEffectControlTrack___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69d4fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrack___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrack___c._OnBeforeTrackSerialize_b__5_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::VFX::VisualEffectControlTrack___c::*)(::UnityEngine::Timeline::TimelineClip*)>(
    &::UnityEngine::VFX::VisualEffectControlTrack___c::_OnBeforeTrackSerialize_b__5_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x69d4fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrack___c*>(),
                                                                                           { "<OnBeforeTrackSerialize>b__5_0", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::VFX::VisualEffectControlTrack___c::setStaticF___9(::UnityEngine::VFX::VisualEffectControlTrack___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::VFX::VisualEffectControlTrack___c*, "<>9", ::UnityEngine::VFX::VisualEffectControlTrack___c*>(
      std::forward<::UnityEngine::VFX::VisualEffectControlTrack___c*>(value));
}
inline ::UnityEngine::VFX::VisualEffectControlTrack___c* UnityEngine::VFX::VisualEffectControlTrack___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::VFX::VisualEffectControlTrack___c*, "<>9", ::UnityEngine::VFX::VisualEffectControlTrack___c*>();
}
inline void UnityEngine::VFX::VisualEffectControlTrack___c::setStaticF___9__5_0(::System::Func_2<::UnityEngine::Timeline::TimelineClip*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Timeline::TimelineClip*, bool>*, "<>9__5_0", ::UnityEngine::VFX::VisualEffectControlTrack___c*>(
      std::forward<::System::Func_2<::UnityEngine::Timeline::TimelineClip*, bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::Timeline::TimelineClip*, bool>* UnityEngine::VFX::VisualEffectControlTrack___c::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Timeline::TimelineClip*, bool>*, "<>9__5_0", ::UnityEngine::VFX::VisualEffectControlTrack___c*>();
}
inline void UnityEngine::VFX::VisualEffectControlTrack___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrack___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::VFX::VisualEffectControlTrack___c::_OnBeforeTrackSerialize_b__5_0(::UnityEngine::Timeline::TimelineClip* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrack___c*>(),
                                                                                         { "<OnBeforeTrackSerialize>b__5_0", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::VFX::VisualEffectControlTrack___c* UnityEngine::VFX::VisualEffectControlTrack___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::VisualEffectControlTrack___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VisualEffectControlTrack___c::VisualEffectControlTrack___c() {}
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrack.IsUpToDate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::VFX::VisualEffectControlTrack::*)()>(&::UnityEngine::VFX::VisualEffectControlTrack::IsUpToDate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x69d48b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrack*>(), { "IsUpToDate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrack.OnBeforeTrackSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlTrack::*)()>(&::UnityEngine::VFX::VisualEffectControlTrack::OnBeforeTrackSerialize)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x69d48c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrack*>(), { ::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrack*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrack.CreateTrackMixer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::VFX::VisualEffectControlTrack::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, int32_t)>(&::UnityEngine::VFX::VisualEffectControlTrack::CreateTrackMixer)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x69d49ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrack*>(), { ::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrack*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrack.GatherProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlTrack::*)(
    ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*)>(&::UnityEngine::VFX::VisualEffectControlTrack::GatherProperties)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x69d4e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrack*>(), { ::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrack*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrack._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlTrack::*)()>(&::UnityEngine::VFX::VisualEffectControlTrack::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x69d4ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrack*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::VFX::VisualEffectControlTrack::__cordl_internal_get_m_VFXVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VFXVersion;
}
constexpr int32_t const& UnityEngine::VFX::VisualEffectControlTrack::__cordl_internal_get_m_VFXVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VFXVersion;
}
constexpr void UnityEngine::VFX::VisualEffectControlTrack::__cordl_internal_set_m_VFXVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VFXVersion = value;
}
constexpr ::UnityEngine::VFX::VisualEffectControlTrack_ReinitMode& UnityEngine::VFX::VisualEffectControlTrack::__cordl_internal_get_reinit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reinit;
}
constexpr ::UnityEngine::VFX::VisualEffectControlTrack_ReinitMode const& UnityEngine::VFX::VisualEffectControlTrack::__cordl_internal_get_reinit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reinit;
}
constexpr void UnityEngine::VFX::VisualEffectControlTrack::__cordl_internal_set_reinit(::UnityEngine::VFX::VisualEffectControlTrack_ReinitMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reinit = value;
}
inline bool UnityEngine::VFX::VisualEffectControlTrack::IsUpToDate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrack*>(), { "IsUpToDate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::VFX::VisualEffectControlTrack::OnBeforeTrackSerialize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrack*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Playables::Playable UnityEngine::VFX::VisualEffectControlTrack::CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go,
                                                                                                       int32_t inputCount) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrack*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method, graph, go, inputCount);
}
inline void UnityEngine::VFX::VisualEffectControlTrack::GatherProperties(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrack*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, director, driver);
}
inline void UnityEngine::VFX::VisualEffectControlTrack::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrack*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::VisualEffectControlTrack* UnityEngine::VFX::VisualEffectControlTrack::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::VisualEffectControlTrack*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VisualEffectControlTrack::VisualEffectControlTrack() {}
