#pragma once
#include "GlobalNamespace/zzzz__AudioPlayerBase_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SongPreviewPlayer_def.hpp"
#include "GlobalNamespace/zzzz__AudioManagerSO_def.hpp"
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
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SongPreviewPlayer__InitData::*)(float_t)>(
    &::GlobalNamespace::__SongPreviewPlayer__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x237ea04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::__SongPreviewPlayer__InitData::__cordl_internal_get_ambientVolumeScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ambientVolumeScale;
}
constexpr float_t const& GlobalNamespace::__SongPreviewPlayer__InitData::__cordl_internal_get_ambientVolumeScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ambientVolumeScale;
}
constexpr void GlobalNamespace::__SongPreviewPlayer__InitData::__cordl_internal_set_ambientVolumeScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ambientVolumeScale = value;
}
inline ::GlobalNamespace::__SongPreviewPlayer__InitData* GlobalNamespace::__SongPreviewPlayer__InitData::New_ctor(float_t ambientVolumeScale) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SongPreviewPlayer__InitData*>(ambientVolumeScale));
}
inline void GlobalNamespace::__SongPreviewPlayer__InitData::_ctor(float_t ambientVolumeScale) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__InitData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ambientVolumeScale);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SongPreviewPlayer__InitData::__SongPreviewPlayer__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams.get_position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::*)()>(
    &::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::get_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2387410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*>::get(), "get_position",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams.get_reverbZoneMix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::*)()>(
    &::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::get_reverbZoneMix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238741c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*>::get(), "get_reverbZoneMix",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams.get_spatialBlend
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::*)()>(
    &::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::get_spatialBlend)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2387424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*>::get(), "get_spatialBlend",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams.get_spread
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::*)()>(
    &::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::get_spread)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238742c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*>::get(), "get_spread",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::*)()>(
    &::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2387434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::__cordl_internal_get__position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::__cordl_internal_get__position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position;
}
constexpr void GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::__cordl_internal_set__position(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____position = value;
}
constexpr float_t& GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::__cordl_internal_get__reverbZoneMix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reverbZoneMix;
}
constexpr float_t const& GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::__cordl_internal_get__reverbZoneMix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reverbZoneMix;
}
constexpr void GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::__cordl_internal_set__reverbZoneMix(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reverbZoneMix = value;
}
constexpr float_t& GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::__cordl_internal_get__spatialBlend() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spatialBlend;
}
constexpr float_t const& GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::__cordl_internal_get__spatialBlend() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spatialBlend;
}
constexpr void GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::__cordl_internal_set__spatialBlend(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spatialBlend = value;
}
constexpr float_t& GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::__cordl_internal_get__spread() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spread;
}
constexpr float_t const& GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::__cordl_internal_get__spread() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spread;
}
constexpr void GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::__cordl_internal_set__spread(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spread = value;
}
inline ::UnityEngine::Vector3 GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::get_position() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*>::get(),
                                                                             "get_position", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::get_reverbZoneMix() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*>::get(),
                                                                             "get_reverbZoneMix", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::get_spatialBlend() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*>::get(),
                                                                             "get_spatialBlend", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::get_spread() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*>::get(),
                                                                             "get_spread", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams* GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*>());
}
inline void GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::__SongPreviewPlayer__AudioSourceParams() {}
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController.set_volume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::*)(float_t)>(
    &::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::set_volume)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2386ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>::get(), "set_volume",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController.get_volume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::*)()>(
    &::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::get_volume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238743c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>::get(), "get_volume",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController.get_maxVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::*)()>(
    &::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::get_maxVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2387444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>::get(), "get_maxVolume",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController.set_maxVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::*)(float_t)>(
    &::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::set_maxVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238744c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>::get(), "set_maxVolume",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::*)(::UnityEngine::AudioSource*)>(
    &::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x23868a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::__cordl_internal_get_audioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::__cordl_internal_get_audioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioSource;
}
constexpr void GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___audioSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::__cordl_internal_get__maxVolume_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxVolume_k__BackingField;
}
constexpr float_t const& GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::__cordl_internal_get__maxVolume_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxVolume_k__BackingField;
}
constexpr void GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::__cordl_internal_set__maxVolume_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxVolume_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::__cordl_internal_get__volume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volume;
}
constexpr float_t const& GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::__cordl_internal_get__volume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volume;
}
constexpr void GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::__cordl_internal_set__volume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____volume = value;
}
inline void GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::set_volume(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>::get(), "set_volume",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::get_volume() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>::get(), "get_volume",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::get_maxVolume() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>::get(), "get_maxVolume",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::set_maxVolume(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>::get(), "set_maxVolume",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController* GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::New_ctor(::UnityEngine::AudioSource* audioSource) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>(audioSource));
}
inline void GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::_ctor(::UnityEngine::AudioSource* audioSource) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioSource);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::__SongPreviewPlayer__AudioSourceVolumeController() {}
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::*)(int32_t)>(
    &::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2386a64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::*)()>(
    &::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2387454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::*)()>(
    &::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::MoveNext)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2387458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28*>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::*)()>(
    &::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2387504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::*)()>(
    &::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x238750c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::*)()>(
    &::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238754c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::__cordl_internal_get_delay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delay;
}
constexpr float_t const& GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::__cordl_internal_get_delay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delay;
}
constexpr void GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::__cordl_internal_set_delay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___delay = value;
}
constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer>& GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer> const& GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SongPreviewPlayer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28* GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28*>(__1__state));
}
inline void GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28() {}
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.get_activeAudioClip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioClip> (::GlobalNamespace::SongPreviewPlayer::*)()>(
    &::GlobalNamespace::SongPreviewPlayer::get_activeAudioClip)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2386680;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)()>(&::GlobalNamespace::SongPreviewPlayer::Awake)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x23866d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)()>(&::GlobalNamespace::SongPreviewPlayer::Start)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23868d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)()>(&::GlobalNamespace::SongPreviewPlayer::OnEnable)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x23868f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.CrossFadeAfterDelayCoroutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::SongPreviewPlayer::*)(float_t)>(
    &::GlobalNamespace::SongPreviewPlayer::CrossFadeAfterDelayCoroutine)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x23869ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(), "CrossFadeAfterDelayCoroutine",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)()>(&::GlobalNamespace::SongPreviewPlayer::OnDisable)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2386a8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)()>(&::GlobalNamespace::SongPreviewPlayer::Update)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2386b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.CrossfadeToDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)()>(&::GlobalNamespace::SongPreviewPlayer::CrossfadeToDefault)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x238701c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                                                                               "CrossfadeToDefault", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.CrossfadeToNewDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)(::UnityEngine::AudioClip*)>(
    &::GlobalNamespace::SongPreviewPlayer::CrossfadeToNewDefault)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x238718c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(), "CrossfadeToNewDefault", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.CrossfadeTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)(::UnityEngine::AudioClip*, float_t, float_t, float_t, ::System::Action*)>(&::GlobalNamespace::SongPreviewPlayer::CrossfadeTo)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x238726c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(), "CrossfadeTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.CrossfadeTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)(::UnityEngine::AudioClip*, float_t, float_t, float_t, bool, ::System::Action*)>(&::GlobalNamespace::SongPreviewPlayer::CrossfadeTo)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x2386da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(), "CrossfadeTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 6>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.PauseCurrentChannel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)()>(&::GlobalNamespace::SongPreviewPlayer::PauseCurrentChannel)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2387278;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.UnPauseCurrentChannel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)()>(&::GlobalNamespace::SongPreviewPlayer::UnPauseCurrentChannel)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x23872ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.FadeOut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)(float_t)>(&::GlobalNamespace::SongPreviewPlayer::FadeOut)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x238735c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.ReportChannelDidFadeOut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)(int32_t)>(
    &::GlobalNamespace::SongPreviewPlayer::ReportChannelDidFadeOut)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2386d18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(), "ReportChannelDidFadeOut",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)()>(&::GlobalNamespace::SongPreviewPlayer::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2387378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioSourcePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultAudioClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__defaultAudioSourceParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultAudioSourceParams;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*> const&
GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__defaultAudioSourceParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultAudioSourceParams;
}
constexpr void GlobalNamespace::SongPreviewPlayer::__cordl_internal_set__defaultAudioSourceParams(::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultAudioSourceParams)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__othersAudioSourceParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____othersAudioSourceParams;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*> const&
GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__othersAudioSourceParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____othersAudioSourceParams;
}
constexpr void GlobalNamespace::SongPreviewPlayer::__cordl_internal_set__othersAudioSourceParams(::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____othersAudioSourceParams)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__SongPreviewPlayer__InitData*& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SongPreviewPlayer__InitData*> const& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::SongPreviewPlayer::__cordl_internal_set__initData(::GlobalNamespace::__SongPreviewPlayer__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AudioManagerSO>& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__audioManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr ::UnityW<::GlobalNamespace::AudioManagerSO> const& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__audioManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr void GlobalNamespace::SongPreviewPlayer::__cordl_internal_set__audioManager(::UnityW<::GlobalNamespace::AudioManagerSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*, ::Array<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>*>&
GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__audioSourceControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSourceControllers;
}
constexpr ::ArrayW<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*, ::Array<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>*> const&
GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__audioSourceControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSourceControllers;
}
constexpr void GlobalNamespace::SongPreviewPlayer::__cordl_internal_set__audioSourceControllers(
    ::ArrayW<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*, ::Array<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioSourceControllers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr float_t& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__ambientVolumeScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ambientVolumeScale;
}
constexpr float_t const& GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__ambientVolumeScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ambientVolumeScale;
}
constexpr void GlobalNamespace::SongPreviewPlayer::__cordl_internal_set__ambientVolumeScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ambientVolumeScale = value;
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
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action*>*> const&
GlobalNamespace::SongPreviewPlayer::__cordl_internal_get__channelToFadeOutCallbackDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____channelToFadeOutCallbackDictionary;
}
constexpr void GlobalNamespace::SongPreviewPlayer::__cordl_internal_set__channelToFadeOutCallbackDictionary(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____channelToFadeOutCallbackDictionary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::UnityEngine::AudioClip> GlobalNamespace::SongPreviewPlayer::get_activeAudioClip() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>, false>(this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayer::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayer::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayer::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::SongPreviewPlayer::CrossFadeAfterDelayCoroutine(float_t delay) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(), "CrossFadeAfterDelayCoroutine",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, delay);
}
inline void GlobalNamespace::SongPreviewPlayer::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayer::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayer::CrossfadeToDefault() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(), "CrossfadeToDefault",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayer::CrossfadeToNewDefault(::UnityEngine::AudioClip* audioClip) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(), "CrossfadeToNewDefault", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioClip);
}
inline void GlobalNamespace::SongPreviewPlayer::CrossfadeTo(::UnityEngine::AudioClip* audioClip, float_t musicVolume, float_t startTime, float_t duration, ::System::Action* onFadeOutCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(), "CrossfadeTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioClip, musicVolume, startTime, duration, onFadeOutCallback);
}
inline void GlobalNamespace::SongPreviewPlayer::CrossfadeTo(::UnityEngine::AudioClip* audioClip, float_t musicVolume, float_t startTime, float_t duration, bool isDefault,
                                                            ::System::Action* onFadeOutCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(), "CrossfadeTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 6>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioClip, musicVolume, startTime, duration, isDefault, onFadeOutCallback);
}
inline void GlobalNamespace::SongPreviewPlayer::PauseCurrentChannel() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayer::UnPauseCurrentChannel() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayer::FadeOut(float_t duration) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, duration);
}
inline void GlobalNamespace::SongPreviewPlayer::ReportChannelDidFadeOut(int32_t channel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(), "ReportChannelDidFadeOut",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, channel);
}
inline ::GlobalNamespace::SongPreviewPlayer* GlobalNamespace::SongPreviewPlayer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SongPreviewPlayer*>());
}
inline void GlobalNamespace::SongPreviewPlayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongPreviewPlayer::SongPreviewPlayer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
