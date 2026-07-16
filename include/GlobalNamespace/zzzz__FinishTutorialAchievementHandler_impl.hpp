#pragma once
// IWYU pragma private; include "GlobalNamespace/FinishTutorialAchievementHandler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FinishTutorialAchievementHandler_def.hpp"
#include "GlobalNamespace/zzzz__AchievementSO_def.hpp"
#include "GlobalNamespace/zzzz__Signal_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FinishTutorialAchievementHandler.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FinishTutorialAchievementHandler::*)()>(&::GlobalNamespace::FinishTutorialAchievementHandler::Start)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x36f87ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FinishTutorialAchievementHandler*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FinishTutorialAchievementHandler.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FinishTutorialAchievementHandler::*)()>(&::GlobalNamespace::FinishTutorialAchievementHandler::OnDestroy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x36f8884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FinishTutorialAchievementHandler*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FinishTutorialAchievementHandler.HandleTutorialFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FinishTutorialAchievementHandler::*)()>(&::GlobalNamespace::FinishTutorialAchievementHandler::HandleTutorialFinished)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x36f8910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FinishTutorialAchievementHandler*>(), { "HandleTutorialFinished", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FinishTutorialAchievementHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FinishTutorialAchievementHandler::*)()>(&::GlobalNamespace::FinishTutorialAchievementHandler::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36f8a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FinishTutorialAchievementHandler*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::OculusStudios::Platform::Core::IPlatform*& GlobalNamespace::FinishTutorialAchievementHandler::__cordl_internal_get__platform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform;
}
constexpr ::OculusStudios::Platform::Core::IPlatform* const& GlobalNamespace::FinishTutorialAchievementHandler::__cordl_internal_get__platform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform;
}
constexpr void GlobalNamespace::FinishTutorialAchievementHandler::__cordl_internal_set__platform(::OculusStudios::Platform::Core::IPlatform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____platform = value;
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
  this->____tutorialFinishedSignal = value;
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
  this->____finishTutorialAchievement = value;
}
inline void GlobalNamespace::FinishTutorialAchievementHandler::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FinishTutorialAchievementHandler*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FinishTutorialAchievementHandler::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FinishTutorialAchievementHandler*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FinishTutorialAchievementHandler::HandleTutorialFinished() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FinishTutorialAchievementHandler*>(), { "HandleTutorialFinished", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FinishTutorialAchievementHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FinishTutorialAchievementHandler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FinishTutorialAchievementHandler* GlobalNamespace::FinishTutorialAchievementHandler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FinishTutorialAchievementHandler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FinishTutorialAchievementHandler::FinishTutorialAchievementHandler() {}
