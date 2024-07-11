#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion2_6_0AndEarlier/BeatmapDataLoader.hpp"
#include "GlobalNamespace/zzzz__BeatToTimeConverterProvider_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapDataLoaderVersion2_6_0AndEarlier/zzzz__BeatmapDataLoader_def.hpp"
#include "BeatmapDataLoaderVersion2_6_0AndEarlier/zzzz__BeatmapDataLoader_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__BeatmapEventType_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveDataItem_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveData_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__EventData_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__NoteData_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__ObstacleData_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__ObstacleType_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__SliderData_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__SpecialEventKeywordFiltersData_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__WaypointData_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightshowSaveData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataBasicInfo_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentKeywords_def.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConverter_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentInfo_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentLightGroups_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__WaypointData_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ColorNoteConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ColorNoteConverter::*)(
    ::GlobalNamespace::IBeatToTimeConverter*)>(&::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ColorNoteConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x15104d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ColorNoteConverter*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConverter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ColorNoteConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapObjectData* (::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ColorNoteConverter::*)(::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*)>(
        &::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ColorNoteConverter::Convert)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x15104f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ColorNoteConverter*>::get(), "Convert",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>::get() })));
    return ___internal_method;
  }
};
inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ColorNoteConverter*
BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ColorNoteConverter::New_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ColorNoteConverter*>(bpmTimeProcessor));
}
inline void BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ColorNoteConverter::_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ColorNoteConverter*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConverter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor);
}
inline ::GlobalNamespace::BeatmapObjectData* BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ColorNoteConverter::Convert(::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData* n) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ColorNoteConverter*>::get(), "Convert",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapObjectData*, false>(this, ___internal_method, n);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ColorNoteConverter::__BeatmapDataLoader__ColorNoteConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter::*)(
    ::GlobalNamespace::IBeatToTimeConverter*)>(&::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x15104e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConverter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::ObstacleData* (::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter::*)(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData*)>(
        &::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter::Convert)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x15105f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter*>::get(), "Convert",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter.GetLayerForObstacleType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType)>(
    &::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter::GetLayerForObstacleType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1510ebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter*>::get(),
                                    "GetLayerForObstacleType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter.GetHeightForObstacleType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType)>(
    &::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter::GetHeightForObstacleType)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1510ecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter*>::get(),
                                    "GetHeightForObstacleType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType>::get() })));
    return ___internal_method;
  }
};
inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter*
BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter::New_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter*>(bpmTimeProcessor));
}
inline void BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter::_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConverter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor);
}
inline ::GlobalNamespace::ObstacleData* BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter::Convert(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData* o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter*>::get(), "Convert",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ObstacleData*, false>(this, ___internal_method, o);
}
inline int32_t BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter::GetLayerForObstacleType(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType obstacleType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter*>::get(),
                                  "GetLayerForObstacleType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, obstacleType);
}
inline int32_t BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter::GetHeightForObstacleType(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType obstacleType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter*>::get(),
                                  "GetHeightForObstacleType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, obstacleType);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__ObstacleConverter::__BeatmapDataLoader__ObstacleConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__WaypointConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__WaypointConverter::*)(
    ::GlobalNamespace::IBeatToTimeConverter*)>(&::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__WaypointConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x15104e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__WaypointConverter*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConverter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__WaypointConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::WaypointData* (::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__WaypointConverter::*)(::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*)>(
        &::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__WaypointConverter::Convert)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1510700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__WaypointConverter*>::get(), "Convert",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>::get() })));
    return ___internal_method;
  }
};
inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__WaypointConverter*
BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__WaypointConverter::New_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__WaypointConverter*>(bpmTimeProcessor));
}
inline void BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__WaypointConverter::_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__WaypointConverter*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConverter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor);
}
inline ::GlobalNamespace::WaypointData*
BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__WaypointConverter::Convert(::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData* waypointSaveData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__WaypointConverter*>::get(), "Convert",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::WaypointData*, false>(this, ___internal_method, waypointSaveData);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__WaypointConverter::__BeatmapDataLoader__WaypointConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SliderConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SliderConverter::*)(
    ::GlobalNamespace::IBeatToTimeConverter*)>(&::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SliderConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x15104f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SliderConverter*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConverter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SliderConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::SliderData* (::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SliderConverter::*)(::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*)>(
        &::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SliderConverter::Convert)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x15107d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SliderConverter*>::get(), "Convert",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>::get() })));
    return ___internal_method;
  }
};
inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SliderConverter*
BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SliderConverter::New_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SliderConverter*>(bpmTimeProcessor));
}
inline void BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SliderConverter::_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SliderConverter*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConverter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor);
}
inline ::GlobalNamespace::SliderData* BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SliderConverter::Convert(::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData* s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SliderConverter*>::get(), "Convert",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderData*, false>(this, ___internal_method, s);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SliderConverter::__BeatmapDataLoader__SliderConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter::*)(
    ::GlobalNamespace::IBeatToTimeConverter*, ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter*, bool)>(
    &::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1510c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConverter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapEventData* (::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter::*)(::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*)>(
        &::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter::Convert)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x1510c4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter*>::get(), "Convert",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter.SpawnRotationForEventValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(int32_t)>(
    &::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter::SpawnRotationForEventValue)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x1510f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter*>::get(), "SpawnRotationForEventValue",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter*&
BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter::__cordl_internal_get__specialEventsFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specialEventsFilter;
}
constexpr ::cordl_internals::to_const_pointer<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter*> const&
BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter::__cordl_internal_get__specialEventsFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specialEventsFilter;
}
constexpr void BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter::__cordl_internal_set__specialEventsFilter(
    ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____specialEventsFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter::__cordl_internal_get__canUseEnvironmentEventsAndShouldLoadDynamicEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canUseEnvironmentEventsAndShouldLoadDynamicEvents;
}
constexpr bool const& BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter::__cordl_internal_get__canUseEnvironmentEventsAndShouldLoadDynamicEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canUseEnvironmentEventsAndShouldLoadDynamicEvents;
}
constexpr void BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter::__cordl_internal_set__canUseEnvironmentEventsAndShouldLoadDynamicEvents(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canUseEnvironmentEventsAndShouldLoadDynamicEvents = value;
}
inline void BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter::setStaticF__spawnRotations(::ArrayW<float_t, ::Array<float_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<float_t, ::Array<float_t>*>, "_spawnRotations",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter*>::get>(
      std::forward<::ArrayW<float_t, ::Array<float_t>*>>(value));
}
inline ::ArrayW<float_t, ::Array<float_t>*> BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter::getStaticF__spawnRotations() {
  return ::cordl_internals::getStaticField<::ArrayW<float_t, ::Array<float_t>*>, "_spawnRotations",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter*>::get>();
}
inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter*
BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter::New_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor,
                                                                                            ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter* specialEventsFilter,
                                                                                            bool canUseEnvironmentEventsAndShouldLoadDynamicEvents) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter*>(bpmTimeProcessor, specialEventsFilter,
                                                                                                                                        canUseEnvironmentEventsAndShouldLoadDynamicEvents));
}
inline void
BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter::_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor,
                                                                                         ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter* specialEventsFilter,
                                                                                         bool canUseEnvironmentEventsAndShouldLoadDynamicEvents) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConverter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor, specialEventsFilter, canUseEnvironmentEventsAndShouldLoadDynamicEvents);
}
inline ::GlobalNamespace::BeatmapEventData* BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter::Convert(::BeatmapSaveDataVersion2_6_0AndEarlier::EventData* e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter*>::get(), "Convert",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventData*, false>(this, ___internal_method, e);
}
inline float_t BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter::SpawnRotationForEventValue(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter*>::get(), "SpawnRotationForEventValue",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, index);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__BasicEventConverter::__BeatmapDataLoader__BasicEventConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter::*)(
    ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData*, ::GlobalNamespace::EnvironmentKeywords*)>(
    &::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter::_ctor)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x1510930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentKeywords*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter.IsEventValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter::*)(
    ::BeatmapSaveDataCommon::BeatmapEventType)>(&::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter::IsEventValid)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1510ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter*>::get(), "IsEventValid",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::BeatmapEventType>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>*&
BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter::__cordl_internal_get__eventTypesToFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventTypesToFilter;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>*> const&
BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter::__cordl_internal_get__eventTypesToFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventTypesToFilter;
}
constexpr void BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter::__cordl_internal_set__eventTypesToFilter(
    ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eventTypesToFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter*
BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter::New_ctor(::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData* basicEventTypesWithKeywords,
                                                                                            ::GlobalNamespace::EnvironmentKeywords* environmentKeywords) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter*>(basicEventTypesWithKeywords, environmentKeywords));
}
inline void
BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter::_ctor(::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData* basicEventTypesWithKeywords,
                                                                                         ::GlobalNamespace::EnvironmentKeywords* environmentKeywords) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentKeywords*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, basicEventTypesWithKeywords, environmentKeywords);
}
inline bool BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter::IsEventValid(::BeatmapSaveDataCommon::BeatmapEventType basicBeatmapEventType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter*>::get(), "IsEventValid",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::BeatmapEventType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, basicBeatmapEventType);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader__SpecialEventsFilter::__BeatmapDataLoader__SpecialEventsFilter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::*)()>(
    &::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x150f428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0._GetBeatmapDataFromSaveDataJsonAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapData* (::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::*)()>(
        &::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::_GetBeatmapDataFromSaveDataJsonAsync_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1511090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0*>::get(),
                                                 "<GetBeatmapDataFromSaveDataJsonAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::__cordl_internal_get_beatmapJson() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapJson;
}
constexpr ::StringW const& BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::__cordl_internal_get_beatmapJson() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapJson;
}
constexpr void BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::__cordl_internal_set_beatmapJson(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapJson)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::__cordl_internal_get_defaultLightshowSaveDataJson() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultLightshowSaveDataJson;
}
constexpr ::StringW const& BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::__cordl_internal_get_defaultLightshowSaveDataJson() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultLightshowSaveDataJson;
}
constexpr void BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::__cordl_internal_set_defaultLightshowSaveDataJson(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultLightshowSaveDataJson)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::__cordl_internal_get_beatmapDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapDifficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::__cordl_internal_get_beatmapDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapDifficulty;
}
constexpr void BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::__cordl_internal_set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapDifficulty = value;
}
constexpr float_t& BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::__cordl_internal_get_startBpm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startBpm;
}
constexpr float_t const& BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::__cordl_internal_get_startBpm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startBpm;
}
constexpr void BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::__cordl_internal_set_startBpm(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startBpm = value;
}
constexpr bool& BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::__cordl_internal_get_loadingForDesignatedEnvironment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadingForDesignatedEnvironment;
}
constexpr bool const& BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::__cordl_internal_get_loadingForDesignatedEnvironment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadingForDesignatedEnvironment;
}
constexpr void BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::__cordl_internal_set_loadingForDesignatedEnvironment(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___loadingForDesignatedEnvironment = value;
}
constexpr ::GlobalNamespace::IEnvironmentInfo*& BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::__cordl_internal_get_environmentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentInfo;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IEnvironmentInfo*> const&
BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::__cordl_internal_get_environmentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentInfo;
}
constexpr void BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::__cordl_internal_set_environmentInfo(::GlobalNamespace::IEnvironmentInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___environmentInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelDataVersion& BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::__cordl_internal_get_beatmapLevelDataVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevelDataVersion;
}
constexpr ::GlobalNamespace::BeatmapLevelDataVersion const& BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::__cordl_internal_get_beatmapLevelDataVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevelDataVersion;
}
constexpr void BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::__cordl_internal_set_beatmapLevelDataVersion(::GlobalNamespace::BeatmapLevelDataVersion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapLevelDataVersion = value;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings*& BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::__cordl_internal_get_playerSpecificSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSpecificSettings;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> const&
BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::__cordl_internal_get_playerSpecificSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSpecificSettings;
}
constexpr void BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::__cordl_internal_set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerSpecificSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0* BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0*>());
}
inline void BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapData* BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::_GetBeatmapDataFromSaveDataJsonAsync_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0*>::get(),
                                               "<GetBeatmapDataFromSaveDataJsonAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapData*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass1_0::__BeatmapDataLoader____c__DisplayClass1_0() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass2_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass2_0::*)()>(
    &::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x150f520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass2_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass2_0._GetBeatmapDataBasicInfoFromSaveDataJsonAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapDataBasicInfo* (::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass2_0::*)()>(
        &::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass2_0::_GetBeatmapDataBasicInfoFromSaveDataJsonAsync_b__0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x15110b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass2_0*>::get(),
                                                 "<GetBeatmapDataBasicInfoFromSaveDataJsonAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass2_0::__cordl_internal_get_beatmapJson() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapJson;
}
constexpr ::StringW const& BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass2_0::__cordl_internal_get_beatmapJson() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapJson;
}
constexpr void BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass2_0::__cordl_internal_set_beatmapJson(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapJson)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass2_0* BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass2_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass2_0*>());
}
inline void BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass2_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass2_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDataBasicInfo* BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass2_0::_GetBeatmapDataBasicInfoFromSaveDataJsonAsync_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass2_0*>::get(),
                                               "<GetBeatmapDataBasicInfoFromSaveDataJsonAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataBasicInfo*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c__DisplayClass2_0::__BeatmapDataLoader____c__DisplayClass2_0() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c::*)()>(
    &::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1511120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c._GetBeatmapDataBasicInfoFromSaveDataJson_b__3_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c::*)(
    ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*)>(&::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c::_GetBeatmapDataBasicInfoFromSaveDataJson_b__3_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1511128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c*>::get(),
                                    "<GetBeatmapDataBasicInfoFromSaveDataJson>b__3_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>::get() })));
    return ___internal_method;
  }
};
inline void BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c::setStaticF___9(::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c* value) {
  ::cordl_internals::setStaticField<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c*>::get>(
      std::forward<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c*>(value));
}
inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c* BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c*>::get>();
}
inline void BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c::setStaticF___9__3_0(::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*, bool>*, "<>9__3_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c*>::get>(
      std::forward<::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*, bool>*>(value));
}
inline ::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*, bool>* BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*, bool>*, "<>9__3_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c*>::get>();
}
inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c* BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c*>());
}
inline void BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c::_GetBeatmapDataBasicInfoFromSaveDataJson_b__3_0(::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData* note) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c*>::get(),
                                  "<GetBeatmapDataBasicInfoFromSaveDataJson>b__3_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, note);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion2_6_0AndEarlier::__BeatmapDataLoader____c::__BeatmapDataLoader____c() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader.GetBeatmapDataFromSaveDataJsonAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<
    ::GlobalNamespace::BeatmapData*>* (*)(::StringW, ::StringW, ::GlobalNamespace::BeatmapDifficulty, float_t, bool, ::GlobalNamespace::IEnvironmentInfo*, ::GlobalNamespace::BeatmapLevelDataVersion,
                                          ::GlobalNamespace::PlayerSpecificSettings*)>(&::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader::GetBeatmapDataFromSaveDataJsonAsync)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x150f2e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader*>::get(), "GetBeatmapDataFromSaveDataJsonAsync",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader.GetBeatmapDataBasicInfoFromSaveDataJsonAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>* (*)(::StringW)>(
    &::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader::GetBeatmapDataBasicInfoFromSaveDataJsonAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x150f430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader*>::get(), "GetBeatmapDataBasicInfoFromSaveDataJsonAsync",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader.GetBeatmapDataBasicInfoFromSaveDataJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataBasicInfo* (*)(::StringW)>(
    &::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader::GetBeatmapDataBasicInfoFromSaveDataJson)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x150f528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader*>::get(), "GetBeatmapDataBasicInfoFromSaveDataJson",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader.GetBeatmapDataFromSaveDataJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::GlobalNamespace::BeatmapData* (*)(::StringW, ::StringW, ::GlobalNamespace::BeatmapDifficulty, float_t, bool, ::GlobalNamespace::IEnvironmentInfo*, ::GlobalNamespace::BeatmapLevelDataVersion,
                                        ::GlobalNamespace::PlayerSpecificSettings*)>(&::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader::GetBeatmapDataFromSaveDataJson)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x150f6e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader*>::get(), "GetBeatmapDataFromSaveDataJson",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader.ConvertBeatmapSaveDataPreV2_5_0Inline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*)>(
    &::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader::ConvertBeatmapSaveDataPreV2_5_0Inline)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1510300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader*>::get(),
                                    "ConvertBeatmapSaveDataPreV2_5_0Inline", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader.GetBeatmapDataFromSaveData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapData* (*)(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*, ::BeatmapSaveDataVersion4::LightshowSaveData*, ::GlobalNamespace::BeatmapDifficulty,
                                                    float_t, bool, ::GlobalNamespace::EnvironmentKeywords*, ::GlobalNamespace::IEnvironmentLightGroups*, ::GlobalNamespace::PlayerSpecificSettings*)>(
        &::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader::GetBeatmapDataFromSaveData)> {
  constexpr static std::size_t size = 0xae8;
  constexpr static std::size_t addrs = 0x150f818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader*>::get(), "GetBeatmapDataFromSaveData",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightshowSaveData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentKeywords*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentLightGroups*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader.BeatmapSaveDataAreSorted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>*)>(
        &::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader::BeatmapSaveDataAreSorted)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x1510310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader*>::get(), "BeatmapSaveDataAreSorted",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader::*)()>(
    &::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1510eb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapData*>* BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader::GetBeatmapDataFromSaveDataJsonAsync(
    ::StringW beatmapJson, ::StringW defaultLightshowSaveDataJson, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, float_t startBpm, bool loadingForDesignatedEnvironment,
    ::GlobalNamespace::IEnvironmentInfo* environmentInfo, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader*>::get(), "GetBeatmapDataFromSaveDataJsonAsync",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapData*>*, false>(nullptr, ___internal_method, beatmapJson, defaultLightshowSaveDataJson,
                                                                                                                          beatmapDifficulty, startBpm, loadingForDesignatedEnvironment, environmentInfo,
                                                                                                                          beatmapLevelDataVersion, playerSpecificSettings);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>*
BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader::GetBeatmapDataBasicInfoFromSaveDataJsonAsync(::StringW beatmapJson) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader*>::get(), "GetBeatmapDataBasicInfoFromSaveDataJsonAsync",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>*, false>(nullptr, ___internal_method, beatmapJson);
}
inline ::GlobalNamespace::BeatmapDataBasicInfo* BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader::GetBeatmapDataBasicInfoFromSaveDataJson(::StringW beatmapSaveDataJson) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader*>::get(), "GetBeatmapDataBasicInfoFromSaveDataJson",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataBasicInfo*, false>(nullptr, ___internal_method, beatmapSaveDataJson);
}
inline ::GlobalNamespace::BeatmapData* BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader::GetBeatmapDataFromSaveDataJson(
    ::StringW beatmapJson, ::StringW defaultLightshowSaveDataJson, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, float_t startBpm, bool loadingForDesignatedEnvironment,
    ::GlobalNamespace::IEnvironmentInfo* environmentInfo, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader*>::get(), "GetBeatmapDataFromSaveDataJson",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapData*, false>(nullptr, ___internal_method, beatmapJson, defaultLightshowSaveDataJson, beatmapDifficulty, startBpm,
                                                                                     loadingForDesignatedEnvironment, environmentInfo, beatmapLevelDataVersion, playerSpecificSettings);
}
inline void BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader::ConvertBeatmapSaveDataPreV2_5_0Inline(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData* beatmapSaveData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader*>::get(), "ConvertBeatmapSaveDataPreV2_5_0Inline",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, beatmapSaveData);
}
inline ::GlobalNamespace::BeatmapData* BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader::GetBeatmapDataFromSaveData(
    ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData* beatmapSaveData, ::BeatmapSaveDataVersion4::LightshowSaveData* defaultLightshowSaveData,
    ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, float_t startBpm, bool loadingForDesignatedEnvironment, ::GlobalNamespace::EnvironmentKeywords* environmentKeywords,
    ::GlobalNamespace::IEnvironmentLightGroups* environmentLightGroups, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader*>::get(), "GetBeatmapDataFromSaveData",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightshowSaveData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentKeywords*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentLightGroups*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapData*, false>(nullptr, ___internal_method, beatmapSaveData, defaultLightshowSaveData, beatmapDifficulty, startBpm,
                                                                                     loadingForDesignatedEnvironment, environmentKeywords, environmentLightGroups, playerSpecificSettings);
}
inline bool BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader::BeatmapSaveDataAreSorted(
    ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>* beatmapSaveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader*>::get(), "BeatmapSaveDataAreSorted",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, beatmapSaveData);
}
inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader* BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader*>());
}
inline void BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader::BeatmapDataLoader() {}
