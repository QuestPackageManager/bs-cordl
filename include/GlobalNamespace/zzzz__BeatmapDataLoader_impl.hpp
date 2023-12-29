#pragma once
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveData_impl.hpp"
#include "GlobalNamespace/zzzz__BPMChangeBeatmapEventData_impl.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataLoader_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_impl.hpp"
#include "GlobalNamespace/zzzz__ColorBoostBeatmapEventData_impl.hpp"
#include "GlobalNamespace/zzzz__DataItemConvertor_3_impl.hpp"
#include "GlobalNamespace/zzzz__DataItemConvertor_4_impl.hpp"
#include "GlobalNamespace/zzzz__LightColorBeatmapEventDataBox_impl.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_impl.hpp"
#include "GlobalNamespace/zzzz__LightRotationBeatmapEventDataBox_impl.hpp"
#include "GlobalNamespace/zzzz__LightTranslationBeatmapEventDataBox_impl.hpp"
#include "GlobalNamespace/zzzz__NoteData_impl.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_impl.hpp"
#include "GlobalNamespace/zzzz__SliderData_impl.hpp"
#include "GlobalNamespace/zzzz__SpawnRotationBeatmapEventData_impl.hpp"
#include "GlobalNamespace/zzzz__WaypointData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentLightGroups_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventTransitionType_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataBasicInfo_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__DefaultEnvironmentEvents_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__LightAxis_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationDirection_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentKeywords_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveData_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__BPMChangeBeatmapEventData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConvertor_def.hpp"
#include "GlobalNamespace/zzzz__ColorBoostBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__DataConvertor_2_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroup_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_def.hpp"
#include "GlobalNamespace/zzzz__IndexFilter_def.hpp"
#include "GlobalNamespace/zzzz__LightColorBaseData_def.hpp"
#include "GlobalNamespace/zzzz__LightColorBeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationBaseData_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationBeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__LightTranslationBaseData_def.hpp"
#include "GlobalNamespace/zzzz__LightTranslationBeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__SpawnRotationBeatmapEventData_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__WaypointData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData::*)(float_t, float_t, float_t)>(
    &::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21e0420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData::_ctor(float_t bpmChangeStartTime, float_t bpmChangeStartBpmTime, float_t bpm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmChangeStartTime, bpmChangeStartBpmTime, bpm);
}
// Ctor Parameters [CppParam { name: "bpmChangeStartTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bpmChangeStartBpmTime", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "bpm", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData::__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData(float_t bpmChangeStartTime, float_t bpmChangeStartBpmTime,
                                                                                                                                        float_t bpm) noexcept {
  this->bpmChangeStartTime = bpmChangeStartTime;
  this->bpmChangeStartBpmTime = bpmChangeStartBpmTime;
  this->bpm = bpm;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData::__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor::*)(
    float_t, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>*)>(&::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor::_ctor)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x21dfef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor.ConvertBeatToTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor::*)(float_t)>(
    &::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor::ConvertBeatToTime)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x21e042c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*>::get(), "ConvertBeatToTime",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor::*)()>(
    &::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e0258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*>::get(),
                                                                               "Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IBeatToTimeConvertor"
constexpr GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor::operator ::GlobalNamespace::IBeatToTimeConvertor*() noexcept {
  return static_cast<::GlobalNamespace::IBeatToTimeConvertor*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData>*&
GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor::__get__bpmChangeDataList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bpmChangeDataList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData>*> const&
GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor::__get__bpmChangeDataList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bpmChangeDataList;
}
constexpr void GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor::__set__bpmChangeDataList(
    ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor__BpmChangeData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bpmChangeDataList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor::__get_currentBpmChangesDataIdx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentBpmChangesDataIdx;
}
constexpr int32_t const& GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor::__get_currentBpmChangesDataIdx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentBpmChangesDataIdx;
}
constexpr void GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor::__set_currentBpmChangesDataIdx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentBpmChangesDataIdx = value;
}
inline ::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*
GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor::New_ctor(float_t startBpm,
                                                                 ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>* bpmEventsSaveData) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*>(startBpm, bpmEventsSaveData));
}
inline void
GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor::_ctor(float_t startBpm,
                                                              ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>* bpmEventsSaveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startBpm, bpmEventsSaveData);
}
inline float_t GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor::ConvertBeatToTime(float_t beat) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*>::get(), "ConvertBeatToTime",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, beat);
}
inline void GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*>::get(),
                                                                             "Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor::__BeatmapDataLoader__BpmTimeProcessor() {}
