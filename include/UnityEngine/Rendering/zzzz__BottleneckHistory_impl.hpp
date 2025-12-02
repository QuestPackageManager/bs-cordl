#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BottleneckHistory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BottleneckHistogram_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BottleneckHistory_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__FrameTimeSample_def.hpp"
#include "UnityEngine/Rendering/zzzz__PerformanceBottleneck_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::BottleneckHistory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BottleneckHistory::*)(int32_t)>(
    &::UnityEngine::Rendering::BottleneckHistory::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6541e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BottleneckHistory*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BottleneckHistory.DiscardOldSamples
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BottleneckHistory::*)(int32_t)>(
    &::UnityEngine::Rendering::BottleneckHistory::DiscardOldSamples)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6542510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BottleneckHistory*>::get(), "DiscardOldSamples",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BottleneckHistory.AddBottleneckFromAveragedSample
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BottleneckHistory::*)(::UnityEngine::Rendering::FrameTimeSample)>(
    &::UnityEngine::Rendering::BottleneckHistory::AddBottleneckFromAveragedSample)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x65425c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BottleneckHistory*>::get(), "AddBottleneckFromAveragedSample", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::FrameTimeSample>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BottleneckHistory.ComputeHistogram
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BottleneckHistory::*)()>(
    &::UnityEngine::Rendering::BottleneckHistory::ComputeHistogram)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x654269c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BottleneckHistory*>::get(),
                                                                               "ComputeHistogram", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BottleneckHistory.DetermineBottleneck
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::PerformanceBottleneck (*)(::UnityEngine::Rendering::FrameTimeSample)>(
    &::UnityEngine::Rendering::BottleneckHistory::DetermineBottleneck)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x654e690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BottleneckHistory*>::get(), "DetermineBottleneck", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::FrameTimeSample>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BottleneckHistory.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BottleneckHistory::*)()>(&::UnityEngine::Rendering::BottleneckHistory::Clear)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6543db8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BottleneckHistory*>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PerformanceBottleneck>*& UnityEngine::Rendering::BottleneckHistory::__cordl_internal_get_m_Bottlenecks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Bottlenecks;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PerformanceBottleneck>* const& UnityEngine::Rendering::BottleneckHistory::__cordl_internal_get_m_Bottlenecks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Bottlenecks;
}
constexpr void UnityEngine::Rendering::BottleneckHistory::__cordl_internal_set_m_Bottlenecks(::System::Collections::Generic::List_1<::UnityEngine::Rendering::PerformanceBottleneck>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Bottlenecks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::BottleneckHistogram& UnityEngine::Rendering::BottleneckHistory::__cordl_internal_get_Histogram() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Histogram;
}
constexpr ::UnityEngine::Rendering::BottleneckHistogram const& UnityEngine::Rendering::BottleneckHistory::__cordl_internal_get_Histogram() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Histogram;
}
constexpr void UnityEngine::Rendering::BottleneckHistory::__cordl_internal_set_Histogram(::UnityEngine::Rendering::BottleneckHistogram value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Histogram = value;
}
inline void UnityEngine::Rendering::BottleneckHistory::_ctor(int32_t initialCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BottleneckHistory*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialCapacity);
}
inline void UnityEngine::Rendering::BottleneckHistory::DiscardOldSamples(int32_t historySize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BottleneckHistory*>::get(), "DiscardOldSamples",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, historySize);
}
inline void UnityEngine::Rendering::BottleneckHistory::AddBottleneckFromAveragedSample(::UnityEngine::Rendering::FrameTimeSample frameHistorySampleAverage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BottleneckHistory*>::get(), "AddBottleneckFromAveragedSample", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::FrameTimeSample>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, frameHistorySampleAverage);
}
inline void UnityEngine::Rendering::BottleneckHistory::ComputeHistogram() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BottleneckHistory*>::get(),
                                                                             "ComputeHistogram", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PerformanceBottleneck UnityEngine::Rendering::BottleneckHistory::DetermineBottleneck(::UnityEngine::Rendering::FrameTimeSample s) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BottleneckHistory*>::get(), "DetermineBottleneck", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::FrameTimeSample>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PerformanceBottleneck, false>(nullptr, ___internal_method, s);
}
inline void UnityEngine::Rendering::BottleneckHistory::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BottleneckHistory*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::BottleneckHistory* UnityEngine::Rendering::BottleneckHistory::New_ctor(int32_t initialCapacity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::BottleneckHistory*>(initialCapacity));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BottleneckHistory::BottleneckHistory() {}
