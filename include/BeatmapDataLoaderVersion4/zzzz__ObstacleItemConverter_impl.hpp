#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/ObstacleItemConverter.hpp"
#include "GlobalNamespace/zzzz__BeatToTimeConverter_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__ObstacleItemConverter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BeatmapBeatIndex_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__Obstacle_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include "GlobalNamespace/zzzz__BpmTimeProcessor_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::ObstacleItemConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion4::ObstacleItemConverter::*)(
    ::ArrayW<::BeatmapSaveDataVersion4::Obstacle, ::Array<::BeatmapSaveDataVersion4::Obstacle>*>, ::GlobalNamespace::BpmTimeProcessor*)>(&::BeatmapDataLoaderVersion4::ObstacleItemConverter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x270d1e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::ObstacleItemConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::BeatmapSaveDataVersion4::Obstacle, ::Array<::BeatmapSaveDataVersion4::Obstacle>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::ObstacleItemConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapObjectData* (
    ::BeatmapDataLoaderVersion4::ObstacleItemConverter::*)(::BeatmapSaveDataVersion4::BeatmapBeatIndex*)>(&::BeatmapDataLoaderVersion4::ObstacleItemConverter::Convert)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x270d410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::ObstacleItemConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::BeatmapSaveDataVersion4::Obstacle, ::Array<::BeatmapSaveDataVersion4::Obstacle>*>& BeatmapDataLoaderVersion4::ObstacleItemConverter::__cordl_internal_get__obstacles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacles;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::Obstacle, ::Array<::BeatmapSaveDataVersion4::Obstacle>*> const&
BeatmapDataLoaderVersion4::ObstacleItemConverter::__cordl_internal_get__obstacles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacles;
}
constexpr void BeatmapDataLoaderVersion4::ObstacleItemConverter::__cordl_internal_set__obstacles(::ArrayW<::BeatmapSaveDataVersion4::Obstacle, ::Array<::BeatmapSaveDataVersion4::Obstacle>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____obstacles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatmapDataLoaderVersion4::ObstacleItemConverter::_ctor(::ArrayW<::BeatmapSaveDataVersion4::Obstacle, ::Array<::BeatmapSaveDataVersion4::Obstacle>*> obstacles,
                                                                    ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::ObstacleItemConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::BeatmapSaveDataVersion4::Obstacle, ::Array<::BeatmapSaveDataVersion4::Obstacle>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obstacles, bpmTimeProcessor);
}
inline ::GlobalNamespace::BeatmapObjectData* BeatmapDataLoaderVersion4::ObstacleItemConverter::Convert(::BeatmapSaveDataVersion4::BeatmapBeatIndex* index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::ObstacleItemConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapObjectData*, false>(this, ___internal_method, index);
}
inline ::BeatmapDataLoaderVersion4::ObstacleItemConverter*
BeatmapDataLoaderVersion4::ObstacleItemConverter::New_ctor(::ArrayW<::BeatmapSaveDataVersion4::Obstacle, ::Array<::BeatmapSaveDataVersion4::Obstacle>*> obstacles,
                                                           ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion4::ObstacleItemConverter*>(obstacles, bpmTimeProcessor));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::ObstacleItemConverter::ObstacleItemConverter() {}
