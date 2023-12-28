#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AutomaticSFXVolume_def.hpp"
#include "GlobalNamespace/zzzz__AudioManagerSO_def.hpp"
#include "GlobalNamespace/zzzz__AutomaticSFXVolume_def.hpp"
#include "GlobalNamespace/zzzz__AutomaticSFXVolumeParamsSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__AutomaticSFXVolume__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AutomaticSFXVolume__InitData::*)(float_t, bool, float_t)>(
    &::GlobalNamespace::__AutomaticSFXVolume__InitData::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x222c538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AutomaticSFXVolume__InitData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::__AutomaticSFXVolume__InitData::__get_volumeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volumeOffset;
}
constexpr float_t const& GlobalNamespace::__AutomaticSFXVolume__InitData::__get_volumeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volumeOffset;
}
constexpr void GlobalNamespace::__AutomaticSFXVolume__InitData::__set_volumeOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___volumeOffset = value;
}
constexpr float_t& GlobalNamespace::__AutomaticSFXVolume__InitData::__get_maxVolume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxVolume;
}
constexpr float_t const& GlobalNamespace::__AutomaticSFXVolume__InitData::__get_maxVolume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxVolume;
}
constexpr void GlobalNamespace::__AutomaticSFXVolume__InitData::__set_maxVolume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxVolume = value;
}
constexpr bool& GlobalNamespace::__AutomaticSFXVolume__InitData::__get_adaptiveSfx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___adaptiveSfx;
}
constexpr bool const& GlobalNamespace::__AutomaticSFXVolume__InitData::__get_adaptiveSfx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___adaptiveSfx;
}
constexpr void GlobalNamespace::__AutomaticSFXVolume__InitData::__set_adaptiveSfx(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___adaptiveSfx = value;
}
/// @param maxVolume: float_t (default: INFINITY)
inline ::GlobalNamespace::__AutomaticSFXVolume__InitData* GlobalNamespace::__AutomaticSFXVolume__InitData::New_ctor(float_t volumeOffset, bool adaptiveSfx, float_t maxVolume) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__AutomaticSFXVolume__InitData*>(volumeOffset, adaptiveSfx, maxVolume));
}
/// @param maxVolume: float_t (default: INFINITY)
inline void GlobalNamespace::__AutomaticSFXVolume__InitData::_ctor(float_t volumeOffset, bool adaptiveSfx, float_t maxVolume) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AutomaticSFXVolume__InitData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, volumeOffset, adaptiveSfx, maxVolume);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AutomaticSFXVolume__InitData::__AutomaticSFXVolume__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::AutomaticSFXVolume.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AutomaticSFXVolume::*)()>(&::GlobalNamespace::AutomaticSFXVolume::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x222c278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutomaticSFXVolume*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomaticSFXVolume.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AutomaticSFXVolume::*)()>(&::GlobalNamespace::AutomaticSFXVolume::OnDisable)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x222c2f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutomaticSFXVolume*>::get(), "OnDisable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomaticSFXVolume.OnValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AutomaticSFXVolume::*)()>(&::GlobalNamespace::AutomaticSFXVolume::OnValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x222c37c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutomaticSFXVolume*>::get(), "OnValidate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomaticSFXVolume.RecalculateParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AutomaticSFXVolume::*)()>(&::GlobalNamespace::AutomaticSFXVolume::RecalculateParams)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x222c27c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutomaticSFXVolume*>::get(),
                                                                               "RecalculateParams", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomaticSFXVolume.OnAudioFilterRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AutomaticSFXVolume::*)(::ArrayW<float_t, ::Array<float_t>*>, int32_t)>(
    &::GlobalNamespace::AutomaticSFXVolume::OnAudioFilterRead)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x222c380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutomaticSFXVolume*>::get(), "OnAudioFilterRead", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomaticSFXVolume.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AutomaticSFXVolume::*)()>(&::GlobalNamespace::AutomaticSFXVolume::Update)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x222c4d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutomaticSFXVolume*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomaticSFXVolume._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AutomaticSFXVolume::*)()>(&::GlobalNamespace::AutomaticSFXVolume::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x222c524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutomaticSFXVolume*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AutomaticSFXVolumeParamsSO*& GlobalNamespace::AutomaticSFXVolume::__get__params() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____params;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AutomaticSFXVolumeParamsSO*> const& GlobalNamespace::AutomaticSFXVolume::__get__params() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____params;
}
constexpr void GlobalNamespace::AutomaticSFXVolume::__set__params(::GlobalNamespace::AutomaticSFXVolumeParamsSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____params)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AudioManagerSO*& GlobalNamespace::AutomaticSFXVolume::__get__audioManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioManagerSO*> const& GlobalNamespace::AutomaticSFXVolume::__get__audioManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr void GlobalNamespace::AutomaticSFXVolume::__set__audioManager(::GlobalNamespace::AudioManagerSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__AutomaticSFXVolume__InitData*& GlobalNamespace::AutomaticSFXVolume::__get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AutomaticSFXVolume__InitData*> const& GlobalNamespace::AutomaticSFXVolume::__get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::AutomaticSFXVolume::__set__initData(::GlobalNamespace::__AutomaticSFXVolume__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::AutomaticSFXVolume::__get__sampleRate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sampleRate;
}
constexpr float_t const& GlobalNamespace::AutomaticSFXVolume::__get__sampleRate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sampleRate;
}
constexpr void GlobalNamespace::AutomaticSFXVolume::__set__sampleRate(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sampleRate = value;
}
constexpr float_t& GlobalNamespace::AutomaticSFXVolume::__get__volume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volume;
}
constexpr float_t const& GlobalNamespace::AutomaticSFXVolume::__get__volume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volume;
}
constexpr void GlobalNamespace::AutomaticSFXVolume::__set__volume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____volume = value;
}
constexpr float_t& GlobalNamespace::AutomaticSFXVolume::__get__envelope() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____envelope;
}
constexpr float_t const& GlobalNamespace::AutomaticSFXVolume::__get__envelope() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____envelope;
}
constexpr void GlobalNamespace::AutomaticSFXVolume::__set__envelope(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____envelope = value;
}
constexpr float_t& GlobalNamespace::AutomaticSFXVolume::__get__attackSamples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attackSamples;
}
constexpr float_t const& GlobalNamespace::AutomaticSFXVolume::__get__attackSamples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attackSamples;
}
constexpr void GlobalNamespace::AutomaticSFXVolume::__set__attackSamples(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____attackSamples = value;
}
constexpr float_t& GlobalNamespace::AutomaticSFXVolume::__get__releaseSamples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____releaseSamples;
}
constexpr float_t const& GlobalNamespace::AutomaticSFXVolume::__get__releaseSamples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____releaseSamples;
}
constexpr void GlobalNamespace::AutomaticSFXVolume::__set__releaseSamples(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____releaseSamples = value;
}
constexpr float_t& GlobalNamespace::AutomaticSFXVolume::__get__attackCoef() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attackCoef;
}
constexpr float_t const& GlobalNamespace::AutomaticSFXVolume::__get__attackCoef() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attackCoef;
}
constexpr void GlobalNamespace::AutomaticSFXVolume::__set__attackCoef(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____attackCoef = value;
}
constexpr float_t& GlobalNamespace::AutomaticSFXVolume::__get__releaseCoef() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____releaseCoef;
}
constexpr float_t const& GlobalNamespace::AutomaticSFXVolume::__get__releaseCoef() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____releaseCoef;
}
constexpr void GlobalNamespace::AutomaticSFXVolume::__set__releaseCoef(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____releaseCoef = value;
}
constexpr float_t& GlobalNamespace::AutomaticSFXVolume::__get__maxVolume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxVolume;
}
constexpr float_t const& GlobalNamespace::AutomaticSFXVolume::__get__maxVolume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxVolume;
}
constexpr void GlobalNamespace::AutomaticSFXVolume::__set__maxVolume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxVolume = value;
}
inline void GlobalNamespace::AutomaticSFXVolume::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutomaticSFXVolume*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AutomaticSFXVolume::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutomaticSFXVolume*>::get(), "OnDisable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AutomaticSFXVolume::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutomaticSFXVolume*>::get(), "OnValidate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AutomaticSFXVolume::RecalculateParams() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutomaticSFXVolume*>::get(), "RecalculateParams",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AutomaticSFXVolume::OnAudioFilterRead(::ArrayW<float_t, ::Array<float_t>*> data, int32_t channels) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutomaticSFXVolume*>::get(), "OnAudioFilterRead", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, channels);
}
inline void GlobalNamespace::AutomaticSFXVolume::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutomaticSFXVolume*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::AutomaticSFXVolume* GlobalNamespace::AutomaticSFXVolume::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AutomaticSFXVolume*>());
}
inline void GlobalNamespace::AutomaticSFXVolume::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutomaticSFXVolume*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AutomaticSFXVolume::AutomaticSFXVolume() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
