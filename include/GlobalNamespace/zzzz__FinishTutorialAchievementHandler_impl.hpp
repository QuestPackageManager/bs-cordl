#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FinishTutorialAchievementHandler_def.hpp"
#include "GlobalNamespace/zzzz__AchievementSO_def.hpp"
#include "GlobalNamespace/zzzz__AchievementsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__Signal_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FinishTutorialAchievementHandler.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FinishTutorialAchievementHandler::*)()>(
    &::GlobalNamespace::FinishTutorialAchievementHandler::Start)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2233230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FinishTutorialAchievementHandler*>::get(),
                                                                               "Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FinishTutorialAchievementHandler.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FinishTutorialAchievementHandler::*)()>(
    &::GlobalNamespace::FinishTutorialAchievementHandler::OnDestroy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x22332bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FinishTutorialAchievementHandler*>::get(),
                                                                               "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FinishTutorialAchievementHandler.HandleTutorialFinished
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FinishTutorialAchievementHandler::*)()>(
    &::GlobalNamespace::FinishTutorialAchievementHandler::HandleTutorialFinished)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2233348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FinishTutorialAchievementHandler*>::get(),
                                                                               "HandleTutorialFinished", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FinishTutorialAchievementHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FinishTutorialAchievementHandler::*)()>(
    &::GlobalNamespace::FinishTutorialAchievementHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2233368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FinishTutorialAchievementHandler*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AchievementsModelSO*& GlobalNamespace::FinishTutorialAchievementHandler::__get__achievementsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievementsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementsModelSO*> const& GlobalNamespace::FinishTutorialAchievementHandler::__get__achievementsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievementsModel;
}
constexpr void GlobalNamespace::FinishTutorialAchievementHandler::__set__achievementsModel(::GlobalNamespace::AchievementsModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____achievementsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::Signal*& GlobalNamespace::FinishTutorialAchievementHandler::__get__tutorialFinishedSignal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tutorialFinishedSignal;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> const& GlobalNamespace::FinishTutorialAchievementHandler::__get__tutorialFinishedSignal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tutorialFinishedSignal;
}
constexpr void GlobalNamespace::FinishTutorialAchievementHandler::__set__tutorialFinishedSignal(::GlobalNamespace::Signal* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tutorialFinishedSignal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AchievementSO*& GlobalNamespace::FinishTutorialAchievementHandler::__get__finishTutorialAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finishTutorialAchievement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& GlobalNamespace::FinishTutorialAchievementHandler::__get__finishTutorialAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finishTutorialAchievement;
}
constexpr void GlobalNamespace::FinishTutorialAchievementHandler::__set__finishTutorialAchievement(::GlobalNamespace::AchievementSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____finishTutorialAchievement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::FinishTutorialAchievementHandler::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FinishTutorialAchievementHandler*>::get(),
                                                                             "Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FinishTutorialAchievementHandler::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FinishTutorialAchievementHandler*>::get(),
                                                                             "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FinishTutorialAchievementHandler::HandleTutorialFinished() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FinishTutorialAchievementHandler*>::get(),
                                                                             "HandleTutorialFinished", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FinishTutorialAchievementHandler* GlobalNamespace::FinishTutorialAchievementHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FinishTutorialAchievementHandler*>());
}
inline void GlobalNamespace::FinishTutorialAchievementHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FinishTutorialAchievementHandler*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FinishTutorialAchievementHandler::FinishTutorialAchievementHandler() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