template <typename TBase, typename TIn, typename TOut>
constexpr ::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*& GlobalNamespace::__BeatmapDataLoader__BeatmapDataItemConvertor_3<TBase, TIn, TOut>::__get__bpmTimeProcessor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bpmTimeProcessor;
}
template <typename TBase, typename TIn, typename TOut>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*> const&
GlobalNamespace::__BeatmapDataLoader__BeatmapDataItemConvertor_3<TBase, TIn, TOut>::__get__bpmTimeProcessor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bpmTimeProcessor;
}
template <typename TBase, typename TIn, typename TOut>
constexpr void GlobalNamespace::__BeatmapDataLoader__BeatmapDataItemConvertor_3<TBase, TIn, TOut>::__set__bpmTimeProcessor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bpmTimeProcessor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TBase, typename TIn, typename TOut>
inline ::GlobalNamespace::__BeatmapDataLoader__BeatmapDataItemConvertor_3<TBase, TIn, TOut>*
GlobalNamespace::__BeatmapDataLoader__BeatmapDataItemConvertor_3<TBase, TIn, TOut>::New_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapDataLoader__BeatmapDataItemConvertor_3<TBase, TIn, TOut>*>(bpmTimeProcessor));
}
template <typename TBase, typename TIn, typename TOut>
inline void GlobalNamespace::__BeatmapDataLoader__BeatmapDataItemConvertor_3<TBase, TIn, TOut>::_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BeatmapDataItemConvertor_3<TBase, TIn, TOut>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor);
}
template <typename TBase, typename TIn, typename TOut> inline float_t GlobalNamespace::__BeatmapDataLoader__BeatmapDataItemConvertor_3<TBase, TIn, TOut>::BeatToTime(float_t beat) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BeatmapDataItemConvertor_3<TBase, TIn, TOut>*>::get(),
                                               "BeatToTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, beat);
}
// Ctor Parameters []
template <typename TBase, typename TIn, typename TOut>
constexpr ::GlobalNamespace::__BeatmapDataLoader__BeatmapDataItemConvertor_3<TBase, TIn, TOut>::__BeatmapDataLoader__BeatmapDataItemConvertor_3() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor::*)(
    ::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*, ::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter*)>(&::GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x21e02b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BasicBeatmapEventData* (::GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor::*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*)>(
        &::GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor::Convert)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x21e0534;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor.ConvertFromBeatmapSaveDataBeatmapEventType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BasicBeatmapEventType (*)(
    ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType)>(&::GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor::ConvertFromBeatmapSaveDataBeatmapEventType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21e0608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor*>::get(), "ConvertFromBeatmapSaveDataBeatmapEventType",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter*& GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor::__get__specialEventsFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specialEventsFilter;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter*> const&
GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor::__get__specialEventsFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specialEventsFilter;
}
constexpr void GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor::__set__specialEventsFilter(::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____specialEventsFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor*
GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor::New_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor,
                                                                    ::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter* specialEventsFilter) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor*>(bpmTimeProcessor, specialEventsFilter));
}
inline void GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor::_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor,
                                                                             ::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter* specialEventsFilter) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor, specialEventsFilter);
}
inline ::GlobalNamespace::BasicBeatmapEventData* GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor::Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData* basicEventSaveData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor*>::get(), "Convert", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BasicBeatmapEventData*, false>(this, ___internal_method, basicEventSaveData);
}
inline ::GlobalNamespace::BasicBeatmapEventType
GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor::ConvertFromBeatmapSaveDataBeatmapEventType(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType beatmapEventType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor*>::get(), "ConvertFromBeatmapSaveDataBeatmapEventType",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BasicBeatmapEventType, false>(nullptr, ___internal_method, beatmapEventType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataLoader__BasicEventConvertor::__BeatmapDataLoader__BasicEventConvertor() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__BombNoteConvertor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataLoader__BombNoteConvertor::*)(
    ::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*)>(&::GlobalNamespace::__BeatmapDataLoader__BombNoteConvertor::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21e0200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BombNoteConvertor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__BombNoteConvertor.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteData* (
    ::GlobalNamespace::__BeatmapDataLoader__BombNoteConvertor::*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*)>(&::GlobalNamespace::__BeatmapDataLoader__BombNoteConvertor::Convert)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x21e060c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BombNoteConvertor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BombNoteConvertor*>::get(), 6));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__BeatmapDataLoader__BombNoteConvertor*
GlobalNamespace::__BeatmapDataLoader__BombNoteConvertor::New_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapDataLoader__BombNoteConvertor*>(bpmTimeProcessor));
}
inline void GlobalNamespace::__BeatmapDataLoader__BombNoteConvertor::_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BombNoteConvertor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor);
}
inline ::GlobalNamespace::NoteData* GlobalNamespace::__BeatmapDataLoader__BombNoteConvertor::Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData* bombNoteSaveData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BombNoteConvertor*>::get(), "Convert", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData*, false>(this, ___internal_method, bombNoteSaveData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataLoader__BombNoteConvertor::__BeatmapDataLoader__BombNoteConvertor() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__BpmEventConvertor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataLoader__BpmEventConvertor::*)(
    ::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*)>(&::GlobalNamespace::__BeatmapDataLoader__BpmEventConvertor::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21e0260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BpmEventConvertor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__BpmEventConvertor.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BPMChangeBeatmapEventData* (::GlobalNamespace::__BeatmapDataLoader__BpmEventConvertor::*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*)>(
        &::GlobalNamespace::__BeatmapDataLoader__BpmEventConvertor::Convert)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21e0680;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BpmEventConvertor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BpmEventConvertor*>::get(), 6));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__BeatmapDataLoader__BpmEventConvertor*
