#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BufferedAudioStream_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BufferedAudioStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedAudioStream::*)(::UnityEngine::AudioSource*)>(
    &::GlobalNamespace::BufferedAudioStream::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26cd350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedAudioStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedAudioStream.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedAudioStream::*)()>(&::GlobalNamespace::BufferedAudioStream::Update)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x26cd458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedAudioStream*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedAudioStream.Stop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedAudioStream::*)()>(&::GlobalNamespace::BufferedAudioStream::Stop)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x26cd414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedAudioStream*>::get(), "Stop",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedAudioStream.AddData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedAudioStream::*)(::ArrayW<float_t, ::Array<float_t>*>)>(
    &::GlobalNamespace::BufferedAudioStream::AddData)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x26cd628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedAudioStream*>::get(), "AddData", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AudioSource*& GlobalNamespace::BufferedAudioStream::__get_audio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___audio;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> const& GlobalNamespace::BufferedAudioStream::__get_audio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___audio;
}
constexpr void GlobalNamespace::BufferedAudioStream::__set_audio(::UnityEngine::AudioSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___audio)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& GlobalNamespace::BufferedAudioStream::__get_audioBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___audioBuffer;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& GlobalNamespace::BufferedAudioStream::__get_audioBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___audioBuffer;
}
constexpr void GlobalNamespace::BufferedAudioStream::__set_audioBuffer(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___audioBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::BufferedAudioStream::__get_writePos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___writePos;
}
constexpr int32_t const& GlobalNamespace::BufferedAudioStream::__get_writePos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___writePos;
}
constexpr void GlobalNamespace::BufferedAudioStream::__set_writePos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___writePos = value;
}
constexpr float_t& GlobalNamespace::BufferedAudioStream::__get_playbackDelayRemaining() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___playbackDelayRemaining;
}
constexpr float_t const& GlobalNamespace::BufferedAudioStream::__get_playbackDelayRemaining() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___playbackDelayRemaining;
}
constexpr void GlobalNamespace::BufferedAudioStream::__set_playbackDelayRemaining(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___playbackDelayRemaining = value;
}
constexpr float_t& GlobalNamespace::BufferedAudioStream::__get_remainingBufferTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___remainingBufferTime;
}
constexpr float_t const& GlobalNamespace::BufferedAudioStream::__get_remainingBufferTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___remainingBufferTime;
}
constexpr void GlobalNamespace::BufferedAudioStream::__set_remainingBufferTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___remainingBufferTime = value;
}
inline ::GlobalNamespace::BufferedAudioStream* GlobalNamespace::BufferedAudioStream::New_ctor(::UnityEngine::AudioSource* audio) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BufferedAudioStream*>(audio));
}
inline void GlobalNamespace::BufferedAudioStream::_ctor(::UnityEngine::AudioSource* audio) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedAudioStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audio);
}
inline void GlobalNamespace::BufferedAudioStream::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedAudioStream*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BufferedAudioStream::Stop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedAudioStream*>::get(), "Stop",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BufferedAudioStream::AddData(::ArrayW<float_t, ::Array<float_t>*> samples) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedAudioStream*>::get(), "AddData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, samples);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BufferedAudioStream::BufferedAudioStream() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
