#pragma once
// IWYU pragma private; include "GlobalNamespace/BufferedAudioStream.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BufferedAudioStream_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BufferedAudioStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedAudioStream::*)(::UnityEngine::AudioSource*)>(
    &::GlobalNamespace::BufferedAudioStream::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3f58ffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedAudioStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedAudioStream.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedAudioStream::*)()>(&::GlobalNamespace::BufferedAudioStream::Update)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x3f59104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedAudioStream*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedAudioStream.Stop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedAudioStream::*)()>(&::GlobalNamespace::BufferedAudioStream::Stop)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3f590c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedAudioStream*>::get(), "Stop",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedAudioStream.AddData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedAudioStream::*)(::ArrayW<float_t, ::Array<float_t>*>)>(
    &::GlobalNamespace::BufferedAudioStream::AddData)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x3f592e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedAudioStream*>::get(), "AddData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::BufferedAudioStream::__cordl_internal_get_audio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::BufferedAudioStream::__cordl_internal_get_audio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audio;
}
constexpr void GlobalNamespace::BufferedAudioStream::__cordl_internal_set_audio(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___audio)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& GlobalNamespace::BufferedAudioStream::__cordl_internal_get_audioBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioBuffer;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& GlobalNamespace::BufferedAudioStream::__cordl_internal_get_audioBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioBuffer;
}
constexpr void GlobalNamespace::BufferedAudioStream::__cordl_internal_set_audioBuffer(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___audioBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::BufferedAudioStream::__cordl_internal_get_writePos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writePos;
}
constexpr int32_t const& GlobalNamespace::BufferedAudioStream::__cordl_internal_get_writePos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writePos;
}
constexpr void GlobalNamespace::BufferedAudioStream::__cordl_internal_set_writePos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___writePos = value;
}
constexpr float_t& GlobalNamespace::BufferedAudioStream::__cordl_internal_get_playbackDelayRemaining() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playbackDelayRemaining;
}
constexpr float_t const& GlobalNamespace::BufferedAudioStream::__cordl_internal_get_playbackDelayRemaining() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playbackDelayRemaining;
}
constexpr void GlobalNamespace::BufferedAudioStream::__cordl_internal_set_playbackDelayRemaining(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playbackDelayRemaining = value;
}
constexpr float_t& GlobalNamespace::BufferedAudioStream::__cordl_internal_get_remainingBufferTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___remainingBufferTime;
}
constexpr float_t const& GlobalNamespace::BufferedAudioStream::__cordl_internal_get_remainingBufferTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___remainingBufferTime;
}
constexpr void GlobalNamespace::BufferedAudioStream::__cordl_internal_set_remainingBufferTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___remainingBufferTime = value;
}
inline void GlobalNamespace::BufferedAudioStream::_ctor(::UnityEngine::AudioSource* audio) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedAudioStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audio);
}
inline void GlobalNamespace::BufferedAudioStream::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedAudioStream*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BufferedAudioStream::Stop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedAudioStream*>::get(), "Stop",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BufferedAudioStream::AddData(::ArrayW<float_t, ::Array<float_t>*> samples) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedAudioStream*>::get(), "AddData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, samples);
}
inline ::GlobalNamespace::BufferedAudioStream* GlobalNamespace::BufferedAudioStream::New_ctor(::UnityEngine::AudioSource* audio) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BufferedAudioStream*>(audio));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BufferedAudioStream::BufferedAudioStream() {}