GlobalNamespace::__BeatmapDataLoader__BpmEventConvertor::New_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapDataLoader__BpmEventConvertor*>(bpmTimeProcessor));
}
inline void GlobalNamespace::__BeatmapDataLoader__BpmEventConvertor::_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BpmEventConvertor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor);
}
inline ::GlobalNamespace::BPMChangeBeatmapEventData*
GlobalNamespace::__BeatmapDataLoader__BpmEventConvertor::Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData* bpmChangeEventSaveData) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BpmEventConvertor*>::get(), "Convert", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BPMChangeBeatmapEventData*, false>(this, ___internal_method, bpmChangeEventSaveData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataLoader__BpmEventConvertor::__BeatmapDataLoader__BpmEventConvertor() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__ColorBoostEventConvertor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataLoader__ColorBoostEventConvertor::*)(
    ::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*)>(&::GlobalNamespace::__BeatmapDataLoader__ColorBoostEventConvertor::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21e031c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__ColorBoostEventConvertor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__ColorBoostEventConvertor.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorBoostBeatmapEventData* (
    ::GlobalNamespace::__BeatmapDataLoader__ColorBoostEventConvertor::*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*)>(
    &::GlobalNamespace::__BeatmapDataLoader__ColorBoostEventConvertor::Convert)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x21e0724;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__ColorBoostEventConvertor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__ColorBoostEventConvertor*>::get(), 6));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__BeatmapDataLoader__ColorBoostEventConvertor*
GlobalNamespace::__BeatmapDataLoader__ColorBoostEventConvertor::New_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapDataLoader__ColorBoostEventConvertor*>(bpmTimeProcessor));
}
inline void GlobalNamespace::__BeatmapDataLoader__ColorBoostEventConvertor::_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__ColorBoostEventConvertor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor);
}
inline ::GlobalNamespace::ColorBoostBeatmapEventData*
GlobalNamespace::__BeatmapDataLoader__ColorBoostEventConvertor::Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData* colorBoostEventSaveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__ColorBoostEventConvertor*>::get(), "Convert", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorBoostBeatmapEventData*, false>(this, ___internal_method, colorBoostEventSaveData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataLoader__ColorBoostEventConvertor::__BeatmapDataLoader__ColorBoostEventConvertor() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__ColorNoteConvertor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataLoader__ColorNoteConvertor::*)(
    ::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*)>(&::GlobalNamespace::__BeatmapDataLoader__ColorNoteConvertor::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21e01a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__ColorNoteConvertor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__ColorNoteConvertor.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::NoteData* (::GlobalNamespace::__BeatmapDataLoader__ColorNoteConvertor::*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*)>(
        &::GlobalNamespace::__BeatmapDataLoader__ColorNoteConvertor::Convert)> {
  constexpr static std::size_t size = 0x10a8;
  constexpr static std::size_t addrs = 0x21e07cc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__ColorNoteConvertor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__ColorNoteConvertor*>::get(), 6));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__BeatmapDataLoader__ColorNoteConvertor*
