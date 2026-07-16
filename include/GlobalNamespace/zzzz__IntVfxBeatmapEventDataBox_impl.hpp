#pragma once
// IWYU pragma private; include "GlobalNamespace/IntVfxBeatmapEventDataBox.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_impl.hpp"
#include "GlobalNamespace/zzzz__IntVfxBeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConverter_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLightEventConverter_def.hpp"
#include "GlobalNamespace/zzzz__IndexFilter_def.hpp"
#include "GlobalNamespace/zzzz__IntFxBaseData_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IntVfxBeatmapEventDataBox.get_subtypeIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::IntVfxBeatmapEventDataBox::*)()>(&::GlobalNamespace::IntVfxBeatmapEventDataBox::get_subtypeIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37147a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IntVfxBeatmapEventDataBox*>(), { ::i2c::class_of<::GlobalNamespace::IntVfxBeatmapEventDataBox*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IntVfxBeatmapEventDataBox.get_beatStep
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::IntVfxBeatmapEventDataBox::*)()>(&::GlobalNamespace::IntVfxBeatmapEventDataBox::get_beatStep)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37147ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IntVfxBeatmapEventDataBox*>(), { ::i2c::class_of<::GlobalNamespace::IntVfxBeatmapEventDataBox*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IntVfxBeatmapEventDataBox._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IntVfxBeatmapEventDataBox::*)(
    ::GlobalNamespace::IndexFilter*, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType, float_t, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType, float_t, bool,
    ::GlobalNamespace::EaseType, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IntFxBaseData*>*)>(&::GlobalNamespace::IntVfxBeatmapEventDataBox::_ctor)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x37147b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IntVfxBeatmapEventDataBox*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::IndexFilter*>(), ::i2c::type_of<::GlobalNamespace::BeatmapEventDataBox_DistributionParamType>(), ::i2c::type_of<float_t>(),
                                ::i2c::type_of<::GlobalNamespace::BeatmapEventDataBox_DistributionParamType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(),
                                ::i2c::type_of<::GlobalNamespace::EaseType>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IntFxBaseData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IntVfxBeatmapEventDataBox.Unpack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>* (
    ::GlobalNamespace::IntVfxBeatmapEventDataBox::*)(float_t, int32_t, int32_t, int32_t, int32_t, float_t, ::GlobalNamespace::IBeatToTimeConverter*, ::GlobalNamespace::IBeatmapLightEventConverter*)>(
    &::GlobalNamespace::IntVfxBeatmapEventDataBox::Unpack)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x37149dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IntVfxBeatmapEventDataBox*>(), { ::i2c::class_of<::GlobalNamespace::IntVfxBeatmapEventDataBox*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IntFxBaseData*>*& GlobalNamespace::IntVfxBeatmapEventDataBox::__cordl_internal_get__vfxBaseDataList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vfxBaseDataList;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IntFxBaseData*>* const& GlobalNamespace::IntVfxBeatmapEventDataBox::__cordl_internal_get__vfxBaseDataList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vfxBaseDataList;
}
constexpr void GlobalNamespace::IntVfxBeatmapEventDataBox::__cordl_internal_set__vfxBaseDataList(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IntFxBaseData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____vfxBaseDataList = value;
}
constexpr float_t& GlobalNamespace::IntVfxBeatmapEventDataBox::__cordl_internal_get__beatStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatStep;
}
constexpr float_t const& GlobalNamespace::IntVfxBeatmapEventDataBox::__cordl_internal_get__beatStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatStep;
}
constexpr void GlobalNamespace::IntVfxBeatmapEventDataBox::__cordl_internal_set__beatStep(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatStep = value;
}
inline int32_t GlobalNamespace::IntVfxBeatmapEventDataBox::get_subtypeIdentifier() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IntVfxBeatmapEventDataBox*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::IntVfxBeatmapEventDataBox::get_beatStep() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IntVfxBeatmapEventDataBox*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::IntVfxBeatmapEventDataBox::_ctor(::GlobalNamespace::IndexFilter* indexFilter, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType beatDistributionParamType,
                                                              float_t beatDistributionParam, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType eventDistributionParamType,
                                                              float_t eventDistributionParam, bool eventDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType eventDistributionEaseType,
                                                              ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IntFxBaseData*>* vfxBaseDataList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IntVfxBeatmapEventDataBox*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::GlobalNamespace::IndexFilter*>(), ::i2c::type_of<::GlobalNamespace::BeatmapEventDataBox_DistributionParamType>(), ::i2c::type_of<float_t>(),
                                           ::i2c::type_of<::GlobalNamespace::BeatmapEventDataBox_DistributionParamType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(),
                                           ::i2c::type_of<::GlobalNamespace::EaseType>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IntFxBaseData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indexFilter, beatDistributionParamType, beatDistributionParam, eventDistributionParamType, eventDistributionParam,
                                                   eventDistributionShouldAffectFirstBaseEvent, eventDistributionEaseType, vfxBaseDataList);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>*
GlobalNamespace::IntVfxBeatmapEventDataBox::Unpack(float_t groupBoxBeat, int32_t groupId, int32_t elementId, int32_t durationOrderIndex, int32_t distributionOrderIndex, float_t maxBeat,
                                                   ::GlobalNamespace::IBeatToTimeConverter* beatToTimeConverter, ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IntVfxBeatmapEventDataBox*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>*>(
      this, ___internal_method, groupBoxBeat, groupId, elementId, durationOrderIndex, distributionOrderIndex, maxBeat, beatToTimeConverter, lightEventConverter);
}
inline ::GlobalNamespace::IntVfxBeatmapEventDataBox*
GlobalNamespace::IntVfxBeatmapEventDataBox::New_ctor(::GlobalNamespace::IndexFilter* indexFilter, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType beatDistributionParamType,
                                                     float_t beatDistributionParam, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType eventDistributionParamType,
                                                     float_t eventDistributionParam, bool eventDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType eventDistributionEaseType,
                                                     ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IntFxBaseData*>* vfxBaseDataList) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::IntVfxBeatmapEventDataBox*>(indexFilter, beatDistributionParamType, beatDistributionParam, eventDistributionParamType, eventDistributionParam,
                                                                                     eventDistributionShouldAffectFirstBaseEvent, eventDistributionEaseType, vfxBaseDataList));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IntVfxBeatmapEventDataBox::IntVfxBeatmapEventDataBox() {}
