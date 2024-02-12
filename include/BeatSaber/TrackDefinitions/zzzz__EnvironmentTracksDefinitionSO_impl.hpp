#pragma once
#include "BeatSaber/TrackDefinitions/DataModels/zzzz__TrackToolbarType_impl.hpp"
#include "BeatSaber/TrackDefinitions/zzzz__EnvironmentTracksDefinitionSO_impl.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/TrackDefinitions/zzzz__EnvironmentTracksDefinitionSO_def.hpp"
#include "BeatSaber/TrackDefinitions/DataModels/zzzz__TrackToolbarType_def.hpp"
#include "BeatSaber/TrackDefinitions/zzzz__EnvironmentTracksDefinitionSO_def.hpp"
#include "BeatSaber/TrackDefinitions/zzzz__EventTrackDefinitionSO_def.hpp"
#include "BeatSaber/TrackDefinitions/zzzz__LightGroupDuplicationGroup_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage::__EnvironmentTracksDefinitionSO__BasicEventTrackPage(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage::__EnvironmentTracksDefinitionSO__BasicEventTrackPage() {}
constexpr ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage::Page1{
  static_cast<int32_t>(0x0)
};
constexpr ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage::Page2{
  static_cast<int32_t>(0x1)
};
constexpr ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage::Count{
  static_cast<int32_t>(0x2)
};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis() {}
constexpr ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis::NoOverride{
  static_cast<int32_t>(0x0)
};
constexpr ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis::X{
  static_cast<int32_t>(0x1)
};
constexpr ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis::Y{
  static_cast<int32_t>(0x2)
};
constexpr ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis::Z{
  static_cast<int32_t>(0x3)
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo.get_trackName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::get_trackName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                                                 "get_trackName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo.get_basicBeatmapEventType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BasicBeatmapEventType (::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::*)()>(
        &::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::get_basicBeatmapEventType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                                                 "get_basicBeatmapEventType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo.get_trackToolbarType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType (::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::*)()>(
        &::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::get_trackToolbarType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                                                 "get_trackToolbarType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo.get_trackDefinition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO> (::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::*)()>(
        &::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::get_trackDefinition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                                                 "get_trackDefinition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo.get_basicEventTrackPage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage (::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::*)()>(
        &::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::get_basicEventTrackPage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                                                 "get_basicEventTrackPage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe3d3a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__cordl_internal_get__trackName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackName;
}
constexpr ::StringW const& BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__cordl_internal_get__trackName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackName;
}
constexpr void BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__cordl_internal_set__trackName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____trackName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__cordl_internal_get__beatmapEventType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventType;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__cordl_internal_get__beatmapEventType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventType;
}
constexpr void BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__cordl_internal_set__beatmapEventType(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapEventType = value;
}
constexpr ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType& BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__cordl_internal_get__trackToolbarType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackToolbarType;
}
constexpr ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType const&
BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__cordl_internal_get__trackToolbarType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackToolbarType;
}
constexpr void
BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__cordl_internal_set__trackToolbarType(::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trackToolbarType = value;
}
constexpr ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>& BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__cordl_internal_get__trackDefinition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackDefinition;
}
constexpr ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO> const&
BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__cordl_internal_get__trackDefinition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackDefinition;
}
constexpr void
BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__cordl_internal_set__trackDefinition(::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____trackDefinition)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage&
BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__cordl_internal_get__basicEventTrackPage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____basicEventTrackPage;
}
constexpr ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage const&
BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__cordl_internal_get__basicEventTrackPage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____basicEventTrackPage;
}
constexpr void BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__cordl_internal_set__basicEventTrackPage(
    ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____basicEventTrackPage = value;
}
inline ::StringW BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::get_trackName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                                               "get_trackName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BasicBeatmapEventType BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::get_basicBeatmapEventType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                                               "get_basicBeatmapEventType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BasicBeatmapEventType, false>(this, ___internal_method);
}
inline ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::get_trackToolbarType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                                               "get_trackToolbarType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, false>(this, ___internal_method);
}
inline ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO> BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::get_trackDefinition() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                                               "get_trackDefinition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, false>(this, ___internal_method);
}
inline ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage
BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::get_basicEventTrackPage() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                                               "get_basicEventTrackPage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage, false>(this, ___internal_method);
}
inline ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>());
}
inline void BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo() {}
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo.get_eventBoxGroupPageName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::*)()>(
    &::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::get_eventBoxGroupPageName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d3f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>::get(),
                                                 "get_eventBoxGroupPageName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo.get_eventBoxGroupTrackInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<
    ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>* (::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::*)()>(
    &::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::get_eventBoxGroupTrackInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>::get(),
                                                 "get_eventBoxGroupTrackInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::*)()>(
    &::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xe3d408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::__cordl_internal_get__eventBoxGroupPageName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventBoxGroupPageName;
}
constexpr ::StringW const& BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::__cordl_internal_get__eventBoxGroupPageName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventBoxGroupPageName;
}
constexpr void BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::__cordl_internal_set__eventBoxGroupPageName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eventBoxGroupPageName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*&
BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::__cordl_internal_get__eventBoxGroupTrackInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventBoxGroupTrackInfos;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*> const&
BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::__cordl_internal_get__eventBoxGroupTrackInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventBoxGroupTrackInfos;
}
constexpr void BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::__cordl_internal_set__eventBoxGroupTrackInfos(
    ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eventBoxGroupTrackInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::get_eventBoxGroupPageName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>::get(),
                                               "get_eventBoxGroupPageName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*
BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::get_eventBoxGroupTrackInfos() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>::get(),
                                               "get_eventBoxGroupTrackInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*, false>(
      this, ___internal_method);
}
inline ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo* BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>());
}
inline void BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo() {}
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_groupName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_groupName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d4ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_groupName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.set_groupName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)(::StringW)>(
    &::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::set_groupName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d4b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(), "set_groupName",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_lightGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::GlobalNamespace::LightGroupSO> (::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
        &::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_lightGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d4bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_lightGroup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.set_lightGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)(
    ::GlobalNamespace::LightGroupSO*)>(&::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::set_lightGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d4c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(), "set_lightGroup",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroupSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_showColorTrack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showColorTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d4cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_showColorTrack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_showRotationTrack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showRotationTrack)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe3d4d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_showRotationTrack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_showTranslationTrack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showTranslationTrack)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe3d4fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_showTranslationTrack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_showRotationXTrack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showRotationXTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_showRotationXTrack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_showRotationYTrack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showRotationYTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d52c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_showRotationYTrack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_showRotationZTrack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showRotationZTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_showRotationZTrack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_overrideDefaultRotationAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis (::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
        &::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_overrideDefaultRotationAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d53c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_overrideDefaultRotationAxis", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_showTranslationXTrack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showTranslationXTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_showTranslationXTrack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_showTranslationYTrack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showTranslationYTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d54c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_showTranslationYTrack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_showTranslationZTrack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showTranslationZTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_showTranslationZTrack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_overrideDefaultTranslationAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis (::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
        &::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_overrideDefaultTranslationAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d55c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_overrideDefaultTranslationAxis", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_showFloatFxTrack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showFloatFxTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_showFloatFxTrack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_enableDuplicate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_enableDuplicate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d56c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_enableDuplicate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_targetLightGroups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>, ::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*> (
    ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_targetLightGroups)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xe3d574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_targetLightGroups", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xe3d5f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_get__groupName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupName;
}
constexpr ::StringW const& BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_get__groupName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupName;
}
constexpr void BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_set__groupName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____groupName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::LightGroupSO>& BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_get__lightGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroup;
}
constexpr ::UnityW<::GlobalNamespace::LightGroupSO> const& BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_get__lightGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroup;
}
constexpr void BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_set__lightGroup(::UnityW<::GlobalNamespace::LightGroupSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_get__showColorTrack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showColorTrack;
}
constexpr bool const& BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_get__showColorTrack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showColorTrack;
}
constexpr void BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_set__showColorTrack(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showColorTrack = value;
}
constexpr bool& BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_get__showRotationXTrack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showRotationXTrack;
}
constexpr bool const& BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_get__showRotationXTrack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showRotationXTrack;
}
constexpr void BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_set__showRotationXTrack(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showRotationXTrack = value;
}
constexpr bool& BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_get__showRotationYTrack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showRotationYTrack;
}
constexpr bool const& BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_get__showRotationYTrack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showRotationYTrack;
}
constexpr void BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_set__showRotationYTrack(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showRotationYTrack = value;
}
constexpr bool& BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_get__showRotationZTrack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showRotationZTrack;
}
constexpr bool const& BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_get__showRotationZTrack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showRotationZTrack;
}
constexpr void BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_set__showRotationZTrack(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showRotationZTrack = value;
}
constexpr ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis&
BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_get__overrideDefaultRotationAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideDefaultRotationAxis;
}
constexpr ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis const&
BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_get__overrideDefaultRotationAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideDefaultRotationAxis;
}
constexpr void BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_set__overrideDefaultRotationAxis(
    ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideDefaultRotationAxis = value;
}
constexpr bool& BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_get__showTranslationXTrack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showTranslationXTrack;
}
constexpr bool const& BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_get__showTranslationXTrack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showTranslationXTrack;
}
constexpr void BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_set__showTranslationXTrack(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showTranslationXTrack = value;
}
constexpr bool& BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_get__showTranslationYTrack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showTranslationYTrack;
}
constexpr bool const& BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_get__showTranslationYTrack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showTranslationYTrack;
}
constexpr void BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_set__showTranslationYTrack(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showTranslationYTrack = value;
}
constexpr bool& BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_get__showTranslationZTrack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showTranslationZTrack;
}
constexpr bool const& BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_get__showTranslationZTrack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showTranslationZTrack;
}
constexpr void BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_set__showTranslationZTrack(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showTranslationZTrack = value;
}
constexpr ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis&
BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_get__overrideDefaultTranslationAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideDefaultTranslationAxis;
}
constexpr ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis const&
BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_get__overrideDefaultTranslationAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideDefaultTranslationAxis;
}
constexpr void BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_set__overrideDefaultTranslationAxis(
    ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideDefaultTranslationAxis = value;
}
constexpr bool& BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_get__showFloatFxTrack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showFloatFxTrack;
}
constexpr bool const& BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_get__showFloatFxTrack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showFloatFxTrack;
}
constexpr void BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_set__showFloatFxTrack(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showFloatFxTrack = value;
}
constexpr bool& BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_get__enableDuplicate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableDuplicate;
}
constexpr bool const& BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_get__enableDuplicate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableDuplicate;
}
constexpr void BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_set__enableDuplicate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enableDuplicate = value;
}
constexpr ::UnityW<::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup>&
BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_get__duplicationGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duplicationGroup;
}
constexpr ::UnityW<::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup> const&
BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_get__duplicationGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duplicationGroup;
}
constexpr void BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_set__duplicationGroup(
    ::UnityW<::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____duplicationGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>, ::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*>&
BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_get__targetLightGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetLightGroups;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>, ::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*> const&
BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_get__targetLightGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetLightGroups;
}
constexpr void BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__cordl_internal_set__targetLightGroups(
    ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>, ::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____targetLightGroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_groupName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_groupName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::set_groupName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(), "set_groupName",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::LightGroupSO> BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_lightGroup() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_lightGroup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LightGroupSO>, false>(this, ___internal_method);
}
inline void BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::set_lightGroup(::GlobalNamespace::LightGroupSO* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(), "set_lightGroup",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroupSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showColorTrack() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_showColorTrack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showRotationTrack() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_showRotationTrack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showTranslationTrack() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_showTranslationTrack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showRotationXTrack() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_showRotationXTrack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showRotationYTrack() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_showRotationYTrack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showRotationZTrack() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_showRotationZTrack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis
BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_overrideDefaultRotationAxis() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_overrideDefaultRotationAxis", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis, false>(this, ___internal_method);
}
inline bool BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showTranslationXTrack() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_showTranslationXTrack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showTranslationYTrack() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_showTranslationYTrack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showTranslationZTrack() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_showTranslationZTrack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis
BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_overrideDefaultTranslationAxis() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_overrideDefaultTranslationAxis", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis, false>(this, ___internal_method);
}
inline bool BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showFloatFxTrack() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_showFloatFxTrack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_enableDuplicate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_enableDuplicate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>, ::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*>
BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_targetLightGroups() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_targetLightGroups", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>, ::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*>, false>(this, ___internal_method);
}
inline ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo* BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>());
}
inline void BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo() {}
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO.get_environmentInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::EnvironmentInfoSO> (::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::*)()>(
    &::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::get_environmentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*>::get(), "get_environmentInfo",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO.get_basicEventTrackInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> (
        ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::*)()>(&::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::get_basicEventTrackInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*>::get(),
                                                 "get_basicEventTrackInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO.get_eventBoxGroupPageInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>* (
        ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::*)()>(&::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::get_eventBoxGroupPageInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*>::get(),
                                                 "get_eventBoxGroupPageInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::*)()>(
    &::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO>& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::__cordl_internal_get__environmentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentInfo;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO> const& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::__cordl_internal_get__environmentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentInfo;
}
constexpr void BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::__cordl_internal_set__environmentInfo(::UnityW<::GlobalNamespace::EnvironmentInfoSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                   ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>&
BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::__cordl_internal_get__basicEventTrackInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____basicEventTrackInfos;
}
constexpr ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                   ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> const&
BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::__cordl_internal_get__basicEventTrackInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____basicEventTrackInfos;
}
constexpr void BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::__cordl_internal_set__basicEventTrackInfos(
    ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____basicEventTrackInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>*&
BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::__cordl_internal_get__eventBoxGroupPageInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventBoxGroupPageInfos;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>*> const&
BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::__cordl_internal_get__eventBoxGroupPageInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventBoxGroupPageInfos;
}
constexpr void BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::__cordl_internal_set__eventBoxGroupPageInfos(
    ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eventBoxGroupPageInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::get_environmentInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*>::get(), "get_environmentInfo",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, false>(this, ___internal_method);
}
inline ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::get_basicEventTrackInfos() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*>::get(), "get_basicEventTrackInfos",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>,
      false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>*
BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::get_eventBoxGroupPageInfos() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*>::get(),
                                               "get_eventBoxGroupPageInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>*, false>(
      this, ___internal_method);
}
inline ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO* BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*>());
}
inline void BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::EnvironmentTracksDefinitionSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
