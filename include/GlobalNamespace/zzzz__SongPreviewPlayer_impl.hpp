#pragma once
// IWYU pragma private; include "GlobalNamespace/SongPreviewPlayer.hpp"
#include "GlobalNamespace/zzzz__AudioPlayerBase_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SongPreviewPlayer_def.hpp"
#include "GlobalNamespace/zzzz__AudioManager_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "GlobalNamespace/zzzz__SongPreviewPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer_AudioSourceParams.get_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::SongPreviewPlayer_AudioSourceParams::*)()>(
    &::GlobalNamespace::SongPreviewPlayer_AudioSourceParams::get_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58bd754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer_AudioSourceParams*>(), { "get_position", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer_AudioSourceParams.get_reverbZoneMix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SongPreviewPlayer_AudioSourceParams::*)()>(
    &::GlobalNamespace::SongPreviewPlayer_AudioSourceParams::get_reverbZoneMix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58bd760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer_AudioSourceParams*>(), { "get_reverbZoneMix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer_AudioSourceParams.get_spatialBlend
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SongPreviewPlayer_AudioSourceParams::*)()>(
    &::GlobalNamespace::SongPreviewPlayer_AudioSourceParams::get_spatialBlend)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58bd768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer_AudioSourceParams*>(), { "get_spatialBlend", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer_AudioSourceParams.get_spread
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SongPreviewPlayer_AudioSourceParams::*)()>(&::GlobalNamespace::SongPreviewPlayer_AudioSourceParams::get_spread)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58bd770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer_AudioSourceParams*>(), { "get_spread", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer_AudioSourceParams._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPreviewPlayer_AudioSourceParams::*)()>(&::GlobalNamespace::SongPreviewPlayer_AudioSourceParams::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58bd778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer_AudioSourceParams*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::SongPreviewPlayer_AudioSourceParams::__cordl_internal_get__position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SongPreviewPlayer_AudioSourceParams::__cordl_internal_get__position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position;
}
constexpr void GlobalNamespace::SongPreviewPlayer_AudioSourceParams::__cordl_internal_set__position(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____position = value;
}
constexpr float_t& GlobalNamespace::SongPreviewPlayer_AudioSourceParams::__cordl_internal_get__reverbZoneMix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reverbZoneMix;
}
constexpr float_t const& GlobalNamespace::SongPreviewPlayer_AudioSourceParams::__cordl_internal_get__reverbZoneMix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reverbZoneMix;
}
constexpr void GlobalNamespace::SongPreviewPlayer_AudioSourceParams::__cordl_internal_set__reverbZoneMix(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reverbZoneMix = value;
}
constexpr float_t& GlobalNamespace::SongPreviewPlayer_AudioSourceParams::__cordl_internal_get__spatialBlend() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spatialBlend;
}
constexpr float_t const& GlobalNamespace::SongPreviewPlayer_AudioSourceParams::__cordl_internal_get__spatialBlend() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spatialBlend;
}
constexpr void GlobalNamespace::SongPreviewPlayer_AudioSourceParams::__cordl_internal_set__spatialBlend(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spatialBlend = value;
}
constexpr float_t& GlobalNamespace::SongPreviewPlayer_AudioSourceParams::__cordl_internal_get__spread() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spread;
}
constexpr float_t const& GlobalNamespace::SongPreviewPlayer_AudioSourceParams::__cordl_internal_get__spread() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spread;
}
constexpr void GlobalNamespace::SongPreviewPlayer_AudioSourceParams::__cordl_internal_set__spread(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spread = value;
}
inline ::UnityEngine::Vector3 GlobalNamespace::SongPreviewPlayer_AudioSourceParams::get_position() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer_AudioSourceParams*>(), { "get_position", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline float_t GlobalNamespace::SongPreviewPlayer_AudioSourceParams::get_reverbZoneMix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer_AudioSourceParams*>(), { "get_reverbZoneMix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::SongPreviewPlayer_AudioSourceParams::get_spatialBlend() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer_AudioSourceParams*>(), { "get_spatialBlend", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::SongPreviewPlayer_AudioSourceParams::get_spread() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer_AudioSourceParams*>(), { "get_spread", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayer_AudioSourceParams::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer_AudioSourceParams*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SongPreviewPlayer_AudioSourceParams* GlobalNamespace::SongPreviewPlayer_AudioSourceParams::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SongPreviewPlayer_AudioSourceParams*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongPreviewPlayer_AudioSourceParams::SongPreviewPlayer_AudioSourceParams() {}
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController.set_volume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController::*)(float_t)>(
    &::GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController::set_volume)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x58bcee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController*>(), { "set_volume", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController.get_volume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController::*)()>(
    &::GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController::get_volume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58bd77c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController*>(), { "get_volume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController.get_maxVolume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController::*)()>(
    &::GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController::get_maxVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58bd784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController*>(), { "get_maxVolume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController.set_maxVolume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController::*)(float_t)>(
    &::GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController::set_maxVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58bd78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController*>(), { "set_maxVolume", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController::*)(::UnityEngine::AudioSource*)>(
    &::GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58bca30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::AudioSource*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController::__cordl_internal_get_audioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController::__cordl_internal_get_audioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioSource;
}
constexpr void GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___audioSource = value;
}
constexpr float_t& GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController::__cordl_internal_get__maxVolume_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxVolume_k__BackingField;
}
constexpr float_t const& GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController::__cordl_internal_get__maxVolume_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxVolume_k__BackingField;
}
constexpr void GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController::__cordl_internal_set__maxVolume_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxVolume_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController::__cordl_internal_get__volume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volume;
}
constexpr float_t const& GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController::__cordl_internal_get__volume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volume;
}
constexpr void GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController::__cordl_internal_set__volume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____volume = value;
}
inline void GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController::set_volume(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController*>(), { "set_volume", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController::get_volume() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController*>(), { "get_volume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController::get_maxVolume() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController*>(), { "get_maxVolume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController::set_maxVolume(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController*>(), { "set_maxVolume", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController::_ctor(::UnityEngine::AudioSource* audioSource) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::AudioSource*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioSource);
}
inline ::GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController* GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController::New_ctor(::UnityEngine::AudioSource* audioSource) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController*>(audioSource));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController::SongPreviewPlayer_AudioSourceVolumeController() {}
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::*)(int32_t)>(
    &::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58bcb9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::*)()>(
    &::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58bd794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::*)()>(
    &::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::MoveNext)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58bd798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::*)()>(
    &::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58bd83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::*)()>(
    &::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58bd844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::*)()>(
    &::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58bd87c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr float_t& GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::__cordl_internal_get_delay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delay;
}
constexpr float_t const& GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::__cordl_internal_get_delay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delay;
}
constexpr void GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::__cordl_internal_set_delay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___delay = value;
}
constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer>& GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer> const& GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SongPreviewPlayer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27* GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27::SongPreviewPlayer__CrossFadeAfterDelayCoroutine_d__27() {}
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.get_activeAudioClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::GlobalNamespace::SongPreviewPlayer::*)()>(&::GlobalNamespace::SongPreviewPlayer::get_activeAudioClip)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x58bc800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), { ::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.get_defaultAudioClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::GlobalNamespace::SongPreviewPlayer::*)()>(&::GlobalNamespace::SongPreviewPlayer::get_defaultAudioClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58bc854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), { "get_defaultAudioClip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)()>(&::GlobalNamespace::SongPreviewPlayer::Awake)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x58bc85c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)()>(&::GlobalNamespace::SongPreviewPlayer::OnEnable)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x58bca40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.CrossFadeAfterDelayCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::SongPreviewPlayer::*)(float_t)>(
    &::GlobalNamespace::SongPreviewPlayer::CrossFadeAfterDelayCoroutine)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x58bcb38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), { "CrossFadeAfterDelayCoroutine", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)()>(&::GlobalNamespace::SongPreviewPlayer::OnDisable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x58bcba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)()>(&::GlobalNamespace::SongPreviewPlayer::Update)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x58bcd18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.CrossfadeToDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)()>(&::GlobalNamespace::SongPreviewPlayer::CrossfadeToDefault)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x58bd2bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), { "CrossfadeToDefault", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.CrossfadeToNewDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)(::UnityEngine::AudioClip*)>(&::GlobalNamespace::SongPreviewPlayer::CrossfadeToNewDefault)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x58bd498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), { "CrossfadeToNewDefault", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.CrossfadeTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)(::UnityEngine::AudioClip*, float_t, float_t, float_t, ::System::Action*)>(
    &::GlobalNamespace::SongPreviewPlayer::CrossfadeTo)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58bd598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), { "CrossfadeTo",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>(),
                                                                                                       ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.CrossfadeTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)(::UnityEngine::AudioClip*, float_t, float_t, float_t, bool, ::System::Action*)>(
    &::GlobalNamespace::SongPreviewPlayer::CrossfadeTo)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x58bcf9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(),
                                                                                           { "CrossfadeTo",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.StopCurrentChannel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)()>(&::GlobalNamespace::SongPreviewPlayer::StopCurrentChannel)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x58bcc84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), { "StopCurrentChannel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.PauseCurrentChannel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)()>(&::GlobalNamespace::SongPreviewPlayer::PauseCurrentChannel)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58bd5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), { ::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.UnPauseCurrentChannel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)()>(&::GlobalNamespace::SongPreviewPlayer::UnPauseCurrentChannel)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x58bd618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), { ::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.FadeOut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)(float_t)>(&::GlobalNamespace::SongPreviewPlayer::FadeOut)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58bd688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), { ::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.ReportChannelDidFadeOut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)(int32_t)>(&::GlobalNamespace::SongPreviewPlayer::ReportChannelDidFadeOut)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x58bcf10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), { "ReportChannelDidFadeOut", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)()>(&::GlobalNamespace::SongPreviewPlayer::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x58bd6a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__channelsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____channelsCount;
}
constexpr int32_t const& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__channelsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____channelsCount;
}
constexpr void GlobalNamespace::SongPreviewPlayer::__cordl_internal_set__channelsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____channelsCount = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__audioSourcePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSourcePrefab;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__audioSourcePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSourcePrefab;
}
constexpr void GlobalNamespace::SongPreviewPlayer::__cordl_internal_set__audioSourcePrefab(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioSourcePrefab = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__defaultAudioClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultAudioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__defaultAudioClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultAudioClip;
}
constexpr void GlobalNamespace::SongPreviewPlayer::__cordl_internal_set__defaultAudioClip(::UnityW<::UnityEngine::AudioClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultAudioClip = value;
}
constexpr float_t& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__volume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volume;
}
constexpr float_t const& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__volume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volume;
}
constexpr void GlobalNamespace::SongPreviewPlayer::__cordl_internal_set__volume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____volume = value;
}
constexpr float_t& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__crossFadeToAnotherSongSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____crossFadeToAnotherSongSpeed;
}
constexpr float_t const& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__crossFadeToAnotherSongSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____crossFadeToAnotherSongSpeed;
}
constexpr void GlobalNamespace::SongPreviewPlayer::__cordl_internal_set__crossFadeToAnotherSongSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____crossFadeToAnotherSongSpeed = value;
}
constexpr float_t& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__crossFadeToDefaultSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____crossFadeToDefaultSpeed;
}
constexpr float_t const& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__crossFadeToDefaultSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____crossFadeToDefaultSpeed;
}
constexpr void GlobalNamespace::SongPreviewPlayer::__cordl_internal_set__crossFadeToDefaultSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____crossFadeToDefaultSpeed = value;
}
constexpr float_t& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__fadeInSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInSpeed;
}
constexpr float_t const& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__fadeInSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInSpeed;
}
constexpr void GlobalNamespace::SongPreviewPlayer::__cordl_internal_set__fadeInSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeInSpeed = value;
}
constexpr ::GlobalNamespace::SongPreviewPlayer_AudioSourceParams*& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__defaultAudioSourceParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultAudioSourceParams;
}
constexpr ::GlobalNamespace::SongPreviewPlayer_AudioSourceParams* const& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__defaultAudioSourceParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultAudioSourceParams;
}
constexpr void GlobalNamespace::SongPreviewPlayer::__cordl_internal_set__defaultAudioSourceParams(::GlobalNamespace::SongPreviewPlayer_AudioSourceParams* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultAudioSourceParams = value;
}
constexpr ::GlobalNamespace::SongPreviewPlayer_AudioSourceParams*& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__othersAudioSourceParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____othersAudioSourceParams;
}
constexpr ::GlobalNamespace::SongPreviewPlayer_AudioSourceParams* const& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__othersAudioSourceParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____othersAudioSourceParams;
}
constexpr void GlobalNamespace::SongPreviewPlayer::__cordl_internal_set__othersAudioSourceParams(::GlobalNamespace::SongPreviewPlayer_AudioSourceParams* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____othersAudioSourceParams = value;
}
constexpr ::GlobalNamespace::AudioManager*& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__audioManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr ::GlobalNamespace::AudioManager* const& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__audioManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr void GlobalNamespace::SongPreviewPlayer::__cordl_internal_set__audioManager(::GlobalNamespace::AudioManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioManager = value;
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::SongPreviewPlayer::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
constexpr ::ArrayW<::GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController*>& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__audioSourceControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSourceControllers;
}
constexpr ::ArrayW<::GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController*> const& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__audioSourceControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSourceControllers;
}
constexpr void GlobalNamespace::SongPreviewPlayer::__cordl_internal_set__audioSourceControllers(::ArrayW<::GlobalNamespace::SongPreviewPlayer_AudioSourceVolumeController*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioSourceControllers = value;
}
constexpr int32_t& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__activeChannel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeChannel;
}
constexpr int32_t const& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__activeChannel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeChannel;
}
constexpr void GlobalNamespace::SongPreviewPlayer::__cordl_internal_set__activeChannel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeChannel = value;
}
constexpr float_t& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__timeToDefaultAudioTransition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeToDefaultAudioTransition;
}
constexpr float_t const& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__timeToDefaultAudioTransition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeToDefaultAudioTransition;
}
constexpr void GlobalNamespace::SongPreviewPlayer::__cordl_internal_set__timeToDefaultAudioTransition(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeToDefaultAudioTransition = value;
}
constexpr bool& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__transitionAfterDelay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transitionAfterDelay;
}
constexpr bool const& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__transitionAfterDelay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transitionAfterDelay;
}
constexpr void GlobalNamespace::SongPreviewPlayer::__cordl_internal_set__transitionAfterDelay(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transitionAfterDelay = value;
}
constexpr float_t& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__volumeScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volumeScale;
}
constexpr float_t const& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__volumeScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volumeScale;
}
constexpr void GlobalNamespace::SongPreviewPlayer::__cordl_internal_set__volumeScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____volumeScale = value;
}
constexpr float_t& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__fadeSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeSpeed;
}
constexpr float_t const& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__fadeSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeSpeed;
}
constexpr void GlobalNamespace::SongPreviewPlayer::__cordl_internal_set__fadeSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeSpeed = value;
}
constexpr bool& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__isActiveChannelPaused() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isActiveChannelPaused;
}
constexpr bool const& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__isActiveChannelPaused() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isActiveChannelPaused;
}
constexpr void GlobalNamespace::SongPreviewPlayer::__cordl_internal_set__isActiveChannelPaused(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isActiveChannelPaused = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action*>*& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__channelToFadeOutCallbackDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____channelToFadeOutCallbackDictionary;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action*>* const& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__channelToFadeOutCallbackDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____channelToFadeOutCallbackDictionary;
}
constexpr void GlobalNamespace::SongPreviewPlayer::__cordl_internal_set__channelToFadeOutCallbackDictionary(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____channelToFadeOutCallbackDictionary = value;
}
inline ::UnityW<::UnityEngine::AudioClip> GlobalNamespace::SongPreviewPlayer::get_activeAudioClip() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioClip> GlobalNamespace::SongPreviewPlayer::get_defaultAudioClip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), { "get_defaultAudioClip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayer::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayer::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::SongPreviewPlayer::CrossFadeAfterDelayCoroutine(float_t delay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), { "CrossFadeAfterDelayCoroutine", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, delay);
}
inline void GlobalNamespace::SongPreviewPlayer::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayer::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayer::CrossfadeToDefault() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), { "CrossfadeToDefault", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayer::CrossfadeToNewDefault(::UnityEngine::AudioClip* audioClip) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), { "CrossfadeToNewDefault", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioClip);
}
inline void GlobalNamespace::SongPreviewPlayer::CrossfadeTo(::UnityEngine::AudioClip* audioClip, float_t musicVolume, float_t startTime, float_t duration, ::System::Action* onFadeOutCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(),
                          { "CrossfadeTo",
                            {},
                            { ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioClip, musicVolume, startTime, duration, onFadeOutCallback);
}
inline void GlobalNamespace::SongPreviewPlayer::CrossfadeTo(::UnityEngine::AudioClip* audioClip, float_t musicVolume, float_t startTime, float_t duration, bool isDefault,
                                                            ::System::Action* onFadeOutCallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), { "CrossfadeTo",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                                     ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioClip, musicVolume, startTime, duration, isDefault, onFadeOutCallback);
}
inline void GlobalNamespace::SongPreviewPlayer::StopCurrentChannel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), { "StopCurrentChannel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayer::PauseCurrentChannel() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayer::UnPauseCurrentChannel() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayer::FadeOut(float_t duration) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, duration);
}
inline void GlobalNamespace::SongPreviewPlayer::ReportChannelDidFadeOut(int32_t channel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), { "ReportChannelDidFadeOut", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel);
}
inline void GlobalNamespace::SongPreviewPlayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SongPreviewPlayer* GlobalNamespace::SongPreviewPlayer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SongPreviewPlayer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongPreviewPlayer::SongPreviewPlayer() {}
