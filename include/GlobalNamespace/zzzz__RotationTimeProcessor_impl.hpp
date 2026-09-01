#pragma once
// IWYU pragma private; include "GlobalNamespace\RotationTimeProcessor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RotationTimeProcessor_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__EventData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__RotationEventData_def.hpp"
#include "GlobalNamespace/zzzz__RotationTimeProcessor_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RotationTimeProcessor_RotationChangeData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotationTimeProcessor_RotationChangeData::*)(float_t, int32_t, bool)>(
    &::GlobalNamespace::RotationTimeProcessor_RotationChangeData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3716144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RotationTimeProcessor_RotationChangeData>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RotationTimeProcessor_RotationChangeData::_ctor(float_t beat, int32_t rotation, bool isEarly) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RotationTimeProcessor_RotationChangeData>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, beat, rotation, isEarly);
}
// Ctor Parameters [CppParam { name: "beat", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "isEarly", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::RotationTimeProcessor_RotationChangeData::RotationTimeProcessor_RotationChangeData(float_t beat, int32_t rotation, bool isEarly) noexcept {
  this->beat = beat;
  this->rotation = rotation;
  this->isEarly = isEarly;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RotationTimeProcessor_RotationChangeData::RotationTimeProcessor_RotationChangeData() {}
//  Writing Method size for method: ::GlobalNamespace::RotationTimeProcessor___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotationTimeProcessor___c::*)()>(&::GlobalNamespace::RotationTimeProcessor___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x37167a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RotationTimeProcessor___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotationTimeProcessor___c.__ctor_b__3_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RotationTimeProcessor___c::*)(::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*)>(
    &::GlobalNamespace::RotationTimeProcessor___c::__ctor_b__3_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x37167a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RotationTimeProcessor___c*>(),
                                                                                           { "<.ctor>b__3_0", {}, { ::i2c::type_of<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RotationTimeProcessor___c::setStaticF___9(::GlobalNamespace::RotationTimeProcessor___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::RotationTimeProcessor___c*, "<>9", ::GlobalNamespace::RotationTimeProcessor___c*>(
      std::forward<::GlobalNamespace::RotationTimeProcessor___c*>(value));
}
inline ::GlobalNamespace::RotationTimeProcessor___c* GlobalNamespace::RotationTimeProcessor___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::RotationTimeProcessor___c*, "<>9", ::GlobalNamespace::RotationTimeProcessor___c*>();
}
inline void GlobalNamespace::RotationTimeProcessor___c::setStaticF___9__3_0(::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*, bool>*, "<>9__3_0", ::GlobalNamespace::RotationTimeProcessor___c*>(
      std::forward<::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*, bool>*>(value));
}
inline ::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*, bool>* GlobalNamespace::RotationTimeProcessor___c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*, bool>*, "<>9__3_0", ::GlobalNamespace::RotationTimeProcessor___c*>();
}
inline void GlobalNamespace::RotationTimeProcessor___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RotationTimeProcessor___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::RotationTimeProcessor___c::__ctor_b__3_0(::BeatmapSaveDataVersion2_6_0AndEarlier::EventData* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RotationTimeProcessor___c*>(),
                                                                                         { "<.ctor>b__3_0", {}, { ::i2c::type_of<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e);
}
inline ::GlobalNamespace::RotationTimeProcessor___c* GlobalNamespace::RotationTimeProcessor___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RotationTimeProcessor___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RotationTimeProcessor___c::RotationTimeProcessor___c() {}
//  Writing Method size for method: ::GlobalNamespace::RotationTimeProcessor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotationTimeProcessor::*)(
    ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>*)>(&::GlobalNamespace::RotationTimeProcessor::_ctor)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x3715cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RotationTimeProcessor*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotationTimeProcessor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotationTimeProcessor::*)(
    ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::RotationEventData*>*)>(&::GlobalNamespace::RotationTimeProcessor::_ctor)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x3716154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RotationTimeProcessor*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::RotationEventData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotationTimeProcessor.RotationApplies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::RotationTimeProcessor_RotationChangeData, float_t)>(&::GlobalNamespace::RotationTimeProcessor::RotationApplies)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3716690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RotationTimeProcessor*>(),
                                                             { "RotationApplies", {}, { ::i2c::type_of<::GlobalNamespace::RotationTimeProcessor_RotationChangeData>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotationTimeProcessor.ConvertBeatToRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RotationTimeProcessor::*)(float_t)>(&::GlobalNamespace::RotationTimeProcessor::ConvertBeatToRotation)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x3715a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RotationTimeProcessor*>(), { "ConvertBeatToRotation", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotationTimeProcessor.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotationTimeProcessor::*)()>(&::GlobalNamespace::RotationTimeProcessor::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37166ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RotationTimeProcessor*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotationTimeProcessor.SpawnRotationForEventValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::GlobalNamespace::RotationTimeProcessor::SpawnRotationForEventValue)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3716090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RotationTimeProcessor*>(), { "SpawnRotationForEventValue", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RotationTimeProcessor_RotationChangeData>*& GlobalNamespace::RotationTimeProcessor::__cordl_internal_get__rotationChangeDataList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationChangeDataList;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RotationTimeProcessor_RotationChangeData>* const&
GlobalNamespace::RotationTimeProcessor::__cordl_internal_get__rotationChangeDataList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationChangeDataList;
}
constexpr void
GlobalNamespace::RotationTimeProcessor::__cordl_internal_set__rotationChangeDataList(::System::Collections::Generic::List_1<::GlobalNamespace::RotationTimeProcessor_RotationChangeData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotationChangeDataList = value;
}
constexpr int32_t& GlobalNamespace::RotationTimeProcessor::__cordl_internal_get_currentBpmChangesDataIdx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentBpmChangesDataIdx;
}
constexpr int32_t const& GlobalNamespace::RotationTimeProcessor::__cordl_internal_get_currentBpmChangesDataIdx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentBpmChangesDataIdx;
}
constexpr void GlobalNamespace::RotationTimeProcessor::__cordl_internal_set_currentBpmChangesDataIdx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentBpmChangesDataIdx = value;
}
inline void GlobalNamespace::RotationTimeProcessor::setStaticF__spawnRotations(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "_spawnRotations", ::GlobalNamespace::RotationTimeProcessor*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> GlobalNamespace::RotationTimeProcessor::getStaticF__spawnRotations() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "_spawnRotations", ::GlobalNamespace::RotationTimeProcessor*>();
}
inline void GlobalNamespace::RotationTimeProcessor::_ctor(::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>* events) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RotationTimeProcessor*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, events);
}
inline void GlobalNamespace::RotationTimeProcessor::_ctor(::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::RotationEventData*>* rotationEventsSaveData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RotationTimeProcessor*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::RotationEventData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rotationEventsSaveData);
}
inline bool GlobalNamespace::RotationTimeProcessor::RotationApplies(::GlobalNamespace::RotationTimeProcessor_RotationChangeData change, float_t beat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RotationTimeProcessor*>(),
                                                           { "RotationApplies", {}, { ::i2c::type_of<::GlobalNamespace::RotationTimeProcessor_RotationChangeData>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, change, beat);
}
inline int32_t GlobalNamespace::RotationTimeProcessor::ConvertBeatToRotation(float_t beat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RotationTimeProcessor*>(), { "ConvertBeatToRotation", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, beat);
}
inline void GlobalNamespace::RotationTimeProcessor::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RotationTimeProcessor*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::RotationTimeProcessor::SpawnRotationForEventValue(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RotationTimeProcessor*>(), { "SpawnRotationForEventValue", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, index);
}
inline ::GlobalNamespace::RotationTimeProcessor*
GlobalNamespace::RotationTimeProcessor::New_ctor(::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>* events) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RotationTimeProcessor*>(events));
}
inline ::GlobalNamespace::RotationTimeProcessor*
GlobalNamespace::RotationTimeProcessor::New_ctor(::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::RotationEventData*>* rotationEventsSaveData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RotationTimeProcessor*>(rotationEventsSaveData));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RotationTimeProcessor::RotationTimeProcessor() {}
