#pragma once
// IWYU pragma private; include "Oculus/Platform/VoipAudioSourceHiLevel.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Platform/zzzz__VoipAudioSourceHiLevel_def.hpp"
#include "Oculus/Platform/zzzz__IVoipPCMSource_def.hpp"
#include "Oculus/Platform/zzzz__VoipAudioSourceHiLevel_def.hpp"
#include "Oculus/Platform/zzzz__VoipSampleRate_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::*)()>(
    &::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::Awake)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3f92980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate*>::get(), "Awake",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate.OnAudioFilterRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::*)(
    ::ArrayW<float_t, ::Array<float_t>*>, int32_t)>(&::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::OnAudioFilterRead)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x3f92a04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate*>::get(), "OnAudioFilterRead", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::*)()>(
    &::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3f92ee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Platform::VoipAudioSourceHiLevel>& Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::__cordl_internal_get_parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
constexpr ::UnityW<::Oculus::Platform::VoipAudioSourceHiLevel> const& Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::__cordl_internal_get_parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
constexpr void Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::__cordl_internal_set_parent(::UnityW<::Oculus::Platform::VoipAudioSourceHiLevel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::__cordl_internal_get_scratchBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scratchBuffer;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::__cordl_internal_get_scratchBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scratchBuffer;
}
constexpr void Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::__cordl_internal_set_scratchBuffer(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scratchBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::Awake() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate*>::get(), "Awake",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::OnAudioFilterRead(::ArrayW<float_t, ::Array<float_t>*> data, int32_t channels) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate*>::get(), "OnAudioFilterRead", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, channels);
}
inline void Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate* Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate*>());
}
// Ctor Parameters []
constexpr ::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::VoipAudioSourceHiLevel_FilterReadDelegate() {}
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel.set_senderID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::VoipAudioSourceHiLevel::*)(uint64_t)>(
    &::Oculus::Platform::VoipAudioSourceHiLevel::set_senderID)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3f92214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(), "set_senderID",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel.Stop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::VoipAudioSourceHiLevel::*)()>(&::Oculus::Platform::VoipAudioSourceHiLevel::Stop)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3f922c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(), "Stop",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel.SampleRateToEnum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::VoipSampleRate (::Oculus::Platform::VoipAudioSourceHiLevel::*)(int32_t)>(
    &::Oculus::Platform::VoipAudioSourceHiLevel::SampleRateToEnum)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3f922c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(), "SampleRateToEnum",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::VoipAudioSourceHiLevel::*)()>(&::Oculus::Platform::VoipAudioSourceHiLevel::Awake)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x3f92308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::VoipAudioSourceHiLevel::*)()>(&::Oculus::Platform::VoipAudioSourceHiLevel::Start)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3f925ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel.CreatePCMSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::VoipAudioSourceHiLevel::*)()>(
    &::Oculus::Platform::VoipAudioSourceHiLevel::CreatePCMSource)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3f925c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel.MSToElements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::Oculus::Platform::VoipAudioSourceHiLevel::MSToElements)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3f92628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(), "MSToElements",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::VoipAudioSourceHiLevel::*)()>(&::Oculus::Platform::VoipAudioSourceHiLevel::Update)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x3f92690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::VoipAudioSourceHiLevel::*)()>(&::Oculus::Platform::VoipAudioSourceHiLevel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3f92978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Platform::VoipAudioSourceHiLevel::__cordl_internal_get_initialPlaybackDelayMS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialPlaybackDelayMS;
}
constexpr int32_t const& Oculus::Platform::VoipAudioSourceHiLevel::__cordl_internal_get_initialPlaybackDelayMS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialPlaybackDelayMS;
}
constexpr void Oculus::Platform::VoipAudioSourceHiLevel::__cordl_internal_set_initialPlaybackDelayMS(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initialPlaybackDelayMS = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& Oculus::Platform::VoipAudioSourceHiLevel::__cordl_internal_get_audioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& Oculus::Platform::VoipAudioSourceHiLevel::__cordl_internal_get_audioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioSource;
}
constexpr void Oculus::Platform::VoipAudioSourceHiLevel::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___audioSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& Oculus::Platform::VoipAudioSourceHiLevel::__cordl_internal_get_peakAmplitude() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___peakAmplitude;
}
constexpr float_t const& Oculus::Platform::VoipAudioSourceHiLevel::__cordl_internal_get_peakAmplitude() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___peakAmplitude;
}
constexpr void Oculus::Platform::VoipAudioSourceHiLevel::__cordl_internal_set_peakAmplitude(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___peakAmplitude = value;
}
constexpr ::Oculus::Platform::IVoipPCMSource*& Oculus::Platform::VoipAudioSourceHiLevel::__cordl_internal_get_pcmSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pcmSource;
}
constexpr ::Oculus::Platform::IVoipPCMSource* const& Oculus::Platform::VoipAudioSourceHiLevel::__cordl_internal_get_pcmSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pcmSource;
}
constexpr void Oculus::Platform::VoipAudioSourceHiLevel::__cordl_internal_set_pcmSource(::Oculus::Platform::IVoipPCMSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pcmSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Oculus::Platform::VoipAudioSourceHiLevel::setStaticF_audioSystemPlaybackFrequency(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "audioSystemPlaybackFrequency", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Oculus::Platform::VoipAudioSourceHiLevel::getStaticF_audioSystemPlaybackFrequency() {
  return ::cordl_internals::getStaticField<int32_t, "audioSystemPlaybackFrequency", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get>();
}
inline void Oculus::Platform::VoipAudioSourceHiLevel::setStaticF_verboseLogging(bool value) {
  ::cordl_internals::setStaticField<bool, "verboseLogging", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get>(std::forward<bool>(value));
}
inline bool Oculus::Platform::VoipAudioSourceHiLevel::getStaticF_verboseLogging() {
  return ::cordl_internals::getStaticField<bool, "verboseLogging", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get>();
}
inline void Oculus::Platform::VoipAudioSourceHiLevel::set_senderID(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(), "set_senderID", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Oculus::Platform::VoipAudioSourceHiLevel::Stop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(), "Stop",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Oculus::Platform::VoipSampleRate Oculus::Platform::VoipAudioSourceHiLevel::SampleRateToEnum(int32_t rate) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(), "SampleRateToEnum",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::VoipSampleRate, false>(this, ___internal_method, rate);
}
inline void Oculus::Platform::VoipAudioSourceHiLevel::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Oculus::Platform::VoipAudioSourceHiLevel::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Oculus::Platform::VoipAudioSourceHiLevel::CreatePCMSource() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Oculus::Platform::VoipAudioSourceHiLevel::MSToElements(int32_t ms) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(), "MSToElements",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, ms);
}
inline void Oculus::Platform::VoipAudioSourceHiLevel::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Oculus::Platform::VoipAudioSourceHiLevel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Oculus::Platform::VoipAudioSourceHiLevel* Oculus::Platform::VoipAudioSourceHiLevel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::VoipAudioSourceHiLevel*>());
}
// Ctor Parameters []
constexpr ::Oculus::Platform::VoipAudioSourceHiLevel::VoipAudioSourceHiLevel() {}
