#pragma once
// IWYU pragma private; include "GlobalNamespace\LightTranslationBeatmapEventData.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_impl.hpp"
#include "GlobalNamespace/zzzz__EaseType_impl.hpp"
#include "GlobalNamespace/zzzz__LightAxis_impl.hpp"
#include "GlobalNamespace/zzzz__LightTranslationBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__LightAxis_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightTranslationBeatmapEventData.get_previousSameTypeEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LightTranslationBeatmapEventData* (::GlobalNamespace::LightTranslationBeatmapEventData::*)()>(
    &::GlobalNamespace::LightTranslationBeatmapEventData::get_previousSameTypeEventData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x325b030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationBeatmapEventData*>(), { "get_previousSameTypeEventData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationBeatmapEventData.get_nextSameTypeEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LightTranslationBeatmapEventData* (::GlobalNamespace::LightTranslationBeatmapEventData::*)()>(
    &::GlobalNamespace::LightTranslationBeatmapEventData::get_nextSameTypeEventData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x325b0ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationBeatmapEventData*>(), { "get_nextSameTypeEventData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationBeatmapEventData.get_translation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::LightTranslationBeatmapEventData::*)()>(&::GlobalNamespace::LightTranslationBeatmapEventData::get_translation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325b128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationBeatmapEventData*>(), { "get_translation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationBeatmapEventData.set_translation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightTranslationBeatmapEventData::*)(float_t)>(&::GlobalNamespace::LightTranslationBeatmapEventData::set_translation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325b130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationBeatmapEventData*>(), { "set_translation", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationBeatmapEventData.get_distribution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::LightTranslationBeatmapEventData::*)()>(&::GlobalNamespace::LightTranslationBeatmapEventData::get_distribution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325b138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationBeatmapEventData*>(), { "get_distribution", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationBeatmapEventData.set_distribution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightTranslationBeatmapEventData::*)(float_t)>(
    &::GlobalNamespace::LightTranslationBeatmapEventData::set_distribution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325b140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationBeatmapEventData*>(), { "set_distribution", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationBeatmapEventData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightTranslationBeatmapEventData::*)(
    float_t, int32_t, int32_t, bool, ::GlobalNamespace::EaseType, ::GlobalNamespace::LightAxis, float_t, float_t)>(&::GlobalNamespace::LightTranslationBeatmapEventData::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x325b148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationBeatmapEventData*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::EaseType>(),
                                             ::i2c::type_of<::GlobalNamespace::LightAxis>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationBeatmapEventData.ChangeTranslation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightTranslationBeatmapEventData::*)(float_t, float_t)>(
    &::GlobalNamespace::LightTranslationBeatmapEventData::ChangeTranslation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325b234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationBeatmapEventData*>(),
                                                                                           { "ChangeTranslation", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationBeatmapEventData.GetCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDataItem* (::GlobalNamespace::LightTranslationBeatmapEventData::*)()>(
    &::GlobalNamespace::LightTranslationBeatmapEventData::GetCopy)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x325b23c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationBeatmapEventData*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::LightTranslationBeatmapEventData*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationBeatmapEventData.SubtypeIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, ::GlobalNamespace::LightAxis)>(&::GlobalNamespace::LightTranslationBeatmapEventData::SubtypeIdentifier)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x325b21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationBeatmapEventData*>(),
                                                             { "SubtypeIdentifier", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LightAxis>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationBeatmapEventData.GetDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapEventData* (::GlobalNamespace::LightTranslationBeatmapEventData::*)()>(
    &::GlobalNamespace::LightTranslationBeatmapEventData::GetDefault)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x325b2e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationBeatmapEventData*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::LightTranslationBeatmapEventData*>(), 7 }));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LightTranslationBeatmapEventData::__cordl_internal_get_groupId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupId;
}
constexpr int32_t const& GlobalNamespace::LightTranslationBeatmapEventData::__cordl_internal_get_groupId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupId;
}
constexpr void GlobalNamespace::LightTranslationBeatmapEventData::__cordl_internal_set_groupId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___groupId = value;
}
constexpr int32_t& GlobalNamespace::LightTranslationBeatmapEventData::__cordl_internal_get_elementId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementId;
}
constexpr int32_t const& GlobalNamespace::LightTranslationBeatmapEventData::__cordl_internal_get_elementId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementId;
}
constexpr void GlobalNamespace::LightTranslationBeatmapEventData::__cordl_internal_set_elementId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementId = value;
}
constexpr bool& GlobalNamespace::LightTranslationBeatmapEventData::__cordl_internal_get_usePreviousEventValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usePreviousEventValue;
}
constexpr bool const& GlobalNamespace::LightTranslationBeatmapEventData::__cordl_internal_get_usePreviousEventValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usePreviousEventValue;
}
constexpr void GlobalNamespace::LightTranslationBeatmapEventData::__cordl_internal_set_usePreviousEventValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___usePreviousEventValue = value;
}
constexpr ::GlobalNamespace::EaseType& GlobalNamespace::LightTranslationBeatmapEventData::__cordl_internal_get_easeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easeType;
}
constexpr ::GlobalNamespace::EaseType const& GlobalNamespace::LightTranslationBeatmapEventData::__cordl_internal_get_easeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easeType;
}
constexpr void GlobalNamespace::LightTranslationBeatmapEventData::__cordl_internal_set_easeType(::GlobalNamespace::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___easeType = value;
}
constexpr ::GlobalNamespace::LightAxis& GlobalNamespace::LightTranslationBeatmapEventData::__cordl_internal_get_axis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___axis;
}
constexpr ::GlobalNamespace::LightAxis const& GlobalNamespace::LightTranslationBeatmapEventData::__cordl_internal_get_axis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___axis;
}
constexpr void GlobalNamespace::LightTranslationBeatmapEventData::__cordl_internal_set_axis(::GlobalNamespace::LightAxis value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___axis = value;
}
constexpr float_t& GlobalNamespace::LightTranslationBeatmapEventData::__cordl_internal_get__translation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____translation_k__BackingField;
}
constexpr float_t const& GlobalNamespace::LightTranslationBeatmapEventData::__cordl_internal_get__translation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____translation_k__BackingField;
}
constexpr void GlobalNamespace::LightTranslationBeatmapEventData::__cordl_internal_set__translation_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____translation_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::LightTranslationBeatmapEventData::__cordl_internal_get__distribution_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____distribution_k__BackingField;
}
constexpr float_t const& GlobalNamespace::LightTranslationBeatmapEventData::__cordl_internal_get__distribution_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____distribution_k__BackingField;
}
constexpr void GlobalNamespace::LightTranslationBeatmapEventData::__cordl_internal_set__distribution_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____distribution_k__BackingField = value;
}
inline void
GlobalNamespace::LightTranslationBeatmapEventData::setStaticF__defaults(::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightTranslationBeatmapEventData*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightTranslationBeatmapEventData*>*, "_defaults",
                                    ::GlobalNamespace::LightTranslationBeatmapEventData*>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightTranslationBeatmapEventData*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightTranslationBeatmapEventData*>* GlobalNamespace::LightTranslationBeatmapEventData::getStaticF__defaults() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightTranslationBeatmapEventData*>*, "_defaults",
                                           ::GlobalNamespace::LightTranslationBeatmapEventData*>();
}
inline ::GlobalNamespace::LightTranslationBeatmapEventData* GlobalNamespace::LightTranslationBeatmapEventData::get_previousSameTypeEventData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationBeatmapEventData*>(), { "get_previousSameTypeEventData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightTranslationBeatmapEventData*>(this, ___internal_method);
}
inline ::GlobalNamespace::LightTranslationBeatmapEventData* GlobalNamespace::LightTranslationBeatmapEventData::get_nextSameTypeEventData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationBeatmapEventData*>(), { "get_nextSameTypeEventData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightTranslationBeatmapEventData*>(this, ___internal_method);
}
inline float_t GlobalNamespace::LightTranslationBeatmapEventData::get_translation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationBeatmapEventData*>(), { "get_translation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::LightTranslationBeatmapEventData::set_translation(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationBeatmapEventData*>(), { "set_translation", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::LightTranslationBeatmapEventData::get_distribution() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationBeatmapEventData*>(), { "get_distribution", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::LightTranslationBeatmapEventData::set_distribution(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationBeatmapEventData*>(), { "set_distribution", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LightTranslationBeatmapEventData::_ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue, ::GlobalNamespace::EaseType easeType,
                                                                     ::GlobalNamespace::LightAxis axis, float_t translation, float_t distribution) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationBeatmapEventData*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::EaseType>(),
                                           ::i2c::type_of<::GlobalNamespace::LightAxis>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, groupId, elementId, usePreviousEventValue, easeType, axis, translation, distribution);
}
inline void GlobalNamespace::LightTranslationBeatmapEventData::ChangeTranslation(float_t translation, float_t distribution) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationBeatmapEventData*>(),
                                                                                         { "ChangeTranslation", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, translation, distribution);
}
inline ::GlobalNamespace::BeatmapDataItem* GlobalNamespace::LightTranslationBeatmapEventData::GetCopy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LightTranslationBeatmapEventData*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataItem*>(this, ___internal_method);
}
inline int32_t GlobalNamespace::LightTranslationBeatmapEventData::SubtypeIdentifier(int32_t groupId, int32_t elementId, ::GlobalNamespace::LightAxis axis) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationBeatmapEventData*>(),
                                                           { "SubtypeIdentifier", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LightAxis>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, groupId, elementId, axis);
}
inline ::GlobalNamespace::BeatmapEventData* GlobalNamespace::LightTranslationBeatmapEventData::GetDefault() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LightTranslationBeatmapEventData*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventData*>(this, ___internal_method);
}
inline ::GlobalNamespace::LightTranslationBeatmapEventData* GlobalNamespace::LightTranslationBeatmapEventData::New_ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue,
                                                                                                                        ::GlobalNamespace::EaseType easeType, ::GlobalNamespace::LightAxis axis,
                                                                                                                        float_t translation, float_t distribution) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::LightTranslationBeatmapEventData*>(time, groupId, elementId, usePreviousEventValue, easeType, axis, translation, distribution));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightTranslationBeatmapEventData::LightTranslationBeatmapEventData() {}
