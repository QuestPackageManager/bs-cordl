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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Span_1<int32_t> (*)(::ArrayW<::GlobalNamespace::BeatmapDataItem*, ::Array<::GlobalNamespace::BeatmapDataItem*>*>)>(&::GlobalNamespace::BeatmapDataStats::CountItems)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5758f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStats*>::get(), "CountItems", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapDataItem*, ::Array<::GlobalNamespace::BeatmapDataItem*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataStats.CountItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::ArrayW<::GlobalNamespace::BeatmapDataItem*, ::Array<::GlobalNamespace::BeatmapDataItem*>*>, ::System::Span_1<int32_t>, ::System::Span_1<int32_t>)>(
        &::GlobalNamespace::BeatmapDataStats::CountItems)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x57590e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStats*>::get(), "CountItems", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapDataItem*, ::Array<::GlobalNamespace::BeatmapDataItem*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataStats.SumCounts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Span_1<int32_t>)>(&::GlobalNamespace::BeatmapDataStats::SumCounts)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x57594d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStats*>::get(), "SumCounts", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataStats.GenerateReport
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Span_1<int32_t>)>(&::GlobalNamespace::BeatmapDataStats::GenerateReport)> {
  constexpr static std::size_t size = 0x558;
  constexpr static std::size_t addrs = 0x575954c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStats*>::get(), "GenerateReport", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapDataStats::setStaticF_kObjectCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kObjectCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStats*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BeatmapDataStats::getStaticF_kObjectCount() {
  return ::cordl_internals::getStaticField<int32_t, "kObjectCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStats*>::get>();
}
inline void GlobalNamespace::BeatmapDataStats::setStaticF_kEventCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kEventCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStats*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BeatmapDataStats::getStaticF_kEventCount() {
  return ::cordl_internals::getStaticField<int32_t, "kEventCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStats*>::get>();
}
inline void GlobalNamespace::BeatmapDataStats::setStaticF_kObjectRange(::System::Range value) {
  ::cordl_internals::setStaticField<::System::Range, "kObjectRange", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStats*>::get>(
      std::forward<::System::Range>(value));
}
inline ::System::Range GlobalNamespace::BeatmapDataStats::getStaticF_kObjectRange() {
  return ::cordl_internals::getStaticField<::System::Range, "kObjectRange", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStats*>::get>();
}
inline void GlobalNamespace::BeatmapDataStats::setStaticF_kEventRange(::System::Range value) {
  ::cordl_internals::setStaticField<::System::Range, "kEventRange", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStats*>::get>(
      std::forward<::System::Range>(value));
}
inline ::System::Range GlobalNamespace::BeatmapDataStats::getStaticF_kEventRange() {
  return ::cordl_internals::getStaticField<::System::Range, "kEventRange", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStats*>::get>();
}
inline ::System::Span_1<int32_t> GlobalNamespace::BeatmapDataStats::CountItems(::ArrayW<::GlobalNamespace::BeatmapDataItem*, ::Array<::GlobalNamespace::BeatmapDataItem*>*> items) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStats*>::get(), "CountItems", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapDataItem*, ::Array<::GlobalNamespace::BeatmapDataItem*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Span_1<int32_t>, false>(nullptr, ___internal_method, items);
}
inline int32_t GlobalNamespace::BeatmapDataStats::CountItems(::ArrayW<::GlobalNamespace::BeatmapDataItem*, ::Array<::GlobalNamespace::BeatmapDataItem*>*> items, ::System::Span_1<int32_t> objects,
                                                             ::System::Span_1<int32_t> events) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStats*>::get(), "CountItems", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapDataItem*, ::Array<::GlobalNamespace::BeatmapDataItem*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, items, objects, events);
}
inline int32_t GlobalNamespace::BeatmapDataStats::SumCounts(::System::Span_1<int32_t> counts) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStats*>::get(), "SumCounts", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, counts);
}
inline ::StringW GlobalNamespace::BeatmapDataStats::GenerateReport(::System::Span_1<int32_t> counts) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStats*>::get(), "GenerateReport", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, counts);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataStats::BeatmapDataStats() {}
