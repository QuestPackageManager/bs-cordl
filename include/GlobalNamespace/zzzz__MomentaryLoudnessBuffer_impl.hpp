#pragma once
// IWYU pragma private; include "GlobalNamespace/MomentaryLoudnessBuffer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MomentaryLoudnessBuffer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MomentaryLoudnessBuffer.get_isNextReadingIntervalReady
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MomentaryLoudnessBuffer::*)()>(
    &::GlobalNamespace::MomentaryLoudnessBuffer::get_isNextReadingIntervalReady)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3ad07d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MomentaryLoudnessBuffer*>::get(),
                                                                               "get_isNextReadingIntervalReady", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MomentaryLoudnessBuffer.get_buffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t, ::Array<float_t>*> (::GlobalNamespace::MomentaryLoudnessBuffer::*)()>(
    &::GlobalNamespace::MomentaryLoudnessBuffer::get_buffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ad43b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MomentaryLoudnessBuffer*>::get(), "get_buffer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MomentaryLoudnessBuffer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MomentaryLoudnessBuffer::*)(int32_t, int32_t, float_t, int32_t)>(
    &::GlobalNamespace::MomentaryLoudnessBuffer::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3ad06d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MomentaryLoudnessBuffer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MomentaryLoudnessBuffer.AddSample
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MomentaryLoudnessBuffer::*)(float_t)>(
    &::GlobalNamespace::MomentaryLoudnessBuffer::AddSample)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3ad0794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MomentaryLoudnessBuffer*>::get(), "AddSample", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MomentaryLoudnessBuffer::__cordl_internal_get_nextDataIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextDataIndex;
}
constexpr int32_t const& GlobalNamespace::MomentaryLoudnessBuffer::__cordl_internal_get_nextDataIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextDataIndex;
}
constexpr void GlobalNamespace::MomentaryLoudnessBuffer::__cordl_internal_set_nextDataIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextDataIndex = value;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& GlobalNamespace::MomentaryLoudnessBuffer::__cordl_internal_get__buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& GlobalNamespace::MomentaryLoudnessBuffer::__cordl_internal_get__buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
constexpr void GlobalNamespace::MomentaryLoudnessBuffer::__cordl_internal_set__buffer(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::MomentaryLoudnessBuffer::__cordl_internal_get__readingInterval() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readingInterval;
}
constexpr int32_t const& GlobalNamespace::MomentaryLoudnessBuffer::__cordl_internal_get__readingInterval() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readingInterval;
}
constexpr void GlobalNamespace::MomentaryLoudnessBuffer::__cordl_internal_set__readingInterval(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____readingInterval = value;
}
inline bool GlobalNamespace::MomentaryLoudnessBuffer::get_isNextReadingIntervalReady() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MomentaryLoudnessBuffer*>::get(),
                                                                             "get_isNextReadingIntervalReady", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<float_t, ::Array<float_t>*> GlobalNamespace::MomentaryLoudnessBuffer::get_buffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MomentaryLoudnessBuffer*>::get(), "get_buffer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t, ::Array<float_t>*>, false>(this, ___internal_method);
}
inline void GlobalNamespace::MomentaryLoudnessBuffer::_ctor(int32_t numChannels, int32_t sampleFrequency, float_t momentaryWindowDuration, int32_t readingsPerBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MomentaryLoudnessBuffer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, numChannels, sampleFrequency, momentaryWindowDuration, readingsPerBuffer);
}
inline void GlobalNamespace::MomentaryLoudnessBuffer::AddSample(float_t data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MomentaryLoudnessBuffer*>::get(), "AddSample",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline ::GlobalNamespace::MomentaryLoudnessBuffer* GlobalNamespace::MomentaryLoudnessBuffer::New_ctor(int32_t numChannels, int32_t sampleFrequency, float_t momentaryWindowDuration,
                                                                                                      int32_t readingsPerBuffer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MomentaryLoudnessBuffer*>(numChannels, sampleFrequency, momentaryWindowDuration, readingsPerBuffer));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MomentaryLoudnessBuffer::MomentaryLoudnessBuffer() {}
