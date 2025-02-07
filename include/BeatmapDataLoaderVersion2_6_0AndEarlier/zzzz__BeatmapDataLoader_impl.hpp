#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion2_6_0AndEarlier/BeatmapDataLoader.hpp"
#include "GlobalNamespace/zzzz__BeatToTimeAndRotationConverter_impl.hpp"
#include "GlobalNamespace/zzzz__BeatToTimeConverter_impl.hpp"
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
#include "GlobalNamespace/zzzz__IBeatmapLightEventConverter_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentInfo_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentLightGroups_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__RotationTimeProcessor_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__WaypointData_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ColorNoteConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ColorNoteConverter::*)(
    ::GlobalNamespace::IBeatToTimeConverter*, ::GlobalNamespace::RotationTimeProcessor*)>(&::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ColorNoteConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27160bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ColorNoteConverter*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ColorNoteConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapObjectData* (::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ColorNoteConverter::*)(::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*)>(
        &::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ColorNoteConverter::Convert)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x27160dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ColorNoteConverter*>::get(), "Convert",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>::get() })));
    return ___internal_method;
  }
};
inline void BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ColorNoteConverter::_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor,
                                                                                                 ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ColorNoteConverter*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConverter*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor, rotationTimeProcessor);
}
inline ::GlobalNamespace::BeatmapObjectData* BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ColorNoteConverter::Convert(::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData* n) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ColorNoteConverter*>::get(), "Convert",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapObjectData*, false>(this, ___internal_method, n);
}
inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ColorNoteConverter*
BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ColorNoteConverter::New_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor,
                                                                                        ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ColorNoteConverter*>(bpmTimeProcessor, rotationTimeProcessor));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ColorNoteConverter::BeatmapDataLoader_ColorNoteConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter::*)(
    ::GlobalNamespace::IBeatToTimeConverter*, ::GlobalNamespace::RotationTimeProcessor*)>(&::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27160c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::ObstacleData* (::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter::*)(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData*)>(
        &::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter::Convert)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2716268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter*>::get(), "Convert",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter.GetLayerForObstacleType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType)>(
    &::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter::GetLayerForObstacleType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2716b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter*>::get(),
                                    "GetLayerForObstacleType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter.GetHeightForObstacleType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType)>(
    &::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter::GetHeightForObstacleType)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2716b54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter*>::get(),
                                    "GetHeightForObstacleType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType>::get() })));
    return ___internal_method;
  }
};
inline void BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter::_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor,
                                                                                                ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConverter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor, rotationTimeProcessor);
}
inline ::GlobalNamespace::ObstacleData* BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter::Convert(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData* o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter*>::get(), "Convert",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ObstacleData*, false>(this, ___internal_method, o);
}
inline int32_t BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter::GetLayerForObstacleType(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType obstacleType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter*>::get(),
                                  "GetLayerForObstacleType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, obstacleType);
}
inline int32_t BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter::GetHeightForObstacleType(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType obstacleType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter*>::get(),
                                  "GetHeightForObstacleType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, obstacleType);
}
inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter*
BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter::New_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor,
                                                                                       ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter*>(bpmTimeProcessor, rotationTimeProcessor));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_ObstacleConverter::BeatmapDataLoader_ObstacleConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_WaypointConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_WaypointConverter::*)(
    ::GlobalNamespace::IBeatToTimeConverter*, ::GlobalNamespace::RotationTimeProcessor*)>(&::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_WaypointConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27160cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_WaypointConverter*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_WaypointConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::WaypointData* (::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_WaypointConverter::*)(::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*)>(
        &::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_WaypointConverter::Convert)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x27163e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_WaypointConverter*>::get(), "Convert",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>::get() })));
    return ___internal_method;
  }
};
inline void BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_WaypointConverter::_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor,
                                                                                                ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_WaypointConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConverter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor, rotationTimeProcessor);
}
inline ::GlobalNamespace::WaypointData* BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_WaypointConverter::Convert(::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData* waypointSaveData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_WaypointConverter*>::get(), "Convert",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::WaypointData*, false>(this, ___internal_method, waypointSaveData);
}
inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_WaypointConverter*
BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_WaypointConverter::New_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor,
                                                                                       ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_WaypointConverter*>(bpmTimeProcessor, rotationTimeProcessor));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_WaypointConverter::BeatmapDataLoader_WaypointConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SliderConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SliderConverter::*)(
    ::GlobalNamespace::IBeatToTimeConverter*, ::GlobalNamespace::RotationTimeProcessor*)>(&::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SliderConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27160d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SliderConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConverter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SliderConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::SliderData* (::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SliderConverter::*)(::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*)>(
        &::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SliderConverter::Convert)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x27164f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SliderConverter*>::get(), "Convert",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>::get() })));
    return ___internal_method;
  }
};
inline void BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SliderConverter::_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor,
                                                                                              ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SliderConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConverter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor, rotationTimeProcessor);
}
inline ::GlobalNamespace::SliderData* BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SliderConverter::Convert(::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData* s) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SliderConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderData*, false>(this, ___internal_method, s);
}
inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SliderConverter*
BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SliderConverter::New_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor,
                                                                                     ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SliderConverter*>(bpmTimeProcessor, rotationTimeProcessor));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SliderConverter::BeatmapDataLoader_SliderConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_BasicEventConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_BasicEventConverter::*)(
    ::GlobalNamespace::IBeatToTimeConverter*, ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter*, bool)>(
    &::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_BasicEventConverter::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x27169b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_BasicEventConverter*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConverter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_BasicEventConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapEventData* (::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_BasicEventConverter::*)(::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*)>(
        &::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_BasicEventConverter::Convert)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x27169e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_BasicEventConverter*>::get(), "Convert",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>::get() })));
    return ___internal_method;
  }
};
constexpr ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter*&
BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_BasicEventConverter::__cordl_internal_get__specialEventsFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specialEventsFilter;
}
constexpr ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter* const&
BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_BasicEventConverter::__cordl_internal_get__specialEventsFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specialEventsFilter;
}
constexpr void BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_BasicEventConverter::__cordl_internal_set__specialEventsFilter(
    ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____specialEventsFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_BasicEventConverter::__cordl_internal_get__canUseEnvironmentEventsAndShouldLoadDynamicEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canUseEnvironmentEventsAndShouldLoadDynamicEvents;
}
constexpr bool const& BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_BasicEventConverter::__cordl_internal_get__canUseEnvironmentEventsAndShouldLoadDynamicEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canUseEnvironmentEventsAndShouldLoadDynamicEvents;
}
constexpr void BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_BasicEventConverter::__cordl_internal_set__canUseEnvironmentEventsAndShouldLoadDynamicEvents(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canUseEnvironmentEventsAndShouldLoadDynamicEvents = value;
}
inline void BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_BasicEventConverter::_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor,
                                                                                                  ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter* specialEventsFilter,
                                                                                                  bool canUseEnvironmentEventsAndShouldLoadDynamicEvents) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_BasicEventConverter*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConverter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor, specialEventsFilter, canUseEnvironmentEventsAndShouldLoadDynamicEvents);
}
inline ::GlobalNamespace::BeatmapEventData* BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_BasicEventConverter::Convert(::BeatmapSaveDataVersion2_6_0AndEarlier::EventData* e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_BasicEventConverter*>::get(), "Convert",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventData*, false>(this, ___internal_method, e);
}
inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_BasicEventConverter*
BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_BasicEventConverter::New_ctor(::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor,
                                                                                         ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter* specialEventsFilter,
                                                                                         bool canUseEnvironmentEventsAndShouldLoadDynamicEvents) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_BasicEventConverter*>(bpmTimeProcessor, specialEventsFilter,
                                                                                                                                     canUseEnvironmentEventsAndShouldLoadDynamicEvents));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_BasicEventConverter::BeatmapDataLoader_BasicEventConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter::*)(
    ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData*, ::GlobalNamespace::EnvironmentKeywords*)>(
    &::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter::_ctor)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x27166bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentKeywords*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter.IsEventValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter::*)(
    ::BeatmapSaveDataCommon::BeatmapEventType)>(&::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter::IsEventValid)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2716b68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter*>::get(), "IsEventValid",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::BeatmapEventType>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>*&
BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter::__cordl_internal_get__eventTypesToFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventTypesToFilter;
}
constexpr ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>* const&
BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter::__cordl_internal_get__eventTypesToFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventTypesToFilter;
}
constexpr void BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter::__cordl_internal_set__eventTypesToFilter(
    ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eventTypesToFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter::_ctor(::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData* basicEventTypesWithKeywords,
                                                                                                  ::GlobalNamespace::EnvironmentKeywords* environmentKeywords) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentKeywords*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, basicEventTypesWithKeywords, environmentKeywords);
}
inline bool BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter::IsEventValid(::BeatmapSaveDataCommon::BeatmapEventType basicBeatmapEventType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter*>::get(), "IsEventValid",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::BeatmapEventType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, basicBeatmapEventType);
}
inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter*
BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter::New_ctor(::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData* basicEventTypesWithKeywords,
                                                                                         ::GlobalNamespace::EnvironmentKeywords* environmentKeywords) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter*>(basicEventTypesWithKeywords, environmentKeywords));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader_SpecialEventsFilter::BeatmapDataLoader_SpecialEventsFilter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c::*)()>(
    &::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2716c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c._GetBeatmapDataBasicInfoFromSaveDataJson_b__3_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c::*)(
    ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*)>(&::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c::_GetBeatmapDataBasicInfoFromSaveDataJson_b__3_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2716c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c*>::get(),
                                    "<GetBeatmapDataBasicInfoFromSaveDataJson>b__3_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>::get() })));
    return ___internal_method;
  }
};
inline void BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c::setStaticF___9(::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c* value) {
  ::cordl_internals::setStaticField<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c*>::get>(
      std::forward<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c*>(value));
}
inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c* BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c*>::get>();
}
inline void BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c::setStaticF___9__3_0(::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*, bool>*, "<>9__3_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c*>::get>(
      std::forward<::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*, bool>*>(value));
}
inline ::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*, bool>* BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*, bool>*, "<>9__3_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c*>::get>();
}
inline void BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c::_GetBeatmapDataBasicInfoFromSaveDataJson_b__3_0(::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData* note) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c*>::get(),
                                  "<GetBeatmapDataBasicInfoFromSaveDataJson>b__3_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, note);
}
inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c* BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c*>());
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c::BeatmapDataLoader___c() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::*)()>(
    &::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2714f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0._GetBeatmapDataFromSaveDataJsonAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapData* (::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::*)()>(
        &::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::_GetBeatmapDataFromSaveDataJsonAsync_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2716c50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0*>::get(),
                                                 "<GetBeatmapDataFromSaveDataJsonAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::__cordl_internal_get_beatmapJson() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapJson;
}
constexpr ::StringW const& BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::__cordl_internal_get_beatmapJson() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapJson;
}
constexpr void BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::__cordl_internal_set_beatmapJson(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapJson)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::__cordl_internal_get_defaultLightshowSaveDataJson() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultLightshowSaveDataJson;
}
constexpr ::StringW const& BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::__cordl_internal_get_defaultLightshowSaveDataJson() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultLightshowSaveDataJson;
}
constexpr void BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::__cordl_internal_set_defaultLightshowSaveDataJson(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultLightshowSaveDataJson)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::__cordl_internal_get_beatmapDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapDifficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::__cordl_internal_get_beatmapDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapDifficulty;
}
constexpr void BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::__cordl_internal_set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapDifficulty = value;
}
constexpr float_t& BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::__cordl_internal_get_startBpm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startBpm;
}
constexpr float_t const& BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::__cordl_internal_get_startBpm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startBpm;
}
constexpr void BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::__cordl_internal_set_startBpm(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startBpm = value;
}
constexpr bool& BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::__cordl_internal_get_loadingForDesignatedEnvironment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadingForDesignatedEnvironment;
}
constexpr bool const& BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::__cordl_internal_get_loadingForDesignatedEnvironment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadingForDesignatedEnvironment;
}
constexpr void BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::__cordl_internal_set_loadingForDesignatedEnvironment(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___loadingForDesignatedEnvironment = value;
}
constexpr ::GlobalNamespace::IEnvironmentInfo*& BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::__cordl_internal_get_environmentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentInfo;
}
constexpr ::GlobalNamespace::IEnvironmentInfo* const& BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::__cordl_internal_get_environmentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentInfo;
}
constexpr void BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::__cordl_internal_set_environmentInfo(::GlobalNamespace::IEnvironmentInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___environmentInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelDataVersion& BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::__cordl_internal_get_beatmapLevelDataVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevelDataVersion;
}
constexpr ::GlobalNamespace::BeatmapLevelDataVersion const& BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::__cordl_internal_get_beatmapLevelDataVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevelDataVersion;
}
constexpr void BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::__cordl_internal_set_beatmapLevelDataVersion(::GlobalNamespace::BeatmapLevelDataVersion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapLevelDataVersion = value;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings*& BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::__cordl_internal_get_playerSpecificSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSpecificSettings;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings* const& BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::__cordl_internal_get_playerSpecificSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSpecificSettings;
}
constexpr void BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::__cordl_internal_set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerSpecificSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IBeatmapLightEventConverter*& BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::__cordl_internal_get_lightEventConverter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightEventConverter;
}
constexpr ::GlobalNamespace::IBeatmapLightEventConverter* const& BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::__cordl_internal_get_lightEventConverter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightEventConverter;
}
constexpr void BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::__cordl_internal_set_lightEventConverter(::GlobalNamespace::IBeatmapLightEventConverter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightEventConverter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapData* BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::_GetBeatmapDataFromSaveDataJsonAsync_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0*>::get(),
                                               "<GetBeatmapDataFromSaveDataJsonAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapData*, false>(this, ___internal_method);
}
inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0* BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0*>());
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass1_0::BeatmapDataLoader___c__DisplayClass1_0() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass2_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass2_0::*)()>(
    &::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2715048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass2_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass2_0._GetBeatmapDataBasicInfoFromSaveDataJsonAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapDataBasicInfo* (::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass2_0::*)()>(
        &::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass2_0::_GetBeatmapDataBasicInfoFromSaveDataJsonAsync_b__0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2716c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass2_0*>::get(),
                                                 "<GetBeatmapDataBasicInfoFromSaveDataJsonAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass2_0::__cordl_internal_get_beatmapJson() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapJson;
}
constexpr ::StringW const& BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass2_0::__cordl_internal_get_beatmapJson() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapJson;
}
constexpr void BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass2_0::__cordl_internal_set_beatmapJson(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapJson)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass2_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass2_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDataBasicInfo* BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass2_0::_GetBeatmapDataBasicInfoFromSaveDataJsonAsync_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass2_0*>::get(),
                                               "<GetBeatmapDataBasicInfoFromSaveDataJsonAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataBasicInfo*, false>(this, ___internal_method);
}
inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass2_0* BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass2_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader___c__DisplayClass2_0::BeatmapDataLoader___c__DisplayClass2_0() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader.GetBeatmapDataFromSaveDataJsonAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<
    ::GlobalNamespace::BeatmapData*>* (*)(::StringW, ::StringW, ::GlobalNamespace::BeatmapDifficulty, float_t, bool, ::GlobalNamespace::IEnvironmentInfo*, ::GlobalNamespace::BeatmapLevelDataVersion,
                                          ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::IBeatmapLightEventConverter*)>(
    &::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader::GetBeatmapDataFromSaveDataJsonAsync)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2714e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader*>::get(), "GetBeatmapDataFromSaveDataJsonAsync",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLightEventConverter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader.GetBeatmapDataBasicInfoFromSaveDataJsonAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>* (*)(::StringW)>(
    &::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader::GetBeatmapDataBasicInfoFromSaveDataJsonAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2714f5c;

  inline static ::MethodInfo const* methodInfo() {
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
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2715050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader*>::get(), "GetBeatmapDataBasicInfoFromSaveDataJson",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader.GetBeatmapDataFromSaveDataJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapData* (*)(::StringW, ::StringW, ::GlobalNamespace::BeatmapDifficulty, float_t, bool, ::GlobalNamespace::IEnvironmentInfo*,
                                                    ::GlobalNamespace::BeatmapLevelDataVersion, ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::IBeatmapLightEventConverter*)>(
        &::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader::GetBeatmapDataFromSaveDataJson)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2715204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader*>::get(), "GetBeatmapDataFromSaveDataJson",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLightEventConverter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader.ConvertBeatmapSaveDataPreV2_5_0Inline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*)>(
    &::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader::ConvertBeatmapSaveDataPreV2_5_0Inline)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2715ed0;

  inline static ::MethodInfo const* methodInfo() {
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
                                                    float_t, bool, ::GlobalNamespace::EnvironmentKeywords*, ::GlobalNamespace::IEnvironmentLightGroups*, ::GlobalNamespace::PlayerSpecificSettings*,
                                                    ::GlobalNamespace::IBeatmapLightEventConverter*)>(&::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader::GetBeatmapDataFromSaveData)> {
  constexpr static std::size_t size = 0xb8c;
  constexpr static std::size_t addrs = 0x2715344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader*>::get(), "GetBeatmapDataFromSaveData",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightshowSaveData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentKeywords*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentLightGroups*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLightEventConverter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader.BeatmapSaveDataAreSorted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>*)>(
        &::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader::BeatmapSaveDataAreSorted)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x2715ee0;

  inline static ::MethodInfo const* methodInfo() {
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
  constexpr static std::size_t addrs = 0x2716b3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapData*>* BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader::GetBeatmapDataFromSaveDataJsonAsync(
    ::StringW beatmapJson, ::StringW defaultLightshowSaveDataJson, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, float_t startBpm, bool loadingForDesignatedEnvironment,
    ::GlobalNamespace::IEnvironmentInfo* environmentInfo, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
    ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader*>::get(), "GetBeatmapDataFromSaveDataJsonAsync",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLightEventConverter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapData*>*, false>(nullptr, ___internal_method, beatmapJson, defaultLightshowSaveDataJson,
                                                                                                                          beatmapDifficulty, startBpm, loadingForDesignatedEnvironment, environmentInfo,
                                                                                                                          beatmapLevelDataVersion, playerSpecificSettings, lightEventConverter);
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
    ::GlobalNamespace::IEnvironmentInfo* environmentInfo, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
    ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader*>::get(), "GetBeatmapDataFromSaveDataJson",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLightEventConverter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapData*, false>(nullptr, ___internal_method, beatmapJson, defaultLightshowSaveDataJson, beatmapDifficulty, startBpm,
                                                                                     loadingForDesignatedEnvironment, environmentInfo, beatmapLevelDataVersion, playerSpecificSettings,
                                                                                     lightEventConverter);
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
    ::GlobalNamespace::IEnvironmentLightGroups* environmentLightGroups, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
    ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader*>::get(), "GetBeatmapDataFromSaveData",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightshowSaveData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentKeywords*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentLightGroups*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLightEventConverter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapData*, false>(nullptr, ___internal_method, beatmapSaveData, defaultLightshowSaveData, beatmapDifficulty, startBpm,
                                                                                     loadingForDesignatedEnvironment, environmentKeywords, environmentLightGroups, playerSpecificSettings,
                                                                                     lightEventConverter);
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
inline void BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader* BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader*>());
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion2_6_0AndEarlier::BeatmapDataLoader::BeatmapDataLoader() {}
