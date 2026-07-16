#pragma once
// IWYU pragma private; include "GlobalNamespace/MainSettingsMenuViewController.hpp"
#include "GlobalNamespace/zzzz__SettingsSubMenuInfo_impl.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__MainSettingsMenuViewController_def.hpp"
#include "GlobalNamespace/zzzz__SettingsSubMenuInfo_def.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "HMUI/zzzz__TextSegmentedControl_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainSettingsMenuViewController.add_didSelectSettingsSubMenuEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainSettingsMenuViewController::*)(::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo*, int32_t>*)>(
    &::GlobalNamespace::MainSettingsMenuViewController::add_didSelectSettingsSubMenuEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a144f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsMenuViewController*>(),
                                                { "add_didSelectSettingsSubMenuEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo*, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsMenuViewController.remove_didSelectSettingsSubMenuEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainSettingsMenuViewController::*)(::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo*, int32_t>*)>(
    &::GlobalNamespace::MainSettingsMenuViewController::remove_didSelectSettingsSubMenuEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a145b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsMenuViewController*>(),
                                                { "remove_didSelectSettingsSubMenuEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo*, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsMenuViewController.get_numberOfSubMenus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MainSettingsMenuViewController::*)()>(&::GlobalNamespace::MainSettingsMenuViewController::get_numberOfSubMenus)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a14678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsMenuViewController*>(), { "get_numberOfSubMenus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsMenuViewController.get_selectedSubMenuInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SettingsSubMenuInfo* (::GlobalNamespace::MainSettingsMenuViewController::*)()>(
    &::GlobalNamespace::MainSettingsMenuViewController::get_selectedSubMenuInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a14690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsMenuViewController*>(), { "get_selectedSubMenuInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsMenuViewController.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainSettingsMenuViewController::*)(int32_t)>(&::GlobalNamespace::MainSettingsMenuViewController::Init)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5a14698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsMenuViewController*>(), { "Init", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsMenuViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainSettingsMenuViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::MainSettingsMenuViewController::DidActivate)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5a146d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsMenuViewController*>(), { ::i2c::class_of<::GlobalNamespace::MainSettingsMenuViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsMenuViewController.HandleSettingsMenuSegmentedControlDidSelectCell
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainSettingsMenuViewController::*)(::HMUI::SegmentedControl*, int32_t)>(
    &::GlobalNamespace::MainSettingsMenuViewController::HandleSettingsMenuSegmentedControlDidSelectCell)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5a148d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsMenuViewController*>(),
                                                             { "HandleSettingsMenuSegmentedControlDidSelectCell", {}, { ::i2c::type_of<::HMUI::SegmentedControl*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsMenuViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainSettingsMenuViewController::*)()>(&::GlobalNamespace::MainSettingsMenuViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a14928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsMenuViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo*, int32_t>*& GlobalNamespace::MainSettingsMenuViewController::__cordl_internal_get_didSelectSettingsSubMenuEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectSettingsSubMenuEvent;
}
constexpr ::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo*, int32_t>* const& GlobalNamespace::MainSettingsMenuViewController::__cordl_internal_get_didSelectSettingsSubMenuEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectSettingsSubMenuEvent;
}
constexpr void GlobalNamespace::MainSettingsMenuViewController::__cordl_internal_set_didSelectSettingsSubMenuEvent(::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo*, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSelectSettingsSubMenuEvent = value;
}
constexpr ::ArrayW<::GlobalNamespace::SettingsSubMenuInfo*>& GlobalNamespace::MainSettingsMenuViewController::__cordl_internal_get__settingsSubMenuInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsSubMenuInfos;
}
constexpr ::ArrayW<::GlobalNamespace::SettingsSubMenuInfo*> const& GlobalNamespace::MainSettingsMenuViewController::__cordl_internal_get__settingsSubMenuInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsSubMenuInfos;
}
constexpr void GlobalNamespace::MainSettingsMenuViewController::__cordl_internal_set__settingsSubMenuInfos(::ArrayW<::GlobalNamespace::SettingsSubMenuInfo*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsSubMenuInfos = value;
}
constexpr ::UnityW<::HMUI::TextSegmentedControl>& GlobalNamespace::MainSettingsMenuViewController::__cordl_internal_get__settingsMenuSegmentedControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsMenuSegmentedControl;
}
constexpr ::UnityW<::HMUI::TextSegmentedControl> const& GlobalNamespace::MainSettingsMenuViewController::__cordl_internal_get__settingsMenuSegmentedControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsMenuSegmentedControl;
}
constexpr void GlobalNamespace::MainSettingsMenuViewController::__cordl_internal_set__settingsMenuSegmentedControl(::UnityW<::HMUI::TextSegmentedControl> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsMenuSegmentedControl = value;
}
constexpr ::GlobalNamespace::SettingsSubMenuInfo*& GlobalNamespace::MainSettingsMenuViewController::__cordl_internal_get__selectedSubMenuInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedSubMenuInfo;
}
constexpr ::GlobalNamespace::SettingsSubMenuInfo* const& GlobalNamespace::MainSettingsMenuViewController::__cordl_internal_get__selectedSubMenuInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedSubMenuInfo;
}
constexpr void GlobalNamespace::MainSettingsMenuViewController::__cordl_internal_set__selectedSubMenuInfo(::GlobalNamespace::SettingsSubMenuInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedSubMenuInfo = value;
}
constexpr int32_t& GlobalNamespace::MainSettingsMenuViewController::__cordl_internal_get__selectedSubMenuInfoIdx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedSubMenuInfoIdx;
}
constexpr int32_t const& GlobalNamespace::MainSettingsMenuViewController::__cordl_internal_get__selectedSubMenuInfoIdx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedSubMenuInfoIdx;
}
constexpr void GlobalNamespace::MainSettingsMenuViewController::__cordl_internal_set__selectedSubMenuInfoIdx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedSubMenuInfoIdx = value;
}
inline void GlobalNamespace::MainSettingsMenuViewController::add_didSelectSettingsSubMenuEvent(::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo*, int32_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsMenuViewController*>(),
                                                           { "add_didSelectSettingsSubMenuEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo*, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MainSettingsMenuViewController::remove_didSelectSettingsSubMenuEvent(::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo*, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsMenuViewController*>(),
                                              { "remove_didSelectSettingsSubMenuEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo*, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::MainSettingsMenuViewController::get_numberOfSubMenus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsMenuViewController*>(), { "get_numberOfSubMenus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::SettingsSubMenuInfo* GlobalNamespace::MainSettingsMenuViewController::get_selectedSubMenuInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsMenuViewController*>(), { "get_selectedSubMenuInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SettingsSubMenuInfo*>(this, ___internal_method);
}
inline void GlobalNamespace::MainSettingsMenuViewController::Init(int32_t selectedSubMenuInfoIdx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsMenuViewController*>(), { "Init", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectedSubMenuInfoIdx);
}
inline void GlobalNamespace::MainSettingsMenuViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainSettingsMenuViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::MainSettingsMenuViewController::HandleSettingsMenuSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellIdx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsMenuViewController*>(),
                                                           { "HandleSettingsMenuSegmentedControlDidSelectCell", {}, { ::i2c::type_of<::HMUI::SegmentedControl*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segmentedControl, cellIdx);
}
inline void GlobalNamespace::MainSettingsMenuViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsMenuViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MainSettingsMenuViewController* GlobalNamespace::MainSettingsMenuViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainSettingsMenuViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainSettingsMenuViewController::MainSettingsMenuViewController() {}
