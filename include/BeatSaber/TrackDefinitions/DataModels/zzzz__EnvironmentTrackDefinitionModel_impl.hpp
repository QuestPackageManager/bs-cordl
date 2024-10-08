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
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack::*)(::GlobalNamespace::LightGroupSO*, ::StringW,
                                                                                                                                        ::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType)>(
        &::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2244fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroupSO*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LightGroupSO>& BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack::__cordl_internal_get_lightGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroup;
}
constexpr ::UnityW<::GlobalNamespace::LightGroupSO> const&
BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack::__cordl_internal_get_lightGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroup;
}
constexpr void
BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack::__cordl_internal_set_lightGroup(::UnityW<::GlobalNamespace::LightGroupSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack::__cordl_internal_get_groupName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupName;
}
constexpr ::StringW const& BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack::__cordl_internal_get_groupName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupName;
}
constexpr void BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack::__cordl_internal_set_groupName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___groupName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType&
BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack::__cordl_internal_get_trackType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trackType;
}
constexpr ::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType const&
BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack::__cordl_internal_get_trackType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trackType;
}
constexpr void BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack::__cordl_internal_set_trackType(
    ::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trackType = value;
}
inline ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*
BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack::New_ctor(::GlobalNamespace::LightGroupSO* lightGroup, ::StringW groupName,
                                                                                                                      ::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType trackType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>(lightGroup, groupName, trackType));
}
inline void BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack::_ctor(::GlobalNamespace::LightGroupSO* lightGroup, ::StringW groupName,
                                                                                                                               ::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType trackType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroupSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightGroup, groupName, trackType);
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack() {}
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::*)(
    ::GlobalNamespace::LightGroupSO*, ::StringW, int32_t,
    ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>*)>(
    &::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2245004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroupSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LightGroupSO>& BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::__cordl_internal_get_lightGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroup;
}
constexpr ::UnityW<::GlobalNamespace::LightGroupSO> const&
BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::__cordl_internal_get_lightGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroup;
}
constexpr void
BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::__cordl_internal_set_lightGroup(::UnityW<::GlobalNamespace::LightGroupSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::__cordl_internal_get_groupName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupName;
}
constexpr ::StringW const& BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::__cordl_internal_get_groupName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupName;
}
constexpr void BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::__cordl_internal_set_groupName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___groupName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::__cordl_internal_get_tracksCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tracksCount;
}
constexpr int32_t const& BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::__cordl_internal_get_tracksCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tracksCount;
}
constexpr void BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::__cordl_internal_set_tracksCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tracksCount = value;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>*&
BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::__cordl_internal_get_eventBoxGroupTracks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventBoxGroupTracks;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>*> const&
BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::__cordl_internal_get_eventBoxGroupTracks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventBoxGroupTracks;
}
constexpr void BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::__cordl_internal_set_eventBoxGroupTracks(
    ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___eventBoxGroupTracks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*
BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::New_ctor(
    ::GlobalNamespace::LightGroupSO* lightGroup, ::StringW groupName, int32_t tracksCount,
    ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>* eventBoxGroupTracks) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>(lightGroup, groupName, tracksCount, eventBoxGroupTracks));
}
inline void BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::_ctor(
    ::GlobalNamespace::LightGroupSO* lightGroup, ::StringW groupName, int32_t tracksCount,
    ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>* eventBoxGroupTracks) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroupSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightGroup, groupName, tracksCount, eventBoxGroupTracks);
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack() {}
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::*)()>(
    &::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22450a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c.__ctor_b__11_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::*)(
    ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*)>(&::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22450ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c.__ctor_b__11_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BasicBeatmapEventType (
    ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::*)(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*)>(
    &::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22450cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_1",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c.__ctor_b__11_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* (
    ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::*)(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*)>(
    &::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22450e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_2",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c.__ctor_b__11_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO> (
    ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::*)(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*)>(
    &::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_3)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22450ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_3",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c.__ctor_b__11_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO> (::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::*)(
        ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*)>(
        &::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_4)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2245104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_4",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::IGrouping_2<
            ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c.__ctor_b__11_5
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> (
        ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::*)(
        ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*)>(
    &::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_5)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x22451a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_5",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::IGrouping_2<
            ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c.__ctor_b__11_6
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType (
    ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::*)(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*)>(
    &::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_6)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22451e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_6",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c.__ctor_b__11_7
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType (::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::*)(
        ::System::Linq::IGrouping_2<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*)>(
        &::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_7)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2245200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_7",
                                   std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::IGrouping_2<
                                       ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c.__ctor_b__11_8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack* (
    ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::*)(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*)>(
    &::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_8)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x224529c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_8",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get() })));
    return ___internal_method;
  }
};
inline void BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::setStaticF___9(::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c* value) {
  ::cordl_internals::setStaticField<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>(
      std::forward<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>(value));
}
inline ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c* BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>();
}
inline void BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::setStaticF___9__11_0(
    ::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, bool>*, "<>9__11_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>(
      std::forward<::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, bool>*>(value));
}
inline ::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, bool>*
BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::getStaticF___9__11_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, bool>*, "<>9__11_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>();
}
inline void BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::setStaticF___9__11_1(
    ::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::GlobalNamespace::BasicBeatmapEventType>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::GlobalNamespace::BasicBeatmapEventType>*, "<>9__11_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>(
      std::forward<::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::GlobalNamespace::BasicBeatmapEventType>*>(value));
}
inline ::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::GlobalNamespace::BasicBeatmapEventType>*
BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::getStaticF___9__11_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::GlobalNamespace::BasicBeatmapEventType>*,
                                           "<>9__11_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>();
}
inline void BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::setStaticF___9__11_2(
    ::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*
        value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
      "<>9__11_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>(
      std::forward<::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                    ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>(value));
}
inline ::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*
BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::getStaticF___9__11_2() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
      "<>9__11_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>();
}
inline void BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::setStaticF___9__11_3(
    ::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>*, "<>9__11_3",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>(
      std::forward<::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>*>(value));
}
inline ::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>*
BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::getStaticF___9__11_3() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>*, "<>9__11_3",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>();
}
inline void BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::setStaticF___9__11_4(
    ::System::Func_2<
        ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
        ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>,
                                                                                 ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                                                     ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>*,
                                    "<>9__11_4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>(
      std::forward<::System::Func_2<
          ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
          ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>*>(value));
}
inline ::System::Func_2<
    ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
    ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>*
BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::getStaticF___9__11_4() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<
          ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
          ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>*,
      "<>9__11_4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>();
}
inline void BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::setStaticF___9__11_5(
    ::System::Func_2<
        ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
        ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>*
        value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>,
                                                                                 ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                                                     ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                                              ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>*,
                                    "<>9__11_5", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>(
      std::forward<::System::Func_2<
          ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
          ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                   ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>*>(value));
}
inline ::System::Func_2<
    ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
    ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>*
BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::getStaticF___9__11_5() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<
          ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
          ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                   ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>*,
      "<>9__11_5", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>();
}
inline void BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::setStaticF___9__11_6(
    ::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*, "<>9__11_6",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>(
      std::forward<::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*>(value));
}
inline ::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*
BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::getStaticF___9__11_6() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*, "<>9__11_6",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>();
}
inline void BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::setStaticF___9__11_7(
    ::System::Func_2<::System::Linq::IGrouping_2<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                     ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::Linq::IGrouping_2<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                       ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*,
      "<>9__11_7", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>(
      std::forward<::System::Func_2<
          ::System::Linq::IGrouping_2<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
          ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*>(value));
}
inline ::System::Func_2<::System::Linq::IGrouping_2<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                        ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*
BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::getStaticF___9__11_7() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::Linq::IGrouping_2<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                       ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*,
      "<>9__11_7", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>();
}
inline void BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::setStaticF___9__11_8(
    ::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*,
                     ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*,
                                                     ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*,
                                    "<>9__11_8", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>(
      std::forward<::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*,
                                    ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*>(value));
}
inline ::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*,
                        ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*
BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::getStaticF___9__11_8() {
  return ::cordl_internals::getStaticField<::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*,
                                                            ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*,
                                           "<>9__11_8",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>();
}
inline ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c* BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>());
}
inline void BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_0(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* info) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, info);
}
inline ::GlobalNamespace::BasicBeatmapEventType
BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_1(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* trackInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_1",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BasicBeatmapEventType, false>(this, ___internal_method, trackInfo);
}
inline ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*
BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_2(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* trackInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_2",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, false>(this, ___internal_method, trackInfo);
}
inline ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>
BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_3(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* trackInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_3",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, false>(this, ___internal_method, trackInfo);
}
inline ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO> BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_4(
    ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>* group) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_4",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::IGrouping_2<
          ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, false>(this, ___internal_method, group);
}
inline ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_5(
    ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>* group) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_5",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::IGrouping_2<
          ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>,
      false>(this, ___internal_method, group);
}
inline ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType
BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_6(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* info) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_6",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, false>(this, ___internal_method, info);
}
inline ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_7(
    ::System::Linq::IGrouping_2<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>* group) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_7",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Linq::IGrouping_2<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, false>(this, ___internal_method, group);
}
inline ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*
BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_8(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo* trackInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_8",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*, false>(this, ___internal_method, trackInfo);
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__EnvironmentTrackDefinitionModel____c() {}
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)(
    ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*)>(&::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::_ctor)> {
  constexpr static std::size_t size = 0xe90;
  constexpr static std::size_t addrs = 0x2243b94;

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
    ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> (
        ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)()>(&::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_basicEventTrackInfos)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2244a24;

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
    ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> (
        ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)()>(&::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_visibleTrackInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2244a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                                 "get_visibleTrackInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* (
    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)(::GlobalNamespace::BasicBeatmapEventType)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_Item)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2244a48;

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
    ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> (
        ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)(::BeatSaber::TrackDefinitions::EventTrackDefinitionSO*)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_Item)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2244ab8;

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
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2244b10;

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
    static_cast<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>* (
        ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage)>(
        &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_Item)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2244b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "get_Item",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.GetToolbarTypesOnPage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>* (
    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::GetToolbarTypesOnPage)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2244b5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "GetToolbarTypesOnPage",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_eventBoxGroupPageInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>* (
        ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)()>(&::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_eventBoxGroupPageInfos)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2244b8c;

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
  constexpr static std::size_t addrs = 0x2244ba8;

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
    static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<int32_t, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>* (
        ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)()>(&::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_groupIdToTrackInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2244bb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                                 "get_groupIdToTrackInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.GetSpawnableEventBoxGroupTracks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>* (
        ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)(int32_t)>(
        &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::GetSpawnableEventBoxGroupTracks)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2244bb8;

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
    static_cast<::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                         ::Array<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>*> (
        ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)()>(&::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_beatmapTypeToTrackInfoMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2244c88;

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
    ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>* (*)(::BeatSaber::TrackDefinitions::
                                                                                                                             __EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*)>(
    &::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::GetSpawnableEventBoxGroupTypeTracksForTrackInfo)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x2244c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "GetSpawnableEventBoxGroupTypeTracksForTrackInfo",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get() })));
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
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BasicBeatmapEventType, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__beatmapTypeToTrackInfoMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapTypeToTrackInfoMap;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BasicBeatmapEventType, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> const&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__beatmapTypeToTrackInfoMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapTypeToTrackInfoMap;
}
constexpr void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_set__beatmapTypeToTrackInfoMap(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BasicBeatmapEventType, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapTypeToTrackInfoMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<
    ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>,
    ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>*&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__trackDefinitionToTrackInfoListMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackDefinitionToTrackInfoListMap;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<
    ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                                                              ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>*> const&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__trackDefinitionToTrackInfoListMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackDefinitionToTrackInfoListMap;
}
constexpr void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_set__trackDefinitionToTrackInfoListMap(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>,
                                                 ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                                          ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____trackDefinitionToTrackInfoListMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                   ::Array<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>*>&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__trackPageToTrackInfoListMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackPageToTrackInfoListMap;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                   ::Array<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>*> const&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__trackPageToTrackInfoListMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackPageToTrackInfoListMap;
}
constexpr void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_set__trackPageToTrackInfoListMap(
    ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
             ::Array<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>*>
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
constexpr ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                   ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__visibleTrackInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visibleTrackInfos;
}
constexpr ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                   ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> const&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__visibleTrackInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visibleTrackInfos;
}
constexpr void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_set__visibleTrackInfos(
    ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____visibleTrackInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__groupIdToPageMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupIdToPageMap;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*> const&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__groupIdToPageMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupIdToPageMap;
}
constexpr void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_set__groupIdToPageMap(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____groupIdToPageMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__groupIdToTrackMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupIdToTrackMap;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*> const&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__groupIdToTrackMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupIdToTrackMap;
}
constexpr void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_set__groupIdToTrackMap(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____groupIdToTrackMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<
    int32_t, ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*>*&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__spawnableEventBoxGroupTracksByPageMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnableEventBoxGroupTracksByPageMap;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<
    int32_t, ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*>*> const&
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_get__spawnableEventBoxGroupTracksByPageMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnableEventBoxGroupTracksByPageMap;
}
constexpr void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__cordl_internal_set__spawnableEventBoxGroupTracksByPageMap(
    ::System::Collections::Generic::Dictionary_2<
        int32_t, ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spawnableEventBoxGroupTracksByPageMap)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::New_ctor(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO* trackDefinition) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(trackDefinition));
}
inline void BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::_ctor(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO* trackDefinition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trackDefinition);
}
inline ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_basicEventTrackInfos() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                               "get_basicEventTrackInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>,
      false>(this, ___internal_method);
}
inline ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_visibleTrackInfos() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                               "get_visibleTrackInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>,
      false>(this, ___internal_method);
}
inline ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_Item(::GlobalNamespace::BasicBeatmapEventType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, false>(this, ___internal_method, type);
}
inline ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_Item(::BeatSaber::TrackDefinitions::EventTrackDefinitionSO* trackDefinition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>,
      false>(this, ___internal_method, trackDefinition);
}
inline int32_t BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_pageCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                               "get_pageCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_Item(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage page) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*, false>(
      this, ___internal_method, page);
}
inline ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::GetToolbarTypesOnPage(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage page) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "GetToolbarTypesOnPage",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*, false>(this, ___internal_method, page);
}
inline ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_eventBoxGroupPageInfos() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                               "get_eventBoxGroupPageInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>*, false>(
      this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<int32_t, int32_t>* BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_groupIdToPageMap() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                               "get_groupIdToPageMap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<int32_t, int32_t>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<int32_t, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_groupIdToTrackInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                               "get_groupIdToTrackInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<int32_t, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*,
                                             false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::GetSpawnableEventBoxGroupTracks(int32_t pageId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "GetSpawnableEventBoxGroupTracks",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*,
                                             false>(this, ___internal_method, pageId);
}
inline ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                ::Array<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>*>
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_beatmapTypeToTrackInfoMap() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                               "get_beatmapTypeToTrackInfoMap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                                                      ::Array<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>*>,
                                             false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>*
BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::GetSpawnableEventBoxGroupTypeTracksForTrackInfo(
    ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo* trackInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "GetSpawnableEventBoxGroupTypeTracksForTrackInfo",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>*,
                                             false>(nullptr, ___internal_method, trackInfo);
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::EnvironmentTrackDefinitionModel() {}
