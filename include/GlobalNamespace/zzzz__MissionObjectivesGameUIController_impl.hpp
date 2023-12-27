#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionObjectivesGameUIController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveGameUIView_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveCheckersManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionObjectivesGameUIController.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectivesGameUIController::*)()>(
    &::GlobalNamespace::MissionObjectivesGameUIController::Start)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x23c1424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectivesGameUIController*>::get(),
                                                                               "Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectivesGameUIController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectivesGameUIController::*)()>(
    &::GlobalNamespace::MissionObjectivesGameUIController::OnDestroy)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x23c1858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectivesGameUIController*>::get(),
                                                                               "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectivesGameUIController.HandleMissionObjectiveCheckersManagerObjectivesListDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectivesGameUIController::*)()>(
    &::GlobalNamespace::MissionObjectivesGameUIController::HandleMissionObjectiveCheckersManagerObjectivesListDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23c192c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectivesGameUIController*>::get(),
                                                 "HandleMissionObjectiveCheckersManagerObjectivesListDidChange", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectivesGameUIController.CreateUIElements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectivesGameUIController::*)()>(
    &::GlobalNamespace::MissionObjectivesGameUIController::CreateUIElements)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x23c14b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectivesGameUIController*>::get(),
                                                                               "CreateUIElements", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectivesGameUIController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectivesGameUIController::*)()>(
    &::GlobalNamespace::MissionObjectivesGameUIController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23c1930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectivesGameUIController*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MissionObjectiveGameUIView*& GlobalNamespace::MissionObjectivesGameUIController::__get__missionObjectiveGameUIViewPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____missionObjectiveGameUIViewPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionObjectiveGameUIView*> const&
GlobalNamespace::MissionObjectivesGameUIController::__get__missionObjectiveGameUIViewPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____missionObjectiveGameUIViewPrefab;
}
constexpr void GlobalNamespace::MissionObjectivesGameUIController::__set__missionObjectiveGameUIViewPrefab(::GlobalNamespace::MissionObjectiveGameUIView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionObjectiveGameUIViewPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MissionObjectivesGameUIController::__get__separator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____separator;
}
constexpr float_t const& GlobalNamespace::MissionObjectivesGameUIController::__get__separator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____separator;
}
constexpr void GlobalNamespace::MissionObjectivesGameUIController::__set__separator(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____separator = value;
}
constexpr float_t& GlobalNamespace::MissionObjectivesGameUIController::__get__elementWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____elementWidth;
}
constexpr float_t const& GlobalNamespace::MissionObjectivesGameUIController::__get__elementWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____elementWidth;
}
constexpr void GlobalNamespace::MissionObjectivesGameUIController::__set__elementWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____elementWidth = value;
}
constexpr ::GlobalNamespace::MissionObjectiveCheckersManager*& GlobalNamespace::MissionObjectivesGameUIController::__get__missionObjectiveCheckersManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____missionObjectiveCheckersManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionObjectiveCheckersManager*> const&
GlobalNamespace::MissionObjectivesGameUIController::__get__missionObjectiveCheckersManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____missionObjectiveCheckersManager;
}
constexpr void GlobalNamespace::MissionObjectivesGameUIController::__set__missionObjectiveCheckersManager(::GlobalNamespace::MissionObjectiveCheckersManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionObjectiveCheckersManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MissionObjectiveGameUIView*>*& GlobalNamespace::MissionObjectivesGameUIController::__get__missionObjectiveGameUIViews() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____missionObjectiveGameUIViews;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::MissionObjectiveGameUIView*>*> const&
GlobalNamespace::MissionObjectivesGameUIController::__get__missionObjectiveGameUIViews() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____missionObjectiveGameUIViews;
}
constexpr void GlobalNamespace::MissionObjectivesGameUIController::__set__missionObjectiveGameUIViews(::System::Collections::Generic::List_1<::GlobalNamespace::MissionObjectiveGameUIView*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionObjectiveGameUIViews)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MissionObjectivesGameUIController::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectivesGameUIController*>::get(),
                                                                             "Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectivesGameUIController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectivesGameUIController*>::get(),
                                                                             "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectivesGameUIController::HandleMissionObjectiveCheckersManagerObjectivesListDidChange() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectivesGameUIController*>::get(),
                                               "HandleMissionObjectiveCheckersManagerObjectivesListDidChange", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectivesGameUIController::CreateUIElements() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectivesGameUIController*>::get(),
                                                                             "CreateUIElements", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionObjectivesGameUIController* GlobalNamespace::MissionObjectivesGameUIController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MissionObjectivesGameUIController*>());
}
inline void GlobalNamespace::MissionObjectivesGameUIController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectivesGameUIController*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionObjectivesGameUIController::MissionObjectivesGameUIController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
