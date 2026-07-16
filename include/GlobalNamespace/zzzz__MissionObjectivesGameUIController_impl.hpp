#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionObjectivesGameUIController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionObjectivesGameUIController_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveCheckersManager_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveGameUIView_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionObjectivesGameUIController.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectivesGameUIController::*)()>(&::GlobalNamespace::MissionObjectivesGameUIController::Start)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x59168e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectivesGameUIController*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectivesGameUIController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectivesGameUIController::*)()>(&::GlobalNamespace::MissionObjectivesGameUIController::OnDestroy)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5916d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectivesGameUIController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectivesGameUIController.HandleMissionObjectiveCheckersManagerObjectivesListDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectivesGameUIController::*)()>(
    &::GlobalNamespace::MissionObjectivesGameUIController::HandleMissionObjectiveCheckersManagerObjectivesListDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5916f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectivesGameUIController*>(), { "HandleMissionObjectiveCheckersManagerObjectivesListDidChange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectivesGameUIController.CreateUIElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectivesGameUIController::*)()>(&::GlobalNamespace::MissionObjectivesGameUIController::CreateUIElements)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x5916a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectivesGameUIController*>(), { "CreateUIElements", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectivesGameUIController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectivesGameUIController::*)()>(&::GlobalNamespace::MissionObjectivesGameUIController::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5916f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectivesGameUIController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MissionObjectiveGameUIView>& GlobalNamespace::MissionObjectivesGameUIController::__cordl_internal_get__missionObjectiveGameUIViewPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveGameUIViewPrefab;
}
constexpr ::UnityW<::GlobalNamespace::MissionObjectiveGameUIView> const& GlobalNamespace::MissionObjectivesGameUIController::__cordl_internal_get__missionObjectiveGameUIViewPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveGameUIViewPrefab;
}
constexpr void GlobalNamespace::MissionObjectivesGameUIController::__cordl_internal_set__missionObjectiveGameUIViewPrefab(::UnityW<::GlobalNamespace::MissionObjectiveGameUIView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionObjectiveGameUIViewPrefab = value;
}
constexpr float_t& GlobalNamespace::MissionObjectivesGameUIController::__cordl_internal_get__separator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____separator;
}
constexpr float_t const& GlobalNamespace::MissionObjectivesGameUIController::__cordl_internal_get__separator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____separator;
}
constexpr void GlobalNamespace::MissionObjectivesGameUIController::__cordl_internal_set__separator(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____separator = value;
}
constexpr float_t& GlobalNamespace::MissionObjectivesGameUIController::__cordl_internal_get__elementWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementWidth;
}
constexpr float_t const& GlobalNamespace::MissionObjectivesGameUIController::__cordl_internal_get__elementWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementWidth;
}
constexpr void GlobalNamespace::MissionObjectivesGameUIController::__cordl_internal_set__elementWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elementWidth = value;
}
constexpr ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager>& GlobalNamespace::MissionObjectivesGameUIController::__cordl_internal_get__missionObjectiveCheckersManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveCheckersManager;
}
constexpr ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> const& GlobalNamespace::MissionObjectivesGameUIController::__cordl_internal_get__missionObjectiveCheckersManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveCheckersManager;
}
constexpr void GlobalNamespace::MissionObjectivesGameUIController::__cordl_internal_set__missionObjectiveCheckersManager(::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionObjectiveCheckersManager = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MissionObjectiveGameUIView>>*&
GlobalNamespace::MissionObjectivesGameUIController::__cordl_internal_get__missionObjectiveGameUIViews() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveGameUIViews;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MissionObjectiveGameUIView>>* const&
GlobalNamespace::MissionObjectivesGameUIController::__cordl_internal_get__missionObjectiveGameUIViews() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveGameUIViews;
}
constexpr void GlobalNamespace::MissionObjectivesGameUIController::__cordl_internal_set__missionObjectiveGameUIViews(
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MissionObjectiveGameUIView>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionObjectiveGameUIViews = value;
}
inline void GlobalNamespace::MissionObjectivesGameUIController::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectivesGameUIController*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectivesGameUIController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectivesGameUIController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectivesGameUIController::HandleMissionObjectiveCheckersManagerObjectivesListDidChange() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectivesGameUIController*>(), { "HandleMissionObjectiveCheckersManagerObjectivesListDidChange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectivesGameUIController::CreateUIElements() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectivesGameUIController*>(), { "CreateUIElements", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectivesGameUIController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectivesGameUIController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionObjectivesGameUIController* GlobalNamespace::MissionObjectivesGameUIController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionObjectivesGameUIController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionObjectivesGameUIController::MissionObjectivesGameUIController() {}
