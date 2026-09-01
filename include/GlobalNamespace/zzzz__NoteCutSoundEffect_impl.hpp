#pragma once
// IWYU pragma private; include "GlobalNamespace\NoteCutSoundEffect.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutSoundEffect_def.hpp"
#include "GlobalNamespace/zzzz__ILazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__INoteCutSoundEffectDidFinishEvent_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__NoteControllerBase_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutSoundEffect_def.hpp"
#include "GlobalNamespace/zzzz__RandomObjectPicker_1_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffect_Pool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutSoundEffect_Pool::*)()>(&::GlobalNamespace::NoteCutSoundEffect_Pool::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58b8a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffect_Pool*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NoteCutSoundEffect_Pool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffect_Pool*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteCutSoundEffect_Pool* GlobalNamespace::NoteCutSoundEffect_Pool::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoteCutSoundEffect_Pool*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteCutSoundEffect_Pool::NoteCutSoundEffect_Pool() {}
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffect.get_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>* (::GlobalNamespace::NoteCutSoundEffect::*)()>(
    &::GlobalNamespace::NoteCutSoundEffect::get_didFinishEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58b7fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffect*>(), { "get_didFinishEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffect.set_volumeMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutSoundEffect::*)(float_t)>(&::GlobalNamespace::NoteCutSoundEffect::set_volumeMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58b7fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffect*>(), { "set_volumeMultiplier", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffect.get_volumeMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::NoteCutSoundEffect::*)()>(&::GlobalNamespace::NoteCutSoundEffect::get_volumeMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58b7fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffect*>(), { "get_volumeMultiplier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffect.get_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::NoteCutSoundEffect::*)()>(&::GlobalNamespace::NoteCutSoundEffect::get_time)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58b7fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffect*>(), { "get_time", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffect.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutSoundEffect::*)()>(&::GlobalNamespace::NoteCutSoundEffect::Awake)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58b8018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffect*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffect.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutSoundEffect::*)()>(&::GlobalNamespace::NoteCutSoundEffect::Start)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58b809c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffect*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffect.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutSoundEffect::*)(::UnityEngine::AudioClip*, ::GlobalNamespace::NoteController*, double_t, float_t, float_t,
                                                                                                       float_t, float_t, ::GlobalNamespace::Saber*, bool, float_t, bool, bool)>(
    &::GlobalNamespace::NoteCutSoundEffect::Init)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x58b80b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffect*>(),
                                         { "Init",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::GlobalNamespace::NoteController*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<float_t>(),
                                             ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<bool>(),
                                             ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffect.ComputeDSPTimes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutSoundEffect::*)(double_t, float_t, float_t, float_t)>(&::GlobalNamespace::NoteCutSoundEffect::ComputeDSPTimes)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x58b8284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffect*>(),
                                                { "ComputeDSPTimes", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffect.OnLateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutSoundEffect::*)()>(&::GlobalNamespace::NoteCutSoundEffect::OnLateUpdate)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x58b8330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffect*>(), { "OnLateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffect.StopPlayingAndFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutSoundEffect::*)()>(&::GlobalNamespace::NoteCutSoundEffect::StopPlayingAndFinish)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x58b8594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffect*>(), { "StopPlayingAndFinish", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffect.NoteWasCut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutSoundEffect::*)(::GlobalNamespace::NoteController*, ::by_ref<::GlobalNamespace::NoteCutInfo>)>(
    &::GlobalNamespace::NoteCutSoundEffect::NoteWasCut)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x58b8758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffect*>(),
                                                { "NoteWasCut", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NoteCutInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffect.NoteDidStartDissolving
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutSoundEffect::*)(::GlobalNamespace::NoteControllerBase*)>(
    &::GlobalNamespace::NoteCutSoundEffect::NoteDidStartDissolving)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x58b8988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffect*>(), { "NoteDidStartDissolving", {}, { ::i2c::type_of<::GlobalNamespace::NoteControllerBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutSoundEffect::*)()>(&::GlobalNamespace::NoteCutSoundEffect::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58b8a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__audioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__audioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr void GlobalNamespace::NoteCutSoundEffect::__cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioSource = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__speedToVolumeCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____speedToVolumeCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__speedToVolumeCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____speedToVolumeCurve;
}
constexpr void GlobalNamespace::NoteCutSoundEffect::__cordl_internal_set__speedToVolumeCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____speedToVolumeCurve = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__badCutSoundEffectAudioClips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badCutSoundEffectAudioClips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__badCutSoundEffectAudioClips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badCutSoundEffectAudioClips;
}
constexpr void GlobalNamespace::NoteCutSoundEffect::__cordl_internal_set__badCutSoundEffectAudioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____badCutSoundEffectAudioClips = value;
}
constexpr float_t& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__badCutVolume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badCutVolume;
}
constexpr float_t const& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__badCutVolume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badCutVolume;
}
constexpr void GlobalNamespace::NoteCutSoundEffect::__cordl_internal_set__badCutVolume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____badCutVolume = value;
}
constexpr float_t& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__goodCutVolume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____goodCutVolume;
}
constexpr float_t const& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__goodCutVolume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____goodCutVolume;
}
constexpr void GlobalNamespace::NoteCutSoundEffect::__cordl_internal_set__goodCutVolume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____goodCutVolume = value;
}
constexpr ::UnityW<::GlobalNamespace::Saber>& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__saber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saber;
}
constexpr ::UnityW<::GlobalNamespace::Saber> const& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__saber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saber;
}
constexpr void GlobalNamespace::NoteCutSoundEffect::__cordl_internal_set__saber(::UnityW<::GlobalNamespace::Saber> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saber = value;
}
constexpr ::UnityW<::GlobalNamespace::NoteController>& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__noteController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteController;
}
constexpr ::UnityW<::GlobalNamespace::NoteController> const& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__noteController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteController;
}
constexpr void GlobalNamespace::NoteCutSoundEffect::__cordl_internal_set__noteController(::UnityW<::GlobalNamespace::NoteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteController = value;
}
constexpr bool& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__isPlaying() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPlaying;
}
constexpr bool const& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__isPlaying() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPlaying;
}
constexpr void GlobalNamespace::NoteCutSoundEffect::__cordl_internal_set__isPlaying(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isPlaying = value;
}
constexpr float_t& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__volumeMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volumeMultiplier;
}
constexpr float_t const& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__volumeMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volumeMultiplier;
}
constexpr void GlobalNamespace::NoteCutSoundEffect::__cordl_internal_set__volumeMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____volumeMultiplier = value;
}
constexpr bool& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__noteWasCut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteWasCut;
}
constexpr bool const& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__noteWasCut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteWasCut;
}
constexpr void GlobalNamespace::NoteCutSoundEffect::__cordl_internal_set__noteWasCut(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteWasCut = value;
}
constexpr bool& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__noteStartedDissolving() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteStartedDissolving;
}
constexpr bool const& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__noteStartedDissolving() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteStartedDissolving;
}
constexpr void GlobalNamespace::NoteCutSoundEffect::__cordl_internal_set__noteStartedDissolving(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteStartedDissolving = value;
}
constexpr float_t& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__aheadTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____aheadTime;
}
constexpr float_t const& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__aheadTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____aheadTime;
}
constexpr void GlobalNamespace::NoteCutSoundEffect::__cordl_internal_set__aheadTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____aheadTime = value;
}
constexpr float_t& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__timeToNextNote() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeToNextNote;
}
constexpr float_t const& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__timeToNextNote() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeToNextNote;
}
constexpr void GlobalNamespace::NoteCutSoundEffect::__cordl_internal_set__timeToNextNote(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeToNextNote = value;
}
constexpr float_t& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__timeToPrevNote() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeToPrevNote;
}
constexpr float_t const& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__timeToPrevNote() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeToPrevNote;
}
constexpr void GlobalNamespace::NoteCutSoundEffect::__cordl_internal_set__timeToPrevNote(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeToPrevNote = value;
}
constexpr double_t& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__startDSPTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startDSPTime;
}
constexpr double_t const& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__startDSPTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startDSPTime;
}
constexpr void GlobalNamespace::NoteCutSoundEffect::__cordl_internal_set__startDSPTime(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startDSPTime = value;
}
constexpr double_t& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__endDSPtime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endDSPtime;
}
constexpr double_t const& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__endDSPtime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endDSPtime;
}
constexpr void GlobalNamespace::NoteCutSoundEffect::__cordl_internal_set__endDSPtime(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____endDSPtime = value;
}
constexpr double_t& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__fadeOutStartDSPtime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutStartDSPtime;
}
constexpr double_t const& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__fadeOutStartDSPtime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutStartDSPtime;
}
constexpr void GlobalNamespace::NoteCutSoundEffect::__cordl_internal_set__fadeOutStartDSPtime(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeOutStartDSPtime = value;
}
constexpr float_t& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__noteMissedTimeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteMissedTimeOffset;
}
constexpr float_t const& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__noteMissedTimeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteMissedTimeOffset;
}
constexpr void GlobalNamespace::NoteCutSoundEffect::__cordl_internal_set__noteMissedTimeOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteMissedTimeOffset = value;
}
constexpr float_t& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__beforeCutVolume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beforeCutVolume;
}
constexpr float_t const& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__beforeCutVolume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beforeCutVolume;
}
constexpr void GlobalNamespace::NoteCutSoundEffect::__cordl_internal_set__beforeCutVolume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beforeCutVolume = value;
}
constexpr bool& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__goodCut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____goodCut;
}
constexpr bool const& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__goodCut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____goodCut;
}
constexpr void GlobalNamespace::NoteCutSoundEffect::__cordl_internal_set__goodCut(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____goodCut = value;
}
constexpr float_t& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__pitch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pitch;
}
constexpr float_t const& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__pitch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pitch;
}
constexpr void GlobalNamespace::NoteCutSoundEffect::__cordl_internal_set__pitch(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pitch = value;
}
constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>*& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__badCutRandomSoundPicker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badCutRandomSoundPicker;
}
constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* const& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__badCutRandomSoundPicker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badCutRandomSoundPicker;
}
constexpr void GlobalNamespace::NoteCutSoundEffect::__cordl_internal_set__badCutRandomSoundPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____badCutRandomSoundPicker = value;
}
constexpr bool& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__handleWrongSaberTypeAsGood() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleWrongSaberTypeAsGood;
}
constexpr bool const& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__handleWrongSaberTypeAsGood() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleWrongSaberTypeAsGood;
}
constexpr void GlobalNamespace::NoteCutSoundEffect::__cordl_internal_set__handleWrongSaberTypeAsGood(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handleWrongSaberTypeAsGood = value;
}
constexpr bool& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__ignoreSaberSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignoreSaberSpeed;
}
constexpr bool const& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__ignoreSaberSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignoreSaberSpeed;
}
constexpr void GlobalNamespace::NoteCutSoundEffect::__cordl_internal_set__ignoreSaberSpeed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ignoreSaberSpeed = value;
}
constexpr bool& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__ignoreBadCuts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignoreBadCuts;
}
constexpr bool const& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__ignoreBadCuts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignoreBadCuts;
}
constexpr void GlobalNamespace::NoteCutSoundEffect::__cordl_internal_set__ignoreBadCuts(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ignoreBadCuts = value;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>*& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didFinishEvent;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>* const& GlobalNamespace::NoteCutSoundEffect::__cordl_internal_get__didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didFinishEvent;
}
constexpr void GlobalNamespace::NoteCutSoundEffect::__cordl_internal_set__didFinishEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____didFinishEvent = value;
}
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>* GlobalNamespace::NoteCutSoundEffect::get_didFinishEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffect*>(), { "get_didFinishEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>*>(this, ___internal_method);
}
inline void GlobalNamespace::NoteCutSoundEffect::set_volumeMultiplier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffect*>(), { "set_volumeMultiplier", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::NoteCutSoundEffect::get_volumeMultiplier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffect*>(), { "get_volumeMultiplier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::NoteCutSoundEffect::get_time() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffect*>(), { "get_time", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::NoteCutSoundEffect::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffect*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteCutSoundEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffect*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteCutSoundEffect::Init(::UnityEngine::AudioClip* audioClip, ::GlobalNamespace::NoteController* noteController, double_t noteDSPTime, float_t aheadTime,
                                                      float_t missedTimeOffset, float_t timeToPrevNote, float_t timeToNextNote, ::GlobalNamespace::Saber* saber, bool handleWrongSaberTypeAsGood,
                                                      float_t volumeMultiplier, bool ignoreSaberSpeed, bool ignoreBadCuts) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffect*>(),
                                              { "Init",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::GlobalNamespace::NoteController*>(), ::i2c::type_of<double_t>(),
                                                  ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                  ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioClip, noteController, noteDSPTime, aheadTime, missedTimeOffset, timeToPrevNote, timeToNextNote, saber,
                                                   handleWrongSaberTypeAsGood, volumeMultiplier, ignoreSaberSpeed, ignoreBadCuts);
}
inline void GlobalNamespace::NoteCutSoundEffect::ComputeDSPTimes(double_t noteDSPTime, float_t aheadTime, float_t timeToPrevNote, float_t timeToNextNote) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffect*>(),
                                              { "ComputeDSPTimes", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteDSPTime, aheadTime, timeToPrevNote, timeToNextNote);
}
inline void GlobalNamespace::NoteCutSoundEffect::OnLateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffect*>(), { "OnLateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteCutSoundEffect::StopPlayingAndFinish() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffect*>(), { "StopPlayingAndFinish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteCutSoundEffect::NoteWasCut(::GlobalNamespace::NoteController* noteController, ::by_ref<::GlobalNamespace::NoteCutInfo> noteCutInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffect*>(),
                                              { "NoteWasCut", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NoteCutInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController, noteCutInfo);
}
inline void GlobalNamespace::NoteCutSoundEffect::NoteDidStartDissolving(::GlobalNamespace::NoteControllerBase* noteController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffect*>(), { "NoteDidStartDissolving", {}, { ::i2c::type_of<::GlobalNamespace::NoteControllerBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::NoteCutSoundEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutSoundEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteCutSoundEffect* GlobalNamespace::NoteCutSoundEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoteCutSoundEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteCutSoundEffect::NoteCutSoundEffect() {}
