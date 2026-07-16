#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataStats.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Range_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataStats_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataStats_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapDataStats_Objects::BeatmapDataStats_Objects(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataStats_Objects::BeatmapDataStats_Objects() {}
constexpr ::GlobalNamespace::BeatmapDataStats_Objects GlobalNamespace::BeatmapDataStats_Objects::Notes{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::BeatmapDataStats_Objects GlobalNamespace::BeatmapDataStats_Objects::Sliders{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::BeatmapDataStats_Objects GlobalNamespace::BeatmapDataStats_Objects::Obstacles{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapDataStats_Events::BeatmapDataStats_Events(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataStats_Events::BeatmapDataStats_Events() {}
constexpr ::GlobalNamespace::BeatmapDataStats_Events GlobalNamespace::BeatmapDataStats_Events::BPM{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::BeatmapDataStats_Events GlobalNamespace::BeatmapDataStats_Events::JumpSpeed{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::BeatmapDataStats_Events GlobalNamespace::BeatmapDataStats_Events::Basic{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::BeatmapDataStats_Events GlobalNamespace::BeatmapDataStats_Events::Boost{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::BeatmapDataStats_Events GlobalNamespace::BeatmapDataStats_Events::Color{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::BeatmapDataStats_Events GlobalNamespace::BeatmapDataStats_Events::Rotation{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::BeatmapDataStats_Events GlobalNamespace::BeatmapDataStats_Events::Translation{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::BeatmapDataStats_Events GlobalNamespace::BeatmapDataStats_Events::FX{ static_cast<int32_t>(0x7) };
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataStats.CountItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Span_1<int32_t> (*)(::ArrayW<::GlobalNamespace::BeatmapDataItem*>)>(&::GlobalNamespace::BeatmapDataStats::CountItems)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x58ea5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataStats*>(), { "CountItems", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapDataItem*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataStats.CountItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::GlobalNamespace::BeatmapDataItem*>, ::System::Span_1<int32_t>, ::System::Span_1<int32_t>)>(
    &::GlobalNamespace::BeatmapDataStats::CountItems)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x58ea77c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::BeatmapDataStats*>(),
            { "CountItems", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapDataItem*>>(), ::i2c::type_of<::System::Span_1<int32_t>>(), ::i2c::type_of<::System::Span_1<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataStats.SumCounts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Span_1<int32_t>)>(&::GlobalNamespace::BeatmapDataStats::SumCounts)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58eab6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataStats*>(), { "SumCounts", {}, { ::i2c::type_of<::System::Span_1<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataStats.GenerateReport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Span_1<int32_t>)>(&::GlobalNamespace::BeatmapDataStats::GenerateReport)> {
  constexpr static std::size_t size = 0x558;
  constexpr static std::size_t addrs = 0x58eabe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataStats*>(), { "GenerateReport", {}, { ::i2c::type_of<::System::Span_1<int32_t>>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapDataStats::setStaticF_kObjectCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kObjectCount", ::GlobalNamespace::BeatmapDataStats*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BeatmapDataStats::getStaticF_kObjectCount() {
  return ::cordl_internals::getStaticField<int32_t, "kObjectCount", ::GlobalNamespace::BeatmapDataStats*>();
}
inline void GlobalNamespace::BeatmapDataStats::setStaticF_kEventCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kEventCount", ::GlobalNamespace::BeatmapDataStats*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BeatmapDataStats::getStaticF_kEventCount() {
  return ::cordl_internals::getStaticField<int32_t, "kEventCount", ::GlobalNamespace::BeatmapDataStats*>();
}
inline void GlobalNamespace::BeatmapDataStats::setStaticF_kObjectRange(::System::Range value) {
  ::cordl_internals::setStaticField<::System::Range, "kObjectRange", ::GlobalNamespace::BeatmapDataStats*>(std::forward<::System::Range>(value));
}
inline ::System::Range GlobalNamespace::BeatmapDataStats::getStaticF_kObjectRange() {
  return ::cordl_internals::getStaticField<::System::Range, "kObjectRange", ::GlobalNamespace::BeatmapDataStats*>();
}
inline void GlobalNamespace::BeatmapDataStats::setStaticF_kEventRange(::System::Range value) {
  ::cordl_internals::setStaticField<::System::Range, "kEventRange", ::GlobalNamespace::BeatmapDataStats*>(std::forward<::System::Range>(value));
}
inline ::System::Range GlobalNamespace::BeatmapDataStats::getStaticF_kEventRange() {
  return ::cordl_internals::getStaticField<::System::Range, "kEventRange", ::GlobalNamespace::BeatmapDataStats*>();
}
inline ::System::Span_1<int32_t> GlobalNamespace::BeatmapDataStats::CountItems(::ArrayW<::GlobalNamespace::BeatmapDataItem*> items) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataStats*>(), { "CountItems", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapDataItem*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Span_1<int32_t>>(nullptr, ___internal_method, items);
}
inline int32_t GlobalNamespace::BeatmapDataStats::CountItems(::ArrayW<::GlobalNamespace::BeatmapDataItem*> items, ::System::Span_1<int32_t> objects, ::System::Span_1<int32_t> events) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::BeatmapDataStats*>(),
          { "CountItems", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapDataItem*>>(), ::i2c::type_of<::System::Span_1<int32_t>>(), ::i2c::type_of<::System::Span_1<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, items, objects, events);
}
inline int32_t GlobalNamespace::BeatmapDataStats::SumCounts(::System::Span_1<int32_t> counts) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataStats*>(), { "SumCounts", {}, { ::i2c::type_of<::System::Span_1<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, counts);
}
inline ::StringW GlobalNamespace::BeatmapDataStats::GenerateReport(::System::Span_1<int32_t> counts) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataStats*>(), { "GenerateReport", {}, { ::i2c::type_of<::System::Span_1<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, counts);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataStats::BeatmapDataStats() {}
