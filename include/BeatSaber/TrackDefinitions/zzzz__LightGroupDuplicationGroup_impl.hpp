#pragma once
// IWYU pragma private; include "BeatSaber\TrackDefinitions\LightGroupDuplicationGroup.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_impl.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "BeatSaber/TrackDefinitions/zzzz__LightGroupDuplicationGroup_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_def.hpp"
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup.get_duplicationGroupName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::*)()>(
    &::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::get_duplicationGroupName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32ec964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup*>(), { "get_duplicationGroupName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup.get_lightGroups
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>> (::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::*)()>(
    &::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::get_lightGroups)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32ec96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup*>(), { "get_lightGroups", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::*)()>(&::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32ec974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::__cordl_internal_get__duplicationGroupName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duplicationGroupName;
}
constexpr ::StringW const& BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::__cordl_internal_get__duplicationGroupName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duplicationGroupName;
}
constexpr void BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::__cordl_internal_set__duplicationGroupName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____duplicationGroupName = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>>& BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::__cordl_internal_get__lightGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroups;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>> const& BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::__cordl_internal_get__lightGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroups;
}
constexpr void BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::__cordl_internal_set__lightGroups(::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightGroups = value;
}
inline ::StringW BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::get_duplicationGroupName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup*>(), { "get_duplicationGroupName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>> BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::get_lightGroups() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup*>(), { "get_lightGroups", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>>>(this, ___internal_method);
}
inline void BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup* BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::LightGroupDuplicationGroup() {}
