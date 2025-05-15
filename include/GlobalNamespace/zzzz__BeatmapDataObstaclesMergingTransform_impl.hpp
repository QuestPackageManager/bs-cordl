#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataObstaclesMergingTransform.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataObstaclesMergingTransform_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataObstaclesMergingTransform_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0::*)()>(
    &::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ad3cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0._CreateTransformedData_g__ProcessData_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapDataItem* (::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0::*)(::GlobalNamespace::BeatmapDataItem*)>(
        &::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0::_CreateTransformedData_g__ProcessData_0)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x26ad464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0*>::get(), "<CreateTransformedData>g__ProcessData|0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IReadonlyBeatmapData*& GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0::__cordl_internal_get_beatmapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapData;
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData* const& GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0::__cordl_internal_get_beatmapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapData;
}
constexpr void GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0::__cordl_internal_set_beatmapData(::GlobalNamespace::IReadonlyBeatmapData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::ObstacleData*, ::Array<::GlobalNamespace::ObstacleData*>*>&
GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0::__cordl_internal_get_prevObstacleDataInLines() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prevObstacleDataInLines;
}
constexpr ::ArrayW<::GlobalNamespace::ObstacleData*, ::Array<::GlobalNamespace::ObstacleData*>*> const&
GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0::__cordl_internal_get_prevObstacleDataInLines() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prevObstacleDataInLines;
}
constexpr void GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0::__cordl_internal_set_prevObstacleDataInLines(
    ::ArrayW<::GlobalNamespace::ObstacleData*, ::Array<::GlobalNamespace::ObstacleData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prevObstacleDataInLines)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDataItem*
GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0::_CreateTransformedData_g__ProcessData_0(::GlobalNamespace::BeatmapDataItem* beatmapDataItem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0*>::get(), "<CreateTransformedData>g__ProcessData|0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataItem*, false>(this, ___internal_method, beatmapDataItem);
}
inline ::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0* GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataObstaclesMergingTransform.CreateTransformedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IReadonlyBeatmapData* (*)(::GlobalNamespace::IReadonlyBeatmapData*)>(
    &::GlobalNamespace::BeatmapDataObstaclesMergingTransform::CreateTransformedData)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x26ad218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataObstaclesMergingTransform*>::get(), "CreateTransformedData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataObstaclesMergingTransform.CanBeMerged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::ObstacleData*, ::GlobalNamespace::ObstacleData*)>(
    &::GlobalNamespace::BeatmapDataObstaclesMergingTransform::CanBeMerged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x26ad3d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataObstaclesMergingTransform*>::get(), "CanBeMerged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleData*>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::IReadonlyBeatmapData* GlobalNamespace::BeatmapDataObstaclesMergingTransform::CreateTransformedData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataObstaclesMergingTransform*>::get(), "CreateTransformedData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IReadonlyBeatmapData*, false>(nullptr, ___internal_method, beatmapData);
}
inline bool GlobalNamespace::BeatmapDataObstaclesMergingTransform::CanBeMerged(::GlobalNamespace::ObstacleData* firstObstacle, ::GlobalNamespace::ObstacleData* secondObstacle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataObstaclesMergingTransform*>::get(), "CanBeMerged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, firstObstacle, secondObstacle);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataObstaclesMergingTransform::BeatmapDataObstaclesMergingTransform() {}
