#pragma once
// IWYU pragma private; include "GlobalNamespace/ProfilerMetrics.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerCategory_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorder_impl.hpp"
#include "GlobalNamespace/zzzz__ProfilerMetrics_def.hpp"
#include "GlobalNamespace/zzzz__ProfilerMetrics_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorder_def.hpp"
// Ctor Parameters [CppParam { name: "category", ty: "::Unity::Profiling::ProfilerCategory", modifiers: "", def_value: Some("{}") }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::ProfilerMetrics_ProfilerMetric::ProfilerMetrics_ProfilerMetric(::Unity::Profiling::ProfilerCategory category, ::StringW name) noexcept {
  this->category = category;
  this->name = name;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProfilerMetrics_ProfilerMetric::ProfilerMetrics_ProfilerMetric() {}
//  Writing Method size for method: ::GlobalNamespace::ProfilerMetrics.RecordFrameTimingMetrics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ProfilerMetrics* (*)(int32_t)>(&::GlobalNamespace::ProfilerMetrics::RecordFrameTimingMetrics)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x58f5d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfilerMetrics*>(), { "RecordFrameTimingMetrics", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfilerMetrics.RecordRenderingMetrics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ProfilerMetrics* (*)(int32_t)>(&::GlobalNamespace::ProfilerMetrics::RecordRenderingMetrics)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x58f6090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfilerMetrics*>(), { "RecordRenderingMetrics", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfilerMetrics.RecordMemoryMetrics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ProfilerMetrics* (*)(int32_t)>(&::GlobalNamespace::ProfilerMetrics::RecordMemoryMetrics)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x58f60f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfilerMetrics*>(), { "RecordMemoryMetrics", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfilerMetrics.RecordListedMetrics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ProfilerMetrics* (*)(int32_t)>(&::GlobalNamespace::ProfilerMetrics::RecordListedMetrics)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x58f6158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfilerMetrics*>(), { "RecordListedMetrics", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfilerMetrics.RecordAllMetrics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ProfilerMetrics* (*)(int32_t, bool)>(&::GlobalNamespace::ProfilerMetrics::RecordAllMetrics)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x58f4c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfilerMetrics*>(), { "RecordAllMetrics", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfilerMetrics.Record
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ProfilerMetrics* (*)(::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>, int32_t)>(
    &::GlobalNamespace::ProfilerMetrics::Record)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x58f5dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfilerMetrics*>(),
                                                             { "Record", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfilerMetrics._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProfilerMetrics::*)(
    ::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>, ::ArrayW<::Unity::Profiling::ProfilerRecorder>, int32_t)>(&::GlobalNamespace::ProfilerMetrics::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58f669c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfilerMetrics*>(), { ".ctor",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>>(),
                                                                                                     ::i2c::type_of<::ArrayW<::Unity::Profiling::ProfilerRecorder>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfilerMetrics.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProfilerMetrics::*)()>(&::GlobalNamespace::ProfilerMetrics::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x58f4bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfilerMetrics*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfilerMetrics.CaptureFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProfilerMetrics::*)()>(&::GlobalNamespace::ProfilerMetrics::CaptureFrame)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x58f4ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfilerMetrics*>(), { "CaptureFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfilerMetrics.GenerateListReport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ProfilerMetrics::*)(bool)>(&::GlobalNamespace::ProfilerMetrics::GenerateListReport)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x58f551c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfilerMetrics*>(), { "GenerateListReport", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfilerMetrics.GenerateTableReport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ProfilerMetrics::*)(bool)>(&::GlobalNamespace::ProfilerMetrics::GenerateTableReport)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x58f5204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfilerMetrics*>(), { "GenerateTableReport", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfilerMetrics.AddExposedMetrics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*)>(
    &::GlobalNamespace::ProfilerMetrics::AddExposedMetrics)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x58f6228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfilerMetrics*>(),
                                                { "AddExposedMetrics", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>& GlobalNamespace::ProfilerMetrics::__cordl_internal_get__metrics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____metrics;
}
constexpr ::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric> const& GlobalNamespace::ProfilerMetrics::__cordl_internal_get__metrics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____metrics;
}
constexpr void GlobalNamespace::ProfilerMetrics::__cordl_internal_set__metrics(::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____metrics = value;
}
constexpr ::ArrayW<::Unity::Profiling::ProfilerRecorder>& GlobalNamespace::ProfilerMetrics::__cordl_internal_get__profilerRecorders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____profilerRecorders;
}
constexpr ::ArrayW<::Unity::Profiling::ProfilerRecorder> const& GlobalNamespace::ProfilerMetrics::__cordl_internal_get__profilerRecorders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____profilerRecorders;
}
constexpr void GlobalNamespace::ProfilerMetrics::__cordl_internal_set__profilerRecorders(::ArrayW<::Unity::Profiling::ProfilerRecorder> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____profilerRecorders = value;
}
constexpr ::System::Collections::Generic::List_1<int64_t>*& GlobalNamespace::ProfilerMetrics::__cordl_internal_get__samples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____samples;
}
constexpr ::System::Collections::Generic::List_1<int64_t>* const& GlobalNamespace::ProfilerMetrics::__cordl_internal_get__samples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____samples;
}
constexpr void GlobalNamespace::ProfilerMetrics::__cordl_internal_set__samples(::System::Collections::Generic::List_1<int64_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____samples = value;
}
inline void GlobalNamespace::ProfilerMetrics::setStaticF_kFrameTimeMetrics(::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric> value) {
  ::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>, "kFrameTimeMetrics", ::GlobalNamespace::ProfilerMetrics*>(
      std::forward<::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>>(value));
}
inline ::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric> GlobalNamespace::ProfilerMetrics::getStaticF_kFrameTimeMetrics() {
  return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>, "kFrameTimeMetrics", ::GlobalNamespace::ProfilerMetrics*>();
}
inline void GlobalNamespace::ProfilerMetrics::setStaticF_kRenderingMetrics(::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric> value) {
  ::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>, "kRenderingMetrics", ::GlobalNamespace::ProfilerMetrics*>(
      std::forward<::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>>(value));
}
inline ::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric> GlobalNamespace::ProfilerMetrics::getStaticF_kRenderingMetrics() {
  return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>, "kRenderingMetrics", ::GlobalNamespace::ProfilerMetrics*>();
}
inline void GlobalNamespace::ProfilerMetrics::setStaticF_kMemoryMetrics(::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric> value) {
  ::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>, "kMemoryMetrics", ::GlobalNamespace::ProfilerMetrics*>(
      std::forward<::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>>(value));
}
inline ::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric> GlobalNamespace::ProfilerMetrics::getStaticF_kMemoryMetrics() {
  return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>, "kMemoryMetrics", ::GlobalNamespace::ProfilerMetrics*>();
}
inline ::GlobalNamespace::ProfilerMetrics* GlobalNamespace::ProfilerMetrics::RecordFrameTimingMetrics(int32_t initialFrameCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfilerMetrics*>(), { "RecordFrameTimingMetrics", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ProfilerMetrics*>(nullptr, ___internal_method, initialFrameCapacity);
}
inline ::GlobalNamespace::ProfilerMetrics* GlobalNamespace::ProfilerMetrics::RecordRenderingMetrics(int32_t initialFrameCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfilerMetrics*>(), { "RecordRenderingMetrics", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ProfilerMetrics*>(nullptr, ___internal_method, initialFrameCapacity);
}
inline ::GlobalNamespace::ProfilerMetrics* GlobalNamespace::ProfilerMetrics::RecordMemoryMetrics(int32_t initialFrameCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfilerMetrics*>(), { "RecordMemoryMetrics", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ProfilerMetrics*>(nullptr, ___internal_method, initialFrameCapacity);
}
inline ::GlobalNamespace::ProfilerMetrics* GlobalNamespace::ProfilerMetrics::RecordListedMetrics(int32_t initialFrameCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfilerMetrics*>(), { "RecordListedMetrics", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ProfilerMetrics*>(nullptr, ___internal_method, initialFrameCapacity);
}
inline ::GlobalNamespace::ProfilerMetrics* GlobalNamespace::ProfilerMetrics::RecordAllMetrics(int32_t initialFrameCapacity, bool listed) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfilerMetrics*>(), { "RecordAllMetrics", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ProfilerMetrics*>(nullptr, ___internal_method, initialFrameCapacity, listed);
}
inline ::GlobalNamespace::ProfilerMetrics* GlobalNamespace::ProfilerMetrics::Record(::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric> metrics, int32_t initialFrameCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfilerMetrics*>(),
                                                           { "Record", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ProfilerMetrics*>(nullptr, ___internal_method, metrics, initialFrameCapacity);
}
inline void GlobalNamespace::ProfilerMetrics::_ctor(::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric> metrics, ::ArrayW<::Unity::Profiling::ProfilerRecorder> profilerRecorders,
                                                    int32_t initialFrameCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfilerMetrics*>(), { ".ctor",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>>(),
                                                                                                   ::i2c::type_of<::ArrayW<::Unity::Profiling::ProfilerRecorder>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, metrics, profilerRecorders, initialFrameCapacity);
}
inline void GlobalNamespace::ProfilerMetrics::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfilerMetrics*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProfilerMetrics::CaptureFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfilerMetrics*>(), { "CaptureFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::ProfilerMetrics::GenerateListReport(bool units) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfilerMetrics*>(), { "GenerateListReport", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, units);
}
inline ::StringW GlobalNamespace::ProfilerMetrics::GenerateTableReport(bool units) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfilerMetrics*>(), { "GenerateTableReport", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, units);
}
inline void GlobalNamespace::ProfilerMetrics::AddExposedMetrics(::System::Collections::Generic::List_1<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>* list) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ProfilerMetrics*>(),
                                              { "AddExposedMetrics", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list);
}
inline ::GlobalNamespace::ProfilerMetrics* GlobalNamespace::ProfilerMetrics::New_ctor(::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric> metrics,
                                                                                      ::ArrayW<::Unity::Profiling::ProfilerRecorder> profilerRecorders, int32_t initialFrameCapacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProfilerMetrics*>(metrics, profilerRecorders, initialFrameCapacity));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::ProfilerMetrics::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProfilerMetrics::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProfilerMetrics::ProfilerMetrics() {}
