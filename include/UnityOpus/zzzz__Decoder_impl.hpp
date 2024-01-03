#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityOpus/zzzz__NumChannels_impl.hpp"
#include "UnityOpus/zzzz__Decoder_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityOpus/zzzz__NumChannels_def.hpp"
#include "UnityOpus/zzzz__SamplingFrequency_def.hpp"
//  Writing Method size for method: ::UnityOpus::Decoder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOpus::Decoder::*)(::UnityOpus::SamplingFrequency, ::UnityOpus::NumChannels)>(
    &::UnityOpus::Decoder::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x21f70e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Decoder*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityOpus::SamplingFrequency>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityOpus::NumChannels>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Decoder.Decode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityOpus::Decoder::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<float_t, ::Array<float_t>*>, int32_t)>(&::UnityOpus::Decoder::Decode)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x21f72c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Decoder*>::get(), "Decode", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Decoder.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOpus::Decoder::*)(bool)>(&::UnityOpus::Decoder::Dispose)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x21f7504;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Decoder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Decoder*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Decoder.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOpus::Decoder::*)()>(&::UnityOpus::Decoder::Finalize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x21f7604;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Decoder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Decoder*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOpus::Decoder.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOpus::Decoder::*)()>(&::UnityOpus::Decoder::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x21f76a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Decoder*>::get(), "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityOpus::Decoder::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityOpus::Decoder::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void*& UnityOpus::Decoder::__get_decoder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decoder;
}
constexpr void* const& UnityOpus::Decoder::__get_decoder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decoder;
}
constexpr void UnityOpus::Decoder::__set_decoder(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decoder = value;
}
constexpr ::UnityOpus::NumChannels& UnityOpus::Decoder::__get_channels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___channels;
}
constexpr ::UnityOpus::NumChannels const& UnityOpus::Decoder::__get_channels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___channels;
}
constexpr void UnityOpus::Decoder::__set_channels(::UnityOpus::NumChannels value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___channels = value;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& UnityOpus::Decoder::__get_softclipMem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___softclipMem;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& UnityOpus::Decoder::__get_softclipMem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___softclipMem;
}
constexpr void UnityOpus::Decoder::__set_softclipMem(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___softclipMem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityOpus::Decoder::__get_disposedValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposedValue;
}
constexpr bool const& UnityOpus::Decoder::__get_disposedValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposedValue;
}
constexpr void UnityOpus::Decoder::__set_disposedValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposedValue = value;
}
inline ::UnityOpus::Decoder* UnityOpus::Decoder::New_ctor(::UnityOpus::SamplingFrequency samplingFrequency, ::UnityOpus::NumChannels channels) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityOpus::Decoder*>(samplingFrequency, channels));
}
inline void UnityOpus::Decoder::_ctor(::UnityOpus::SamplingFrequency samplingFrequency, ::UnityOpus::NumChannels channels) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Decoder*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityOpus::SamplingFrequency>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityOpus::NumChannels>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, samplingFrequency, channels);
}
/// @param decodeFec: int32_t (default: static_cast<int32_t>(0x0))
inline int32_t UnityOpus::Decoder::Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t dataLength, ::ArrayW<float_t, ::Array<float_t>*> pcm, int32_t decodeFec) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Decoder*>::get(), "Decode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, data, dataLength, pcm, decodeFec);
}
inline void UnityOpus::Decoder::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Decoder*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void UnityOpus::Decoder::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Decoder*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityOpus::Decoder::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOpus::Decoder*>::get(), "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityOpus::Decoder::Decoder() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