GlobalNamespace::__BeatmapDataLoader__ColorNoteConvertor::New_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapDataLoader__ColorNoteConvertor*>(bpmTimeProcessor));
}
inline void GlobalNamespace::__BeatmapDataLoader__ColorNoteConvertor::_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__ColorNoteConvertor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor);
}
inline ::GlobalNamespace::NoteData* GlobalNamespace::__BeatmapDataLoader__ColorNoteConvertor::Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData* colorNoteSaveData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__ColorNoteConvertor*>::get(), "Convert", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData*, false>(this, ___internal_method, colorNoteSaveData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataLoader__ColorNoteConvertor::__BeatmapDataLoader__ColorNoteConvertor() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType (*)(
    ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType)>(&::GlobalNamespace::__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor::Convert)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x21e9d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor*>::get(), "Convert",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType
GlobalNamespace::__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor::Convert(::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType distributionParamType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor*>::get(), "Convert", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType, false>(nullptr, ___internal_method, distributionParamType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor::__BeatmapDataLoader__BeatmapEventDataBoxDistributionParamTypeConvertor() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__EventBoxGroupConvertor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataLoader__EventBoxGroupConvertor::*)(::GlobalNamespace::EnvironmentLightGroups*)>(
    &::GlobalNamespace::__BeatmapDataLoader__EventBoxGroupConvertor::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x21e9df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__EventBoxGroupConvertor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentLightGroups*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__EventBoxGroupConvertor.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapEventDataBoxGroup* (::GlobalNamespace::__BeatmapDataLoader__EventBoxGroupConvertor::*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup*)>(
        &::GlobalNamespace::__BeatmapDataLoader__EventBoxGroupConvertor::Convert)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x21ea020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__EventBoxGroupConvertor*>::get(), "Convert", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::DataConvertor_2<::GlobalNamespace::BeatmapEventDataBox*, ::GlobalNamespace::LightGroupSO*>*&
GlobalNamespace::__BeatmapDataLoader__EventBoxGroupConvertor::__get__dataConvertor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataConvertor;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DataConvertor_2<::GlobalNamespace::BeatmapEventDataBox*, ::GlobalNamespace::LightGroupSO*>*> const&
GlobalNamespace::__BeatmapDataLoader__EventBoxGroupConvertor::__get__dataConvertor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataConvertor;
}
constexpr void GlobalNamespace::__BeatmapDataLoader__EventBoxGroupConvertor::__set__dataConvertor(
    ::GlobalNamespace::DataConvertor_2<::GlobalNamespace::BeatmapEventDataBox*, ::GlobalNamespace::LightGroupSO*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dataConvertor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EnvironmentLightGroups*& GlobalNamespace::__BeatmapDataLoader__EventBoxGroupConvertor::__get__lightGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroups;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentLightGroups*> const& GlobalNamespace::__BeatmapDataLoader__EventBoxGroupConvertor::__get__lightGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroups;
}
constexpr void GlobalNamespace::__BeatmapDataLoader__EventBoxGroupConvertor::__set__lightGroups(::GlobalNamespace::EnvironmentLightGroups* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightGroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__BeatmapDataLoader__EventBoxGroupConvertor* GlobalNamespace::__BeatmapDataLoader__EventBoxGroupConvertor::New_ctor(::GlobalNamespace::EnvironmentLightGroups* lightGroups) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapDataLoader__EventBoxGroupConvertor*>(lightGroups));
}
inline void GlobalNamespace::__BeatmapDataLoader__EventBoxGroupConvertor::_ctor(::GlobalNamespace::EnvironmentLightGroups* lightGroups) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__EventBoxGroupConvertor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentLightGroups*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightGroups);
}
inline ::GlobalNamespace::BeatmapEventDataBoxGroup*
GlobalNamespace::__BeatmapDataLoader__EventBoxGroupConvertor::Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup* eventBoxGroupSaveData) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__EventBoxGroupConvertor*>::get(), "Convert", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventDataBoxGroup*, false>(this, ___internal_method, eventBoxGroupSaveData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataLoader__EventBoxGroupConvertor::__BeatmapDataLoader__EventBoxGroupConvertor() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__IndexFilterConvertor.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IndexFilter* (*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*, int32_t)>(
    &::GlobalNamespace::__BeatmapDataLoader__IndexFilterConvertor::Convert)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x21eacd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__IndexFilterConvertor*>::get(), "Convert", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__IndexFilterConvertor.IsIndexFilterValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*, int32_t)>(
    &::GlobalNamespace::__BeatmapDataLoader__IndexFilterConvertor::IsIndexFilterValid)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x21eb218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__IndexFilterConvertor*>::get(), "IsIndexFilterValid", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::IndexFilter* GlobalNamespace::__BeatmapDataLoader__IndexFilterConvertor::Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* indexFilter, int32_t groupSize) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__IndexFilterConvertor*>::get(), "Convert", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IndexFilter*, false>(nullptr, ___internal_method, indexFilter, groupSize);
}
inline bool GlobalNamespace::__BeatmapDataLoader__IndexFilterConvertor::IsIndexFilterValid(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* indexFilter, int32_t groupSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__IndexFilterConvertor*>::get(), "IsIndexFilterValid", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, indexFilter, groupSize);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataLoader__IndexFilterConvertor::__BeatmapDataLoader__IndexFilterConvertor() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__LightColorEventBoxConvertor.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightColorBeatmapEventDataBox* (
    ::GlobalNamespace::__BeatmapDataLoader__LightColorEventBoxConvertor::*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*, ::GlobalNamespace::LightGroupSO*)>(
    &::GlobalNamespace::__BeatmapDataLoader__LightColorEventBoxConvertor::Convert)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x21eb2a0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__LightColorEventBoxConvertor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__LightColorEventBoxConvertor*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__LightColorEventBoxConvertor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataLoader__LightColorEventBoxConvertor::*)()>(
    &::GlobalNamespace::__BeatmapDataLoader__LightColorEventBoxConvertor::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x21e9f48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__LightColorEventBoxConvertor*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::LightColorBeatmapEventDataBox*
GlobalNamespace::__BeatmapDataLoader__LightColorEventBoxConvertor::Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox* saveData,
                                                                           ::GlobalNamespace::LightGroupSO* lightGroupData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__LightColorEventBoxConvertor*>::get(), "Convert", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroupSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightColorBeatmapEventDataBox*, false>(this, ___internal_method, saveData, lightGroupData);
}
inline ::GlobalNamespace::__BeatmapDataLoader__LightColorEventBoxConvertor* GlobalNamespace::__BeatmapDataLoader__LightColorEventBoxConvertor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapDataLoader__LightColorEventBoxConvertor*>());
}
inline void GlobalNamespace::__BeatmapDataLoader__LightColorEventBoxConvertor::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__LightColorEventBoxConvertor*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataLoader__LightColorEventBoxConvertor::__BeatmapDataLoader__LightColorEventBoxConvertor() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__LightColoBaseDataConvertor.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightColorBaseData* (*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*)>(
    &::GlobalNamespace::__BeatmapDataLoader__LightColoBaseDataConvertor::Convert)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21eb568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__LightColoBaseDataConvertor*>::get(), "Convert", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::LightColorBaseData* GlobalNamespace::__BeatmapDataLoader__LightColoBaseDataConvertor::Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData* saveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__LightColoBaseDataConvertor*>::get(), "Convert", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightColorBaseData*, false>(nullptr, ___internal_method, saveData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataLoader__LightColoBaseDataConvertor::__BeatmapDataLoader__LightColoBaseDataConvertor() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__LightRotationEventBoxConvertor.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightRotationBeatmapEventDataBox* (
    ::GlobalNamespace::__BeatmapDataLoader__LightRotationEventBoxConvertor::*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*, ::GlobalNamespace::LightGroupSO*)>(
    &::GlobalNamespace::__BeatmapDataLoader__LightRotationEventBoxConvertor::Convert)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x21eb860;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__LightRotationEventBoxConvertor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__LightRotationEventBoxConvertor*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__LightRotationEventBoxConvertor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataLoader__LightRotationEventBoxConvertor::*)()>(
    &::GlobalNamespace::__BeatmapDataLoader__LightRotationEventBoxConvertor::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x21e9f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__LightRotationEventBoxConvertor*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::LightRotationBeatmapEventDataBox*
GlobalNamespace::__BeatmapDataLoader__LightRotationEventBoxConvertor::Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox* saveData,
                                                                              ::GlobalNamespace::LightGroupSO* lightGroupData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__LightRotationEventBoxConvertor*>::get(), "Convert", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroupSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightRotationBeatmapEventDataBox*, false>(this, ___internal_method, saveData, lightGroupData);
}
inline ::GlobalNamespace::__BeatmapDataLoader__LightRotationEventBoxConvertor* GlobalNamespace::__BeatmapDataLoader__LightRotationEventBoxConvertor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapDataLoader__LightRotationEventBoxConvertor*>());
}
inline void GlobalNamespace::__BeatmapDataLoader__LightRotationEventBoxConvertor::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__LightRotationEventBoxConvertor*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataLoader__LightRotationEventBoxConvertor::__BeatmapDataLoader__LightRotationEventBoxConvertor() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__LightRotationBaseDataConvertor.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightRotationBaseData* (*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*)>(
    &::GlobalNamespace::__BeatmapDataLoader__LightRotationBaseDataConvertor::Convert)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x21ebd5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__LightRotationBaseDataConvertor*>::get(), "Convert", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::LightRotationBaseData*
