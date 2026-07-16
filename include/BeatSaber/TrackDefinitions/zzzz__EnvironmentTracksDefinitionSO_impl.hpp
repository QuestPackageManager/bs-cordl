#pragma once
// IWYU pragma private; include "BeatSaber/TrackDefinitions/EnvironmentTracksDefinitionSO.hpp"
#include "BeatSaber/TrackDefinitions/DataModels/zzzz__TrackToolbarType_impl.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_impl.hpp"
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
constexpr ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage::EnvironmentTracksDefinitionSO_BasicEventTrackPage(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage::EnvironmentTracksDefinitionSO_BasicEventTrackPage() {}
constexpr ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage::Page1{ static_cast<int32_t>(
    0x0) };
constexpr ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage::Page2{ static_cast<int32_t>(
    0x1) };
constexpr ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage::Count{ static_cast<int32_t>(
    0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis() {}
constexpr ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis::NoOverride{
  static_cast<int32_t>(0x0)
};
constexpr ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis::X{
  static_cast<int32_t>(0x1)
};
constexpr ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis::Y{
  static_cast<int32_t>(0x2)
};
constexpr ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis::Z{
  static_cast<int32_t>(0x3)
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo.get_trackName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::get_trackName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32eac2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>(), { "get_trackName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo.get_basicBeatmapEventType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BasicBeatmapEventType (::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::get_basicBeatmapEventType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32eac34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>(), { "get_basicBeatmapEventType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo.get_trackToolbarType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType (
    ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::*)()>(&::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::get_trackToolbarType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32eac3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>(), { "get_trackToolbarType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo.get_trackDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO> (
    ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::*)()>(&::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::get_trackDefinition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32eac44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>(), { "get_trackDefinition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo.get_basicEventTrackPage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage (::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::*)()>(
        &::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::get_basicEventTrackPage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32eac4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>(), { "get_basicEventTrackPage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x32eac54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::__cordl_internal_get__trackName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackName;
}
constexpr ::StringW const& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::__cordl_internal_get__trackName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackName;
}
constexpr void BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::__cordl_internal_set__trackName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trackName = value;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::__cordl_internal_get__beatmapEventType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventType;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::__cordl_internal_get__beatmapEventType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventType;
}
constexpr void BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::__cordl_internal_set__beatmapEventType(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapEventType = value;
}
constexpr ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::__cordl_internal_get__trackToolbarType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackToolbarType;
}
constexpr ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType const&
BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::__cordl_internal_get__trackToolbarType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackToolbarType;
}
constexpr void
BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::__cordl_internal_set__trackToolbarType(::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trackToolbarType = value;
}
constexpr ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::__cordl_internal_get__trackDefinition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackDefinition;
}
constexpr ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO> const&
BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::__cordl_internal_get__trackDefinition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackDefinition;
}
constexpr void
BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::__cordl_internal_set__trackDefinition(::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trackDefinition = value;
}
constexpr ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage&
BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::__cordl_internal_get__basicEventTrackPage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____basicEventTrackPage;
}
constexpr ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage const&
BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::__cordl_internal_get__basicEventTrackPage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____basicEventTrackPage;
}
constexpr void BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::__cordl_internal_set__basicEventTrackPage(
    ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____basicEventTrackPage = value;
}
inline ::StringW BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::get_trackName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>(), { "get_trackName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::BasicBeatmapEventType BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::get_basicBeatmapEventType() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>(), { "get_basicBeatmapEventType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BasicBeatmapEventType>(this, ___internal_method);
}
inline ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::get_trackToolbarType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>(), { "get_trackToolbarType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>(this, ___internal_method);
}
inline ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO> BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::get_trackDefinition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>(), { "get_trackDefinition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>(this, ___internal_method);
}
inline ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::get_basicEventTrackPage() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>(), { "get_basicEventTrackPage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage>(this, ___internal_method);
}
inline void BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo* BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo::EnvironmentTracksDefinitionSO_BasicEventTrackInfo() {}
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo.get_eventBoxGroupPageName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo::*)()>(
    &::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo::get_eventBoxGroupPageName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32eac6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo*>(), { "get_eventBoxGroupPageName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo.get_eventBoxGroupTrackInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>* (
    ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo::*)()>(
    &::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo::get_eventBoxGroupTrackInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32eac74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo*>(), { "get_eventBoxGroupTrackInfos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo::*)()>(
    &::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x32eac7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo::__cordl_internal_get__eventBoxGroupPageName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventBoxGroupPageName;
}
constexpr ::StringW const& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo::__cordl_internal_get__eventBoxGroupPageName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventBoxGroupPageName;
}
constexpr void BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo::__cordl_internal_set__eventBoxGroupPageName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventBoxGroupPageName = value;
}
constexpr ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>*&
BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo::__cordl_internal_get__eventBoxGroupTrackInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventBoxGroupTrackInfos;
}
constexpr ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>* const&
BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo::__cordl_internal_get__eventBoxGroupTrackInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventBoxGroupTrackInfos;
}
constexpr void BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo::__cordl_internal_set__eventBoxGroupTrackInfos(
    ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventBoxGroupTrackInfos = value;
}
inline ::StringW BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo::get_eventBoxGroupPageName() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo*>(), { "get_eventBoxGroupPageName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>*
BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo::get_eventBoxGroupTrackInfos() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo*>(), { "get_eventBoxGroupTrackInfos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>*>(this, ___internal_method);
}
inline void BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo* BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo() {}
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo.get_groupName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_groupName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32ead10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_groupName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo.set_groupName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::*)(::StringW)>(
    &::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::set_groupName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32ead18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(),
                                                                                           { "set_groupName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo.get_lightGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::LightGroupSO> (::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_lightGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32ead20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_lightGroup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo.set_lightGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::*)(::GlobalNamespace::LightGroupSO*)>(
    &::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::set_lightGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32ead28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(),
                                                                                           { "set_lightGroup", {}, { ::i2c::type_of<::GlobalNamespace::LightGroupSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo.get_showColorTrack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_showColorTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32ead30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_showColorTrack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo.get_showRotationTrack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_showRotationTrack)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x32ead38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_showRotationTrack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo.get_showTranslationTrack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_showTranslationTrack)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x32ead60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_showTranslationTrack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo.get_showRotationXTrack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_showRotationXTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32ead88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_showRotationXTrack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo.get_showRotationYTrack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_showRotationYTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32ead90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_showRotationYTrack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo.get_showRotationZTrack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_showRotationZTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32ead98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_showRotationZTrack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo.get_overrideDefaultRotationAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis (::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::*)()>(
        &::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_overrideDefaultRotationAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32eada0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_overrideDefaultRotationAxis", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo.get_showTranslationXTrack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_showTranslationXTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32eada8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_showTranslationXTrack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo.get_showTranslationYTrack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_showTranslationYTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32eadb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_showTranslationYTrack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo.get_showTranslationZTrack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_showTranslationZTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32eadb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_showTranslationZTrack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo.get_overrideDefaultTranslationAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis (::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::*)()>(
        &::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_overrideDefaultTranslationAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32eadc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_overrideDefaultTranslationAxis", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo.get_showFloatFxTrack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_showFloatFxTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32eadc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_showFloatFxTrack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo.get_enableDuplicate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_enableDuplicate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32eadd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_enableDuplicate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo.get_targetLightGroups
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>> (::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_targetLightGroups)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x32eadd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_targetLightGroups", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::*)()>(
    &::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x32eae60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_get__groupName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupName;
}
constexpr ::StringW const& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_get__groupName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupName;
}
constexpr void BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_set__groupName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____groupName = value;
}
constexpr ::UnityW<::GlobalNamespace::LightGroupSO>& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_get__lightGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroup;
}
constexpr ::UnityW<::GlobalNamespace::LightGroupSO> const& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_get__lightGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroup;
}
constexpr void BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_set__lightGroup(::UnityW<::GlobalNamespace::LightGroupSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightGroup = value;
}
constexpr bool& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_get__showColorTrack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showColorTrack;
}
constexpr bool const& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_get__showColorTrack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showColorTrack;
}
constexpr void BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_set__showColorTrack(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showColorTrack = value;
}
constexpr bool& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_get__showRotationXTrack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showRotationXTrack;
}
constexpr bool const& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_get__showRotationXTrack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showRotationXTrack;
}
constexpr void BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_set__showRotationXTrack(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showRotationXTrack = value;
}
constexpr bool& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_get__showRotationYTrack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showRotationYTrack;
}
constexpr bool const& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_get__showRotationYTrack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showRotationYTrack;
}
constexpr void BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_set__showRotationYTrack(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showRotationYTrack = value;
}
constexpr bool& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_get__showRotationZTrack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showRotationZTrack;
}
constexpr bool const& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_get__showRotationZTrack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showRotationZTrack;
}
constexpr void BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_set__showRotationZTrack(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showRotationZTrack = value;
}
constexpr ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis&
BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_get__overrideDefaultRotationAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideDefaultRotationAxis;
}
constexpr ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis const&
BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_get__overrideDefaultRotationAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideDefaultRotationAxis;
}
constexpr void BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_set__overrideDefaultRotationAxis(
    ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideDefaultRotationAxis = value;
}
constexpr bool& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_get__showTranslationXTrack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showTranslationXTrack;
}
constexpr bool const& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_get__showTranslationXTrack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showTranslationXTrack;
}
constexpr void BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_set__showTranslationXTrack(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showTranslationXTrack = value;
}
constexpr bool& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_get__showTranslationYTrack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showTranslationYTrack;
}
constexpr bool const& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_get__showTranslationYTrack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showTranslationYTrack;
}
constexpr void BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_set__showTranslationYTrack(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showTranslationYTrack = value;
}
constexpr bool& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_get__showTranslationZTrack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showTranslationZTrack;
}
constexpr bool const& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_get__showTranslationZTrack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showTranslationZTrack;
}
constexpr void BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_set__showTranslationZTrack(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showTranslationZTrack = value;
}
constexpr ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis&
BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_get__overrideDefaultTranslationAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideDefaultTranslationAxis;
}
constexpr ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis const&
BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_get__overrideDefaultTranslationAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideDefaultTranslationAxis;
}
constexpr void BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_set__overrideDefaultTranslationAxis(
    ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideDefaultTranslationAxis = value;
}
constexpr bool& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_get__showFloatFxTrack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showFloatFxTrack;
}
constexpr bool const& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_get__showFloatFxTrack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showFloatFxTrack;
}
constexpr void BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_set__showFloatFxTrack(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showFloatFxTrack = value;
}
constexpr bool& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_get__enableDuplicate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableDuplicate;
}
constexpr bool const& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_get__enableDuplicate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableDuplicate;
}
constexpr void BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_set__enableDuplicate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enableDuplicate = value;
}
constexpr ::UnityW<::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup>&
BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_get__duplicationGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duplicationGroup;
}
constexpr ::UnityW<::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup> const&
BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_get__duplicationGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duplicationGroup;
}
constexpr void
BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_set__duplicationGroup(::UnityW<::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____duplicationGroup = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>>& BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_get__targetLightGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetLightGroups;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>> const&
BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_get__targetLightGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetLightGroups;
}
constexpr void BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::__cordl_internal_set__targetLightGroups(::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetLightGroups = value;
}
inline ::StringW BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_groupName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_groupName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::set_groupName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(),
                                                                                         { "set_groupName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::LightGroupSO> BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_lightGroup() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_lightGroup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LightGroupSO>>(this, ___internal_method);
}
inline void BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::set_lightGroup(::GlobalNamespace::LightGroupSO* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(),
                                                                                         { "set_lightGroup", {}, { ::i2c::type_of<::GlobalNamespace::LightGroupSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_showColorTrack() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_showColorTrack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_showRotationTrack() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_showRotationTrack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_showTranslationTrack() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_showTranslationTrack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_showRotationXTrack() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_showRotationXTrack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_showRotationYTrack() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_showRotationYTrack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_showRotationZTrack() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_showRotationZTrack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis
BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_overrideDefaultRotationAxis() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_overrideDefaultRotationAxis", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis>(this, ___internal_method);
}
inline bool BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_showTranslationXTrack() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_showTranslationXTrack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_showTranslationYTrack() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_showTranslationYTrack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_showTranslationZTrack() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_showTranslationZTrack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis
BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_overrideDefaultTranslationAxis() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_overrideDefaultTranslationAxis", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis>(this, ___internal_method);
}
inline bool BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_showFloatFxTrack() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_showFloatFxTrack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_enableDuplicate() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_enableDuplicate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>> BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::get_targetLightGroups() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { "get_targetLightGroups", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>>>(this, ___internal_method);
}
inline void BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo* BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo() {}
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO.get_environmentInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::EnvironmentInfoSO> (::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::*)()>(
    &::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::get_environmentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32eac0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*>(), { "get_environmentInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO.get_basicEventTrackInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*> (
    ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::*)()>(&::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::get_basicEventTrackInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32eac14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*>(), { "get_basicEventTrackInfos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO.get_eventBoxGroupPageInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo*>* (
    ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::*)()>(&::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::get_eventBoxGroupPageInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32eac1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*>(), { "get_eventBoxGroupPageInfos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::*)()>(
    &::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32eac24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*>(), { ".ctor", {}, {} })));
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
  this->____environmentInfo = value;
}
constexpr ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>&
BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::__cordl_internal_get__basicEventTrackInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____basicEventTrackInfos;
}
constexpr ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*> const&
BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::__cordl_internal_get__basicEventTrackInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____basicEventTrackInfos;
}
constexpr void BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::__cordl_internal_set__basicEventTrackInfos(
    ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____basicEventTrackInfos = value;
}
constexpr ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo*>*&
BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::__cordl_internal_get__eventBoxGroupPageInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventBoxGroupPageInfos;
}
constexpr ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo*>* const&
BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::__cordl_internal_get__eventBoxGroupPageInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventBoxGroupPageInfos;
}
constexpr void BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::__cordl_internal_set__eventBoxGroupPageInfos(
    ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventBoxGroupPageInfos = value;
}
inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::get_environmentInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*>(), { "get_environmentInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>(this, ___internal_method);
}
inline ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*> BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::get_basicEventTrackInfos() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*>(), { "get_basicEventTrackInfos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo*>*
BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::get_eventBoxGroupPageInfos() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*>(), { "get_eventBoxGroupPageInfos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo*>*>(this, ___internal_method);
}
inline void BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO* BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO::EnvironmentTracksDefinitionSO() {}
