#pragma once
// IWYU pragma private; include "GlobalNamespace\TutorialPause.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialPause_def.hpp"
#include "GlobalNamespace/zzzz__AudioListenerController_def.hpp"
#include "GlobalNamespace/zzzz__IGamePause_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "GlobalNamespace/zzzz__TutorialSongController_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TutorialPause.get_isPaused
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TutorialPause::*)()>(&::GlobalNamespace::TutorialPause::get_isPaused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f8b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialPause*>(), { "get_isPaused", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialPause.add_didPauseEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialPause::*)(::System::Action*)>(&::GlobalNamespace::TutorialPause::add_didPauseEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59f8b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialPause*>(), { "add_didPauseEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialPause.remove_didPauseEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialPause::*)(::System::Action*)>(&::GlobalNamespace::TutorialPause::remove_didPauseEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59f8c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialPause*>(), { "remove_didPauseEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialPause.add_willResumeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialPause::*)(::System::Action*)>(&::GlobalNamespace::TutorialPause::add_willResumeEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59f8cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialPause*>(), { "add_willResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialPause.remove_willResumeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialPause::*)(::System::Action*)>(&::GlobalNamespace::TutorialPause::remove_willResumeEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59f8d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialPause*>(), { "remove_willResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialPause.add_didResumeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialPause::*)(::System::Action*)>(&::GlobalNamespace::TutorialPause::add_didResumeEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59f8e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialPause*>(), { "add_didResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialPause.remove_didResumeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialPause::*)(::System::Action*)>(&::GlobalNamespace::TutorialPause::remove_didResumeEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59f8edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialPause*>(), { "remove_didResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialPause.Pause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialPause::*)()>(&::GlobalNamespace::TutorialPause::Pause)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x59f8f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialPause*>(), { "Pause", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialPause.WillResume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialPause::*)()>(&::GlobalNamespace::TutorialPause::WillResume)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59f902c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialPause*>(), { "WillResume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialPause.Resume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialPause::*)()>(&::GlobalNamespace::TutorialPause::Resume)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x59f9048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialPause*>(), { "Resume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialPause._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialPause::*)()>(&::GlobalNamespace::TutorialPause::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59f90e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialPause*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TutorialSongController>& GlobalNamespace::TutorialPause::__cordl_internal_get__tutorialSongController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tutorialSongController;
}
constexpr ::UnityW<::GlobalNamespace::TutorialSongController> const& GlobalNamespace::TutorialPause::__cordl_internal_get__tutorialSongController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tutorialSongController;
}
constexpr void GlobalNamespace::TutorialPause::__cordl_internal_set__tutorialSongController(::UnityW<::GlobalNamespace::TutorialSongController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tutorialSongController = value;
}
constexpr ::UnityW<::GlobalNamespace::SaberManager>& GlobalNamespace::TutorialPause::__cordl_internal_get__saberManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberManager;
}
constexpr ::UnityW<::GlobalNamespace::SaberManager> const& GlobalNamespace::TutorialPause::__cordl_internal_get__saberManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberManager;
}
constexpr void GlobalNamespace::TutorialPause::__cordl_internal_set__saberManager(::UnityW<::GlobalNamespace::SaberManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberManager = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioListenerController>& GlobalNamespace::TutorialPause::__cordl_internal_get__audioListenerController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioListenerController;
}
constexpr ::UnityW<::GlobalNamespace::AudioListenerController> const& GlobalNamespace::TutorialPause::__cordl_internal_get__audioListenerController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioListenerController;
}
constexpr void GlobalNamespace::TutorialPause::__cordl_internal_set__audioListenerController(::UnityW<::GlobalNamespace::AudioListenerController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioListenerController = value;
}
constexpr ::System::Action*& GlobalNamespace::TutorialPause::__cordl_internal_get_didPauseEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPauseEvent;
}
constexpr ::System::Action* const& GlobalNamespace::TutorialPause::__cordl_internal_get_didPauseEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPauseEvent;
}
constexpr void GlobalNamespace::TutorialPause::__cordl_internal_set_didPauseEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didPauseEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::TutorialPause::__cordl_internal_get_willResumeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___willResumeEvent;
}
constexpr ::System::Action* const& GlobalNamespace::TutorialPause::__cordl_internal_get_willResumeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___willResumeEvent;
}
constexpr void GlobalNamespace::TutorialPause::__cordl_internal_set_willResumeEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___willResumeEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::TutorialPause::__cordl_internal_get_didResumeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didResumeEvent;
}
constexpr ::System::Action* const& GlobalNamespace::TutorialPause::__cordl_internal_get_didResumeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didResumeEvent;
}
constexpr void GlobalNamespace::TutorialPause::__cordl_internal_set_didResumeEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didResumeEvent = value;
}
constexpr bool& GlobalNamespace::TutorialPause::__cordl_internal_get__pause() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pause;
}
constexpr bool const& GlobalNamespace::TutorialPause::__cordl_internal_get__pause() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pause;
}
constexpr void GlobalNamespace::TutorialPause::__cordl_internal_set__pause(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pause = value;
}
inline bool GlobalNamespace::TutorialPause::get_isPaused() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialPause*>(), { "get_isPaused", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialPause::add_didPauseEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialPause*>(), { "add_didPauseEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TutorialPause::remove_didPauseEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialPause*>(), { "remove_didPauseEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TutorialPause::add_willResumeEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialPause*>(), { "add_willResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TutorialPause::remove_willResumeEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialPause*>(), { "remove_willResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TutorialPause::add_didResumeEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialPause*>(), { "add_didResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TutorialPause::remove_didResumeEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialPause*>(), { "remove_didResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TutorialPause::Pause() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialPause*>(), { "Pause", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialPause::WillResume() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialPause*>(), { "WillResume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialPause::Resume() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialPause*>(), { "Resume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialPause::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialPause*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TutorialPause* GlobalNamespace::TutorialPause::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TutorialPause*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGamePause"
constexpr GlobalNamespace::TutorialPause::operator ::GlobalNamespace::IGamePause*() noexcept {
  return static_cast<::GlobalNamespace::IGamePause*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGamePause"
constexpr ::GlobalNamespace::IGamePause* GlobalNamespace::TutorialPause::i___GlobalNamespace__IGamePause() noexcept {
  return static_cast<::GlobalNamespace::IGamePause*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialPause::TutorialPause() {}