GlobalNamespace::__BeatmapDataLoader__LightRotationBaseDataConvertor::Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData* saveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__LightRotationBaseDataConvertor*>::get(), "Convert", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightRotationBaseData*, false>(nullptr, ___internal_method, saveData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataLoader__LightRotationBaseDataConvertor::__BeatmapDataLoader__LightRotationBaseDataConvertor() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__LightTranslationEventBoxConvertor.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightTranslationBeatmapEventDataBox* (
    ::GlobalNamespace::__BeatmapDataLoader__LightTranslationEventBoxConvertor::*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*, ::GlobalNamespace::LightGroupSO*)>(
    &::GlobalNamespace::__BeatmapDataLoader__LightTranslationEventBoxConvertor::Convert)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x21ec0b8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__LightTranslationEventBoxConvertor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__LightTranslationEventBoxConvertor*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__LightTranslationEventBoxConvertor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataLoader__LightTranslationEventBoxConvertor::*)()>(
    &::GlobalNamespace::__BeatmapDataLoader__LightTranslationEventBoxConvertor::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x21e9fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__LightTranslationEventBoxConvertor*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::LightTranslationBeatmapEventDataBox*
GlobalNamespace::__BeatmapDataLoader__LightTranslationEventBoxConvertor::Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox* saveData,
                                                                                 ::GlobalNamespace::LightGroupSO* lightGroupData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__LightTranslationEventBoxConvertor*>::get(), "Convert", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroupSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightTranslationBeatmapEventDataBox*, false>(this, ___internal_method, saveData, lightGroupData);
}
inline ::GlobalNamespace::__BeatmapDataLoader__LightTranslationEventBoxConvertor* GlobalNamespace::__BeatmapDataLoader__LightTranslationEventBoxConvertor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapDataLoader__LightTranslationEventBoxConvertor*>());
}
inline void GlobalNamespace::__BeatmapDataLoader__LightTranslationEventBoxConvertor::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__LightTranslationEventBoxConvertor*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataLoader__LightTranslationEventBoxConvertor::__BeatmapDataLoader__LightTranslationEventBoxConvertor() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__LightTranslationBaseDataConvertor.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::LightTranslationBaseData* (*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*)>(
        &::GlobalNamespace::__BeatmapDataLoader__LightTranslationBaseDataConvertor::Convert)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x21ec5b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__LightTranslationBaseDataConvertor*>::get(), "Convert", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::LightTranslationBaseData*
