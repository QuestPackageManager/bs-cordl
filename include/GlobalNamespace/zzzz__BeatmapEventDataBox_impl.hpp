#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapEventDataBox.hpp"
#include "GlobalNamespace/zzzz__EaseType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConverter_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLightEventConverter_def.hpp"
#include "GlobalNamespace/zzzz__IndexFilter_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType::BeatmapEventDataBox_DistributionParamType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType::BeatmapEventDataBox_DistributionParamType() {}
constexpr ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType GlobalNamespace::BeatmapEventDataBox_DistributionParamType::Wave{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType GlobalNamespace::BeatmapEventDataBox_DistributionParamType::Step{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBox.get_subtypeIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapEventDataBox::*)()>(&::GlobalNamespace::BeatmapEventDataBox::get_subtypeIdentifier)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBox*>(), { ::i2c::class_of<::GlobalNamespace::BeatmapEventDataBox*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBox.get_beatStep
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatmapEventDataBox::*)()>(&::GlobalNamespace::BeatmapEventDataBox::get_beatStep)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBox*>(), { ::i2c::class_of<::GlobalNamespace::BeatmapEventDataBox*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBox.get_indexFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IndexFilter* (::GlobalNamespace::BeatmapEventDataBox::*)()>(&::GlobalNamespace::BeatmapEventDataBox::get_indexFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3711f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBox*>(), { "get_indexFilter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBox._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventDataBox::*)(::GlobalNamespace::IndexFilter*, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType,
                                                                                                        float_t, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType, float_t, bool,
                                                                                                        ::GlobalNamespace::EaseType)>(&::GlobalNamespace::BeatmapEventDataBox::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3711f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBox*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::IndexFilter*>(), ::i2c::type_of<::GlobalNamespace::BeatmapEventDataBox_DistributionParamType>(),
                                                                 ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::BeatmapEventDataBox_DistributionParamType>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::EaseType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBox.Unpack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>* (
    ::GlobalNamespace::BeatmapEventDataBox::*)(float_t, int32_t, int32_t, int32_t, int32_t, float_t, ::GlobalNamespace::IBeatToTimeConverter*, ::GlobalNamespace::IBeatmapLightEventConverter*)>(
    &::GlobalNamespace::BeatmapEventDataBox::Unpack)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBox*>(), { ::i2c::class_of<::GlobalNamespace::BeatmapEventDataBox*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBox.GetBeatStep
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatmapEventDataBox::*)(float_t)>(&::GlobalNamespace::BeatmapEventDataBox::GetBeatStep)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3711f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBox*>(), { "GetBeatStep", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBox.GetDistribution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatmapEventDataBox::*)(bool, int32_t)>(&::GlobalNamespace::BeatmapEventDataBox::GetDistribution)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3711fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBox*>(), { "GetDistribution", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBox.BeatDistributionParamToStep
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType, int32_t)>(
    &::GlobalNamespace::BeatmapEventDataBox::BeatDistributionParamToStep)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x371207c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::BeatmapEventDataBox*>(),
            { "BeatDistributionParamToStep", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::BeatmapEventDataBox_DistributionParamType>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBox.GetBeatStep
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::GlobalNamespace::IndexFilter*, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType, float_t, float_t)>(
    &::GlobalNamespace::BeatmapEventDataBox::GetBeatStep)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3711f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBox*>(),
                                                             { "GetBeatStep",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::IndexFilter*>(), ::i2c::type_of<::GlobalNamespace::BeatmapEventDataBox_DistributionParamType>(),
                                                                 ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBox.EventDistributionParamToStep
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int32_t, float_t, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType, int32_t, ::GlobalNamespace::EaseType)>(
    &::GlobalNamespace::BeatmapEventDataBox::EventDistributionParamToStep)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3712010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBox*>(),
                                                             { "EventDistributionParamToStep",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::BeatmapEventDataBox_DistributionParamType>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::EaseType>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IndexFilter*& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__indexFilter_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indexFilter_k__BackingField;
}
constexpr ::GlobalNamespace::IndexFilter* const& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__indexFilter_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indexFilter_k__BackingField;
}
constexpr void GlobalNamespace::BeatmapEventDataBox::__cordl_internal_set__indexFilter_k__BackingField(::GlobalNamespace::IndexFilter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____indexFilter_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__beatDistributionParam() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatDistributionParam;
}
constexpr float_t const& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__beatDistributionParam() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatDistributionParam;
}
constexpr void GlobalNamespace::BeatmapEventDataBox::__cordl_internal_set__beatDistributionParam(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatDistributionParam = value;
}
constexpr ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__beatDistributionParamType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatDistributionParamType;
}
constexpr ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType const& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__beatDistributionParamType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatDistributionParamType;
}
constexpr void GlobalNamespace::BeatmapEventDataBox::__cordl_internal_set__beatDistributionParamType(::GlobalNamespace::BeatmapEventDataBox_DistributionParamType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatDistributionParamType = value;
}
constexpr int32_t& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__eventDistributionCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventDistributionCount;
}
constexpr int32_t const& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__eventDistributionCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventDistributionCount;
}
constexpr void GlobalNamespace::BeatmapEventDataBox::__cordl_internal_set__eventDistributionCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventDistributionCount = value;
}
constexpr ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__eventDistributionParamType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventDistributionParamType;
}
constexpr ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType const& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__eventDistributionParamType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventDistributionParamType;
}
constexpr void GlobalNamespace::BeatmapEventDataBox::__cordl_internal_set__eventDistributionParamType(::GlobalNamespace::BeatmapEventDataBox_DistributionParamType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventDistributionParamType = value;
}
constexpr float_t& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__eventDistributionParam() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventDistributionParam;
}
constexpr float_t const& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__eventDistributionParam() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventDistributionParam;
}
constexpr void GlobalNamespace::BeatmapEventDataBox::__cordl_internal_set__eventDistributionParam(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventDistributionParam = value;
}
constexpr bool& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__eventDistributionShouldAffectFirstBaseEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventDistributionShouldAffectFirstBaseEvent;
}
constexpr bool const& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__eventDistributionShouldAffectFirstBaseEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventDistributionShouldAffectFirstBaseEvent;
}
constexpr void GlobalNamespace::BeatmapEventDataBox::__cordl_internal_set__eventDistributionShouldAffectFirstBaseEvent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventDistributionShouldAffectFirstBaseEvent = value;
}
constexpr ::GlobalNamespace::EaseType& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__eventDistributionEaseType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventDistributionEaseType;
}
constexpr ::GlobalNamespace::EaseType const& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__eventDistributionEaseType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventDistributionEaseType;
}
constexpr void GlobalNamespace::BeatmapEventDataBox::__cordl_internal_set__eventDistributionEaseType(::GlobalNamespace::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventDistributionEaseType = value;
}
inline int32_t GlobalNamespace::BeatmapEventDataBox::get_subtypeIdentifier() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapEventDataBox*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapEventDataBox::get_beatStep() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapEventDataBox*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::GlobalNamespace::IndexFilter* GlobalNamespace::BeatmapEventDataBox::get_indexFilter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBox*>(), { "get_indexFilter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IndexFilter*>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapEventDataBox::_ctor(::GlobalNamespace::IndexFilter* indexFilter, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType beatDistributionParamType,
                                                        float_t beatDistributionParam, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType eventDistributionParamType,
                                                        float_t eventDistributionParam, bool eventDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType eventDistributionEaseType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBox*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::IndexFilter*>(), ::i2c::type_of<::GlobalNamespace::BeatmapEventDataBox_DistributionParamType>(),
                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::BeatmapEventDataBox_DistributionParamType>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::EaseType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indexFilter, beatDistributionParamType, beatDistributionParam, eventDistributionParamType, eventDistributionParam,
                                                   eventDistributionShouldAffectFirstBaseEvent, eventDistributionEaseType);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>*
