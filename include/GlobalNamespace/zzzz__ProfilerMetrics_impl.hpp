#pragma once
// IWYU pragma private; include "GlobalNamespace/ProfilerMetrics.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerCategory_impl.hpp"
#include "GlobalNamespace/zzzz__ProfilerMetrics_def.hpp"
#include "GlobalNamespace/zzzz__ProfilerMetrics_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ProfilerMetrics* (*)(int32_t)>(&::GlobalNamespace::ProfilerMetrics::RecordFrameTimingMetrics)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3b23f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfilerMetrics*>::get(), "RecordFrameTimingMetrics",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfilerMetrics.RecordRenderingMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ProfilerMetrics* (*)(int32_t)>(&::GlobalNamespace::ProfilerMetrics::RecordRenderingMetrics)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3b2575c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfilerMetrics*>::get(), "RecordRenderingMetrics",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfilerMetrics.RecordMemoryMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ProfilerMetrics* (*)(int32_t)>(&::GlobalNamespace::ProfilerMetrics::RecordMemoryMetrics)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3b257bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfilerMetrics*>::get(), "RecordMemoryMetrics", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfilerMetrics.RecordListedMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ProfilerMetrics* (*)(int32_t)>(&::GlobalNamespace::ProfilerMetrics::RecordListedMetrics)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3b2581c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfilerMetrics*>::get(), "RecordListedMetrics", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfilerMetrics.RecordAllMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ProfilerMetrics* (*)(int32_t, bool)>(&::GlobalNamespace::ProfilerMetrics::RecordAllMetrics)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x3b25d2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfilerMetrics*>::get(), "RecordAllMetrics", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfilerMetrics.Record
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::ProfilerMetrics* (*)(::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*>, int32_t)>(
        &::GlobalNamespace::ProfilerMetrics::Record)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x3b25498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfilerMetrics*>::get(), "Record", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfilerMetrics._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ProfilerMetrics::*)(
    ::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*>,
    ::ArrayW<::Unity::Profiling::ProfilerRecorder, ::Array<::Unity::Profiling::ProfilerRecorder>*>, int32_t)>(&::GlobalNamespace::ProfilerMetrics::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3b25ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfilerMetrics*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Unity::Profiling::ProfilerRecorder, ::Array<::Unity::Profiling::ProfilerRecorder>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfilerMetrics.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ProfilerMetrics::*)()>(&::GlobalNamespace::ProfilerMetrics::Dispose)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3b23e9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfilerMetrics*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfilerMetrics.CaptureFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ProfilerMetrics::*)()>(&::GlobalNamespace::ProfilerMetrics::CaptureFrame)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3b24530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfilerMetrics*>::get(), "CaptureFrame",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfilerMetrics.GenerateListReport
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::ProfilerMetrics::*)(bool)>(&::GlobalNamespace::ProfilerMetrics::GenerateListReport)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x3b24e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfilerMetrics*>::get(), "GenerateListReport",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfilerMetrics.GenerateTableReport
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::ProfilerMetrics::*)(bool)>(&::GlobalNamespace::ProfilerMetrics::GenerateTableReport)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x3b24c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfilerMetrics*>::get(), "GenerateTableReport",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfilerMetrics.AddExposedMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*)>(
    &::GlobalNamespace::ProfilerMetrics::AddExposedMetrics)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x3b258e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfilerMetrics*>::get(), "AddExposedMetrics", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*>& GlobalNamespace::ProfilerMetrics::__cordl_internal_get__metrics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____metrics;
}
constexpr ::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*> const&
GlobalNamespace::ProfilerMetrics::__cordl_internal_get__metrics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____metrics;
}
constexpr void
GlobalNamespace::ProfilerMetrics::__cordl_internal_set__metrics(::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____metrics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::Unity::Profiling::ProfilerRecorder, ::Array<::Unity::Profiling::ProfilerRecorder>*>& GlobalNamespace::ProfilerMetrics::__cordl_internal_get__profilerRecorders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____profilerRecorders;
}
constexpr ::ArrayW<::Unity::Profiling::ProfilerRecorder, ::Array<::Unity::Profiling::ProfilerRecorder>*> const& GlobalNamespace::ProfilerMetrics::__cordl_internal_get__profilerRecorders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____profilerRecorders;
}
constexpr void GlobalNamespace::ProfilerMetrics::__cordl_internal_set__profilerRecorders(::ArrayW<::Unity::Profiling::ProfilerRecorder, ::Array<::Unity::Profiling::ProfilerRecorder>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____profilerRecorders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____samples)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void
GlobalNamespace::ProfilerMetrics::setStaticF_kFrameTimeMetrics(::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*>, "kFrameTimeMetrics",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfilerMetrics*>::get>(
      std::forward<::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*>>(value));
}
inline ::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*> GlobalNamespace::ProfilerMetrics::getStaticF_kFrameTimeMetrics() {
  return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*>, "kFrameTimeMetrics",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfilerMetrics*>::get>();
}
inline void
GlobalNamespace::ProfilerMetrics::setStaticF_kRenderingMetrics(::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*>, "kRenderingMetrics",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfilerMetrics*>::get>(
      std::forward<::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*>>(value));
}
inline ::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*> GlobalNamespace::ProfilerMetrics::getStaticF_kRenderingMetrics() {
  return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*>, "kRenderingMetrics",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfilerMetrics*>::get>();
}
inline void
GlobalNamespace::ProfilerMetrics::setStaticF_kMemoryMetrics(::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*>, "kMemoryMetrics",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfilerMetrics*>::get>(
      std::forward<::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*>>(value));
}
inline ::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*> GlobalNamespace::ProfilerMetrics::getStaticF_kMemoryMetrics() {
  return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*>, "kMemoryMetrics",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfilerMetrics*>::get>();
}
inline ::GlobalNamespace::ProfilerMetrics* GlobalNamespace::ProfilerMetrics::RecordFrameTimingMetrics(int32_t initialFrameCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfilerMetrics*>::get(), "RecordFrameTimingMetrics",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ProfilerMetrics*, false>(nullptr, ___internal_method, initialFrameCapacity);
}
inline ::GlobalNamespace::ProfilerMetrics* GlobalNamespace::ProfilerMetrics::RecordRenderingMetrics(int32_t initialFrameCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfilerMetrics*>::get(), "RecordRenderingMetrics",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ProfilerMetrics*, false>(nullptr, ___internal_method, initialFrameCapacity);
}
inline ::GlobalNamespace::ProfilerMetrics* GlobalNamespace::ProfilerMetrics::RecordMemoryMetrics(int32_t initialFrameCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfilerMetrics*>::get(), "RecordMemoryMetrics",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ProfilerMetrics*, false>(nullptr, ___internal_method, initialFrameCapacity);
}
inline ::GlobalNamespace::ProfilerMetrics* GlobalNamespace::ProfilerMetrics::RecordListedMetrics(int32_t initialFrameCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfilerMetrics*>::get(), "RecordListedMetrics",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ProfilerMetrics*, false>(nullptr, ___internal_method, initialFrameCapacity);
}
inline ::GlobalNamespace::ProfilerMetrics* GlobalNamespace::ProfilerMetrics::RecordAllMetrics(int32_t initialFrameCapacity, bool listed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfilerMetrics*>::get(), "RecordAllMetrics", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ProfilerMetrics*, false>(nullptr, ___internal_method, initialFrameCapacity, listed);
}
inline ::GlobalNamespace::ProfilerMetrics*
GlobalNamespace::ProfilerMetrics::Record(::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*> metrics,
                                         int32_t initialFrameCapacity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfilerMetrics*>::get(), "Record", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ProfilerMetrics*, false>(nullptr, ___internal_method, metrics, initialFrameCapacity);
}
inline void GlobalNamespace::ProfilerMetrics::_ctor(::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*> metrics,
                                                    ::ArrayW<::Unity::Profiling::ProfilerRecorder, ::Array<::Unity::Profiling::ProfilerRecorder>*> profilerRecorders, int32_t initialFrameCapacity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfilerMetrics*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Unity::Profiling::ProfilerRecorder, ::Array<::Unity::Profiling::ProfilerRecorder>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, metrics, profilerRecorders, initialFrameCapacity);
}
inline void GlobalNamespace::ProfilerMetrics::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfilerMetrics*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ProfilerMetrics::CaptureFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfilerMetrics*>::get(), "CaptureFrame",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::ProfilerMetrics::GenerateListReport(bool units) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfilerMetrics*>::get(), "GenerateListReport",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, units);
}
inline ::StringW GlobalNamespace::ProfilerMetrics::GenerateTableReport(bool units) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfilerMetrics*>::get(), "GenerateTableReport",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, units);
}
inline void GlobalNamespace::ProfilerMetrics::AddExposedMetrics(::System::Collections::Generic::List_1<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>* list) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProfilerMetrics*>::get(), "AddExposedMetrics", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, list);
}
inline ::GlobalNamespace::ProfilerMetrics*
GlobalNamespace::ProfilerMetrics::New_ctor(::ArrayW<::GlobalNamespace::ProfilerMetrics_ProfilerMetric, ::Array<::GlobalNamespace::ProfilerMetrics_ProfilerMetric>*> metrics,
                                           ::ArrayW<::Unity::Profiling::ProfilerRecorder, ::Array<::Unity::Profiling::ProfilerRecorder>*> profilerRecorders, int32_t initialFrameCapacity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ProfilerMetrics*>(metrics, profilerRecorders, initialFrameCapacity));
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
