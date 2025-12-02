#pragma once
// IWYU pragma private; include "BeatSaber/TrackDefinitions/DataModels/EnvironmentTrackDefinitionModel.hpp"
#include "BeatSaber/TrackDefinitions/DataModels/zzzz__EventBoxGroupType_impl.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack::*)(
    ::GlobalNamespace::LightGroupSO*, ::StringW, ::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x31c7510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroupSO*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___groupName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroupSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightGroup, groupName, trackType);
}
inline ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack::New_ctor(::GlobalNamespace::LightGroupSO* lightGroup, ::StringW groupName,
                                                                                                                   ::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType trackType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack*>(lightGroup, groupName, trackType));
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack() {}
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack::*)(
    ::GlobalNamespace::LightGroupSO*, ::StringW, int32_t,
    ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack*>*)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x31c751c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroupSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack*>*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___groupName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___eventBoxGroupTracks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack::_ctor(
    ::GlobalNamespace::LightGroupSO* lightGroup, ::StringW groupName, int32_t tracksCount,
    ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack*>* eventBoxGroupTracks) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroupSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightGroup, groupName, tracksCount, eventBoxGroupTracks);
}
inline ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack::New_ctor(
    ::GlobalNamespace::LightGroupSO* lightGroup, ::StringW groupName, int32_t tracksCount,
    ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack*>* eventBoxGroupTracks) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack*>(lightGroup, groupName, tracksCount, eventBoxGroupTracks));
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack() {}
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::*)()>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31c7580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c.__ctor_b__11_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::*)(
    ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*)>(&::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x31c7584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get(), "<.ctor>b__11_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c.__ctor_b__11_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BasicBeatmapEventType (
    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::*)(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x31c75a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get(), "<.ctor>b__11_1",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c.__ctor_b__11_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo* (
    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::*)(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31c75b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get(), "<.ctor>b__11_2",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c.__ctor_b__11_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO> (
    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::*)(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_3)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x31c75c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get(), "<.ctor>b__11_3",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c.__ctor_b__11_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO> (::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::*)(
        ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*)>(
        &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_4)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x31c75d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get(), "<.ctor>b__11_4",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::IGrouping_2<
            ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c.__ctor_b__11_5
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*> (
        ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::*)(
        ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_5)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x31c7674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get(), "<.ctor>b__11_5",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::IGrouping_2<
            ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c.__ctor_b__11_6
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType (
    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::*)(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_6)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x31c76c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get(), "<.ctor>b__11_6",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c.__ctor_b__11_7
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType (::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::*)(
        ::System::Linq::IGrouping_2<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*)>(
        &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_7)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x31c76d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get(), "<.ctor>b__11_7",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Linq::IGrouping_2<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c.__ctor_b__11_8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack* (
    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::*)(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_8)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x31c7774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get(), "<.ctor>b__11_8",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>::get() })));
    return ___internal_method;
  }
};
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::setStaticF___9(::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c* value) {
  ::cordl_internals::setStaticField<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get>(
      std::forward<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>(value));
}
inline ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c* BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get>();
}
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::setStaticF___9__11_0(
    ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, bool>*, "<>9__11_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get>(
      std::forward<::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, bool>*>(value));
}
inline ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, bool>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::getStaticF___9__11_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, bool>*, "<>9__11_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get>();
}
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::setStaticF___9__11_1(
    ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::GlobalNamespace::BasicBeatmapEventType>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::GlobalNamespace::BasicBeatmapEventType>*, "<>9__11_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get>(
      std::forward<::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::GlobalNamespace::BasicBeatmapEventType>*>(value));
}
inline ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::GlobalNamespace::BasicBeatmapEventType>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::getStaticF___9__11_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::GlobalNamespace::BasicBeatmapEventType>*, "<>9__11_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get>();
}
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::setStaticF___9__11_2(
    ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
      "<>9__11_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get>(
      std::forward<
          ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>(
          value));
}
inline ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::getStaticF___9__11_2() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
      "<>9__11_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get>();
}
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::setStaticF___9__11_3(
    ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>*, "<>9__11_3",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get>(
      std::forward<::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>*>(value));
}
inline ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::getStaticF___9__11_3() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>*, "<>9__11_3",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get>();
}
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::setStaticF___9__11_4(
    ::System::Func_2<::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
                     ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
                       ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>*,
      "<>9__11_4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get>(
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
      "<>9__11_4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get>();
}
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::setStaticF___9__11_5(
    ::System::Func_2<::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
                     ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*,
                              ::Array<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<
          ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
          ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>>*,
      "<>9__11_5", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get>(
      std::forward<::System::Func_2<
          ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
          ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>>*>(
          value));
}
inline ::System::Func_2<
    ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
    ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::getStaticF___9__11_5() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<
          ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
          ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>>*,
      "<>9__11_5", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get>();
}
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::setStaticF___9__11_6(
    ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*,
                                    "<>9__11_6", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get>(
      std::forward<::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*>(value));
}
inline ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::getStaticF___9__11_6() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*, "<>9__11_6",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get>();
}
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::setStaticF___9__11_7(
    ::System::Func_2<::System::Linq::IGrouping_2<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
                     ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::Linq::IGrouping_2<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
                       ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*,
      "<>9__11_7", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get>(
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
      "<>9__11_7", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get>();
}
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::setStaticF___9__11_8(
    ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*,
                     ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*,
                                                     ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack*>*,
                                    "<>9__11_8", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get>(
      std::forward<::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*,
                                    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack*>*>(value));
}
inline ::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*,
                        ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack*>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::getStaticF___9__11_8() {
  return ::cordl_internals::getStaticField<::System::Func_2<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*,
                                                            ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack*>*,
                                           "<>9__11_8", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get>();
}
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_0(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo* info) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get(), "<.ctor>b__11_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, info);
}
inline ::GlobalNamespace::BasicBeatmapEventType
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_1(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo* trackInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get(), "<.ctor>b__11_1",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BasicBeatmapEventType, false>(this, ___internal_method, trackInfo);
}
inline ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_2(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo* trackInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get(), "<.ctor>b__11_2",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, false>(this, ___internal_method, trackInfo);
}
inline ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_3(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo* trackInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get(), "<.ctor>b__11_3",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, false>(this, ___internal_method, trackInfo);
}
inline ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO> BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_4(
    ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>* group) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get(), "<.ctor>b__11_4",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, false>(this, ___internal_method, group);
}
inline ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_5(
    ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>* group) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get(), "<.ctor>b__11_5",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>, false>(
      this, ___internal_method, group);
}
inline ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_6(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo* info) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get(), "<.ctor>b__11_6",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, false>(this, ___internal_method, info);
}
inline ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_7(
    ::System::Linq::IGrouping_2<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>* group) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get(), "<.ctor>b__11_7",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Linq::IGrouping_2<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, false>(this, ___internal_method, group);
}
inline ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::__ctor_b__11_8(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo* trackInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>::get(), "<.ctor>b__11_8",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack*, false>(this, ___internal_method, trackInfo);
}
inline ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c* BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel___c::EnvironmentTrackDefinitionModel___c() {}
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)(
    ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*)>(&::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::_ctor)> {
  constexpr static std::size_t size = 0xe9c;
  constexpr static std::size_t addrs = 0x31c60f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_basicEventTrackInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*> (
        ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)()>(&::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_basicEventTrackInfos)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x31c6f8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                                 "get_basicEventTrackInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_visibleTrackInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*> (
        ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)()>(&::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_visibleTrackInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31c6fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                                 "get_visibleTrackInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo* (
    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)(::GlobalNamespace::BasicBeatmapEventType)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_Item)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x31c6fac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "get_Item",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*> (
        ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)(::BeatSaber::TrackDefinitions::EventTrackDefinitionSO*)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_Item)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x31c7020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "get_Item",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_pageCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)()>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_pageCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x31c7084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                                 "get_pageCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>* (
        ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage)>(
        &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_Item)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x31c709c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "get_Item",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.GetToolbarTypesOnPage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>* (
    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::GetToolbarTypesOnPage)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x31c70cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "GetToolbarTypesOnPage",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_eventBoxGroupPageInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo*>* (
        ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)()>(&::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_eventBoxGroupPageInfos)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x31c70fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                                 "get_eventBoxGroupPageInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_groupIdToPageMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<int32_t, int32_t>* (
    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)()>(&::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_groupIdToPageMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31c7114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                                 "get_groupIdToPageMap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_groupIdToTrackInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<int32_t, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>* (
        ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)()>(&::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_groupIdToTrackInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31c711c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                                 "get_groupIdToTrackInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.GetSpawnableEventBoxGroupTracks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<
    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack*>* (::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)(int32_t)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::GetSpawnableEventBoxGroupTracks)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x31c7124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "GetSpawnableEventBoxGroupTracks",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_beatmapTypeToTrackInfoMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
                         ::Array<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>*> (
        ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)()>(&::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_beatmapTypeToTrackInfoMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31c71e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                                 "get_beatmapTypeToTrackInfoMap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.GetSpawnableEventBoxGroupTypeTracksForTrackInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<
    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack*>* (*)(::BeatSaber::TrackDefinitions::
                                                                                                                          EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::GetSpawnableEventBoxGroupTypeTracksForTrackInfo)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x31c71f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "GetSpawnableEventBoxGroupTypeTracksForTrackInfo",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____trackDefinition)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapTypeToTrackInfoMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<
    ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>,
    ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>>*&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__trackDefinitionToTrackInfoListMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackDefinitionToTrackInfoListMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<
    ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>,
    ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>>* const&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__trackDefinitionToTrackInfoListMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackDefinitionToTrackInfoListMap;
}
constexpr void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_set__trackDefinitionToTrackInfoListMap(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>,
                                                 ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*,
                                                          ::Array<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____trackDefinitionToTrackInfoListMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
                   ::Array<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>*>&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__trackPageToTrackInfoListMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackPageToTrackInfoListMap;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
                   ::Array<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>*> const&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__trackPageToTrackInfoListMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackPageToTrackInfoListMap;
}
constexpr void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_set__trackPageToTrackInfoListMap(
    ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
             ::Array<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____trackPageToTrackInfoListMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*,
                   ::Array<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*>*>&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__trackPageToTrackToolbarTypeMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackPageToTrackToolbarTypeMap;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*,
                   ::Array<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*>*> const&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__trackPageToTrackToolbarTypeMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackPageToTrackToolbarTypeMap;
}
constexpr void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_set__trackPageToTrackToolbarTypeMap(
    ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*,
             ::Array<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____trackPageToTrackToolbarTypeMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__visibleTrackInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visibleTrackInfos;
}
constexpr ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*,
                   ::Array<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*> const&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__visibleTrackInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visibleTrackInfos;
}
constexpr void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_set__visibleTrackInfos(
    ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____visibleTrackInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____groupIdToPageMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____groupIdToTrackMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spawnableEventBoxGroupTracksByPageMap)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::_ctor(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO* trackDefinition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trackDefinition);
}
inline ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_basicEventTrackInfos() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                               "get_basicEventTrackInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>, false>(
      this, ___internal_method);
}
inline ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_visibleTrackInfos() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                               "get_visibleTrackInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>, false>(
      this, ___internal_method);
}
inline ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_Item(::GlobalNamespace::BasicBeatmapEventType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, false>(this, ___internal_method, type);
}
inline ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_Item(::BeatSaber::TrackDefinitions::EventTrackDefinitionSO* trackDefinition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>, false>(
      this, ___internal_method, trackDefinition);
}
inline int32_t BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_pageCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                               "get_pageCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_Item(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage page) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*, false>(
      this, ___internal_method, page);
}
inline ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::GetToolbarTypesOnPage(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage page) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "GetToolbarTypesOnPage",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*, false>(this, ___internal_method, page);
}
inline ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo*>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_eventBoxGroupPageInfos() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                               "get_eventBoxGroupPageInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo*>*, false>(this,
                                                                                                                                                                                  ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<int32_t, int32_t>* BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_groupIdToPageMap() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                               "get_groupIdToPageMap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<int32_t, int32_t>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<int32_t, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_groupIdToTrackInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                               "get_groupIdToTrackInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<int32_t, ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>*,
                                             false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack*>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::GetSpawnableEventBoxGroupTracks(int32_t pageId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "GetSpawnableEventBoxGroupTracks",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTrack*>*,
                                             false>(this, ___internal_method, pageId);
}
inline ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
                ::Array<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>*>
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_beatmapTypeToTrackInfoMap() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                               "get_beatmapTypeToTrackInfoMap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*,
                                                      ::Array<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>*>,
                                             false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack*>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::GetSpawnableEventBoxGroupTypeTracksForTrackInfo(
    ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo* trackInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "GetSpawnableEventBoxGroupTypeTracksForTrackInfo",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel_SpawnableEventBoxGroupTypeTrack*>*,
                                             false>(nullptr, ___internal_method, trackInfo);
}
inline ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::New_ctor(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO* trackDefinition) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(trackDefinition));
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::EnvironmentTrackDefinitionModel() {}
