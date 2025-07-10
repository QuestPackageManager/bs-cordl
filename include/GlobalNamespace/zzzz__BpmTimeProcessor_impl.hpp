#pragma once
// IWYU pragma private; include "GlobalNamespace/BpmTimeProcessor.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConverter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BpmTimeProcessor_def.hpp"
#include "BeatmapLevelSaveDataVersion4/zzzz__AudioSaveData_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__EventData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BpmChangeEventData_def.hpp"
#include "GlobalNamespace/zzzz__BpmTimeProcessor_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BpmTimeProcessor_BpmChangeData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BpmTimeProcessor_BpmChangeData::*)(float_t, float_t, float_t)>(
    &::GlobalNamespace::BpmTimeProcessor_BpmChangeData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26ba198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BpmTimeProcessor_BpmChangeData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BpmTimeProcessor_BpmChangeData::_ctor(float_t bpmChangeStartTime, float_t bpmChangeStartBpmTime, float_t bpm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BpmTimeProcessor_BpmChangeData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmChangeStartTime, bpmChangeStartBpmTime, bpm);
}
// Ctor Parameters [CppParam { name: "bpmChangeStartTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bpmChangeStartBpmTime", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "bpm", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BpmTimeProcessor_BpmChangeData::BpmTimeProcessor_BpmChangeData(float_t bpmChangeStartTime, float_t bpmChangeStartBpmTime, float_t bpm) noexcept {
  this->bpmChangeStartTime = bpmChangeStartTime;
  this->bpmChangeStartBpmTime = bpmChangeStartBpmTime;
  this->bpm = bpm;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BpmTimeProcessor_BpmChangeData::BpmTimeProcessor_BpmChangeData() {}
