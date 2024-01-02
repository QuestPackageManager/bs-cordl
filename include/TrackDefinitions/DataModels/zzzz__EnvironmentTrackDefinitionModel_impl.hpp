#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "TrackDefinitions/DataModels/zzzz__EventBoxGroupType_impl.hpp"
#include "TrackDefinitions/DataModels/zzzz__EnvironmentTrackDefinitionModel_def.hpp"
#include "TrackDefinitions/DataModels/zzzz__TrackToolbarType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "TrackDefinitions/zzzz__EnvironmentTracksDefinitionSO_def.hpp"
#include "TrackDefinitions/DataModels/zzzz__EnvironmentTrackDefinitionModel_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TrackDefinitions/zzzz__EventTrackDefinitionSO_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_def.hpp"
#include "TrackDefinitions/DataModels/zzzz__EventBoxGroupType_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Linq/zzzz__IGrouping_2_def.hpp"
//  Writing Method size for method: ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack::*)(
    ::GlobalNamespace::LightGroupSO*, ::StringW, ::TrackDefinitions::DataModels::EventBoxGroupType)>(
    &::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2a0c4ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>::get(),
                                    ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroupSO*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TrackDefinitions::DataModels::EventBoxGroupType>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::LightGroupSO*& TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack::__get_lightGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroup;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightGroupSO*> const&
TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack::__get_lightGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroup;
}
constexpr void TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack::__set_lightGroup(::GlobalNamespace::LightGroupSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack::__get_groupName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupName;
}
constexpr ::StringW const& TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack::__get_groupName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupName;
}
constexpr void TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack::__set_groupName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___groupName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TrackDefinitions::DataModels::EventBoxGroupType& TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack::__get_trackType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trackType;
}
constexpr ::TrackDefinitions::DataModels::EventBoxGroupType const& TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack::__get_trackType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trackType;
}
constexpr void TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack::__set_trackType(::TrackDefinitions::DataModels::EventBoxGroupType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trackType = value;
}
inline ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*
TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack::New_ctor(::GlobalNamespace::LightGroupSO* lightGroup, ::StringW groupName,
                                                                                                           ::TrackDefinitions::DataModels::EventBoxGroupType trackType) {
  return THROW_UNLESS(::il2cpp_utils::New<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>(lightGroup, groupName, trackType));
}
inline void TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack::_ctor(::GlobalNamespace::LightGroupSO* lightGroup, ::StringW groupName,
                                                                                                                    ::TrackDefinitions::DataModels::EventBoxGroupType trackType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>::get(),
                                  ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroupSO*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TrackDefinitions::DataModels::EventBoxGroupType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightGroup, groupName, trackType);
}
// Ctor Parameters []
constexpr ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack() {}
//  Writing Method size for method: ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::*)(
    ::GlobalNamespace::LightGroupSO*, ::StringW, int32_t,
    ::System::Collections::Generic::IReadOnlyList_1<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>*)>(
    &::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2a0c528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>::get(), ".ctor",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroupSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::IReadOnlyList_1<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::LightGroupSO*& TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::__get_lightGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroup;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightGroupSO*> const&
TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::__get_lightGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroup;
}
constexpr void TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::__set_lightGroup(::GlobalNamespace::LightGroupSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::__get_groupName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupName;
}
constexpr ::StringW const& TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::__get_groupName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupName;
}
constexpr void TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::__set_groupName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___groupName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::__get_tracksCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tracksCount;
}
constexpr int32_t const& TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::__get_tracksCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tracksCount;
}
constexpr void TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::__set_tracksCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tracksCount = value;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>*&
TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::__get_eventBoxGroupTracks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventBoxGroupTracks;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::IReadOnlyList_1<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>*> const&
TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::__get_eventBoxGroupTracks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventBoxGroupTracks;
}
constexpr void TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::__set_eventBoxGroupTracks(
    ::System::Collections::Generic::IReadOnlyList_1<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___eventBoxGroupTracks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*
TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::New_ctor(
    ::GlobalNamespace::LightGroupSO* lightGroup, ::StringW groupName, int32_t tracksCount,
    ::System::Collections::Generic::IReadOnlyList_1<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>* eventBoxGroupTracks) {
  return THROW_UNLESS(::il2cpp_utils::New<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>(lightGroup, groupName, tracksCount, eventBoxGroupTracks));
}
inline void TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::_ctor(
    ::GlobalNamespace::LightGroupSO* lightGroup, ::StringW groupName, int32_t tracksCount,
    ::System::Collections::Generic::IReadOnlyList_1<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>* eventBoxGroupTracks) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>::get(), ".ctor",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroupSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::IReadOnlyList_1<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightGroup, groupName, tracksCount, eventBoxGroupTracks);
}
// Ctor Parameters []
constexpr ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack() {}
//  Writing Method size for method: ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::*)()>(
    &::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0c5d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c.__ctor_b__11_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::*)(
    ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*)>(&::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a0c5d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c.__ctor_b__11_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BasicBeatmapEventType (::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::*)(
    ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*)>(&::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a0c5f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_1", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c.__ctor_b__11_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* (
    ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::*)(::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*)>(
    &::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0c610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_2", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c.__ctor_b__11_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TrackDefinitions::EventTrackDefinitionSO* (
    ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::*)(::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*)>(
    &::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_3)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a0c618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_3", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c.__ctor_b__11_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TrackDefinitions::EventTrackDefinitionSO* (
    ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::*)(::System::Linq::IGrouping_2<::TrackDefinitions::EventTrackDefinitionSO*,
                                                                                                           ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*)>(
    &::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_4)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2a0c630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_4", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Linq::IGrouping_2<::TrackDefinitions::EventTrackDefinitionSO*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c.__ctor_b__11_5
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> (
        ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::*)(
        ::System::Linq::IGrouping_2<::TrackDefinitions::EventTrackDefinitionSO*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*)>(
        &::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_5)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2a0c6cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_5", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Linq::IGrouping_2<::TrackDefinitions::EventTrackDefinitionSO*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c.__ctor_b__11_6
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TrackDefinitions::DataModels::TrackToolbarType (
    ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::*)(::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*)>(
    &::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_6)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a0c714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_6", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c.__ctor_b__11_7
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::TrackDefinitions::DataModels::TrackToolbarType (::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::*)(
        ::System::Linq::IGrouping_2<::TrackDefinitions::DataModels::TrackToolbarType, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*)>(
        &::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_7)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2a0c72c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_7", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Linq::IGrouping_2<::TrackDefinitions::DataModels::TrackToolbarType, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c.__ctor_b__11_8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack* (
    ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::*)(::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*)>(
    &::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_8)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2a0c7c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_8", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get() })));
    return ___internal_method;
  }
};
inline void TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::setStaticF___9(::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c* value) {
  ::cordl_internals::setStaticField<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>(
      std::forward<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>(value));
}
inline ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c* TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>();
}
inline void
TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::setStaticF___9__11_0(::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, bool>*, "<>9__11_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>(
      std::forward<::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, bool>*>(value));
}
inline ::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, bool>* TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::getStaticF___9__11_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, bool>*, "<>9__11_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>();
}
inline void TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::setStaticF___9__11_1(
    ::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::GlobalNamespace::BasicBeatmapEventType>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::GlobalNamespace::BasicBeatmapEventType>*, "<>9__11_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>(
      std::forward<::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::GlobalNamespace::BasicBeatmapEventType>*>(value));
}
inline ::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::GlobalNamespace::BasicBeatmapEventType>*
TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::getStaticF___9__11_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::GlobalNamespace::BasicBeatmapEventType>*, "<>9__11_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>();
}
inline void TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::setStaticF___9__11_2(
    ::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*, "<>9__11_2",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>(
      std::forward<::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>(value));
}
inline ::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*
TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::getStaticF___9__11_2() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*, "<>9__11_2",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>();
}
inline void TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::setStaticF___9__11_3(
    ::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::TrackDefinitions::EventTrackDefinitionSO*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::TrackDefinitions::EventTrackDefinitionSO*>*, "<>9__11_3",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>(
      std::forward<::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::TrackDefinitions::EventTrackDefinitionSO*>*>(value));
}
inline ::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::TrackDefinitions::EventTrackDefinitionSO*>*
TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::getStaticF___9__11_3() {
  return ::cordl_internals::getStaticField<::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::TrackDefinitions::EventTrackDefinitionSO*>*, "<>9__11_3",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>();
}
inline void TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::setStaticF___9__11_4(
    ::System::Func_2<::System::Linq::IGrouping_2<::TrackDefinitions::EventTrackDefinitionSO*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                     ::TrackDefinitions::EventTrackDefinitionSO*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::Linq::IGrouping_2<::TrackDefinitions::EventTrackDefinitionSO*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                       ::TrackDefinitions::EventTrackDefinitionSO*>*,
      "<>9__11_4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>(
      std::forward<::System::Func_2<::System::Linq::IGrouping_2<::TrackDefinitions::EventTrackDefinitionSO*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                                    ::TrackDefinitions::EventTrackDefinitionSO*>*>(value));
}
inline ::System::Func_2<::System::Linq::IGrouping_2<::TrackDefinitions::EventTrackDefinitionSO*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                        ::TrackDefinitions::EventTrackDefinitionSO*>*
TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::getStaticF___9__11_4() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::Linq::IGrouping_2<::TrackDefinitions::EventTrackDefinitionSO*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                       ::TrackDefinitions::EventTrackDefinitionSO*>*,
      "<>9__11_4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>();
}
inline void TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::setStaticF___9__11_5(
    ::System::Func_2<::System::Linq::IGrouping_2<::TrackDefinitions::EventTrackDefinitionSO*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                     ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::Linq::IGrouping_2<::TrackDefinitions::EventTrackDefinitionSO*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                       ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>*,
      "<>9__11_5", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>(
      std::forward<
          ::System::Func_2<::System::Linq::IGrouping_2<::TrackDefinitions::EventTrackDefinitionSO*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                           ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>*>(
          value));
}
inline ::System::Func_2<::System::Linq::IGrouping_2<::TrackDefinitions::EventTrackDefinitionSO*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                        ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>*
TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::getStaticF___9__11_5() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::Linq::IGrouping_2<::TrackDefinitions::EventTrackDefinitionSO*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                       ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>*,
      "<>9__11_5", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>();
}
inline void TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::setStaticF___9__11_6(
    ::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::TrackDefinitions::DataModels::TrackToolbarType>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::TrackDefinitions::DataModels::TrackToolbarType>*, "<>9__11_6",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>(
      std::forward<::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::TrackDefinitions::DataModels::TrackToolbarType>*>(value));
}
inline ::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::TrackDefinitions::DataModels::TrackToolbarType>*
TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::getStaticF___9__11_6() {
  return ::cordl_internals::getStaticField<::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::TrackDefinitions::DataModels::TrackToolbarType>*, "<>9__11_6",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>();
}
inline void TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::setStaticF___9__11_7(
    ::System::Func_2<::System::Linq::IGrouping_2<::TrackDefinitions::DataModels::TrackToolbarType, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                     ::TrackDefinitions::DataModels::TrackToolbarType>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::Linq::IGrouping_2<::TrackDefinitions::DataModels::TrackToolbarType, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                       ::TrackDefinitions::DataModels::TrackToolbarType>*,
      "<>9__11_7", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>(
      std::forward<::System::Func_2<::System::Linq::IGrouping_2<::TrackDefinitions::DataModels::TrackToolbarType, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                                    ::TrackDefinitions::DataModels::TrackToolbarType>*>(value));
}
inline ::System::Func_2<::System::Linq::IGrouping_2<::TrackDefinitions::DataModels::TrackToolbarType, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                        ::TrackDefinitions::DataModels::TrackToolbarType>*
TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::getStaticF___9__11_7() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::Linq::IGrouping_2<::TrackDefinitions::DataModels::TrackToolbarType, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                       ::TrackDefinitions::DataModels::TrackToolbarType>*,
      "<>9__11_7", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>();
}
inline void TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::setStaticF___9__11_8(
    ::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*, ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*
        value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*, ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*,
      "<>9__11_8", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>(
      std::forward<::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*,
                                    ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*>(value));
}
inline ::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*, ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*
TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::getStaticF___9__11_8() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*, ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*,
      "<>9__11_8", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get>();
}
inline ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c* TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>());
}
inline void TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_0(::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* info) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, info);
}
inline ::GlobalNamespace::BasicBeatmapEventType
TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_1(::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* trackInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_1", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BasicBeatmapEventType, false>(this, ___internal_method, trackInfo);
}
inline ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*
TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_2(::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* trackInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_2", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, false>(this, ___internal_method, trackInfo);
}
inline ::TrackDefinitions::EventTrackDefinitionSO*
TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_3(::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* trackInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_3", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::TrackDefinitions::EventTrackDefinitionSO*, false>(this, ___internal_method, trackInfo);
}
inline ::TrackDefinitions::EventTrackDefinitionSO* TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_4(
    ::System::Linq::IGrouping_2<::TrackDefinitions::EventTrackDefinitionSO*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>* group) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_4", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Linq::IGrouping_2<::TrackDefinitions::EventTrackDefinitionSO*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::TrackDefinitions::EventTrackDefinitionSO*, false>(this, ___internal_method, group);
}
inline ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_5(
    ::System::Linq::IGrouping_2<::TrackDefinitions::EventTrackDefinitionSO*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>* group) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_5", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Linq::IGrouping_2<::TrackDefinitions::EventTrackDefinitionSO*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>, false>(
      this, ___internal_method, group);
}
inline ::TrackDefinitions::DataModels::TrackToolbarType
TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_6(::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* info) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_6", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::TrackDefinitions::DataModels::TrackToolbarType, false>(this, ___internal_method, info);
}
inline ::TrackDefinitions::DataModels::TrackToolbarType TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_7(
    ::System::Linq::IGrouping_2<::TrackDefinitions::DataModels::TrackToolbarType, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>* group) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_7", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Linq::IGrouping_2<::TrackDefinitions::DataModels::TrackToolbarType, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::TrackDefinitions::DataModels::TrackToolbarType, false>(this, ___internal_method, group);
}
inline ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*
TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__ctor_b__11_8(::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo* trackInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*>::get(), "<.ctor>b__11_8", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*, false>(this, ___internal_method, trackInfo);
}
// Ctor Parameters []
constexpr ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c::__EnvironmentTrackDefinitionModel____c() {}
//  Writing Method size for method: ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)(
    ::TrackDefinitions::EnvironmentTracksDefinitionSO*)>(&::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::_ctor)> {
  constexpr static std::size_t size = 0xec0;
  constexpr static std::size_t addrs = 0x2a0b070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TrackDefinitions::EnvironmentTracksDefinitionSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_basicEventTrackInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> (
        ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)()>(&::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_basicEventTrackInfos)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a0bf30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                                 "get_basicEventTrackInfos", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_visibleTrackInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> (
        ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)()>(&::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_visibleTrackInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0bf4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                                 "get_visibleTrackInfos", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* (
    ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)(::GlobalNamespace::BasicBeatmapEventType)>(&::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_Item)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2a0bf54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "get_Item", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> (
        ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)(::TrackDefinitions::EventTrackDefinitionSO*)>(&::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_Item)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a0bfc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "get_Item", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TrackDefinitions::EventTrackDefinitionSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_pageCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)()>(
    &::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_pageCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a0c01c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "get_pageCount",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>* (
    ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)(::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage)>(
    &::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_Item)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2a0c038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "get_Item", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.GetToolbarTypesOnPage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::TrackToolbarType>* (
    ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)(::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage)>(
    &::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::GetToolbarTypesOnPage)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2a0c068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "GetToolbarTypesOnPage", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_eventBoxGroupPageInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>* (
    ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)()>(&::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_eventBoxGroupPageInfos)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a0c098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                                 "get_eventBoxGroupPageInfos", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_groupIdToPageMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<int32_t, int32_t>* (
    ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)()>(&::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_groupIdToPageMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0c0b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                                 "get_groupIdToPageMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_groupIdToTrackInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<int32_t, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>* (
        ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)()>(&::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_groupIdToTrackInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0c0bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                                 "get_groupIdToTrackInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.GetSpawnableEventBoxGroupTracks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>* (
        ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)(int32_t)>(&::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::GetSpawnableEventBoxGroupTracks)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a0c0c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "GetSpawnableEventBoxGroupTracks",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.get_beatmapTypeToTrackInfoMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                         ::Array<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>*> (
        ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::*)()>(&::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_beatmapTypeToTrackInfoMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0c198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                                 "get_beatmapTypeToTrackInfoMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel.GetSpawnableEventBoxGroupTypeTracksForTrackInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<
    ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>* (*)(::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*)>(
    &::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::GetSpawnableEventBoxGroupTypeTracksForTrackInfo)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x2a0c1a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "GetSpawnableEventBoxGroupTypeTracksForTrackInfo",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get() })));
    return ___internal_method;
  }
};
constexpr ::TrackDefinitions::EnvironmentTracksDefinitionSO*& TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__get__trackDefinition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackDefinition;
}
constexpr ::cordl_internals::to_const_pointer<::TrackDefinitions::EnvironmentTracksDefinitionSO*> const& TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__get__trackDefinition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackDefinition;
}
constexpr void TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__set__trackDefinition(::TrackDefinitions::EnvironmentTracksDefinitionSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____trackDefinition)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BasicBeatmapEventType, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*&
TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__get__beatmapTypeToTrackInfoMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapTypeToTrackInfoMap;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BasicBeatmapEventType, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> const&
TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__get__beatmapTypeToTrackInfoMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapTypeToTrackInfoMap;
}
constexpr void TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__set__beatmapTypeToTrackInfoMap(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BasicBeatmapEventType, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapTypeToTrackInfoMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::TrackDefinitions::EventTrackDefinitionSO*, ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                                                                                             ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>*&
TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__get__trackDefinitionToTrackInfoListMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackDefinitionToTrackInfoListMap;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::TrackDefinitions::EventTrackDefinitionSO*, ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                                                                                       ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>*> const&
TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__get__trackDefinitionToTrackInfoListMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackDefinitionToTrackInfoListMap;
}
constexpr void TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__set__trackDefinitionToTrackInfoListMap(
    ::System::Collections::Generic::Dictionary_2<::TrackDefinitions::EventTrackDefinitionSO*, ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                                                                                       ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____trackDefinitionToTrackInfoListMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                   ::Array<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>*>&
TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__get__trackPageToTrackInfoListMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackPageToTrackInfoListMap;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                   ::Array<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>*> const&
TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__get__trackPageToTrackInfoListMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackPageToTrackInfoListMap;
}
constexpr void TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__set__trackPageToTrackInfoListMap(
    ::ArrayW<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
             ::Array<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____trackPageToTrackInfoListMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::TrackToolbarType>*,
                   ::Array<::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::TrackToolbarType>*>*>&
TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__get__trackPageToTrackToolbarTypeMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackPageToTrackToolbarTypeMap;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::TrackToolbarType>*,
                   ::Array<::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::TrackToolbarType>*>*> const&
TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__get__trackPageToTrackToolbarTypeMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackPageToTrackToolbarTypeMap;
}
constexpr void TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__set__trackPageToTrackToolbarTypeMap(
    ::ArrayW<::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::TrackToolbarType>*,
             ::Array<::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::TrackToolbarType>*>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____trackPageToTrackToolbarTypeMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>&
TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__get__visibleTrackInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visibleTrackInfos;
}
constexpr ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> const&
TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__get__visibleTrackInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visibleTrackInfos;
}
constexpr void TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__set__visibleTrackInfos(
    ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____visibleTrackInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__get__groupIdToPageMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupIdToPageMap;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*> const&
TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__get__groupIdToPageMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupIdToPageMap;
}
constexpr void TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__set__groupIdToPageMap(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____groupIdToPageMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*&
TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__get__groupIdToTrackMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupIdToTrackMap;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*> const&
TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__get__groupIdToTrackMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupIdToTrackMap;
}
constexpr void TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__set__groupIdToTrackMap(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____groupIdToTrackMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,
                                                       ::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*>*&
TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__get__spawnableEventBoxGroupTracksByPageMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnableEventBoxGroupTracksByPageMap;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<
    int32_t, ::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*>*> const&
TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__get__spawnableEventBoxGroupTracksByPageMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnableEventBoxGroupTracksByPageMap;
}
constexpr void TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::__set__spawnableEventBoxGroupTracksByPageMap(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*>*
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spawnableEventBoxGroupTracksByPageMap)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*
TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::New_ctor(::TrackDefinitions::EnvironmentTracksDefinitionSO* trackDefinition) {
  return THROW_UNLESS(::il2cpp_utils::New<::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>(trackDefinition));
}
inline void TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::_ctor(::TrackDefinitions::EnvironmentTracksDefinitionSO* trackDefinition) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TrackDefinitions::EnvironmentTracksDefinitionSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trackDefinition);
}
inline ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_basicEventTrackInfos() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                               "get_basicEventTrackInfos", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>, false>(
      this, ___internal_method);
}
inline ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_visibleTrackInfos() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "get_visibleTrackInfos",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>, false>(
      this, ___internal_method);
}
inline ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*
TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_Item(::GlobalNamespace::BasicBeatmapEventType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "get_Item", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, false>(this, ___internal_method, type);
}
inline ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_Item(::TrackDefinitions::EventTrackDefinitionSO* trackDefinition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "get_Item", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TrackDefinitions::EventTrackDefinitionSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>, false>(
      this, ___internal_method, trackDefinition);
}
inline int32_t TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_pageCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "get_pageCount",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*
TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_Item(::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage page) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "get_Item", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*, false>(this, ___internal_method, page);
}
inline ::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::TrackToolbarType>*
TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::GetToolbarTypesOnPage(::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage page) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "GetToolbarTypesOnPage", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::TrackToolbarType>*, false>(this, ___internal_method, page);
}
inline ::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>*
TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_eventBoxGroupPageInfos() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                               "get_eventBoxGroupPageInfos", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<int32_t, int32_t>* TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_groupIdToPageMap() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "get_groupIdToPageMap",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<int32_t, int32_t>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<int32_t, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*
TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_groupIdToTrackInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                               "get_groupIdToTrackInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<int32_t, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*, false>(
      this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*
TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::GetSpawnableEventBoxGroupTracks(int32_t pageId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "GetSpawnableEventBoxGroupTracks",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*, false>(
      this, ___internal_method, pageId);
}
inline ::ArrayW<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                ::Array<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>*>
TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::get_beatmapTypeToTrackInfoMap() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(),
                                               "get_beatmapTypeToTrackInfoMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                                                      ::Array<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>*>,
                                             false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>*
TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::GetSpawnableEventBoxGroupTypeTracksForTrackInfo(::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo* trackInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>::get(), "GetSpawnableEventBoxGroupTypeTracksForTrackInfo",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>*, false>(
      nullptr, ___internal_method, trackInfo);
}
// Ctor Parameters []
constexpr ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel::EnvironmentTrackDefinitionModel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
