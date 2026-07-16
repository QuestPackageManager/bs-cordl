#pragma once
// IWYU pragma private; include "BeatSaber/TrackDefinitions/DataModels/EnvironmentTrackDefinitionModel.hpp"
#include "BeatSaber/TrackDefinitions/DataModels/zzzz__EventBoxGroupType_impl.hpp"
#include "BeatSaber/TrackDefinitions/DataModels/zzzz__TrackToolbarType_impl.hpp"
#include "BeatSaber/TrackDefinitions/zzzz__EnvironmentTracksDefinitionSO_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/TrackDefinitions/DataModels/zzzz__EnvironmentTrackDefinitionModel_def.hpp"
#include "BeatSaber/TrackDefinitions/DataModels/zzzz__EnvironmentTrackDefinitionModel_def.hpp"
#include "BeatSaber/TrackDefinitions/DataModels/zzzz__EventBoxGroupType_def.hpp"
#include "BeatSaber/TrackDefinitions/DataModels/zzzz__TrackToolbarType_def.hpp"
#include "BeatSaber/TrackDefinitions/zzzz__EnvironmentTracksDefinitionSO_def.hpp"
#include "BeatSaber/TrackDefinitions/zzzz__EventTrackDefinitionSO_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Linq/zzzz__IGrouping_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack::*)(
    ::GlobalNamespace::LightGroupSO*, ::StringW, ::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x32ec2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack*>(),
            { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::LightGroupSO*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LightGroupSO>& BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack::__cordl_internal_get_lightGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroup;
}
constexpr ::UnityW<::GlobalNamespace::LightGroupSO> const&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack::__cordl_internal_get_lightGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroup;
}
constexpr void
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack::__cordl_internal_set_lightGroup(::UnityW<::GlobalNamespace::LightGroupSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightGroup = value;
}
constexpr ::StringW& BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack::__cordl_internal_get_groupName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupName;
}
constexpr ::StringW const& BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack::__cordl_internal_get_groupName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupName;
}
constexpr void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack::__cordl_internal_set_groupName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___groupName = value;
}
constexpr ::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack::__cordl_internal_get_trackType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trackType;
}
constexpr ::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType const&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack::__cordl_internal_get_trackType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trackType;
}
constexpr void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack::__cordl_internal_set_trackType(
    ::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trackType = value;
}
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack::_ctor(::GlobalNamespace::LightGroupSO* lightGroup, ::StringW groupName,
                                                                                                                            ::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType trackType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack*>(),
          { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::LightGroupSO*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lightGroup, groupName, trackType);
}
inline ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack::New_ctor(::GlobalNamespace::LightGroupSO* lightGroup, ::StringW groupName,
                                                                                                                   ::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType trackType) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack*>(lightGroup, groupName, trackType));
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack() {}
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack::*)(
    ::GlobalNamespace::LightGroupSO*, ::StringW, int32_t,
    ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack*>*)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x32ec2dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack*>(),
            { ".ctor",
              {},
              { ::i2c::type_of<::GlobalNamespace::LightGroupSO*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack*>*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LightGroupSO>& BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack::__cordl_internal_get_lightGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroup;
}
constexpr ::UnityW<::GlobalNamespace::LightGroupSO> const&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack::__cordl_internal_get_lightGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroup;
}
constexpr void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack::__cordl_internal_set_lightGroup(::UnityW<::GlobalNamespace::LightGroupSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightGroup = value;
}
constexpr ::StringW& BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack::__cordl_internal_get_groupName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupName;
}
constexpr ::StringW const& BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack::__cordl_internal_get_groupName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupName;
}
constexpr void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack::__cordl_internal_set_groupName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___groupName = value;
}
constexpr int32_t& BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack::__cordl_internal_get_tracksCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tracksCount;
}
constexpr int32_t const& BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack::__cordl_internal_get_tracksCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tracksCount;
}
constexpr void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack::__cordl_internal_set_tracksCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tracksCount = value;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack*>*&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack::__cordl_internal_get_eventBoxGroupTracks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventBoxGroupTracks;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack*>* const&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack::__cordl_internal_get_eventBoxGroupTracks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventBoxGroupTracks;
}
constexpr void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack::__cordl_internal_set_eventBoxGroupTracks(
    ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eventBoxGroupTracks = value;
}
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack::_ctor(
    ::GlobalNamespace::LightGroupSO* lightGroup, ::StringW groupName, int32_t tracksCount,
    ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack*>* eventBoxGroupTracks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack*>(),
          { ".ctor",
            {},
            { ::i2c::type_of<::GlobalNamespace::LightGroupSO*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
              ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lightGroup, groupName, tracksCount, eventBoxGroupTracks);
}
inline ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack::New_ctor(
    ::GlobalNamespace::LightGroupSO* lightGroup, ::StringW groupName, int32_t tracksCount,
    ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack*>* eventBoxGroupTracks) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack*>(lightGroup, groupName, tracksCount,
                                                                                                                                                                   eventBoxGroupTracks));
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack() {}
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::*)()>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32ec340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c.__ctor_b__11_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::*)(
    ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*)>(&::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x32ec344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(),
                                                             { "<.ctor>b__11_0", {}, { ::i2c::type_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c.__ctor_b__11_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BasicBeatmapEventType (::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::*)(
    ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*)>(&::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x32ec364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(),
                                                             { "<.ctor>b__11_1", {}, { ::i2c::type_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c.__ctor_b__11_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo* (
    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::*)(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32ec378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(),
                                                             { "<.ctor>b__11_2", {}, { ::i2c::type_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c.__ctor_b__11_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO> (
    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::*)(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_3)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x32ec380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(),
                                                             { "<.ctor>b__11_3", {}, { ::i2c::type_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c.__ctor_b__11_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO> (::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::*)(
        ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*)>(
        &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_4)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x32ec394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(),
                                                { "<.ctor>b__11_4",
                                                  {},
                                                  { ::i2c::type_of<::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>,
                                                                                               ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c.__ctor_b__11_5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*> (::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::*)(
        ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*)>(
        &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_5)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32ec434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(),
                                                { "<.ctor>b__11_5",
                                                  {},
                                                  { ::i2c::type_of<::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>,
                                                                                               ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c.__ctor_b__11_6
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType (::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::*)(
    ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*)>(&::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_6)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x32ec480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(),
                                                             { "<.ctor>b__11_6", {}, { ::i2c::type_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c.__ctor_b__11_7
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType (::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::*)(
    ::System::Linq::IGrouping_2<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_7)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x32ec494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(),
                                                { "<.ctor>b__11_7",
                                                  {},
                                                  { ::i2c::type_of<::System::Linq::IGrouping_2<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType,
                                                                                               ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c.__ctor_b__11_8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack* (
    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::*)(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_8)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x32ec534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(),
                                                             { "<.ctor>b__11_8", {}, { ::i2c::type_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::setStaticF___9(::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c* value) {
  ::cordl_internals::setStaticField<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*, "<>9",
                                    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(
      std::forward<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(value));
}
inline ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c* BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*, "<>9",
                                           ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>();
}
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::setStaticF___9__11_0(
    ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, bool>*, "<>9__11_0",
                                    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(
      std::forward<::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, bool>*>(value));
}
inline ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, bool>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::getStaticF___9__11_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, bool>*, "<>9__11_0",
                                           ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>();
}
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::setStaticF___9__11_1(
    ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::GlobalNamespace::BasicBeatmapEventType>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::GlobalNamespace::BasicBeatmapEventType>*, "<>9__11_1",
                                    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(
      std::forward<::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::GlobalNamespace::BasicBeatmapEventType>*>(value));
}
inline ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::GlobalNamespace::BasicBeatmapEventType>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::getStaticF___9__11_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::GlobalNamespace::BasicBeatmapEventType>*, "<>9__11_1",
                                           ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>();
}
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::setStaticF___9__11_2(
    ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
      "<>9__11_2", ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(
      std::forward<
          ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>(
          value));
}
inline ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::getStaticF___9__11_2() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
      "<>9__11_2", ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>();
}
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::setStaticF___9__11_3(
    ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>*, "<>9__11_3",
      ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(
      std::forward<::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>*>(value));
}
inline ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::getStaticF___9__11_3() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>*, "<>9__11_3",
      ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>();
}
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::setStaticF___9__11_4(
    ::System::Func_2<::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
                     ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
                       ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>*,
      "<>9__11_4", ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(
      std::forward<::System::Func_2<
          ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
          ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>*>(value));
}
inline ::System::Func_2<
    ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
    ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::getStaticF___9__11_4() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
                       ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>*,
      "<>9__11_4", ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>();
}
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::setStaticF___9__11_5(
    ::System::Func_2<::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
                     ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
                       ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>>*,
      "<>9__11_5", ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(
      std::forward<::System::Func_2<
          ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
          ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>>*>(value));
}
inline ::System::Func_2<
    ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
    ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::getStaticF___9__11_5() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
                       ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>>*,
      "<>9__11_5", ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>();
}
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::setStaticF___9__11_6(
    ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*,
                                    "<>9__11_6", ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(
      std::forward<::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*>(value));
}
inline ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::getStaticF___9__11_6() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*, "<>9__11_6",
      ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>();
}
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::setStaticF___9__11_7(
    ::System::Func_2<::System::Linq::IGrouping_2<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
                     ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::Linq::IGrouping_2<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
                       ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*,
      "<>9__11_7", ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(
      std::forward<
          ::System::Func_2<::System::Linq::IGrouping_2<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
                           ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*>(value));
}
inline ::System::Func_2<::System::Linq::IGrouping_2<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
                        ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::getStaticF___9__11_7() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::Linq::IGrouping_2<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
                       ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*,
      "<>9__11_7", ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>();
}
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::setStaticF___9__11_8(
    ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*,
                     ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*,
                                                     ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack*>*,
                                    "<>9__11_8", ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(
      std::forward<::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*,
                                    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack*>*>(value));
}
inline ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*,
                        ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack*>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::getStaticF___9__11_8() {
  return ::cordl_internals::getStaticField<::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*,
                                                            ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack*>*,
                                           "<>9__11_8", ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>();
}
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_0(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo* info) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(),
                                                           { "<.ctor>b__11_0", {}, { ::i2c::type_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, info);
}
inline ::GlobalNamespace::BasicBeatmapEventType
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_1(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo* trackInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(),
                                                           { "<.ctor>b__11_1", {}, { ::i2c::type_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BasicBeatmapEventType>(this, ___internal_method, trackInfo);
}
inline ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_2(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo* trackInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(),
                                                           { "<.ctor>b__11_2", {}, { ::i2c::type_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>(this, ___internal_method, trackInfo);
}
inline ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_3(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo* trackInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(),
                                                           { "<.ctor>b__11_3", {}, { ::i2c::type_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>(this, ___internal_method, trackInfo);
}
inline ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO> BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_4(
    ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>* group) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(),
                                                           { "<.ctor>b__11_4",
                                                             {},
                                                             { ::i2c::type_of<::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>,
                                                                                                          ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>(this, ___internal_method, group);
}
inline ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*> BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_5(
    ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>* group) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(),
                                                           { "<.ctor>b__11_5",
                                                             {},
                                                             { ::i2c::type_of<::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>,
                                                                                                          ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>>(this, ___internal_method, group);
}
inline ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_6(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo* info) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(),
                                                           { "<.ctor>b__11_6", {}, { ::i2c::type_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>(this, ___internal_method, info);
}
inline ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_7(
    ::System::Linq::IGrouping_2<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>* group) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(),
                                                           { "<.ctor>b__11_7",
                                                             {},
                                                             { ::i2c::type_of<::System::Linq::IGrouping_2<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType,
                                                                                                          ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>(this, ___internal_method, group);
}
inline ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_8(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo* trackInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(),
                                                           { "<.ctor>b__11_8", {}, { ::i2c::type_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack*>(this, ___internal_method, trackInfo);
}
inline ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c* BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::EnvironmentTrackDefinitionModel___c() {}
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)(
    ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*)>(&::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::_ctor)> {
  constexpr static std::size_t size = 0xe9c;
  constexpr static std::size_t addrs = 0x32eaeb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_basicEventTrackInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*> (
    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)()>(&::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_basicEventTrackInfos)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x32ebd4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(), { "get_basicEventTrackInfos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_visibleTrackInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*> (
    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)()>(&::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_visibleTrackInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32ebd64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(), { "get_visibleTrackInfos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo* (
    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)(::GlobalNamespace::BasicBeatmapEventType)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_Item)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x32ebd6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(),
                                                                                           { "get_Item", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*> (
    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)(::BeatSaber::TrackDefinitions::EventTrackDefinitionSO*)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_Item)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x32ebde0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(),
                                                                                           { "get_Item", {}, { ::i2c::type_of<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_pageCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)()>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_pageCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x32ebe44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(), { "get_pageCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>* (
    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_Item)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x32ebe5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(),
                                                             { "get_Item", {}, { ::i2c::type_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.GetToolbarTypesOnPage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>* (
    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::GetToolbarTypesOnPage)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x32ebe8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(),
                                                             { "GetToolbarTypesOnPage", {}, { ::i2c::type_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_eventBoxGroupPageInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo*>* (
    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)()>(&::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_eventBoxGroupPageInfos)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x32ebebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(), { "get_eventBoxGroupPageInfos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_groupIdToPageMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<int32_t, int32_t>* (
    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)()>(&::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_groupIdToPageMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32ebed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(), { "get_groupIdToPageMap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_groupIdToTrackInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<int32_t, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>* (
        ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)()>(&::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_groupIdToTrackInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32ebedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(), { "get_groupIdToTrackInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.GetSpawnableEventBoxGroupTracks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<
    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack*>* (::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)(int32_t)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::GetSpawnableEventBoxGroupTracks)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x32ebee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(),
                                                                                           { "GetSpawnableEventBoxGroupTracks", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_beatmapTypeToTrackInfoMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*> (
    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)()>(&::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_beatmapTypeToTrackInfoMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32ebfa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(), { "get_beatmapTypeToTrackInfoMap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.GetSpawnableEventBoxGroupTypeTracksForTrackInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<
    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack*>* (*)(::BeatSaber::TrackDefinitions::
                                                                                                                          EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::GetSpawnableEventBoxGroupTypeTracksForTrackInfo)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x32ebfb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(),
                            { "GetSpawnableEventBoxGroupTypeTracksForTrackInfo", {}, { ::i2c::type_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>& BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__trackDefinition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackDefinition;
}
constexpr ::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO> const&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__trackDefinition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackDefinition;
}
constexpr void
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_set__trackDefinition(::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trackDefinition = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BasicBeatmapEventType, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__beatmapTypeToTrackInfoMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapTypeToTrackInfoMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BasicBeatmapEventType, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>* const&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__beatmapTypeToTrackInfoMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapTypeToTrackInfoMap;
}
constexpr void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_set__beatmapTypeToTrackInfoMap(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BasicBeatmapEventType, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapTypeToTrackInfoMap = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>,
                                                       ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>>*&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__trackDefinitionToTrackInfoListMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackDefinitionToTrackInfoListMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>,
                                                       ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>>* const&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__trackDefinitionToTrackInfoListMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackDefinitionToTrackInfoListMap;
}
constexpr void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_set__trackDefinitionToTrackInfoListMap(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>,
                                                 ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trackDefinitionToTrackInfoListMap = value;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__trackPageToTrackInfoListMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackPageToTrackInfoListMap;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*> const&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__trackPageToTrackInfoListMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackPageToTrackInfoListMap;
}
constexpr void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_set__trackPageToTrackInfoListMap(
    ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trackPageToTrackInfoListMap = value;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*>&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__trackPageToTrackToolbarTypeMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackPageToTrackToolbarTypeMap;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*> const&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__trackPageToTrackToolbarTypeMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackPageToTrackToolbarTypeMap;
}
constexpr void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_set__trackPageToTrackToolbarTypeMap(
    ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trackPageToTrackToolbarTypeMap = value;
}
constexpr ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__visibleTrackInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visibleTrackInfos;
}
constexpr ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*> const&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__visibleTrackInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visibleTrackInfos;
}
constexpr void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_set__visibleTrackInfos(
    ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____visibleTrackInfos = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__groupIdToPageMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupIdToPageMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* const&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__groupIdToPageMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupIdToPageMap;
}
constexpr void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_set__groupIdToPageMap(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____groupIdToPageMap = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>*&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__groupIdToTrackMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupIdToTrackMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>* const&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__groupIdToTrackMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupIdToTrackMap;
}
constexpr void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_set__groupIdToTrackMap(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____groupIdToTrackMap = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<
    int32_t, ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack*>*>*&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__spawnableEventBoxGroupTracksByPageMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnableEventBoxGroupTracksByPageMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<
    int32_t, ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack*>*>* const&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__spawnableEventBoxGroupTracksByPageMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnableEventBoxGroupTracksByPageMap;
}
constexpr void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_set__spawnableEventBoxGroupTracksByPageMap(
    ::System::Collections::Generic::Dictionary_2<
        int32_t, ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spawnableEventBoxGroupTracksByPageMap = value;
}
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::_ctor(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO* trackDefinition) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trackDefinition);
}
inline ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_basicEventTrackInfos() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(), { "get_basicEventTrackInfos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>>(this, ___internal_method);
}
inline ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*> BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_visibleTrackInfos() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(), { "get_visibleTrackInfos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>>(this, ___internal_method);
}
inline ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_Item(::GlobalNamespace::BasicBeatmapEventType type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(),
                                                                                         { "get_Item", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventType>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>(this, ___internal_method, type);
}
inline ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_Item(::BeatSaber::TrackDefinitions::EventTrackDefinitionSO* trackDefinition) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(),
                                                                                         { "get_Item", {}, { ::i2c::type_of<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>>(this, ___internal_method, trackDefinition);
}
inline int32_t BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_pageCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(), { "get_pageCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_Item(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage page) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(),
                                                           { "get_Item", {}, { ::i2c::type_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>(this, ___internal_method,
                                                                                                                                                                         page);
}
inline ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::GetToolbarTypesOnPage(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage page) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(),
                                                           { "GetToolbarTypesOnPage", {}, { ::i2c::type_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*>(this, ___internal_method, page);
}
inline ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo*>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_eventBoxGroupPageInfos() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(), { "get_eventBoxGroupPageInfos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<int32_t, int32_t>* BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_groupIdToPageMap() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(), { "get_groupIdToPageMap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<int32_t, int32_t>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<int32_t, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_groupIdToTrackInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(), { "get_groupIdToTrackInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<int32_t, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>*>(
      this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack*>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::GetSpawnableEventBoxGroupTracks(int32_t pageId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(),
                                                                                         { "GetSpawnableEventBoxGroupTracks", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack*>*>(
      this, ___internal_method, pageId);
}
inline ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_beatmapTypeToTrackInfoMap() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(), { "get_beatmapTypeToTrackInfoMap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>>(this,
                                                                                                                                                                                   ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack*>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::GetSpawnableEventBoxGroupTypeTracksForTrackInfo(
    ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo* trackInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(),
                          { "GetSpawnableEventBoxGroupTypeTracksForTrackInfo", {}, { ::i2c::type_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack*>*>(
      nullptr, ___internal_method, trackInfo);
}
inline ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::New_ctor(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO* trackDefinition) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(trackDefinition));
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::EnvironmentTrackDefinitionModel() {}