GlobalNamespace::__BeatmapDataLoader__LightTranslationBaseDataConvertor::Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData* saveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__LightTranslationBaseDataConvertor*>::get(), "Convert", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightTranslationBaseData*, false>(nullptr, ___internal_method, saveData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataLoader__LightTranslationBaseDataConvertor::__BeatmapDataLoader__LightTranslationBaseDataConvertor() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__ObstacleConvertor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataLoader__ObstacleConvertor::*)(
    ::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*)>(&::GlobalNamespace::__BeatmapDataLoader__ObstacleConvertor::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21ec8d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__ObstacleConvertor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__ObstacleConvertor.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ObstacleData* (
    ::GlobalNamespace::__BeatmapDataLoader__ObstacleConvertor::*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*)>(&::GlobalNamespace::__BeatmapDataLoader__ObstacleConvertor::Convert)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x21ec92c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__ObstacleConvertor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__ObstacleConvertor*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__ObstacleConvertor.GetNoteLineLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteLineLayer (*)(int32_t)>(
    &::GlobalNamespace::__BeatmapDataLoader__ObstacleConvertor::GetNoteLineLayer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21eca18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__ObstacleConvertor*>::get(), "GetNoteLineLayer",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__BeatmapDataLoader__ObstacleConvertor*
GlobalNamespace::__BeatmapDataLoader__ObstacleConvertor::New_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapDataLoader__ObstacleConvertor*>(bpmTimeProcessor));
}
inline void GlobalNamespace::__BeatmapDataLoader__ObstacleConvertor::_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__ObstacleConvertor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor);
}
inline ::GlobalNamespace::ObstacleData* GlobalNamespace::__BeatmapDataLoader__ObstacleConvertor::Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData* obstacleSaveData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__ObstacleConvertor*>::get(), "Convert", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ObstacleData*, false>(this, ___internal_method, obstacleSaveData);
}
inline ::GlobalNamespace::NoteLineLayer GlobalNamespace::__BeatmapDataLoader__ObstacleConvertor::GetNoteLineLayer(int32_t lineLayer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__ObstacleConvertor*>::get(), "GetNoteLineLayer",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteLineLayer, false>(nullptr, ___internal_method, lineLayer);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataLoader__ObstacleConvertor::__BeatmapDataLoader__ObstacleConvertor() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__RotationEventConvertor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataLoader__RotationEventConvertor::*)(
    ::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*)>(&::GlobalNamespace::__BeatmapDataLoader__RotationEventConvertor::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21eca2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__RotationEventConvertor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__RotationEventConvertor.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SpawnRotationBeatmapEventData* (
    ::GlobalNamespace::__BeatmapDataLoader__RotationEventConvertor::*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*)>(
    &::GlobalNamespace::__BeatmapDataLoader__RotationEventConvertor::Convert)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x21eca84;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__RotationEventConvertor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__RotationEventConvertor*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__RotationEventConvertor.SpawnRotationEventType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType (*)(
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime)>(&::GlobalNamespace::__BeatmapDataLoader__RotationEventConvertor::SpawnRotationEventType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21ecb38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__RotationEventConvertor*>::get(), "SpawnRotationEventType", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__BeatmapDataLoader__RotationEventConvertor*
GlobalNamespace::__BeatmapDataLoader__RotationEventConvertor::New_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapDataLoader__RotationEventConvertor*>(bpmTimeProcessor));
}
inline void GlobalNamespace::__BeatmapDataLoader__RotationEventConvertor::_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__RotationEventConvertor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor);
}
inline ::GlobalNamespace::SpawnRotationBeatmapEventData*
GlobalNamespace::__BeatmapDataLoader__RotationEventConvertor::Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData* rotationEventSaveData) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__RotationEventConvertor*>::get(), "Convert", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SpawnRotationBeatmapEventData*, false>(this, ___internal_method, rotationEventSaveData);
}
inline ::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType
GlobalNamespace::__BeatmapDataLoader__RotationEventConvertor::SpawnRotationEventType(::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime executionTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__RotationEventConvertor*>::get(), "SpawnRotationEventType", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType, false>(nullptr, ___internal_method, executionTime);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataLoader__RotationEventConvertor::__BeatmapDataLoader__RotationEventConvertor() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__SliderConvertor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataLoader__SliderConvertor::*)(
    ::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*)>(&::GlobalNamespace::__BeatmapDataLoader__SliderConvertor::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21ecb48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__SliderConvertor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__SliderConvertor.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SliderData* (
    ::GlobalNamespace::__BeatmapDataLoader__SliderConvertor::*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*)>(&::GlobalNamespace::__BeatmapDataLoader__SliderConvertor::Convert)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x21ecba0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__SliderConvertor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__SliderConvertor*>::get(), 6));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__BeatmapDataLoader__SliderConvertor*
GlobalNamespace::__BeatmapDataLoader__SliderConvertor::New_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapDataLoader__SliderConvertor*>(bpmTimeProcessor));
}
inline void GlobalNamespace::__BeatmapDataLoader__SliderConvertor::_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__SliderConvertor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor);
}
inline ::GlobalNamespace::SliderData* GlobalNamespace::__BeatmapDataLoader__SliderConvertor::Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData* sliderSaveData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__SliderConvertor*>::get(), "Convert", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderData*, false>(this, ___internal_method, sliderSaveData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataLoader__SliderConvertor::__BeatmapDataLoader__SliderConvertor() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__BurstSliderConvertor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataLoader__BurstSliderConvertor::*)(
    ::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*)>(&::GlobalNamespace::__BeatmapDataLoader__BurstSliderConvertor::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21ecce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BurstSliderConvertor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__BurstSliderConvertor.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::SliderData* (::GlobalNamespace::__BeatmapDataLoader__BurstSliderConvertor::*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*)>(
        &::GlobalNamespace::__BeatmapDataLoader__BurstSliderConvertor::Convert)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x21ecd3c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BurstSliderConvertor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BurstSliderConvertor*>::get(), 6));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__BeatmapDataLoader__BurstSliderConvertor*
