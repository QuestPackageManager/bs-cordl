#pragma once
// IWYU pragma private; include "GlobalNamespace/AdaptiveSfxVolume.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AdaptiveSfxVolume_def.hpp"
#include "GlobalNamespace/zzzz__AdaptiveSfxVolume_def.hpp"
#include "GlobalNamespace/zzzz__AudioManagerSO_def.hpp"
#include "GlobalNamespace/zzzz__MomentaryLoudnessBuffer_def.hpp"
#include "GlobalNamespace/zzzz__MomentaryLoudnessHistory_def.hpp"
#include "LufsMetering/zzzz__LufsMeter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__AdaptiveSfxVolume__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AdaptiveSfxVolume__InitData::*)(float_t, bool, int32_t)>(
    &::GlobalNamespace::__AdaptiveSfxVolume__InitData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3a76ae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AdaptiveSfxVolume__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::__AdaptiveSfxVolume__InitData::__cordl_internal_get_userSettingsVolumeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userSettingsVolumeOffset;
}
constexpr float_t const& GlobalNamespace::__AdaptiveSfxVolume__InitData::__cordl_internal_get_userSettingsVolumeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userSettingsVolumeOffset;
}
constexpr void GlobalNamespace::__AdaptiveSfxVolume__InitData::__cordl_internal_set_userSettingsVolumeOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___userSettingsVolumeOffset = value;
}
constexpr bool& GlobalNamespace::__AdaptiveSfxVolume__InitData::__cordl_internal_get_adaptiveSfx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___adaptiveSfx;
}
constexpr bool const& GlobalNamespace::__AdaptiveSfxVolume__InitData::__cordl_internal_get_adaptiveSfx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___adaptiveSfx;
}
constexpr void GlobalNamespace::__AdaptiveSfxVolume__InitData::__cordl_internal_set_adaptiveSfx(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___adaptiveSfx = value;
}
constexpr int32_t& GlobalNamespace::__AdaptiveSfxVolume__InitData::__cordl_internal_get_frequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frequency;
}
constexpr int32_t const& GlobalNamespace::__AdaptiveSfxVolume__InitData::__cordl_internal_get_frequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frequency;
}
constexpr void GlobalNamespace::__AdaptiveSfxVolume__InitData::__cordl_internal_set_frequency(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___frequency = value;
}
inline ::GlobalNamespace::__AdaptiveSfxVolume__InitData* GlobalNamespace::__AdaptiveSfxVolume__InitData::New_ctor(float_t userSettingsVolumeOffset, bool adaptiveSfx, int32_t frequency) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__AdaptiveSfxVolume__InitData*>(userSettingsVolumeOffset, adaptiveSfx, frequency));
}
inline void GlobalNamespace::__AdaptiveSfxVolume__InitData::_ctor(float_t userSettingsVolumeOffset, bool adaptiveSfx, int32_t frequency) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AdaptiveSfxVolume__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userSettingsVolumeOffset, adaptiveSfx, frequency);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AdaptiveSfxVolume__InitData::__AdaptiveSfxVolume__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::AdaptiveSfxVolume.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AdaptiveSfxVolume::*)()>(&::GlobalNamespace::AdaptiveSfxVolume::Start)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3a764b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdaptiveSfxVolume*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdaptiveSfxVolume.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AdaptiveSfxVolume::*)()>(&::GlobalNamespace::AdaptiveSfxVolume::OnDisable)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3a7658c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdaptiveSfxVolume*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdaptiveSfxVolume.OnAudioFilterRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AdaptiveSfxVolume::*)(::ArrayW<float_t, ::Array<float_t>*>, int32_t)>(
    &::GlobalNamespace::AdaptiveSfxVolume::OnAudioFilterRead)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x3a76618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdaptiveSfxVolume*>::get(), "OnAudioFilterRead", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdaptiveSfxVolume.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AdaptiveSfxVolume::*)()>(&::GlobalNamespace::AdaptiveSfxVolume::Update)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3a768f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdaptiveSfxVolume*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdaptiveSfxVolume.ApplyLoudness
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AdaptiveSfxVolume::*)(float_t)>(&::GlobalNamespace::AdaptiveSfxVolume::ApplyLoudness)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3a769ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdaptiveSfxVolume*>::get(), "ApplyLoudness", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdaptiveSfxVolume._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AdaptiveSfxVolume::*)()>(&::GlobalNamespace::AdaptiveSfxVolume::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3a769dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdaptiveSfxVolume*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioManagerSO>& GlobalNamespace::AdaptiveSfxVolume::__cordl_internal_get__audioManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr ::UnityW<::GlobalNamespace::AudioManagerSO> const& GlobalNamespace::AdaptiveSfxVolume::__cordl_internal_get__audioManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr void GlobalNamespace::AdaptiveSfxVolume::__cordl_internal_set__audioManager(::UnityW<::GlobalNamespace::AudioManagerSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__AdaptiveSfxVolume__InitData*& GlobalNamespace::AdaptiveSfxVolume::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AdaptiveSfxVolume__InitData*> const& GlobalNamespace::AdaptiveSfxVolume::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::AdaptiveSfxVolume::__cordl_internal_set__initData(::GlobalNamespace::__AdaptiveSfxVolume__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::AdaptiveSfxVolume::__cordl_internal_get__minThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minThreshold;
}
constexpr float_t const& GlobalNamespace::AdaptiveSfxVolume::__cordl_internal_get__minThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minThreshold;
}
constexpr void GlobalNamespace::AdaptiveSfxVolume::__cordl_internal_set__minThreshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minThreshold = value;
}
constexpr ::GlobalNamespace::MomentaryLoudnessBuffer*& GlobalNamespace::AdaptiveSfxVolume::__cordl_internal_get__buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MomentaryLoudnessBuffer*> const& GlobalNamespace::AdaptiveSfxVolume::__cordl_internal_get__buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
constexpr void GlobalNamespace::AdaptiveSfxVolume::__cordl_internal_set__buffer(::GlobalNamespace::MomentaryLoudnessBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LufsMetering::LufsMeter*& GlobalNamespace::AdaptiveSfxVolume::__cordl_internal_get__lufsMeter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lufsMeter;
}
constexpr ::cordl_internals::to_const_pointer<::LufsMetering::LufsMeter*> const& GlobalNamespace::AdaptiveSfxVolume::__cordl_internal_get__lufsMeter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lufsMeter;
}
constexpr void GlobalNamespace::AdaptiveSfxVolume::__cordl_internal_set__lufsMeter(::LufsMetering::LufsMeter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lufsMeter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MomentaryLoudnessHistory*& GlobalNamespace::AdaptiveSfxVolume::__cordl_internal_get__loudnessHistory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loudnessHistory;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MomentaryLoudnessHistory*> const& GlobalNamespace::AdaptiveSfxVolume::__cordl_internal_get__loudnessHistory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loudnessHistory;
}
constexpr void GlobalNamespace::AdaptiveSfxVolume::__cordl_internal_set__loudnessHistory(::GlobalNamespace::MomentaryLoudnessHistory* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loudnessHistory)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::AdaptiveSfxVolume::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdaptiveSfxVolume*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AdaptiveSfxVolume::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdaptiveSfxVolume*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AdaptiveSfxVolume::OnAudioFilterRead(::ArrayW<float_t, ::Array<float_t>*> data, int32_t channels) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdaptiveSfxVolume*>::get(), "OnAudioFilterRead", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, channels);
}
inline void GlobalNamespace::AdaptiveSfxVolume::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdaptiveSfxVolume*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AdaptiveSfxVolume::ApplyLoudness(float_t songLoudness) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdaptiveSfxVolume*>::get(), "ApplyLoudness",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, songLoudness);
}
inline ::GlobalNamespace::AdaptiveSfxVolume* GlobalNamespace::AdaptiveSfxVolume::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AdaptiveSfxVolume*>());
}
inline void GlobalNamespace::AdaptiveSfxVolume::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AdaptiveSfxVolume*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AdaptiveSfxVolume::AdaptiveSfxVolume() {}
