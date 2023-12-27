#pragma once
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TrackDefinitions/DataModels/zzzz__TrackToolbarType_impl.hpp"
#include "TrackDefinitions/zzzz__EnvironmentTracksDefinitionSO_impl.hpp"
#include "TrackDefinitions/zzzz__EnvironmentTracksDefinitionSO_def.hpp"
#include "TrackDefinitions/zzzz__EnvironmentTracksDefinitionSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "TrackDefinitions/DataModels/zzzz__TrackToolbarType_def.hpp"
#include "TrackDefinitions/zzzz__EventTrackDefinitionSO_def.hpp"
#include "TrackDefinitions/zzzz__LightGroupDuplicationGroup_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage::__EnvironmentTracksDefinitionSO__BasicEventTrackPage(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage::__EnvironmentTracksDefinitionSO__BasicEventTrackPage() {}
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage::Page1{ static_cast<int32_t>(0x0) };
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage::Page2{ static_cast<int32_t>(0x1) };
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage::Count{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis() {}
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis::NoOverride{ static_cast<int32_t>(
    0x0) };
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis::X{ static_cast<int32_t>(0x1) };
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis::Y{ static_cast<int32_t>(0x2) };
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis::Z{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo.get_trackName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::*)()>(
    &::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::get_trackName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0ad9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                                                 "get_trackName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo.get_basicBeatmapEventType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BasicBeatmapEventType (
    ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::get_basicBeatmapEventType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0ada4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                                                 "get_basicBeatmapEventType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo.get_trackToolbarType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TrackDefinitions::DataModels::TrackToolbarType (
    ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::get_trackToolbarType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0adac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                                                 "get_trackToolbarType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo.get_trackDefinition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TrackDefinitions::EventTrackDefinitionSO* (
    ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::get_trackDefinition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0adb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                                                 "get_trackDefinition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo.get_basicEventTrackPage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage (
    ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::get_basicEventTrackPage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0adbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                                                 "get_basicEventTrackPage", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::*)()>(
    &::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a0adc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__get__trackName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____trackName;
}
constexpr ::StringW const& TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__get__trackName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____trackName;
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__set__trackName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____trackName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__get__beatmapEventType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapEventType;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__get__beatmapEventType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapEventType;
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__set__beatmapEventType(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____beatmapEventType = value;
}
constexpr ::TrackDefinitions::DataModels::TrackToolbarType& TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__get__trackToolbarType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____trackToolbarType;
}
constexpr ::TrackDefinitions::DataModels::TrackToolbarType const& TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__get__trackToolbarType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____trackToolbarType;
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__set__trackToolbarType(::TrackDefinitions::DataModels::TrackToolbarType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____trackToolbarType = value;
}
constexpr ::TrackDefinitions::EventTrackDefinitionSO*& TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__get__trackDefinition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____trackDefinition;
}
constexpr ::cordl_internals::to_const_pointer<::TrackDefinitions::EventTrackDefinitionSO*> const&
TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__get__trackDefinition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____trackDefinition;
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__set__trackDefinition(::TrackDefinitions::EventTrackDefinitionSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____trackDefinition)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage& TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__get__basicEventTrackPage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____basicEventTrackPage;
}
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage const& TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__get__basicEventTrackPage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____basicEventTrackPage;
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__set__basicEventTrackPage(::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____basicEventTrackPage = value;
}
inline ::StringW TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::get_trackName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                                               "get_trackName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BasicBeatmapEventType TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::get_basicBeatmapEventType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                                               "get_basicBeatmapEventType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BasicBeatmapEventType, false>(this, ___internal_method);
}
inline ::TrackDefinitions::DataModels::TrackToolbarType TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::get_trackToolbarType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                                               "get_trackToolbarType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::TrackDefinitions::DataModels::TrackToolbarType, false>(this, ___internal_method);
}
inline ::TrackDefinitions::EventTrackDefinitionSO* TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::get_trackDefinition() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                                               "get_trackDefinition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::TrackDefinitions::EventTrackDefinitionSO*, false>(this, ___internal_method);
}
inline ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::get_basicEventTrackPage() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                                               "get_basicEventTrackPage", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage, false>(this, ___internal_method);
}
inline ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>());
}
inline void TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo() {}
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo.get_eventBoxGroupPageName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::*)()>(
    &::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::get_eventBoxGroupPageName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0ae1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>::get(),
                                                 "get_eventBoxGroupPageName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo.get_eventBoxGroupTrackInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>* (
        ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::get_eventBoxGroupTrackInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0ae24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>::get(),
                                                 "get_eventBoxGroupTrackInfos", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::*)()>(
    &::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2a0ae2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::__get__eventBoxGroupPageName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____eventBoxGroupPageName;
}
constexpr ::StringW const& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::__get__eventBoxGroupPageName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____eventBoxGroupPageName;
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::__set__eventBoxGroupPageName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eventBoxGroupPageName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*&
TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::__get__eventBoxGroupTrackInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____eventBoxGroupTrackInfos;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*> const&
TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::__get__eventBoxGroupTrackInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____eventBoxGroupTrackInfos;
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::__set__eventBoxGroupTrackInfos(
    ::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eventBoxGroupTrackInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::get_eventBoxGroupPageName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>::get(),
                                               "get_eventBoxGroupPageName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*
TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::get_eventBoxGroupTrackInfos() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>::get(),
                                               "get_eventBoxGroupTrackInfos", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*, false>(this, ___internal_method);
}
inline ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo* TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>());
}
inline void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo() {}
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_groupName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
    &::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_groupName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0aed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_groupName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.set_groupName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)(::StringW)>(
    &::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::set_groupName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0aed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(), "set_groupName",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_lightGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightGroupSO* (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
    &::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_lightGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0aee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_lightGroup", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.set_lightGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)(
    ::GlobalNamespace::LightGroupSO*)>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::set_lightGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0aee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(), "set_lightGroup",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroupSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_showColorTrack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
    &::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showColorTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0aef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_showColorTrack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_showRotationTrack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
    &::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showRotationTrack)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a0aef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_showRotationTrack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_showTranslationTrack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
    &::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showTranslationTrack)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a0af20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_showTranslationTrack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_showRotationXTrack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
    &::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showRotationXTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0af48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_showRotationXTrack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_showRotationYTrack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
    &::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showRotationYTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0af50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_showRotationYTrack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_showRotationZTrack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
    &::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showRotationZTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0af58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_showRotationZTrack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_overrideDefaultRotationAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis (
    ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_overrideDefaultRotationAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0af60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_overrideDefaultRotationAxis", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_showTranslationXTrack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
    &::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showTranslationXTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0af68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_showTranslationXTrack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_showTranslationYTrack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
    &::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showTranslationYTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0af70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_showTranslationYTrack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_showTranslationZTrack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
    &::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showTranslationZTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0af78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_showTranslationZTrack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_overrideDefaultTranslationAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
        &::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_overrideDefaultTranslationAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0af80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_overrideDefaultTranslationAxis", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_showFloatFxTrack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
    &::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showFloatFxTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0af88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_showFloatFxTrack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_enableDuplicate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
    &::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_enableDuplicate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0af90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_enableDuplicate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_targetLightGroups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*> (
    ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_targetLightGroups)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2a0af98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                                 "get_targetLightGroups", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(
    &::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a0b01c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__groupName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____groupName;
}
constexpr ::StringW const& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__groupName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____groupName;
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__set__groupName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____groupName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LightGroupSO*& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__lightGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightGroup;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightGroupSO*> const& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__lightGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightGroup;
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__set__lightGroup(::GlobalNamespace::LightGroupSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showColorTrack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____showColorTrack;
}
constexpr bool const& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showColorTrack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____showColorTrack;
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__set__showColorTrack(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____showColorTrack = value;
}
constexpr bool& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showRotationXTrack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____showRotationXTrack;
}
constexpr bool const& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showRotationXTrack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____showRotationXTrack;
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__set__showRotationXTrack(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____showRotationXTrack = value;
}
constexpr bool& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showRotationYTrack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____showRotationYTrack;
}
constexpr bool const& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showRotationYTrack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____showRotationYTrack;
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__set__showRotationYTrack(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____showRotationYTrack = value;
}
constexpr bool& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showRotationZTrack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____showRotationZTrack;
}
constexpr bool const& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showRotationZTrack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____showRotationZTrack;
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__set__showRotationZTrack(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____showRotationZTrack = value;
}
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis&
TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__overrideDefaultRotationAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____overrideDefaultRotationAxis;
}
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis const&
TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__overrideDefaultRotationAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____overrideDefaultRotationAxis;
}
constexpr void
TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__set__overrideDefaultRotationAxis(::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____overrideDefaultRotationAxis = value;
}
constexpr bool& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showTranslationXTrack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____showTranslationXTrack;
}
constexpr bool const& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showTranslationXTrack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____showTranslationXTrack;
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__set__showTranslationXTrack(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____showTranslationXTrack = value;
}
constexpr bool& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showTranslationYTrack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____showTranslationYTrack;
}
constexpr bool const& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showTranslationYTrack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____showTranslationYTrack;
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__set__showTranslationYTrack(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____showTranslationYTrack = value;
}
constexpr bool& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showTranslationZTrack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____showTranslationZTrack;
}
constexpr bool const& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showTranslationZTrack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____showTranslationZTrack;
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__set__showTranslationZTrack(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____showTranslationZTrack = value;
}
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis&
TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__overrideDefaultTranslationAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____overrideDefaultTranslationAxis;
}
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis const&
TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__overrideDefaultTranslationAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____overrideDefaultTranslationAxis;
}
constexpr void
TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__set__overrideDefaultTranslationAxis(::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____overrideDefaultTranslationAxis = value;
}
constexpr bool& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showFloatFxTrack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____showFloatFxTrack;
}
constexpr bool const& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showFloatFxTrack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____showFloatFxTrack;
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__set__showFloatFxTrack(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____showFloatFxTrack = value;
}
constexpr bool& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__enableDuplicate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____enableDuplicate;
}
constexpr bool const& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__enableDuplicate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____enableDuplicate;
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__set__enableDuplicate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____enableDuplicate = value;
}
constexpr ::TrackDefinitions::LightGroupDuplicationGroup*& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__duplicationGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____duplicationGroup;
}
constexpr ::cordl_internals::to_const_pointer<::TrackDefinitions::LightGroupDuplicationGroup*> const&
TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__duplicationGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____duplicationGroup;
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__set__duplicationGroup(::TrackDefinitions::LightGroupDuplicationGroup* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____duplicationGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*>&
TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__targetLightGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____targetLightGroups;
}
constexpr ::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*> const&
TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__targetLightGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____targetLightGroups;
}
constexpr void
TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__set__targetLightGroups(::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____targetLightGroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_groupName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_groupName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::set_groupName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(), "set_groupName",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::LightGroupSO* TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_lightGroup() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_lightGroup", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightGroupSO*, false>(this, ___internal_method);
}
inline void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::set_lightGroup(::GlobalNamespace::LightGroupSO* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(), "set_lightGroup",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroupSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showColorTrack() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_showColorTrack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showRotationTrack() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_showRotationTrack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showTranslationTrack() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_showTranslationTrack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showRotationXTrack() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_showRotationXTrack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showRotationYTrack() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_showRotationYTrack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showRotationZTrack() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_showRotationZTrack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_overrideDefaultRotationAxis() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_overrideDefaultRotationAxis", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis, false>(this, ___internal_method);
}
inline bool TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showTranslationXTrack() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_showTranslationXTrack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showTranslationYTrack() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_showTranslationYTrack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showTranslationZTrack() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_showTranslationZTrack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_overrideDefaultTranslationAxis() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_overrideDefaultTranslationAxis", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis, false>(this, ___internal_method);
}
inline bool TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showFloatFxTrack() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_showFloatFxTrack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_enableDuplicate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_enableDuplicate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*> TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_targetLightGroups() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                                               "get_targetLightGroups", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*>, false>(this, ___internal_method);
}
inline ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo* TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>());
}
inline void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo() {}
//  Writing Method size for method: ::TrackDefinitions::EnvironmentTracksDefinitionSO.get_environmentInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentInfoSO* (::TrackDefinitions::EnvironmentTracksDefinitionSO::*)()>(
    &::TrackDefinitions::EnvironmentTracksDefinitionSO::get_environmentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0ad7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EnvironmentTracksDefinitionSO*>::get(),
                                                                               "get_environmentInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::EnvironmentTracksDefinitionSO.get_basicEventTrackInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> (
        ::TrackDefinitions::EnvironmentTracksDefinitionSO::*)()>(&::TrackDefinitions::EnvironmentTracksDefinitionSO::get_basicEventTrackInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0ad84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EnvironmentTracksDefinitionSO*>::get(),
                                                                               "get_basicEventTrackInfos", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::EnvironmentTracksDefinitionSO.get_eventBoxGroupPageInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>* (
    ::TrackDefinitions::EnvironmentTracksDefinitionSO::*)()>(&::TrackDefinitions::EnvironmentTracksDefinitionSO::get_eventBoxGroupPageInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0ad8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EnvironmentTracksDefinitionSO*>::get(),
                                                                               "get_eventBoxGroupPageInfos", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::EnvironmentTracksDefinitionSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TrackDefinitions::EnvironmentTracksDefinitionSO::*)()>(
    &::TrackDefinitions::EnvironmentTracksDefinitionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0ad94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EnvironmentTracksDefinitionSO*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::EnvironmentInfoSO*& TrackDefinitions::EnvironmentTracksDefinitionSO::__get__environmentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____environmentInfo;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> const& TrackDefinitions::EnvironmentTracksDefinitionSO::__get__environmentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____environmentInfo;
}
constexpr void TrackDefinitions::EnvironmentTracksDefinitionSO::__set__environmentInfo(::GlobalNamespace::EnvironmentInfoSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>&
TrackDefinitions::EnvironmentTracksDefinitionSO::__get__basicEventTrackInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____basicEventTrackInfos;
}
constexpr ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> const&
TrackDefinitions::EnvironmentTracksDefinitionSO::__get__basicEventTrackInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____basicEventTrackInfos;
}
constexpr void TrackDefinitions::EnvironmentTracksDefinitionSO::__set__basicEventTrackInfos(
    ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____basicEventTrackInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>*&
TrackDefinitions::EnvironmentTracksDefinitionSO::__get__eventBoxGroupPageInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____eventBoxGroupPageInfos;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>*> const&
TrackDefinitions::EnvironmentTracksDefinitionSO::__get__eventBoxGroupPageInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____eventBoxGroupPageInfos;
}
constexpr void TrackDefinitions::EnvironmentTracksDefinitionSO::__set__eventBoxGroupPageInfos(
    ::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eventBoxGroupPageInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::EnvironmentInfoSO* TrackDefinitions::EnvironmentTracksDefinitionSO::get_environmentInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EnvironmentTracksDefinitionSO*>::get(),
                                                                             "get_environmentInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentInfoSO*, false>(this, ___internal_method);
}
inline ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
TrackDefinitions::EnvironmentTracksDefinitionSO::get_basicEventTrackInfos() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EnvironmentTracksDefinitionSO*>::get(),
                                                                             "get_basicEventTrackInfos", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>, false>(
      this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>*
TrackDefinitions::EnvironmentTracksDefinitionSO::get_eventBoxGroupPageInfos() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EnvironmentTracksDefinitionSO*>::get(),
                                                                             "get_eventBoxGroupPageInfos", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>*, false>(this, ___internal_method);
}
inline ::TrackDefinitions::EnvironmentTracksDefinitionSO* TrackDefinitions::EnvironmentTracksDefinitionSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::TrackDefinitions::EnvironmentTracksDefinitionSO*>());
}
inline void TrackDefinitions::EnvironmentTracksDefinitionSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EnvironmentTracksDefinitionSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::TrackDefinitions::EnvironmentTracksDefinitionSO::EnvironmentTracksDefinitionSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
