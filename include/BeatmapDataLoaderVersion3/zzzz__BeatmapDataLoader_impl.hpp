#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion3/BeatmapDataLoader.hpp"
#include "BeatmapDataLoaderVersion3/zzzz__BeatmapDataLoader_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapDataLoaderVersion3/zzzz__BeatmapDataLoader_def.hpp"
#include "BeatmapDataLoaderVersion3/zzzz__BeatmapDataLoader_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__BasicEventTypesWithKeywords_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__BeatmapEventType_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BasicEventData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BombNoteData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BpmChangeEventData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BurstSliderData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__ColorBoostEventData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__ColorNoteData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__FxEventBox_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__FxEventsCollection_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__IndexFilter_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightColorBaseData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightColorEventBox_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightRotationBaseData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightRotationEventBox_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightTranslationBaseData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightTranslationEventBox_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__ObstacleData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__SliderData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__WaypointData_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightshowSaveData_def.hpp"
#include "GlobalNamespace/zzzz__BPMChangeBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataBasicInfo_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include "GlobalNamespace/zzzz__BpmTimeProcessor_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentKeywords_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxBaseData_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLightEventConverter_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentInfo_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentLightGroups_def.hpp"
#include "GlobalNamespace/zzzz__ILightGroup_def.hpp"
#include "GlobalNamespace/zzzz__IndexFilter_def.hpp"
#include "GlobalNamespace/zzzz__IntFxBaseData_def.hpp"
#include "GlobalNamespace/zzzz__LightColorBaseData_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationBaseData_def.hpp"
#include "GlobalNamespace/zzzz__LightTranslationBaseData_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__RotationTimeProcessor_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter::*)(
    ::GlobalNamespace::BpmTimeProcessor*, ::GlobalNamespace::RotationTimeProcessor*)>(&::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2718788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter.BeatToTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter::*)(float_t)>(
    &::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter::BeatToTime)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2718818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter*>::get(), "BeatToTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter.BeatToRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter::*)(float_t)>(
    &::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter::BeatToRotation)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2718834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter*>::get(), "BeatToRotation",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BpmTimeProcessor*& BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter::__cordl_internal_get__bpmTimeProcessor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bpmTimeProcessor;
}
constexpr ::GlobalNamespace::BpmTimeProcessor* const& BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter::__cordl_internal_get__bpmTimeProcessor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bpmTimeProcessor;
}
constexpr void BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter::__cordl_internal_set__bpmTimeProcessor(::GlobalNamespace::BpmTimeProcessor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bpmTimeProcessor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RotationTimeProcessor*& BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter::__cordl_internal_get__rotationTimeProcessor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationTimeProcessor;
}
constexpr ::GlobalNamespace::RotationTimeProcessor* const& BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter::__cordl_internal_get__rotationTimeProcessor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationTimeProcessor;
}
constexpr void BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter::__cordl_internal_set__rotationTimeProcessor(::GlobalNamespace::RotationTimeProcessor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rotationTimeProcessor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter::_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                         ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor, rotationTimeProcessor);
}
inline float_t BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter::BeatToTime(float_t beat) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter*>::get(), "BeatToTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, beat);
}
inline int32_t BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter::BeatToRotation(float_t beat) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter*>::get(), "BeatToRotation",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, beat);
}
inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter*
BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter::New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter*>(bpmTimeProcessor, rotationTimeProcessor));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BeatmapDataItemConverter::BeatmapDataLoader_BeatmapDataItemConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BasicEventConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::BeatmapDataLoader_BasicEventConverter::*)(
    ::GlobalNamespace::BpmTimeProcessor*, ::GlobalNamespace::RotationTimeProcessor*, ::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter*)>(
    &::BeatmapDataLoaderVersion3::BeatmapDataLoader_BasicEventConverter::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2716c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BasicEventConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BasicEventConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapEventData* (
    ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BasicEventConverter::*)(::BeatmapSaveDataVersion3::BasicEventData*)>(&::BeatmapDataLoaderVersion3::BeatmapDataLoader_BasicEventConverter::Convert)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2716ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BasicEventConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BasicEventData*>::get() })));
    return ___internal_method;
  }
};
constexpr ::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter*& BeatmapDataLoaderVersion3::BeatmapDataLoader_BasicEventConverter::__cordl_internal_get__specialEventsFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specialEventsFilter;
}
constexpr ::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter* const&
BeatmapDataLoaderVersion3::BeatmapDataLoader_BasicEventConverter::__cordl_internal_get__specialEventsFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specialEventsFilter;
}
constexpr void BeatmapDataLoaderVersion3::BeatmapDataLoader_BasicEventConverter::__cordl_internal_set__specialEventsFilter(::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____specialEventsFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatmapDataLoaderVersion3::BeatmapDataLoader_BasicEventConverter::_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                    ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor,
                                                                                    ::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter* specialEventsFilter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BasicEventConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor, rotationTimeProcessor, specialEventsFilter);
}
inline ::GlobalNamespace::BeatmapEventData* BeatmapDataLoaderVersion3::BeatmapDataLoader_BasicEventConverter::Convert(::BeatmapSaveDataVersion3::BasicEventData* basicEventSaveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BasicEventConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BasicEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventData*, false>(this, ___internal_method, basicEventSaveData);
}
inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BasicEventConverter*
BeatmapDataLoaderVersion3::BeatmapDataLoader_BasicEventConverter::New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor,
                                                                           ::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter* specialEventsFilter) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BasicEventConverter*>(bpmTimeProcessor, rotationTimeProcessor, specialEventsFilter));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BasicEventConverter::BeatmapDataLoader_BasicEventConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BombNoteConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::BeatmapDataLoader_BombNoteConverter::*)(
    ::GlobalNamespace::BpmTimeProcessor*, ::GlobalNamespace::RotationTimeProcessor*)>(&::BeatmapDataLoaderVersion3::BeatmapDataLoader_BombNoteConverter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2714934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BombNoteConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BombNoteConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapObjectData* (
    ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BombNoteConverter::*)(::BeatmapSaveDataVersion3::BombNoteData*)>(&::BeatmapDataLoaderVersion3::BeatmapDataLoader_BombNoteConverter::Convert)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2714aec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BombNoteConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BombNoteData*>::get() })));
    return ___internal_method;
  }
};
inline void BeatmapDataLoaderVersion3::BeatmapDataLoader_BombNoteConverter::_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                  ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BombNoteConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor, rotationTimeProcessor);
}
inline ::GlobalNamespace::BeatmapObjectData* BeatmapDataLoaderVersion3::BeatmapDataLoader_BombNoteConverter::Convert(::BeatmapSaveDataVersion3::BombNoteData* bombNoteSaveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BombNoteConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BombNoteData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapObjectData*, false>(this, ___internal_method, bombNoteSaveData);
}
inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BombNoteConverter*
BeatmapDataLoaderVersion3::BeatmapDataLoader_BombNoteConverter::New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BombNoteConverter*>(bpmTimeProcessor, rotationTimeProcessor));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BombNoteConverter::BeatmapDataLoader_BombNoteConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BpmEventConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::BeatmapDataLoader_BpmEventConverter::*)(
    ::GlobalNamespace::BpmTimeProcessor*, ::GlobalNamespace::RotationTimeProcessor*)>(&::BeatmapDataLoaderVersion3::BeatmapDataLoader_BpmEventConverter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27150b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BpmEventConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BpmEventConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BPMChangeBeatmapEventData* (
    ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BpmEventConverter::*)(::BeatmapSaveDataVersion3::BpmChangeEventData*)>(&::BeatmapDataLoaderVersion3::BeatmapDataLoader_BpmEventConverter::Convert)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x27150e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BpmEventConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BpmChangeEventData*>::get() })));
    return ___internal_method;
  }
};
inline void BeatmapDataLoaderVersion3::BeatmapDataLoader_BpmEventConverter::_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                  ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BpmEventConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor, rotationTimeProcessor);
}
inline ::GlobalNamespace::BPMChangeBeatmapEventData* BeatmapDataLoaderVersion3::BeatmapDataLoader_BpmEventConverter::Convert(::BeatmapSaveDataVersion3::BpmChangeEventData* bpmChangeEventSaveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BpmEventConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BpmChangeEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BPMChangeBeatmapEventData*, false>(this, ___internal_method, bpmChangeEventSaveData);
}
inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BpmEventConverter*
BeatmapDataLoaderVersion3::BeatmapDataLoader_BpmEventConverter::New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BpmEventConverter*>(bpmTimeProcessor, rotationTimeProcessor));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BpmEventConverter::BeatmapDataLoader_BpmEventConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorBoostEventConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorBoostEventConverter::*)(
    ::GlobalNamespace::BpmTimeProcessor*, ::GlobalNamespace::RotationTimeProcessor*)>(&::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorBoostEventConverter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2716c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorBoostEventConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorBoostEventConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapEventData* (::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorBoostEventConverter::*)(::BeatmapSaveDataVersion3::ColorBoostEventData*)>(
        &::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorBoostEventConverter::Convert)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2716d6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorBoostEventConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::ColorBoostEventData*>::get() })));
    return ___internal_method;
  }
};
inline void BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorBoostEventConverter::_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                         ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorBoostEventConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor, rotationTimeProcessor);
}
inline ::GlobalNamespace::BeatmapEventData* BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorBoostEventConverter::Convert(::BeatmapSaveDataVersion3::ColorBoostEventData* colorBoostEventSaveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorBoostEventConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::ColorBoostEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventData*, false>(this, ___internal_method, colorBoostEventSaveData);
}
inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorBoostEventConverter*
BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorBoostEventConverter::New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorBoostEventConverter*>(bpmTimeProcessor, rotationTimeProcessor));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorBoostEventConverter::BeatmapDataLoader_ColorBoostEventConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorNoteConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorNoteConverter::*)(
    ::GlobalNamespace::BpmTimeProcessor*, ::GlobalNamespace::RotationTimeProcessor*)>(&::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorNoteConverter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2714908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorNoteConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorNoteConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapObjectData* (
    ::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorNoteConverter::*)(::BeatmapSaveDataVersion3::ColorNoteData*)>(&::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorNoteConverter::Convert)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2714a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorNoteConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::ColorNoteData*>::get() })));
    return ___internal_method;
  }
};
inline void BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorNoteConverter::_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                   ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorNoteConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor, rotationTimeProcessor);
}
inline ::GlobalNamespace::BeatmapObjectData* BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorNoteConverter::Convert(::BeatmapSaveDataVersion3::ColorNoteData* colorNoteSaveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorNoteConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::ColorNoteData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapObjectData*, false>(this, ___internal_method, colorNoteSaveData);
}
inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorNoteConverter*
BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorNoteConverter::New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorNoteConverter*>(bpmTimeProcessor, rotationTimeProcessor));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::BeatmapDataLoader_ColorNoteConverter::BeatmapDataLoader_ColorNoteConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxEventBoxConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxEventBoxConverter::*)(
    ::BeatmapSaveDataVersion3::FxEventsCollection*)>(&::BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxEventBoxConverter::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2717c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxEventBoxConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::FxEventsCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxEventBoxConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapEventDataBox* (
    ::BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxEventBoxConverter::*)(::BeatmapSaveDataVersion3::FxEventBox*, ::GlobalNamespace::ILightGroup*)>(
    &::BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxEventBoxConverter::Convert)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x2718214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxEventBoxConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::FxEventBox*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILightGroup*>::get() })));
    return ___internal_method;
  }
};
constexpr ::BeatmapSaveDataVersion3::FxEventsCollection*& BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxEventBoxConverter::__cordl_internal_get__fxEventsCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fxEventsCollection;
}
constexpr ::BeatmapSaveDataVersion3::FxEventsCollection* const& BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxEventBoxConverter::__cordl_internal_get__fxEventsCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fxEventsCollection;
}
constexpr void BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxEventBoxConverter::__cordl_internal_set__fxEventsCollection(::BeatmapSaveDataVersion3::FxEventsCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fxEventsCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxEventBoxConverter::_ctor(::BeatmapSaveDataVersion3::FxEventsCollection* fxEventsCollection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxEventBoxConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::FxEventsCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fxEventsCollection);
}
inline ::GlobalNamespace::BeatmapEventDataBox* BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxEventBoxConverter::Convert(::BeatmapSaveDataVersion3::FxEventBox* saveData,
                                                                                                                             ::GlobalNamespace::ILightGroup* lightGroup) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxEventBoxConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::FxEventBox*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILightGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventDataBox*, false>(this, ___internal_method, saveData, lightGroup);
}
inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxEventBoxConverter*
BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxEventBoxConverter::New_ctor(::BeatmapSaveDataVersion3::FxEventsCollection* fxEventsCollection) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxEventBoxConverter*>(fxEventsCollection));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxEventBoxConverter::BeatmapDataLoader_IntVfxEventBoxConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxEventBoxConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxEventBoxConverter::*)(
    ::BeatmapSaveDataVersion3::FxEventsCollection*)>(&::BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxEventBoxConverter::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2717c58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxEventBoxConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::FxEventsCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxEventBoxConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapEventDataBox* (
    ::BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxEventBoxConverter::*)(::BeatmapSaveDataVersion3::FxEventBox*, ::GlobalNamespace::ILightGroup*)>(
    &::BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxEventBoxConverter::Convert)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x2717ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxEventBoxConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::FxEventBox*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILightGroup*>::get() })));
    return ___internal_method;
  }
};
constexpr ::BeatmapSaveDataVersion3::FxEventsCollection*& BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxEventBoxConverter::__cordl_internal_get__fxEventsCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fxEventsCollection;
}
constexpr ::BeatmapSaveDataVersion3::FxEventsCollection* const& BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxEventBoxConverter::__cordl_internal_get__fxEventsCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fxEventsCollection;
}
constexpr void BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxEventBoxConverter::__cordl_internal_set__fxEventsCollection(::BeatmapSaveDataVersion3::FxEventsCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fxEventsCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxEventBoxConverter::_ctor(::BeatmapSaveDataVersion3::FxEventsCollection* fxEventsCollection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxEventBoxConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::FxEventsCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fxEventsCollection);
}
inline ::GlobalNamespace::BeatmapEventDataBox* BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxEventBoxConverter::Convert(::BeatmapSaveDataVersion3::FxEventBox* saveData,
                                                                                                                               ::GlobalNamespace::ILightGroup* lightGroup) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxEventBoxConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::FxEventBox*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILightGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventDataBox*, false>(this, ___internal_method, saveData, lightGroup);
}
inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxEventBoxConverter*
BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxEventBoxConverter::New_ctor(::BeatmapSaveDataVersion3::FxEventsCollection* fxEventsCollection) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxEventBoxConverter*>(fxEventsCollection));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxEventBoxConverter::BeatmapDataLoader_FloatVfxEventBoxConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxBaseDataConvertor.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IntFxBaseData* (*)(int32_t, ::BeatmapSaveDataVersion3::FxEventsCollection*)>(
    &::BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxBaseDataConvertor::Convert)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2718bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxBaseDataConvertor*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::FxEventsCollection*>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::IntFxBaseData* BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxBaseDataConvertor::Convert(int32_t vfxEventBaseData,
                                                                                                                       ::BeatmapSaveDataVersion3::FxEventsCollection* collection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxBaseDataConvertor*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::FxEventsCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IntFxBaseData*, false>(nullptr, ___internal_method, vfxEventBaseData, collection);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::BeatmapDataLoader_IntVfxBaseDataConvertor::BeatmapDataLoader_IntVfxBaseDataConvertor() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxBaseDataConvertor.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::FloatFxBaseData* (*)(int32_t, ::BeatmapSaveDataVersion3::FxEventsCollection*)>(
    &::BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxBaseDataConvertor::Convert)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2718cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxBaseDataConvertor*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::FxEventsCollection*>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::FloatFxBaseData* BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxBaseDataConvertor::Convert(int32_t vfxEventBaseData,
                                                                                                                           ::BeatmapSaveDataVersion3::FxEventsCollection* collection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxBaseDataConvertor*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::FxEventsCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FloatFxBaseData*, false>(nullptr, ___internal_method, vfxEventBaseData, collection);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::BeatmapDataLoader_FloatVfxBaseDataConvertor::BeatmapDataLoader_FloatVfxBaseDataConvertor() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_IndexFilterConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IndexFilter* (*)(::BeatmapSaveDataVersion3::IndexFilter*, int32_t)>(
    &::BeatmapDataLoaderVersion3::BeatmapDataLoader_IndexFilterConverter::Convert)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x2718850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_IndexFilterConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::IndexFilter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::IndexFilter* BeatmapDataLoaderVersion3::BeatmapDataLoader_IndexFilterConverter::Convert(::BeatmapSaveDataVersion3::IndexFilter* indexFilter, int32_t groupSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_IndexFilterConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::IndexFilter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IndexFilter*, false>(nullptr, ___internal_method, indexFilter, groupSize);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::BeatmapDataLoader_IndexFilterConverter::BeatmapDataLoader_IndexFilterConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColorEventBoxConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapEventDataBox* (*)(::BeatmapSaveDataVersion3::LightColorEventBox*, ::GlobalNamespace::ILightGroup*)>(
        &::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColorEventBoxConverter::Convert)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x2716dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColorEventBoxConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::LightColorEventBox*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILightGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColorEventBoxConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColorEventBoxConverter::*)()>(
    &::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColorEventBoxConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2718f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColorEventBoxConverter*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::BeatmapEventDataBox* BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColorEventBoxConverter::Convert(::BeatmapSaveDataVersion3::LightColorEventBox* saveData,
                                                                                                                                 ::GlobalNamespace::ILightGroup* lightGroupData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColorEventBoxConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::LightColorEventBox*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILightGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventDataBox*, false>(nullptr, ___internal_method, saveData, lightGroupData);
}
inline void BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColorEventBoxConverter::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColorEventBoxConverter*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColorEventBoxConverter* BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColorEventBoxConverter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColorEventBoxConverter*>());
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColorEventBoxConverter::BeatmapDataLoader_LightColorEventBoxConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColoBaseDataConvertor.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightColorBaseData* (*)(::BeatmapSaveDataVersion3::LightColorBaseData*)>(
    &::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColoBaseDataConvertor::Convert)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2718e10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColoBaseDataConvertor*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::LightColorBaseData*>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::LightColorBaseData* BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColoBaseDataConvertor::Convert(::BeatmapSaveDataVersion3::LightColorBaseData* saveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColoBaseDataConvertor*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::LightColorBaseData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightColorBaseData*, false>(nullptr, ___internal_method, saveData);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightColoBaseDataConvertor::BeatmapDataLoader_LightColoBaseDataConvertor() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationEventBoxConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapEventDataBox* (*)(::BeatmapSaveDataVersion3::LightRotationEventBox*, ::GlobalNamespace::ILightGroup*)>(
        &::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationEventBoxConverter::Convert)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0x2717140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationEventBoxConverter*>::get(),
                                                 "Convert", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::LightRotationEventBox*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILightGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationEventBoxConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationEventBoxConverter::*)()>(
    &::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationEventBoxConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2718fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationEventBoxConverter*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::BeatmapEventDataBox* BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationEventBoxConverter::Convert(::BeatmapSaveDataVersion3::LightRotationEventBox* saveData,
                                                                                                                                    ::GlobalNamespace::ILightGroup* lightGroupData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationEventBoxConverter*>::get(), "Convert",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::LightRotationEventBox*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILightGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventDataBox*, false>(nullptr, ___internal_method, saveData, lightGroupData);
}
inline void BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationEventBoxConverter::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationEventBoxConverter*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationEventBoxConverter* BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationEventBoxConverter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationEventBoxConverter*>());
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationEventBoxConverter::BeatmapDataLoader_LightRotationEventBoxConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationBaseDataConvertor.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightRotationBaseData* (*)(::BeatmapSaveDataVersion3::LightRotationBaseData*)>(
    &::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationBaseDataConvertor::Convert)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2718f0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationBaseDataConvertor*>::get(), "Convert",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::LightRotationBaseData*>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::LightRotationBaseData* BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationBaseDataConvertor::Convert(::BeatmapSaveDataVersion3::LightRotationBaseData* saveData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationBaseDataConvertor*>::get(), "Convert",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::LightRotationBaseData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightRotationBaseData*, false>(nullptr, ___internal_method, saveData);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightRotationBaseDataConvertor::BeatmapDataLoader_LightRotationBaseDataConvertor() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationEventBoxConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapEventDataBox* (*)(::BeatmapSaveDataVersion3::LightTranslationEventBox*, ::GlobalNamespace::ILightGroup*)>(
        &::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationEventBoxConverter::Convert)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0x27176cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationEventBoxConverter*>::get(),
                                                 "Convert", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::LightTranslationEventBox*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILightGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationEventBoxConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationEventBoxConverter::*)()>(
    &::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationEventBoxConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2719074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationEventBoxConverter*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::BeatmapEventDataBox* BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationEventBoxConverter::Convert(::BeatmapSaveDataVersion3::LightTranslationEventBox* saveData,
                                                                                                                                       ::GlobalNamespace::ILightGroup* lightGroupData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationEventBoxConverter*>::get(),
                                               "Convert", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::LightTranslationEventBox*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILightGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventDataBox*, false>(nullptr, ___internal_method, saveData, lightGroupData);
}
inline void BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationEventBoxConverter::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationEventBoxConverter*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationEventBoxConverter* BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationEventBoxConverter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationEventBoxConverter*>());
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationEventBoxConverter::BeatmapDataLoader_LightTranslationEventBoxConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationBaseDataConvertor.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightTranslationBaseData* (*)(::BeatmapSaveDataVersion3::LightTranslationBaseData*)>(
    &::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationBaseDataConvertor::Convert)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2718fd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationBaseDataConvertor*>::get(), "Convert",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::LightTranslationBaseData*>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::LightTranslationBaseData*
BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationBaseDataConvertor::Convert(::BeatmapSaveDataVersion3::LightTranslationBaseData* saveData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationBaseDataConvertor*>::get(), "Convert",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::LightTranslationBaseData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightTranslationBaseData*, false>(nullptr, ___internal_method, saveData);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::BeatmapDataLoader_LightTranslationBaseDataConvertor::BeatmapDataLoader_LightTranslationBaseDataConvertor() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_ObstacleConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::BeatmapDataLoader_ObstacleConverter::*)(
    ::GlobalNamespace::BpmTimeProcessor*, ::GlobalNamespace::RotationTimeProcessor*)>(&::BeatmapDataLoaderVersion3::BeatmapDataLoader_ObstacleConverter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2714960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_ObstacleConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_ObstacleConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapObjectData* (
    ::BeatmapDataLoaderVersion3::BeatmapDataLoader_ObstacleConverter::*)(::BeatmapSaveDataVersion3::ObstacleData*)>(&::BeatmapDataLoaderVersion3::BeatmapDataLoader_ObstacleConverter::Convert)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2714b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_ObstacleConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::ObstacleData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_ObstacleConverter.GetNoteLineLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteLineLayer (*)(int32_t)>(
    &::BeatmapDataLoaderVersion3::BeatmapDataLoader_ObstacleConverter::GetNoteLineLayer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x271907c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_ObstacleConverter*>::get(), "GetNoteLineLayer",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void BeatmapDataLoaderVersion3::BeatmapDataLoader_ObstacleConverter::_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                  ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_ObstacleConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor, rotationTimeProcessor);
}
inline ::GlobalNamespace::BeatmapObjectData* BeatmapDataLoaderVersion3::BeatmapDataLoader_ObstacleConverter::Convert(::BeatmapSaveDataVersion3::ObstacleData* obstacleSaveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_ObstacleConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::ObstacleData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapObjectData*, false>(this, ___internal_method, obstacleSaveData);
}
inline ::GlobalNamespace::NoteLineLayer BeatmapDataLoaderVersion3::BeatmapDataLoader_ObstacleConverter::GetNoteLineLayer(int32_t lineLayer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_ObstacleConverter*>::get(), "GetNoteLineLayer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteLineLayer, false>(nullptr, ___internal_method, lineLayer);
}
inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_ObstacleConverter*
BeatmapDataLoaderVersion3::BeatmapDataLoader_ObstacleConverter::New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::BeatmapDataLoader_ObstacleConverter*>(bpmTimeProcessor, rotationTimeProcessor));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::BeatmapDataLoader_ObstacleConverter::BeatmapDataLoader_ObstacleConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_SliderConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::BeatmapDataLoader_SliderConverter::*)(
    ::GlobalNamespace::BpmTimeProcessor*, ::GlobalNamespace::RotationTimeProcessor*)>(&::BeatmapDataLoaderVersion3::BeatmapDataLoader_SliderConverter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x271498c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_SliderConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_SliderConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapObjectData* (
    ::BeatmapDataLoaderVersion3::BeatmapDataLoader_SliderConverter::*)(::BeatmapSaveDataVersion3::SliderData*)>(&::BeatmapDataLoaderVersion3::BeatmapDataLoader_SliderConverter::Convert)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2714c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_SliderConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::SliderData*>::get() })));
    return ___internal_method;
  }
};
inline void BeatmapDataLoaderVersion3::BeatmapDataLoader_SliderConverter::_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_SliderConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor, rotationTimeProcessor);
}
inline ::GlobalNamespace::BeatmapObjectData* BeatmapDataLoaderVersion3::BeatmapDataLoader_SliderConverter::Convert(::BeatmapSaveDataVersion3::SliderData* sliderSaveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_SliderConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::SliderData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapObjectData*, false>(this, ___internal_method, sliderSaveData);
}
inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_SliderConverter*
BeatmapDataLoaderVersion3::BeatmapDataLoader_SliderConverter::New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::BeatmapDataLoader_SliderConverter*>(bpmTimeProcessor, rotationTimeProcessor));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::BeatmapDataLoader_SliderConverter::BeatmapDataLoader_SliderConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BurstSliderConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::BeatmapDataLoader_BurstSliderConverter::*)(
    ::GlobalNamespace::BpmTimeProcessor*, ::GlobalNamespace::RotationTimeProcessor*)>(&::BeatmapDataLoaderVersion3::BeatmapDataLoader_BurstSliderConverter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27149b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BurstSliderConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BurstSliderConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapObjectData* (::BeatmapDataLoaderVersion3::BeatmapDataLoader_BurstSliderConverter::*)(::BeatmapSaveDataVersion3::BurstSliderData*)>(
        &::BeatmapDataLoaderVersion3::BeatmapDataLoader_BurstSliderConverter::Convert)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2714e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BurstSliderConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BurstSliderData*>::get() })));
    return ___internal_method;
  }
};
inline void BeatmapDataLoaderVersion3::BeatmapDataLoader_BurstSliderConverter::_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                     ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BurstSliderConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor, rotationTimeProcessor);
}
inline ::GlobalNamespace::BeatmapObjectData* BeatmapDataLoaderVersion3::BeatmapDataLoader_BurstSliderConverter::Convert(::BeatmapSaveDataVersion3::BurstSliderData* sliderSaveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BurstSliderConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BurstSliderData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapObjectData*, false>(this, ___internal_method, sliderSaveData);
}
inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BurstSliderConverter*
BeatmapDataLoaderVersion3::BeatmapDataLoader_BurstSliderConverter::New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::BeatmapDataLoader_BurstSliderConverter*>(bpmTimeProcessor, rotationTimeProcessor));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::BeatmapDataLoader_BurstSliderConverter::BeatmapDataLoader_BurstSliderConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter::*)(
    ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*, ::GlobalNamespace::EnvironmentKeywords*)>(&::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter::_ctor)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x2716960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentKeywords*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter.IsEventValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter::*)(
    ::BeatmapSaveDataCommon::BeatmapEventType)>(&::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter::IsEventValid)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x27187b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter*>::get(), "IsEventValid", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::BeatmapEventType>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>*&
BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter::__cordl_internal_get__eventTypesToFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventTypesToFilter;
}
constexpr ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>* const&
BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter::__cordl_internal_get__eventTypesToFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventTypesToFilter;
}
constexpr void BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter::__cordl_internal_set__eventTypesToFilter(
    ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eventTypesToFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter::_ctor(::BeatmapSaveDataCommon::BasicEventTypesWithKeywords* basicEventTypesWithKeywords,
                                                                                    ::GlobalNamespace::EnvironmentKeywords* environmentKeywords) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentKeywords*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, basicEventTypesWithKeywords, environmentKeywords);
}
inline bool BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter::IsEventValid(::BeatmapSaveDataCommon::BeatmapEventType basicBeatmapEventType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter*>::get(), "IsEventValid", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::BeatmapEventType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, basicBeatmapEventType);
}
inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter*
BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter::New_ctor(::BeatmapSaveDataCommon::BasicEventTypesWithKeywords* basicEventTypesWithKeywords,
                                                                           ::GlobalNamespace::EnvironmentKeywords* environmentKeywords) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter*>(basicEventTypesWithKeywords, environmentKeywords));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::BeatmapDataLoader_SpecialEventsFilter::BeatmapDataLoader_SpecialEventsFilter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_WaypointConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::BeatmapDataLoader_WaypointConverter::*)(
    ::GlobalNamespace::BpmTimeProcessor*, ::GlobalNamespace::RotationTimeProcessor*)>(&::BeatmapDataLoaderVersion3::BeatmapDataLoader_WaypointConverter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27149e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_WaypointConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader_WaypointConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapObjectData* (
    ::BeatmapDataLoaderVersion3::BeatmapDataLoader_WaypointConverter::*)(::BeatmapSaveDataVersion3::WaypointData*)>(&::BeatmapDataLoaderVersion3::BeatmapDataLoader_WaypointConverter::Convert)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2714fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_WaypointConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::WaypointData*>::get() })));
    return ___internal_method;
  }
};
inline void BeatmapDataLoaderVersion3::BeatmapDataLoader_WaypointConverter::_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                  ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_WaypointConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor, rotationTimeProcessor);
}
inline ::GlobalNamespace::BeatmapObjectData* BeatmapDataLoaderVersion3::BeatmapDataLoader_WaypointConverter::Convert(::BeatmapSaveDataVersion3::WaypointData* waypointSaveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader_WaypointConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::WaypointData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapObjectData*, false>(this, ___internal_method, waypointSaveData);
}
inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader_WaypointConverter*
BeatmapDataLoaderVersion3::BeatmapDataLoader_WaypointConverter::New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::BeatmapDataLoader_WaypointConverter*>(bpmTimeProcessor, rotationTimeProcessor));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::BeatmapDataLoader_WaypointConverter::BeatmapDataLoader_WaypointConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::BeatmapDataLoader___c::*)()>(
    &::BeatmapDataLoaderVersion3::BeatmapDataLoader___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27190ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader___c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader___c._GetBeatmapDataBasicInfoFromSaveDataJson_b__5_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapDataLoaderVersion3::BeatmapDataLoader___c::*)(::BeatmapSaveDataVersion3::BurstSliderData*)>(
    &::BeatmapDataLoaderVersion3::BeatmapDataLoader___c::_GetBeatmapDataBasicInfoFromSaveDataJson_b__5_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27190f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader___c*>::get(), "<GetBeatmapDataBasicInfoFromSaveDataJson>b__5_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BurstSliderData*>::get() })));
    return ___internal_method;
  }
};
inline void BeatmapDataLoaderVersion3::BeatmapDataLoader___c::setStaticF___9(::BeatmapDataLoaderVersion3::BeatmapDataLoader___c* value) {
  ::cordl_internals::setStaticField<::BeatmapDataLoaderVersion3::BeatmapDataLoader___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader___c*>::get>(
      std::forward<::BeatmapDataLoaderVersion3::BeatmapDataLoader___c*>(value));
}
inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader___c* BeatmapDataLoaderVersion3::BeatmapDataLoader___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BeatmapDataLoaderVersion3::BeatmapDataLoader___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader___c*>::get>();
}
inline void BeatmapDataLoaderVersion3::BeatmapDataLoader___c::setStaticF___9__5_0(::System::Func_2<::BeatmapSaveDataVersion3::BurstSliderData*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::BeatmapSaveDataVersion3::BurstSliderData*, int32_t>*, "<>9__5_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader___c*>::get>(
      std::forward<::System::Func_2<::BeatmapSaveDataVersion3::BurstSliderData*, int32_t>*>(value));
}
inline ::System::Func_2<::BeatmapSaveDataVersion3::BurstSliderData*, int32_t>* BeatmapDataLoaderVersion3::BeatmapDataLoader___c::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::BeatmapSaveDataVersion3::BurstSliderData*, int32_t>*, "<>9__5_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader___c*>::get>();
}
inline void BeatmapDataLoaderVersion3::BeatmapDataLoader___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t BeatmapDataLoaderVersion3::BeatmapDataLoader___c::_GetBeatmapDataBasicInfoFromSaveDataJson_b__5_0(::BeatmapSaveDataVersion3::BurstSliderData* bs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader___c*>::get(), "<GetBeatmapDataBasicInfoFromSaveDataJson>b__5_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BurstSliderData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bs);
}
inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader___c* BeatmapDataLoaderVersion3::BeatmapDataLoader___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::BeatmapDataLoader___c*>());
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::BeatmapDataLoader___c::BeatmapDataLoader___c() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::*)()>(
    &::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2713938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0._GetBeatmapDataFromSaveDataJsonAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapData* (::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::*)()>(
    &::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::_GetBeatmapDataFromSaveDataJsonAsync_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2719110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0*>::get(),
                                                 "<GetBeatmapDataFromSaveDataJsonAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::__cordl_internal_get_beatmapJson() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapJson;
}
constexpr ::StringW const& BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::__cordl_internal_get_beatmapJson() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapJson;
}
constexpr void BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::__cordl_internal_set_beatmapJson(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapJson)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::__cordl_internal_get_defaultLightshowJson() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultLightshowJson;
}
constexpr ::StringW const& BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::__cordl_internal_get_defaultLightshowJson() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultLightshowJson;
}
constexpr void BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::__cordl_internal_set_defaultLightshowJson(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultLightshowJson)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::__cordl_internal_get_beatmapDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapDifficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::__cordl_internal_get_beatmapDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapDifficulty;
}
constexpr void BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::__cordl_internal_set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapDifficulty = value;
}
constexpr float_t& BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::__cordl_internal_get_startBpm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startBpm;
}
constexpr float_t const& BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::__cordl_internal_get_startBpm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startBpm;
}
constexpr void BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::__cordl_internal_set_startBpm(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startBpm = value;
}
constexpr bool& BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::__cordl_internal_get_loadingForDesignatedEnvironment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadingForDesignatedEnvironment;
}
constexpr bool const& BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::__cordl_internal_get_loadingForDesignatedEnvironment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadingForDesignatedEnvironment;
}
constexpr void BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::__cordl_internal_set_loadingForDesignatedEnvironment(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___loadingForDesignatedEnvironment = value;
}
constexpr ::GlobalNamespace::IEnvironmentInfo*& BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::__cordl_internal_get_environmentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentInfo;
}
constexpr ::GlobalNamespace::IEnvironmentInfo* const& BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::__cordl_internal_get_environmentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentInfo;
}
constexpr void BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::__cordl_internal_set_environmentInfo(::GlobalNamespace::IEnvironmentInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___environmentInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelDataVersion& BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::__cordl_internal_get_beatmapLevelDataVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevelDataVersion;
}
constexpr ::GlobalNamespace::BeatmapLevelDataVersion const& BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::__cordl_internal_get_beatmapLevelDataVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevelDataVersion;
}
constexpr void BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::__cordl_internal_set_beatmapLevelDataVersion(::GlobalNamespace::BeatmapLevelDataVersion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapLevelDataVersion = value;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings*& BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::__cordl_internal_get_playerSpecificSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSpecificSettings;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings* const& BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::__cordl_internal_get_playerSpecificSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSpecificSettings;
}
constexpr void BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::__cordl_internal_set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerSpecificSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IBeatmapLightEventConverter*& BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::__cordl_internal_get_lightEventConverter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightEventConverter;
}
constexpr ::GlobalNamespace::IBeatmapLightEventConverter* const& BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::__cordl_internal_get_lightEventConverter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightEventConverter;
}
constexpr void BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::__cordl_internal_set_lightEventConverter(::GlobalNamespace::IBeatmapLightEventConverter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightEventConverter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapData* BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::_GetBeatmapDataFromSaveDataJsonAsync_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0*>::get(),
                                               "<GetBeatmapDataFromSaveDataJsonAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapData*, false>(this, ___internal_method);
}
inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0* BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass3_0::BeatmapDataLoader___c__DisplayClass3_0() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass4_0::*)()>(
    &::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2713a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass4_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass4_0._GetBeatmapDataBasicInfoFromSaveDataJsonAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataBasicInfo* (::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass4_0::*)()>(
    &::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass4_0::_GetBeatmapDataBasicInfoFromSaveDataJsonAsync_b__0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2719148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass4_0*>::get(),
                                                 "<GetBeatmapDataBasicInfoFromSaveDataJsonAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass4_0::__cordl_internal_get_beatmapJson() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapJson;
}
constexpr ::StringW const& BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass4_0::__cordl_internal_get_beatmapJson() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapJson;
}
constexpr void BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass4_0::__cordl_internal_set_beatmapJson(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapJson)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass4_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDataBasicInfo* BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass4_0::_GetBeatmapDataBasicInfoFromSaveDataJsonAsync_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass4_0*>::get(),
                                               "<GetBeatmapDataBasicInfoFromSaveDataJsonAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataBasicInfo*, false>(this, ___internal_method);
}
inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass4_0* BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::BeatmapDataLoader___c__DisplayClass4_0::BeatmapDataLoader___c__DisplayClass4_0() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader.GetBeatmapDataFromSaveDataJsonAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<
    ::GlobalNamespace::BeatmapData*>* (*)(::StringW, ::StringW, ::GlobalNamespace::BeatmapDifficulty, float_t, bool, ::GlobalNamespace::IEnvironmentInfo*, ::GlobalNamespace::BeatmapLevelDataVersion,
                                          ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::IBeatmapLightEventConverter*)>(
    &::BeatmapDataLoaderVersion3::BeatmapDataLoader::GetBeatmapDataFromSaveDataJsonAsync)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x27137f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), "GetBeatmapDataFromSaveDataJsonAsync", std::span<Il2CppClass const* const, 0>(),
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
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader.GetBeatmapDataBasicInfoFromSaveDataJsonAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>* (*)(::StringW)>(
    &::BeatmapDataLoaderVersion3::BeatmapDataLoader::GetBeatmapDataBasicInfoFromSaveDataJsonAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2713940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), "GetBeatmapDataBasicInfoFromSaveDataJsonAsync",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader.GetBeatmapDataBasicInfoFromSaveDataJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataBasicInfo* (*)(::StringW)>(
    &::BeatmapDataLoaderVersion3::BeatmapDataLoader::GetBeatmapDataBasicInfoFromSaveDataJson)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2713a34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), "GetBeatmapDataBasicInfoFromSaveDataJson",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader.GetBeatmapDataFromSaveDataJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapData* (*)(::StringW, ::StringW, ::GlobalNamespace::BeatmapDifficulty, float_t, bool, ::GlobalNamespace::IEnvironmentInfo*,
                                                    ::GlobalNamespace::BeatmapLevelDataVersion, ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::IBeatmapLightEventConverter*)>(
        &::BeatmapDataLoaderVersion3::BeatmapDataLoader::GetBeatmapDataFromSaveDataJson)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2713c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), "GetBeatmapDataFromSaveDataJson", std::span<Il2CppClass const* const, 0>(),
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
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader.GetBeatmapDataFromSaveData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapData* (*)(::BeatmapSaveDataVersion3::BeatmapSaveData*, ::BeatmapSaveDataVersion4::LightshowSaveData*, ::GlobalNamespace::BeatmapDifficulty, float_t, bool,
                                                    ::GlobalNamespace::EnvironmentKeywords*, ::GlobalNamespace::IEnvironmentLightGroups*, ::GlobalNamespace::PlayerSpecificSettings*,
                                                    ::GlobalNamespace::IBeatmapLightEventConverter*, ::System::Diagnostics::Stopwatch*)>(
        &::BeatmapDataLoaderVersion3::BeatmapDataLoader::GetBeatmapDataFromSaveData)> {
  constexpr static std::size_t size = 0xbc8;
  constexpr static std::size_t addrs = 0x2713d40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), "GetBeatmapDataFromSaveData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 10>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightshowSaveData*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentKeywords*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentLightGroups*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLightEventConverter*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::Stopwatch*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader.ConvertBasicEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::GlobalNamespace::BeatmapData*, ::BeatmapSaveDataVersion3::BeatmapSaveData*, ::GlobalNamespace::BpmTimeProcessor*, ::GlobalNamespace::RotationTimeProcessor*,
                         ::GlobalNamespace::EnvironmentKeywords*)>(&::BeatmapDataLoaderVersion3::BeatmapDataLoader::ConvertBasicEvents)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x2715174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), "ConvertBasicEvents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentKeywords*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader.ConvertEventBoxGroups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::GlobalNamespace::BeatmapData*, ::BeatmapSaveDataVersion3::BeatmapSaveData*, ::GlobalNamespace::BpmTimeProcessor*, ::GlobalNamespace::IEnvironmentLightGroups*,
                         ::GlobalNamespace::IBeatmapLightEventConverter*)>(&::BeatmapDataLoaderVersion3::BeatmapDataLoader::ConvertEventBoxGroups)> {
  constexpr static std::size_t size = 0x11ac;
  constexpr static std::size_t addrs = 0x27157b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), "ConvertEventBoxGroups", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentLightGroups*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLightEventConverter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::BeatmapDataLoader::*)()>(&::BeatmapDataLoaderVersion3::BeatmapDataLoader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2718780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapData*>* BeatmapDataLoaderVersion3::BeatmapDataLoader::GetBeatmapDataFromSaveDataJsonAsync(
    ::StringW beatmapJson, ::StringW defaultLightshowJson, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, float_t startBpm, bool loadingForDesignatedEnvironment,
    ::GlobalNamespace::IEnvironmentInfo* environmentInfo, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
    ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), "GetBeatmapDataFromSaveDataJsonAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLightEventConverter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapData*>*, false>(nullptr, ___internal_method, beatmapJson, defaultLightshowJson,
                                                                                                                          beatmapDifficulty, startBpm, loadingForDesignatedEnvironment, environmentInfo,
                                                                                                                          beatmapLevelDataVersion, playerSpecificSettings, lightEventConverter);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>* BeatmapDataLoaderVersion3::BeatmapDataLoader::GetBeatmapDataBasicInfoFromSaveDataJsonAsync(::StringW beatmapJson) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), "GetBeatmapDataBasicInfoFromSaveDataJsonAsync",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>*, false>(nullptr, ___internal_method, beatmapJson);
}
inline ::GlobalNamespace::BeatmapDataBasicInfo* BeatmapDataLoaderVersion3::BeatmapDataLoader::GetBeatmapDataBasicInfoFromSaveDataJson(::StringW beatmapJson) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), "GetBeatmapDataBasicInfoFromSaveDataJson",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataBasicInfo*, false>(nullptr, ___internal_method, beatmapJson);
}
inline ::GlobalNamespace::BeatmapData* BeatmapDataLoaderVersion3::BeatmapDataLoader::GetBeatmapDataFromSaveDataJson(
    ::StringW beatmapJson, ::StringW defaultLightshowJson, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, float_t startBpm, bool loadingForDesignatedEnvironment,
    ::GlobalNamespace::IEnvironmentInfo* environmentInfo, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
    ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), "GetBeatmapDataFromSaveDataJson", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLightEventConverter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapData*, false>(nullptr, ___internal_method, beatmapJson, defaultLightshowJson, beatmapDifficulty, startBpm,
                                                                                     loadingForDesignatedEnvironment, environmentInfo, beatmapLevelDataVersion, playerSpecificSettings,
                                                                                     lightEventConverter);
}
inline ::GlobalNamespace::BeatmapData* BeatmapDataLoaderVersion3::BeatmapDataLoader::GetBeatmapDataFromSaveData(
    ::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData, ::BeatmapSaveDataVersion4::LightshowSaveData* defaultLightshowSaveData, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
    float_t startBpm, bool loadingForDesignatedEnvironment, ::GlobalNamespace::EnvironmentKeywords* environmentKeywords, ::GlobalNamespace::IEnvironmentLightGroups* environmentLightGroups,
    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter, ::System::Diagnostics::Stopwatch* stopwatch) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), "GetBeatmapDataFromSaveData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 10>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightshowSaveData*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentKeywords*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentLightGroups*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLightEventConverter*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::Stopwatch*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapData*, false>(nullptr, ___internal_method, beatmapSaveData, defaultLightshowSaveData, beatmapDifficulty, startBpm,
                                                                                     loadingForDesignatedEnvironment, environmentKeywords, environmentLightGroups, playerSpecificSettings,
                                                                                     lightEventConverter, stopwatch);
}
inline void BeatmapDataLoaderVersion3::BeatmapDataLoader::ConvertBasicEvents(::GlobalNamespace::BeatmapData* beatmapData, ::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData,
                                                                             ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor,
                                                                             ::GlobalNamespace::EnvironmentKeywords* environmentKeywords) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), "ConvertBasicEvents", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentKeywords*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, beatmapData, beatmapSaveData, bpmTimeProcessor, rotationTimeProcessor, environmentKeywords);
}
inline void BeatmapDataLoaderVersion3::BeatmapDataLoader::ConvertEventBoxGroups(::GlobalNamespace::BeatmapData* beatmapData, ::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData,
                                                                                ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                ::GlobalNamespace::IEnvironmentLightGroups* environmentLightGroups,
                                                                                ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), "ConvertEventBoxGroups", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentLightGroups*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLightEventConverter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, beatmapData, beatmapSaveData, bpmTimeProcessor, environmentLightGroups, lightEventConverter);
}
inline void BeatmapDataLoaderVersion3::BeatmapDataLoader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader* BeatmapDataLoaderVersion3::BeatmapDataLoader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>());
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::BeatmapDataLoader::BeatmapDataLoader() {}
