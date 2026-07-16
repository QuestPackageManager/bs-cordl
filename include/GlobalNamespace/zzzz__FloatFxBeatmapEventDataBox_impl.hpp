#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatFxBeatmapEventDataBox.hpp"
#include "GlobalNamespace/zzzz__FloatFxBeatmapEventDataBox_2_impl.hpp"
#include "GlobalNamespace/zzzz__FloatFxBeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxBaseData_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__IndexFilter_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FloatFxBeatmapEventDataBox.get_subtypeIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::FloatFxBeatmapEventDataBox::*)()>(&::GlobalNamespace::FloatFxBeatmapEventDataBox::get_subtypeIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3714a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventDataBox*>(), { ::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventDataBox*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxBeatmapEventDataBox.get_beatStep
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::FloatFxBeatmapEventDataBox::*)()>(&::GlobalNamespace::FloatFxBeatmapEventDataBox::get_beatStep)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3714a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventDataBox*>(), { ::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventDataBox*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxBeatmapEventDataBox._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatFxBeatmapEventDataBox::*)(
    ::GlobalNamespace::IndexFilter*, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType, float_t, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType, float_t, bool,
    ::GlobalNamespace::EaseType, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxBaseData*>*)>(&::GlobalNamespace::FloatFxBeatmapEventDataBox::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3714a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventDataBox*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::IndexFilter*>(), ::i2c::type_of<::GlobalNamespace::BeatmapEventDataBox_DistributionParamType>(), ::i2c::type_of<float_t>(),
                                ::i2c::type_of<::GlobalNamespace::BeatmapEventDataBox_DistributionParamType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(),
                                ::i2c::type_of<::GlobalNamespace::EaseType>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxBaseData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxBeatmapEventDataBox.CreateVfxBeatmapEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::GlobalNamespace::FloatFxBeatmapEventData* (::GlobalNamespace::FloatFxBeatmapEventDataBox::*)(::GlobalNamespace::FloatFxBaseData*, float_t, int32_t, int32_t, float_t)>(
        &::GlobalNamespace::FloatFxBeatmapEventDataBox::CreateVfxBeatmapEventData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3714b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventDataBox*>(), { ::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventDataBox*>(), 7 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxBaseData*>*& GlobalNamespace::FloatFxBeatmapEventDataBox::__cordl_internal_get__vfxBaseDataList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vfxBaseDataList;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxBaseData*>* const& GlobalNamespace::FloatFxBeatmapEventDataBox::__cordl_internal_get__vfxBaseDataList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vfxBaseDataList;
}
constexpr void GlobalNamespace::FloatFxBeatmapEventDataBox::__cordl_internal_set__vfxBaseDataList(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxBaseData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____vfxBaseDataList = value;
}
constexpr float_t& GlobalNamespace::FloatFxBeatmapEventDataBox::__cordl_internal_get__beatStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatStep;
}
constexpr float_t const& GlobalNamespace::FloatFxBeatmapEventDataBox::__cordl_internal_get__beatStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatStep;
}
constexpr void GlobalNamespace::FloatFxBeatmapEventDataBox::__cordl_internal_set__beatStep(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatStep = value;
}
inline int32_t GlobalNamespace::FloatFxBeatmapEventDataBox::get_subtypeIdentifier() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventDataBox*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::FloatFxBeatmapEventDataBox::get_beatStep() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventDataBox*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::FloatFxBeatmapEventDataBox::_ctor(::GlobalNamespace::IndexFilter* indexFilter, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType beatDistributionParamType,
                                                               float_t beatDistributionParam, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType eventDistributionParamType,
                                                               float_t eventDistributionParam, bool eventDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType eventDistributionEaseType,
                                                               ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxBaseData*>* fxBaseDataList) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventDataBox*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::IndexFilter*>(), ::i2c::type_of<::GlobalNamespace::BeatmapEventDataBox_DistributionParamType>(), ::i2c::type_of<float_t>(),
                              ::i2c::type_of<::GlobalNamespace::BeatmapEventDataBox_DistributionParamType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(),
                              ::i2c::type_of<::GlobalNamespace::EaseType>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxBaseData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indexFilter, beatDistributionParamType, beatDistributionParam, eventDistributionParamType, eventDistributionParam,
                                                   eventDistributionShouldAffectFirstBaseEvent, eventDistributionEaseType, fxBaseDataList);
}
inline ::GlobalNamespace::FloatFxBeatmapEventData* GlobalNamespace::FloatFxBeatmapEventDataBox::CreateVfxBeatmapEventData(::GlobalNamespace::FloatFxBaseData* data, float_t time, int32_t groupId,
                                                                                                                          int32_t elementId, float_t distributionOffset) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventDataBox*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FloatFxBeatmapEventData*>(this, ___internal_method, data, time, groupId, elementId, distributionOffset);
}
inline ::GlobalNamespace::FloatFxBeatmapEventDataBox*
GlobalNamespace::FloatFxBeatmapEventDataBox::New_ctor(::GlobalNamespace::IndexFilter* indexFilter, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType beatDistributionParamType,
                                                      float_t beatDistributionParam, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType eventDistributionParamType,
                                                      float_t eventDistributionParam, bool eventDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType eventDistributionEaseType,
                                                      ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxBaseData*>* fxBaseDataList) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::FloatFxBeatmapEventDataBox*>(indexFilter, beatDistributionParamType, beatDistributionParam, eventDistributionParamType, eventDistributionParam,
                                                                                      eventDistributionShouldAffectFirstBaseEvent, eventDistributionEaseType, fxBaseDataList));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatFxBeatmapEventDataBox::FloatFxBeatmapEventDataBox() {}
