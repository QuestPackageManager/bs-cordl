#pragma once
// IWYU pragma private; include "BeatSaber\Destinations\SimpleMissionObjective.hpp"
#include "BeatSaber/Destinations/zzzz__MissionObjectiveType_impl.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Destinations/zzzz__SimpleMissionObjective_def.hpp"
#include "BeatSaber/Destinations/zzzz__MissionObjectiveType_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveTypeCollection_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
//  Writing Method size for method: ::BeatSaber::Destinations::SimpleMissionObjective.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Destinations::MissionObjectiveType (::BeatSaber::Destinations::SimpleMissionObjective::*)()>(
    &::BeatSaber::Destinations::SimpleMissionObjective::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3281038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::SimpleMissionObjective*>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::SimpleMissionObjective.get_referenceValueComparisonType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MissionObjective_ReferenceValueComparisonType (::BeatSaber::Destinations::SimpleMissionObjective::*)()>(
    &::BeatSaber::Destinations::SimpleMissionObjective::get_referenceValueComparisonType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3281040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::SimpleMissionObjective*>(), { "get_referenceValueComparisonType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::SimpleMissionObjective.get_referenceValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BeatSaber::Destinations::SimpleMissionObjective::*)()>(&::BeatSaber::Destinations::SimpleMissionObjective::get_referenceValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3281048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::SimpleMissionObjective*>(), { "get_referenceValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::SimpleMissionObjective._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Destinations::SimpleMissionObjective::*)(
    ::BeatSaber::Destinations::MissionObjectiveType, ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType, int32_t)>(&::BeatSaber::Destinations::SimpleMissionObjective::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3281050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::SimpleMissionObjective*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::BeatSaber::Destinations::MissionObjectiveType>(),
                                                                 ::i2c::type_of<::GlobalNamespace::MissionObjective_ReferenceValueComparisonType>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::SimpleMissionObjective.ToMissionObjective
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MissionObjective* (::BeatSaber::Destinations::SimpleMissionObjective::*)(::GlobalNamespace::MissionObjectiveTypeCollection*)>(
    &::BeatSaber::Destinations::SimpleMissionObjective::ToMissionObjective)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x328105c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::SimpleMissionObjective*>(),
                                                                                           { "ToMissionObjective", {}, { ::i2c::type_of<::GlobalNamespace::MissionObjectiveTypeCollection*>() } })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Destinations::MissionObjectiveType& BeatSaber::Destinations::SimpleMissionObjective::__cordl_internal_get__type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr ::BeatSaber::Destinations::MissionObjectiveType const& BeatSaber::Destinations::SimpleMissionObjective::__cordl_internal_get__type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr void BeatSaber::Destinations::SimpleMissionObjective::__cordl_internal_set__type(::BeatSaber::Destinations::MissionObjectiveType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____type = value;
}
constexpr ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType& BeatSaber::Destinations::SimpleMissionObjective::__cordl_internal_get__referenceValueComparisonType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____referenceValueComparisonType;
}
constexpr ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType const& BeatSaber::Destinations::SimpleMissionObjective::__cordl_internal_get__referenceValueComparisonType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____referenceValueComparisonType;
}
constexpr void BeatSaber::Destinations::SimpleMissionObjective::__cordl_internal_set__referenceValueComparisonType(::GlobalNamespace::MissionObjective_ReferenceValueComparisonType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____referenceValueComparisonType = value;
}
constexpr int32_t& BeatSaber::Destinations::SimpleMissionObjective::__cordl_internal_get__referenceValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____referenceValue;
}
constexpr int32_t const& BeatSaber::Destinations::SimpleMissionObjective::__cordl_internal_get__referenceValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____referenceValue;
}
constexpr void BeatSaber::Destinations::SimpleMissionObjective::__cordl_internal_set__referenceValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____referenceValue = value;
}
inline ::BeatSaber::Destinations::MissionObjectiveType BeatSaber::Destinations::SimpleMissionObjective::get_type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::SimpleMissionObjective*>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Destinations::MissionObjectiveType>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType BeatSaber::Destinations::SimpleMissionObjective::get_referenceValueComparisonType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::SimpleMissionObjective*>(), { "get_referenceValueComparisonType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MissionObjective_ReferenceValueComparisonType>(this, ___internal_method);
}
inline int32_t BeatSaber::Destinations::SimpleMissionObjective::get_referenceValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::SimpleMissionObjective*>(), { "get_referenceValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void BeatSaber::Destinations::SimpleMissionObjective::_ctor(::BeatSaber::Destinations::MissionObjectiveType type,
                                                                   ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType referenceValueComparisonType, int32_t referenceValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::SimpleMissionObjective*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::BeatSaber::Destinations::MissionObjectiveType>(),
                                                               ::i2c::type_of<::GlobalNamespace::MissionObjective_ReferenceValueComparisonType>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, referenceValueComparisonType, referenceValue);
}
inline ::GlobalNamespace::MissionObjective* BeatSaber::Destinations::SimpleMissionObjective::ToMissionObjective(::GlobalNamespace::MissionObjectiveTypeCollection* collection) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::SimpleMissionObjective*>(),
                                                                                         { "ToMissionObjective", {}, { ::i2c::type_of<::GlobalNamespace::MissionObjectiveTypeCollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MissionObjective*>(this, ___internal_method, collection);
}
inline ::BeatSaber::Destinations::SimpleMissionObjective*
BeatSaber::Destinations::SimpleMissionObjective::New_ctor(::BeatSaber::Destinations::MissionObjectiveType type,
                                                          ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType referenceValueComparisonType, int32_t referenceValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Destinations::SimpleMissionObjective*>(type, referenceValueComparisonType, referenceValue));
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::SimpleMissionObjective::SimpleMissionObjective() {}
