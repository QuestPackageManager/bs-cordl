#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\BottleneckHistory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BottleneckHistogram_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BottleneckHistory_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__FrameTimeSample_def.hpp"
#include "UnityEngine/Rendering/zzzz__PerformanceBottleneck_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::BottleneckHistory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BottleneckHistory::*)(int32_t)>(&::UnityEngine::Rendering::BottleneckHistory::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6760b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BottleneckHistory*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BottleneckHistory.DiscardOldSamples
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BottleneckHistory::*)(int32_t)>(&::UnityEngine::Rendering::BottleneckHistory::DiscardOldSamples)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6761204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BottleneckHistory*>(), { "DiscardOldSamples", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BottleneckHistory.AddBottleneckFromAveragedSample
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BottleneckHistory::*)(::UnityEngine::Rendering::FrameTimeSample)>(
    &::UnityEngine::Rendering::BottleneckHistory::AddBottleneckFromAveragedSample)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x67612b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BottleneckHistory*>(),
                                                             { "AddBottleneckFromAveragedSample", {}, { ::i2c::type_of<::UnityEngine::Rendering::FrameTimeSample>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BottleneckHistory.ComputeHistogram
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BottleneckHistory::*)()>(&::UnityEngine::Rendering::BottleneckHistory::ComputeHistogram)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6761390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BottleneckHistory*>(), { "ComputeHistogram", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BottleneckHistory.DetermineBottleneck
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::PerformanceBottleneck (*)(::UnityEngine::Rendering::FrameTimeSample)>(
    &::UnityEngine::Rendering::BottleneckHistory::DetermineBottleneck)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x676d384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BottleneckHistory*>(),
                                                                                           { "DetermineBottleneck", {}, { ::i2c::type_of<::UnityEngine::Rendering::FrameTimeSample>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BottleneckHistory.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BottleneckHistory::*)()>(&::UnityEngine::Rendering::BottleneckHistory::Clear)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6762aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BottleneckHistory*>(), { "Clear", {}, {} })));
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
  this->___m_Bottlenecks = value;
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
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BottleneckHistory*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialCapacity);
}
inline void UnityEngine::Rendering::BottleneckHistory::DiscardOldSamples(int32_t historySize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BottleneckHistory*>(), { "DiscardOldSamples", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, historySize);
}
inline void UnityEngine::Rendering::BottleneckHistory::AddBottleneckFromAveragedSample(::UnityEngine::Rendering::FrameTimeSample frameHistorySampleAverage) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BottleneckHistory*>(),
                                                                                         { "AddBottleneckFromAveragedSample", {}, { ::i2c::type_of<::UnityEngine::Rendering::FrameTimeSample>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frameHistorySampleAverage);
}
inline void UnityEngine::Rendering::BottleneckHistory::ComputeHistogram() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BottleneckHistory*>(), { "ComputeHistogram", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PerformanceBottleneck UnityEngine::Rendering::BottleneckHistory::DetermineBottleneck(::UnityEngine::Rendering::FrameTimeSample s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BottleneckHistory*>(),
                                                                                         { "DetermineBottleneck", {}, { ::i2c::type_of<::UnityEngine::Rendering::FrameTimeSample>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PerformanceBottleneck>(nullptr, ___internal_method, s);
}
inline void UnityEngine::Rendering::BottleneckHistory::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BottleneckHistory*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::BottleneckHistory* UnityEngine::Rendering::BottleneckHistory::New_ctor(int32_t initialCapacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::BottleneckHistory*>(initialCapacity));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BottleneckHistory::BottleneckHistory() {}