//  Writing Method size for method: ::GlobalNamespace::BpmTimeProcessor___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BpmTimeProcessor___c::*)()>(&::GlobalNamespace::BpmTimeProcessor___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ba200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BpmTimeProcessor___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BpmTimeProcessor___c.__ctor_b__3_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BpmTimeProcessor___c::*)(::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*)>(
    &::GlobalNamespace::BpmTimeProcessor___c::__ctor_b__3_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x26ba208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BpmTimeProcessor___c*>::get(), "<.ctor>b__3_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BpmTimeProcessor___c::setStaticF___9(::GlobalNamespace::BpmTimeProcessor___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BpmTimeProcessor___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BpmTimeProcessor___c*>::get>(
      std::forward<::GlobalNamespace::BpmTimeProcessor___c*>(value));
}
inline ::GlobalNamespace::BpmTimeProcessor___c* GlobalNamespace::BpmTimeProcessor___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BpmTimeProcessor___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BpmTimeProcessor___c*>::get>();
}
inline void GlobalNamespace::BpmTimeProcessor___c::setStaticF___9__3_0(::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*, bool>*, "<>9__3_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BpmTimeProcessor___c*>::get>(
      std::forward<::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*, bool>*>(value));
}
inline ::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*, bool>* GlobalNamespace::BpmTimeProcessor___c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*, bool>*, "<>9__3_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BpmTimeProcessor___c*>::get>();
}
inline void GlobalNamespace::BpmTimeProcessor___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BpmTimeProcessor___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::BpmTimeProcessor___c::__ctor_b__3_0(::BeatmapSaveDataVersion2_6_0AndEarlier::EventData* e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BpmTimeProcessor___c*>::get(), "<.ctor>b__3_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, e);
}
inline ::GlobalNamespace::BpmTimeProcessor___c* GlobalNamespace::BpmTimeProcessor___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BpmTimeProcessor___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BpmTimeProcessor___c::BpmTimeProcessor___c() {}
//  Writing Method size for method: ::GlobalNamespace::BpmTimeProcessor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BpmTimeProcessor::*)(
    float_t, ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>*)>(&::GlobalNamespace::BpmTimeProcessor::_ctor)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x26b95cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BpmTimeProcessor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BpmTimeProcessor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BpmTimeProcessor::*)(
    float_t, ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::BpmChangeEventData*>*)>(&::GlobalNamespace::BpmTimeProcessor::_ctor)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x26b99a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BpmTimeProcessor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::BpmChangeEventData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BpmTimeProcessor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BpmTimeProcessor::*)(::BeatmapLevelSaveDataVersion4::AudioSaveData*)>(
    &::GlobalNamespace::BpmTimeProcessor::_ctor)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x26b9edc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BpmTimeProcessor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapLevelSaveDataVersion4::AudioSaveData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BpmTimeProcessor.ConvertBeatToTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BpmTimeProcessor::*)(float_t)>(&::GlobalNamespace::BpmTimeProcessor::ConvertBeatToTime)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x26ba088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BpmTimeProcessor*>::get(), "ConvertBeatToTime", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BpmTimeProcessor.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BpmTimeProcessor::*)()>(&::GlobalNamespace::BpmTimeProcessor::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ba190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BpmTimeProcessor*>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BpmTimeProcessor.CalculateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::GlobalNamespace::BpmTimeProcessor_BpmChangeData, float_t)>(
    &::GlobalNamespace::BpmTimeProcessor::CalculateTime)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26b998c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BpmTimeProcessor*>::get(), "CalculateTime", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor_BpmChangeData>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BpmTimeProcessor_BpmChangeData>*& GlobalNamespace::BpmTimeProcessor::__cordl_internal_get__bpmChangeDataList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bpmChangeDataList;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BpmTimeProcessor_BpmChangeData>* const& GlobalNamespace::BpmTimeProcessor::__cordl_internal_get__bpmChangeDataList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bpmChangeDataList;
}
constexpr void GlobalNamespace::BpmTimeProcessor::__cordl_internal_set__bpmChangeDataList(::System::Collections::Generic::List_1<::GlobalNamespace::BpmTimeProcessor_BpmChangeData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bpmChangeDataList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::BpmTimeProcessor::__cordl_internal_get_currentBpmChangesDataIdx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentBpmChangesDataIdx;
}
constexpr int32_t const& GlobalNamespace::BpmTimeProcessor::__cordl_internal_get_currentBpmChangesDataIdx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentBpmChangesDataIdx;
}
constexpr void GlobalNamespace::BpmTimeProcessor::__cordl_internal_set_currentBpmChangesDataIdx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentBpmChangesDataIdx = value;
}
inline void GlobalNamespace::BpmTimeProcessor::_ctor(float_t startBpm, ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>* events) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BpmTimeProcessor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startBpm, events);
}
inline void GlobalNamespace::BpmTimeProcessor::_ctor(float_t startBpm, ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::BpmChangeEventData*>* bpmEventsSaveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BpmTimeProcessor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::BpmChangeEventData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startBpm, bpmEventsSaveData);
}
inline void GlobalNamespace::BpmTimeProcessor::_ctor(::BeatmapLevelSaveDataVersion4::AudioSaveData* audioSaveData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BpmTimeProcessor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapLevelSaveDataVersion4::AudioSaveData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioSaveData);
}
inline float_t GlobalNamespace::BpmTimeProcessor::ConvertBeatToTime(float_t beat) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BpmTimeProcessor*>::get(), "ConvertBeatToTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, beat);
}
inline void GlobalNamespace::BpmTimeProcessor::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BpmTimeProcessor*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::BpmTimeProcessor::CalculateTime(::GlobalNamespace::BpmTimeProcessor_BpmChangeData prevBpmChangeData, float_t beat) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BpmTimeProcessor*>::get(), "CalculateTime", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor_BpmChangeData>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, prevBpmChangeData, beat);
}
inline ::GlobalNamespace::BpmTimeProcessor* GlobalNamespace::BpmTimeProcessor::New_ctor(float_t startBpm,
                                                                                        ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>* events) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BpmTimeProcessor*>(startBpm, events));
}
inline ::GlobalNamespace::BpmTimeProcessor*
GlobalNamespace::BpmTimeProcessor::New_ctor(float_t startBpm, ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::BpmChangeEventData*>* bpmEventsSaveData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BpmTimeProcessor*>(startBpm, bpmEventsSaveData));
}
inline ::GlobalNamespace::BpmTimeProcessor* GlobalNamespace::BpmTimeProcessor::New_ctor(::BeatmapLevelSaveDataVersion4::AudioSaveData* audioSaveData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BpmTimeProcessor*>(audioSaveData));
}
/// @brief Convert operator to "::GlobalNamespace::IBeatToTimeConverter"
constexpr GlobalNamespace::BpmTimeProcessor::operator ::GlobalNamespace::IBeatToTimeConverter*() noexcept {
  return static_cast<::GlobalNamespace::IBeatToTimeConverter*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatToTimeConverter"
constexpr ::GlobalNamespace::IBeatToTimeConverter* GlobalNamespace::BpmTimeProcessor::i___GlobalNamespace__IBeatToTimeConverter() noexcept {
  return static_cast<::GlobalNamespace::IBeatToTimeConverter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BpmTimeProcessor::BpmTimeProcessor() {}