GlobalNamespace::__BeatmapDataLoader__BurstSliderConvertor::New_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapDataLoader__BurstSliderConvertor*>(bpmTimeProcessor));
}
inline void GlobalNamespace::__BeatmapDataLoader__BurstSliderConvertor::_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BurstSliderConvertor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor);
}
inline ::GlobalNamespace::SliderData* GlobalNamespace::__BeatmapDataLoader__BurstSliderConvertor::Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData* sliderSaveData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__BurstSliderConvertor*>::get(), "Convert", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderData*, false>(this, ___internal_method, sliderSaveData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataLoader__BurstSliderConvertor::__BeatmapDataLoader__BurstSliderConvertor() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__WaypointConvertor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataLoader__WaypointConvertor::*)(
    ::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*)>(&::GlobalNamespace::__BeatmapDataLoader__WaypointConvertor::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21ece6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__WaypointConvertor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__WaypointConvertor.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::WaypointData* (
    ::GlobalNamespace::__BeatmapDataLoader__WaypointConvertor::*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*)>(&::GlobalNamespace::__BeatmapDataLoader__WaypointConvertor::Convert)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x21ecec4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__WaypointConvertor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__WaypointConvertor*>::get(), 6));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__BeatmapDataLoader__WaypointConvertor*
GlobalNamespace::__BeatmapDataLoader__WaypointConvertor::New_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapDataLoader__WaypointConvertor*>(bpmTimeProcessor));
}
inline void GlobalNamespace::__BeatmapDataLoader__WaypointConvertor::_ctor(::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__WaypointConvertor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapDataLoader__BpmTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor);
}
inline ::GlobalNamespace::WaypointData* GlobalNamespace::__BeatmapDataLoader__WaypointConvertor::Convert(::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData* waypointSaveData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__WaypointConvertor*>::get(), "Convert", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::WaypointData*, false>(this, ___internal_method, waypointSaveData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataLoader__WaypointConvertor::__BeatmapDataLoader__WaypointConvertor() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter::*)(
    ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*, ::GlobalNamespace::EnvironmentKeywords*)>(&::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter::_ctor)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x21ecf8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentKeywords*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter.IsEventValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter::*)(
    ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType)>(&::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter::IsEventValid)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x21ed268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter*>::get(), "IsEventValid", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*&
GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter::__get__eventTypesToFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventTypesToFilter;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*> const&
GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter::__get__eventTypesToFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventTypesToFilter;
}
constexpr void GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter::__set__eventTypesToFilter(
    ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eventTypesToFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter*
GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter::New_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords* basicEventTypesWithKeywords,
                                                                    ::GlobalNamespace::EnvironmentKeywords* environmentKeywords) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter*>(basicEventTypesWithKeywords, environmentKeywords));
}
inline void GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter::_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords* basicEventTypesWithKeywords,
                                                                             ::GlobalNamespace::EnvironmentKeywords* environmentKeywords) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentKeywords*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, basicEventTypesWithKeywords, environmentKeywords);
}
inline bool GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter::IsEventValid(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType basicBeatmapEventType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter*>::get(), "IsEventValid", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, basicBeatmapEventType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataLoader__SpecialEventsFilter::__BeatmapDataLoader__SpecialEventsFilter() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader.GetBeatmapDataFromBeatmapSaveData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapData* (*)(::BeatmapSaveDataVersion3::BeatmapSaveData*, ::GlobalNamespace::BeatmapDifficulty, float_t, bool, ::GlobalNamespace::EnvironmentKeywords*,
                                                    ::GlobalNamespace::EnvironmentLightGroups*, ::GlobalNamespace::DefaultEnvironmentEvents*, ::GlobalNamespace::PlayerSpecificSettings*)>(
        &::GlobalNamespace::BeatmapDataLoader::GetBeatmapDataFromBeatmapSaveData)> {
  constexpr static std::size_t size = 0x11f8;
  constexpr static std::size_t addrs = 0x21decfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "GetBeatmapDataFromBeatmapSaveData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentKeywords*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentLightGroups*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DefaultEnvironmentEvents*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader.GetBeatmapDataBasicInfoFromSaveData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataBasicInfo* (*)(::BeatmapSaveDataVersion3::BeatmapSaveData*)>(
    &::GlobalNamespace::BeatmapDataLoader::GetBeatmapDataBasicInfoFromSaveData)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x21ddab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "GetBeatmapDataBasicInfoFromSaveData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader.GetBeatmapDataFromSaveData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapData* (*)(::BeatmapSaveDataVersion3::BeatmapSaveData*, ::GlobalNamespace::BeatmapDifficulty, float_t, bool, ::GlobalNamespace::EnvironmentInfoSO*,
                                                    ::GlobalNamespace::PlayerSpecificSettings*)>(&::GlobalNamespace::BeatmapDataLoader::GetBeatmapDataFromSaveData)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x21de158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "GetBeatmapDataFromSaveData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader.ConvertColorType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorType (*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType)>(
    &::GlobalNamespace::BeatmapDataLoader::ConvertColorType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21e0374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "ConvertColorType", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader.ConvertColorType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentColorType (*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType)>(
    &::GlobalNamespace::BeatmapDataLoader::ConvertColorType)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21e0384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "ConvertColorType", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader.ConvertBeatmapEventTransitionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapEventTransitionType (*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType)>(
    &::GlobalNamespace::BeatmapDataLoader::ConvertBeatmapEventTransitionType)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21e0398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "ConvertBeatmapEventTransitionType", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader.ConvertAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightAxis (*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis)>(
    &::GlobalNamespace::BeatmapDataLoader::ConvertAxis)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21e03ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "ConvertAxis", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader.ConvertEaseType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EaseType (*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType)>(
    &::GlobalNamespace::BeatmapDataLoader::ConvertEaseType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x21e03c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "ConvertEaseType", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader.ConvertNoteLineLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteLineLayer (*)(int32_t)>(&::GlobalNamespace::BeatmapDataLoader::ConvertNoteLineLayer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21e03e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "ConvertNoteLineLayer",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader.ConvertSliderType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__SliderData__Type (*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType)>(
    &::GlobalNamespace::BeatmapDataLoader::ConvertSliderType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21e03f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "ConvertSliderType", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader.ConvertRotationOrientation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightRotationDirection (*)(
    ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection)>(&::GlobalNamespace::BeatmapDataLoader::ConvertRotationOrientation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21e0404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "ConvertRotationOrientation", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapDataLoader::*)()>(&::GlobalNamespace::BeatmapDataLoader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e0418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::BeatmapData* GlobalNamespace::BeatmapDataLoader::GetBeatmapDataFromBeatmapSaveData(
    ::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, float_t startBpm, bool loadingForDesignatedEnvironment,
    ::GlobalNamespace::EnvironmentKeywords* environmentKeywords, ::GlobalNamespace::EnvironmentLightGroups* environmentLightGroups,
    ::GlobalNamespace::DefaultEnvironmentEvents* defaultEnvironmentEvents, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "GetBeatmapDataFromBeatmapSaveData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentKeywords*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentLightGroups*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DefaultEnvironmentEvents*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapData*, false>(nullptr, ___internal_method, beatmapSaveData, beatmapDifficulty, startBpm, loadingForDesignatedEnvironment,
                                                                                     environmentKeywords, environmentLightGroups, defaultEnvironmentEvents, playerSpecificSettings);
}
inline ::GlobalNamespace::BeatmapDataBasicInfo* GlobalNamespace::BeatmapDataLoader::GetBeatmapDataBasicInfoFromSaveData(::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "GetBeatmapDataBasicInfoFromSaveData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataBasicInfo*, false>(nullptr, ___internal_method, beatmapSaveData);
}
inline ::GlobalNamespace::BeatmapData* GlobalNamespace::BeatmapDataLoader::GetBeatmapDataFromSaveData(::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData,
                                                                                                      ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, float_t startBpm,
                                                                                                      bool loadingForDesignatedEnvironment, ::GlobalNamespace::EnvironmentInfoSO* environmentInfo,
                                                                                                      ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "GetBeatmapDataFromSaveData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapData*, false>(nullptr, ___internal_method, beatmapSaveData, beatmapDifficulty, startBpm, loadingForDesignatedEnvironment,
                                                                                     environmentInfo, playerSpecificSettings);
}
inline ::GlobalNamespace::ColorType GlobalNamespace::BeatmapDataLoader::ConvertColorType(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType noteType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "ConvertColorType", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorType, false>(nullptr, ___internal_method, noteType);
}
inline ::GlobalNamespace::EnvironmentColorType GlobalNamespace::BeatmapDataLoader::ConvertColorType(::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType environmentColorType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "ConvertColorType", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentColorType, false>(nullptr, ___internal_method, environmentColorType);
}
inline ::GlobalNamespace::BeatmapEventTransitionType
GlobalNamespace::BeatmapDataLoader::ConvertBeatmapEventTransitionType(::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType transitionType) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "ConvertBeatmapEventTransitionType", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventTransitionType, false>(nullptr, ___internal_method, transitionType);
}
inline ::GlobalNamespace::LightAxis GlobalNamespace::BeatmapDataLoader::ConvertAxis(::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis axis) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "ConvertAxis", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightAxis, false>(nullptr, ___internal_method, axis);
}
inline ::GlobalNamespace::EaseType GlobalNamespace::BeatmapDataLoader::ConvertEaseType(::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType easeType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "ConvertEaseType", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EaseType, false>(nullptr, ___internal_method, easeType);
}
inline ::GlobalNamespace::NoteLineLayer GlobalNamespace::BeatmapDataLoader::ConvertNoteLineLayer(int32_t layer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "ConvertNoteLineLayer",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteLineLayer, false>(nullptr, ___internal_method, layer);
}
inline ::GlobalNamespace::__SliderData__Type GlobalNamespace::BeatmapDataLoader::ConvertSliderType(::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType sliderType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "ConvertSliderType", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SliderData__Type, false>(nullptr, ___internal_method, sliderType);
}
inline ::GlobalNamespace::LightRotationDirection
GlobalNamespace::BeatmapDataLoader::ConvertRotationOrientation(::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection rotationDirection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "ConvertRotationOrientation", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightRotationDirection, false>(nullptr, ___internal_method, rotationDirection);
}
inline ::GlobalNamespace::BeatmapDataLoader* GlobalNamespace::BeatmapDataLoader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapDataLoader*>());
}
inline void GlobalNamespace::BeatmapDataLoader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataLoader::BeatmapDataLoader() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
