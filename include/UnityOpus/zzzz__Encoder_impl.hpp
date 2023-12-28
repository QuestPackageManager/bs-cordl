#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityOpus/zzzz__NumChannels_impl.hpp"
#include "UnityOpus/zzzz__OpusSignal_impl.hpp"
#include "UnityOpus/zzzz__Encoder_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityOpus/zzzz__OpusApplication_def.hpp"
#include "UnityOpus/zzzz__NumChannels_def.hpp"
#include "UnityOpus/zzzz__SamplingFrequency_def.hpp"
#include "UnityOpus/zzzz__OpusSignal_def.hpp"
//  Writing Method size for method: ::UnityOpus::Encoder.get_Bitrate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityOpus::Encoder::*)()>(&::UnityOpus::Encoder::get_Bitrate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f7710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Encoder*>::get(), "get_Bitrate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Encoder.set_Bitrate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOpus::Encoder::*)(int32_t)>(&::UnityOpus::Encoder::set_Bitrate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21f7718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Encoder*>::get(), "set_Bitrate", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Encoder.get_Complexity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityOpus::Encoder::*)()>(&::UnityOpus::Encoder::get_Complexity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f77c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Encoder*>::get(), "get_Complexity",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Encoder.set_Complexity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOpus::Encoder::*)(int32_t)>(&::UnityOpus::Encoder::set_Complexity)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21f77cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Encoder*>::get(), "set_Complexity", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Encoder.get_Signal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityOpus::OpusSignal (::UnityOpus::Encoder::*)()>(&::UnityOpus::Encoder::get_Signal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f7878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Encoder*>::get(), "get_Signal",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Encoder.set_Signal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOpus::Encoder::*)(::UnityOpus::OpusSignal)>(&::UnityOpus::Encoder::set_Signal)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21f7880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Encoder*>::get(), "set_Signal", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityOpus::OpusSignal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Encoder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityOpus::Encoder::*)(::UnityOpus::SamplingFrequency, ::UnityOpus::NumChannels, ::UnityOpus::OpusApplication)>(&::UnityOpus::Encoder::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x21f792c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Encoder*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityOpus::SamplingFrequency>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityOpus::NumChannels>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityOpus::OpusApplication>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Encoder.Encode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityOpus::Encoder::*)(::ArrayW<float_t, ::Array<float_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::UnityOpus::Encoder::Encode)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21f7af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Encoder*>::get(), "Encode", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Encoder.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOpus::Encoder::*)(bool)>(&::UnityOpus::Encoder::Dispose)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x21f7c64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Encoder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Encoder*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Encoder.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOpus::Encoder::*)()>(&::UnityOpus::Encoder::Finalize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x21f7d64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Encoder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Encoder*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Encoder.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOpus::Encoder::*)()>(&::UnityOpus::Encoder::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x21f7e04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Encoder*>::get(), "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityOpus::Encoder::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& UnityOpus::Encoder::__get_bitrate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bitrate;
}
constexpr int32_t const& UnityOpus::Encoder::__get_bitrate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bitrate;
}
constexpr void UnityOpus::Encoder::__set_bitrate(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bitrate = value;
}
constexpr int32_t& UnityOpus::Encoder::__get_complexity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complexity;
}
constexpr int32_t const& UnityOpus::Encoder::__get_complexity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complexity;
}
constexpr void UnityOpus::Encoder::__set_complexity(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___complexity = value;
}
constexpr ::UnityOpus::OpusSignal& UnityOpus::Encoder::__get_signal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signal;
}
constexpr ::UnityOpus::OpusSignal const& UnityOpus::Encoder::__get_signal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signal;
}
constexpr void UnityOpus::Encoder::__set_signal(::UnityOpus::OpusSignal value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signal = value;
}
constexpr void*& UnityOpus::Encoder::__get_encoder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoder;
}
constexpr void* const& UnityOpus::Encoder::__get_encoder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoder;
}
constexpr void UnityOpus::Encoder::__set_encoder(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encoder = value;
}
constexpr ::UnityOpus::NumChannels& UnityOpus::Encoder::__get_channels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___channels;
}
constexpr ::UnityOpus::NumChannels const& UnityOpus::Encoder::__get_channels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___channels;
}
constexpr void UnityOpus::Encoder::__set_channels(::UnityOpus::NumChannels value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___channels = value;
}
constexpr bool& UnityOpus::Encoder::__get_disposedValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposedValue;
}
constexpr bool const& UnityOpus::Encoder::__get_disposedValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposedValue;
}
constexpr void UnityOpus::Encoder::__set_disposedValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposedValue = value;
}
inline int32_t UnityOpus::Encoder::get_Bitrate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Encoder*>::get(), "get_Bitrate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityOpus::Encoder::set_Bitrate(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Encoder*>::get(), "set_Bitrate", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityOpus::Encoder::get_Complexity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Encoder*>::get(), "get_Complexity",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityOpus::Encoder::set_Complexity(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Encoder*>::get(), "set_Complexity", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityOpus::OpusSignal UnityOpus::Encoder::get_Signal() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Encoder*>::get(), "get_Signal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityOpus::OpusSignal, false>(this, ___internal_method);
}
inline void UnityOpus::Encoder::set_Signal(::UnityOpus::OpusSignal value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Encoder*>::get(), "set_Signal", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityOpus::OpusSignal>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityOpus::Encoder* UnityOpus::Encoder::New_ctor(::UnityOpus::SamplingFrequency samplingFrequency, ::UnityOpus::NumChannels channels, ::UnityOpus::OpusApplication application) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityOpus::Encoder*>(samplingFrequency, channels, application));
}
inline void UnityOpus::Encoder::_ctor(::UnityOpus::SamplingFrequency samplingFrequency, ::UnityOpus::NumChannels channels, ::UnityOpus::OpusApplication application) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Encoder*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityOpus::SamplingFrequency>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityOpus::NumChannels>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityOpus::OpusApplication>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, samplingFrequency, channels, application);
}
inline int32_t UnityOpus::Encoder::Encode(::ArrayW<float_t, ::Array<float_t>*> pcm, int32_t count, ::ArrayW<uint8_t, ::Array<uint8_t>*> output) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Encoder*>::get(), "Encode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, pcm, count, output);
}
inline void UnityOpus::Encoder::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Encoder*>::get(), "Dispose", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void UnityOpus::Encoder::Finalize() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Encoder*>::get(), "Finalize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityOpus::Encoder::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Encoder*>::get(), "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityOpus::Encoder::Encoder() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