GlobalNamespace::BeatmapEventDataBox::Unpack(float_t groupBoxBeat, int32_t groupId, int32_t elementId, int32_t durationOrderIndex, int32_t distributionOrderIndex, float_t maxBeat,
                                             ::GlobalNamespace::IBeatToTimeConverter* beatToTimeConverter, ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapEventDataBox*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>*>(
      this, ___internal_method, groupBoxBeat, groupId, elementId, durationOrderIndex, distributionOrderIndex, maxBeat, beatToTimeConverter, lightEventConverter);
}
inline float_t GlobalNamespace::BeatmapEventDataBox::GetBeatStep(float_t lastBaseEventRelativeBeat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBox*>(), { "GetBeatStep", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, lastBaseEventRelativeBeat);
}
inline float_t GlobalNamespace::BeatmapEventDataBox::GetDistribution(bool isFirstBaseDataEvent, int32_t distributionOrderIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBox*>(), { "GetDistribution", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, isFirstBaseDataEvent, distributionOrderIndex);
}
inline float_t GlobalNamespace::BeatmapEventDataBox::BeatDistributionParamToStep(float_t distributionParam, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType distributionParamType,
                                                                                 int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::BeatmapEventDataBox*>(),
          { "BeatDistributionParamToStep", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::BeatmapEventDataBox_DistributionParamType>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, distributionParam, distributionParamType, count);
}
inline float_t GlobalNamespace::BeatmapEventDataBox::GetBeatStep(::GlobalNamespace::IndexFilter* indexFilter, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType distributionParamType,
                                                                 float_t distributionParam, float_t lastBaseEventRelativeBeat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBox*>(),
                                                           { "GetBeatStep",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::IndexFilter*>(), ::i2c::type_of<::GlobalNamespace::BeatmapEventDataBox_DistributionParamType>(),
                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, indexFilter, distributionParamType, distributionParam, lastBaseEventRelativeBeat);
}
inline float_t GlobalNamespace::BeatmapEventDataBox::EventDistributionParamToStep(int32_t index, float_t distributionParam,
                                                                                  ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType distributionParamType, int32_t count,
                                                                                  ::GlobalNamespace::EaseType easeType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataBox*>(),
                                                           { "EventDistributionParamToStep",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::BeatmapEventDataBox_DistributionParamType>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::EaseType>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, index, distributionParam, distributionParamType, count, easeType);
}
inline ::GlobalNamespace::BeatmapEventDataBox*
GlobalNamespace::BeatmapEventDataBox::New_ctor(::GlobalNamespace::IndexFilter* indexFilter, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType beatDistributionParamType,
                                               float_t beatDistributionParam, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType eventDistributionParamType, float_t eventDistributionParam,
                                               bool eventDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType eventDistributionEaseType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapEventDataBox*>(indexFilter, beatDistributionParamType, beatDistributionParam, eventDistributionParamType,
                                                                                                   eventDistributionParam, eventDistributionShouldAffectFirstBaseEvent, eventDistributionEaseType));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEventDataBox::BeatmapEventDataBox() {}
