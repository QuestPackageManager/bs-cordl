#pragma once
// IWYU pragma private; include "GlobalNamespace/FinishTutorialAchievementHandler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FinishTutorialAchievementHandler_def.hpp"
#include "GlobalNamespace/zzzz__AchievementSO_def.hpp"
#include "GlobalNamespace/zzzz__AchievementsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__Signal_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FinishTutorialAchievementHandler.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FinishTutorialAchievementHandler::*)()>(
    &::GlobalNamespace::FinishTutorialAchievementHandler::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x26a1d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FinishTutorialAchievementHandler*>::get(),
                                                                               "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FinishTutorialAchievementHandler.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FinishTutorialAchievementHandler::*)()>(
    &::GlobalNamespace::FinishTutorialAchievementHandler::OnDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x26a1db0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FinishTutorialAchievementHandler*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FinishTutorialAchievementHandler.HandleTutorialFinished
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FinishTutorialAchievementHandler::*)()>(
    &::GlobalNamespace::FinishTutorialAchievementHandler::HandleTutorialFinished)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x26a1e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FinishTutorialAchievementHandler*>::get(),
                                                                               "HandleTutorialFinished", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FinishTutorialAchievementHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FinishTutorialAchievementHandler::*)()>(
    &::GlobalNamespace::FinishTutorialAchievementHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26a1e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FinishTutorialAchievementHandler*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AchievementsModelSO>& GlobalNamespace::FinishTutorialAchievementHandler::__cordl_internal_get__achievementsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievementsModel;
}
constexpr ::UnityW<::GlobalNamespace::AchievementsModelSO> const& GlobalNamespace::FinishTutorialAchievementHandler::__cordl_internal_get__achievementsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievementsModel;
}
constexpr void GlobalNamespace::FinishTutorialAchievementHandler::__cordl_internal_set__achievementsModel(::UnityW<::GlobalNamespace::AchievementsModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____achievementsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::Signal>& GlobalNamespace::FinishTutorialAchievementHandler::__cordl_internal_get__tutorialFinishedSignal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tutorialFinishedSignal;
}
constexpr ::UnityW<::GlobalNamespace::Signal> const& GlobalNamespace::FinishTutorialAchievementHandler::__cordl_internal_get__tutorialFinishedSignal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tutorialFinishedSignal;
}
constexpr void GlobalNamespace::FinishTutorialAchievementHandler::__cordl_internal_set__tutorialFinishedSignal(::UnityW<::GlobalNamespace::Signal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tutorialFinishedSignal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO>& GlobalNamespace::FinishTutorialAchievementHandler::__cordl_internal_get__finishTutorialAchievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finishTutorialAchievement;
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& GlobalNamespace::FinishTutorialAchievementHandler::__cordl_internal_get__finishTutorialAchievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finishTutorialAchievement;
}
constexpr void GlobalNamespace::FinishTutorialAchievementHandler::__cordl_internal_set__finishTutorialAchievement(::UnityW<::GlobalNamespace::AchievementSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____finishTutorialAchievement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::FinishTutorialAchievementHandler::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FinishTutorialAchievementHandler*>::get(),
                                                                             "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FinishTutorialAchievementHandler::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FinishTutorialAchievementHandler*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FinishTutorialAchievementHandler::HandleTutorialFinished() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FinishTutorialAchievementHandler*>::get(),
                                                                             "HandleTutorialFinished", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FinishTutorialAchievementHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FinishTutorialAchievementHandler*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FinishTutorialAchievementHandler* GlobalNamespace::FinishTutorialAchievementHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FinishTutorialAchievementHandler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FinishTutorialAchievementHandler::FinishTutorialAchievementHandler() {}
