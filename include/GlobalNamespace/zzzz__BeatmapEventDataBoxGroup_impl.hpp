#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapEventDataBoxGroup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroup_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroup_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConverter_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLightEventConverter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData.get_next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData* (::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::*)()>(
    &::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::get_next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3712e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>(), { "get_next", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData.get_previous
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData* (::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::*)()>(
    &::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::get_previous)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3712e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>(), { "get_previous", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::*)(
    ::GlobalNamespace::BeatmapEventDataBoxGroup*, ::GlobalNamespace::BeatmapEventDataBox*, int32_t, int32_t, int32_t, float_t)>(&::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x37127f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::BeatmapEventDataBoxGroup*>(), ::i2c::type_of<::GlobalNamespace::BeatmapEventDataBox*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData.ResetConnections
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::*)()>(
    &::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::ResetConnections)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3712e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>(), { "ResetConnections", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData.ConnectWithPrevious
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::*)(::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*)>(
    &::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::ConnectWithPrevious)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3712e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>(),
                                                             { "ConnectWithPrevious", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData.ConnectWithNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::*)(::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*)>(
    &::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::ConnectWithNext)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3712e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>(),
                                                                                           { "ConnectWithNext", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>() } })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::__cordl_internal_get_startBeat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startBeat;
}
constexpr float_t const& GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::__cordl_internal_get_startBeat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startBeat;
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::__cordl_internal_set_startBeat(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startBeat = value;
}
constexpr int32_t& GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::__cordl_internal_get_elementId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementId;
}
constexpr int32_t const& GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::__cordl_internal_get_elementId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementId;
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::__cordl_internal_set_elementId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementId = value;
}
constexpr int32_t& GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::__cordl_internal_get_durationOrderIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___durationOrderIndex;
}
constexpr int32_t const& GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::__cordl_internal_get_durationOrderIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___durationOrderIndex;
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::__cordl_internal_set_durationOrderIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___durationOrderIndex = value;
}
constexpr int32_t& GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::__cordl_internal_get_distributionOrderIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distributionOrderIndex;
}
constexpr int32_t const& GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::__cordl_internal_get_distributionOrderIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distributionOrderIndex;
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::__cordl_internal_set_distributionOrderIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___distributionOrderIndex = value;
}
constexpr ::System::Type*& GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::__cordl_internal_get_eventBoxType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventBoxType;
}
constexpr ::System::Type* const& GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::__cordl_internal_get_eventBoxType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventBoxType;
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::__cordl_internal_set_eventBoxType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eventBoxType = value;
}
constexpr int32_t& GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::__cordl_internal_get_eventBoxSubtypeIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventBoxSubtypeIdentifier;
}
constexpr int32_t const& GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::__cordl_internal_get_eventBoxSubtypeIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventBoxSubtypeIdentifier;
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::__cordl_internal_set_eventBoxSubtypeIdentifier(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eventBoxSubtypeIdentifier = value;
}
constexpr ::GlobalNamespace::BeatmapEventDataBox*& GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::__cordl_internal_get_eventBox() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventBox;
}
constexpr ::GlobalNamespace::BeatmapEventDataBox* const& GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::__cordl_internal_get_eventBox() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventBox;
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::__cordl_internal_set_eventBox(::GlobalNamespace::BeatmapEventDataBox* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eventBox = value;
}
constexpr ::GlobalNamespace::BeatmapEventDataBoxGroup*& GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::__cordl_internal_get_boxGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boxGroup;
}
constexpr ::GlobalNamespace::BeatmapEventDataBoxGroup* const& GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::__cordl_internal_get_boxGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boxGroup;
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::__cordl_internal_set_boxGroup(::GlobalNamespace::BeatmapEventDataBoxGroup* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___boxGroup = value;
}
constexpr ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*& GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::__cordl_internal_get__next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next;
}
constexpr ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData* const& GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::__cordl_internal_get__next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next;
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::__cordl_internal_set__next(::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____next = value;
}
constexpr ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*& GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::__cordl_internal_get__previous() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previous;
}
constexpr ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData* const& GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::__cordl_internal_get__previous() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previous;
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::__cordl_internal_set__previous(::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____previous = value;
}
inline ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData* GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::get_next() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>(), { "get_next", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData* GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::get_previous() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>(), { "get_previous", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::_ctor(::GlobalNamespace::BeatmapEventDataBoxGroup* boxGroup, ::GlobalNamespace::BeatmapEventDataBox* eventBox, int32_t elementId,
                                                                         int32_t durationOrderIndex, int32_t distributionOrderIndex, float_t startBeat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::BeatmapEventDataBoxGroup*>(), ::i2c::type_of<::GlobalNamespace::BeatmapEventDataBox*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, boxGroup, eventBox, elementId, durationOrderIndex, distributionOrderIndex, startBeat);
}
inline void GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::ResetConnections() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>(), { "ResetConnections", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::ConnectWithPrevious(::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData* prevElementData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>(),
                                                           { "ConnectWithPrevious", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevElementData);
}
inline void GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::ConnectWithNext(::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData* nextElementData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>(),
                                                                                         { "ConnectWithNext", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nextElementData);
}
inline ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData* GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::New_ctor(::GlobalNamespace::BeatmapEventDataBoxGroup* boxGroup,
                                                                                                                                ::GlobalNamespace::BeatmapEventDataBox* eventBox, int32_t elementId,
                                                                                                                                int32_t durationOrderIndex, int32_t distributionOrderIndex,
                                                                                                                                float_t startBeat) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>(boxGroup, eventBox, elementId, durationOrderIndex, distributionOrderIndex, startBeat));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData::BeatmapEventDataBoxGroup_ElementData() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroup.get_elementDataDict
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_3<int32_t, ::System::Type*, int32_t>, ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>* (
        ::GlobalNamespace::BeatmapEventDataBoxGroup::*)()>(&::GlobalNamespace::BeatmapEventDataBoxGroup::get_elementDataDict)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x371209c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroup*>(), { "get_elementDataDict", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroup.get_beatmapEventDataBoxList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>* (
    ::GlobalNamespace::BeatmapEventDataBoxGroup::*)()>(&::GlobalNamespace::BeatmapEventDataBoxGroup::get_beatmapEventDataBoxList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37120a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroup*>(), { "get_beatmapEventDataBoxList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroup::*)(
    float_t, ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>*)>(&::GlobalNamespace::BeatmapEventDataBoxGroup::_ctor)> {
  constexpr static std::size_t size = 0x6f0;
  constexpr static std::size_t addrs = 0x37120ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroup*>(),
                            { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroup.GetCopyWithNewBeat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapEventDataBoxGroup* (::GlobalNamespace::BeatmapEventDataBoxGroup::*)(float_t)>(
    &::GlobalNamespace::BeatmapEventDataBoxGroup::GetCopyWithNewBeat)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3712868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroup*>(), { "GetCopyWithNewBeat", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroup.RemoveBeatmapEventDataFromBeatmapData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroup::*)(::GlobalNamespace::BeatmapData*)>(
    &::GlobalNamespace::BeatmapEventDataBoxGroup::RemoveBeatmapEventDataFromBeatmapData)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x37128d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroup*>(),
                                                                                           { "RemoveBeatmapEventDataFromBeatmapData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroup.SyncWithBeatmapData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroup::*)(int32_t, ::GlobalNamespace::BeatmapData*, ::GlobalNamespace::IBeatToTimeConverter*,
                                                                                                             ::GlobalNamespace::IBeatmapLightEventConverter*)>(
    &::GlobalNamespace::BeatmapEventDataBoxGroup::SyncWithBeatmapData)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x3712a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroup*>(),
                                                             { "SyncWithBeatmapData",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BeatmapData*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::IBeatToTimeConverter*>(), ::i2c::type_of<::GlobalNamespace::IBeatmapLightEventConverter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroup.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapEventDataBoxGroup::*)(::GlobalNamespace::BeatmapEventDataBoxGroup*)>(
    &::GlobalNamespace::BeatmapEventDataBoxGroup::CompareTo)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3712dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroup*>(), { "CompareTo", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapEventDataBoxGroup*>() } })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::BeatmapEventDataBoxGroup::__cordl_internal_get__beat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beat;
}
constexpr float_t const& GlobalNamespace::BeatmapEventDataBoxGroup::__cordl_internal_get__beat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beat;
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroup::__cordl_internal_set__beat(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beat = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<int32_t, ::System::Type*, int32_t>, ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>*&
GlobalNamespace::BeatmapEventDataBoxGroup::__cordl_internal_get__elementDataDict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementDataDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<int32_t, ::System::Type*, int32_t>, ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>* const&
GlobalNamespace::BeatmapEventDataBoxGroup::__cordl_internal_get__elementDataDict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementDataDict;
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroup::__cordl_internal_set__elementDataDict(
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<int32_t, ::System::Type*, int32_t>, ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elementDataDict = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>*& GlobalNamespace::BeatmapEventDataBoxGroup::__cordl_internal_get__unpackedBeatmapEventData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unpackedBeatmapEventData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* const& GlobalNamespace::BeatmapEventDataBoxGroup::__cordl_internal_get__unpackedBeatmapEventData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unpackedBeatmapEventData;
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroup::__cordl_internal_set__unpackedBeatmapEventData(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____unpackedBeatmapEventData = value;
}
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>*& GlobalNamespace::BeatmapEventDataBoxGroup::__cordl_internal_get__beatmapEventDataBoxList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventDataBoxList;
}
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>* const&
GlobalNamespace::BeatmapEventDataBoxGroup::__cordl_internal_get__beatmapEventDataBoxList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventDataBoxList;
}
constexpr void
GlobalNamespace::BeatmapEventDataBoxGroup::__cordl_internal_set__beatmapEventDataBoxList(::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapEventDataBoxList = value;
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_3<int32_t, ::System::Type*, int32_t>, ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>*
GlobalNamespace::BeatmapEventDataBoxGroup::get_elementDataDict() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroup*>(), { "get_elementDataDict", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_3<int32_t, ::System::Type*, int32_t>, ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>*>(this,
                                                                                                                                                                                   ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>* GlobalNamespace::BeatmapEventDataBoxGroup::get_beatmapEventDataBoxList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroup*>(), { "get_beatmapEventDataBoxList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>*>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapEventDataBoxGroup::_ctor(float_t beat, ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>* beatmapEventDataBoxList) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroup*>(),
                          { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beat, beatmapEventDataBoxList);
}
inline ::GlobalNamespace::BeatmapEventDataBoxGroup* GlobalNamespace::BeatmapEventDataBoxGroup::GetCopyWithNewBeat(float_t newBeat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroup*>(), { "GetCopyWithNewBeat", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventDataBoxGroup*>(this, ___internal_method, newBeat);
}
inline void GlobalNamespace::BeatmapEventDataBoxGroup::RemoveBeatmapEventDataFromBeatmapData(::GlobalNamespace::BeatmapData* beatmapData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroup*>(),
                                                                                         { "RemoveBeatmapEventDataFromBeatmapData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapData);
}
inline void GlobalNamespace::BeatmapEventDataBoxGroup::SyncWithBeatmapData(int32_t groupId, ::GlobalNamespace::BeatmapData* beatmapData, ::GlobalNamespace::IBeatToTimeConverter* beatToTimeConverter,
                                                                           ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroup*>(),
                                                           { "SyncWithBeatmapData",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BeatmapData*>(), ::i2c::type_of<::GlobalNamespace::IBeatToTimeConverter*>(),
                                                               ::i2c::type_of<::GlobalNamespace::IBeatmapLightEventConverter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, beatmapData, beatToTimeConverter, lightEventConverter);
}
inline int32_t GlobalNamespace::BeatmapEventDataBoxGroup::CompareTo(::GlobalNamespace::BeatmapEventDataBoxGroup* b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBoxGroup*>(), { "CompareTo", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapEventDataBoxGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, b);
}
inline ::GlobalNamespace::BeatmapEventDataBoxGroup*
GlobalNamespace::BeatmapEventDataBoxGroup::New_ctor(float_t beat, ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>* beatmapEventDataBoxList) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapEventDataBoxGroup*>(beat, beatmapEventDataBoxList));
}
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>"
constexpr GlobalNamespace::BeatmapEventDataBoxGroup::operator ::System::IComparable_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*() noexcept {
  return static_cast<::System::IComparable_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>"
constexpr ::System::IComparable_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*
GlobalNamespace::BeatmapEventDataBoxGroup::i___System__IComparable_1___GlobalNamespace__BeatmapEventDataBoxGroup__() noexcept {
  return static_cast<::System::IComparable_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEventDataBoxGroup::BeatmapEventDataBoxGroup() {}
