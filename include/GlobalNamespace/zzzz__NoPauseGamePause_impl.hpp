#pragma once
// IWYU pragma private; include "GlobalNamespace\NoPauseGamePause.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NoPauseGamePause_def.hpp"
#include "GlobalNamespace/zzzz__IGamePause_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoPauseGamePause.get_isPaused
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NoPauseGamePause::*)()>(&::GlobalNamespace::NoPauseGamePause::get_isPaused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59b295c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPauseGamePause*>(), { "get_isPaused", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoPauseGamePause.add_didPauseEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoPauseGamePause::*)(::System::Action*)>(&::GlobalNamespace::NoPauseGamePause::add_didPauseEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59b2964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPauseGamePause*>(), { "add_didPauseEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoPauseGamePause.remove_didPauseEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoPauseGamePause::*)(::System::Action*)>(&::GlobalNamespace::NoPauseGamePause::remove_didPauseEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59b2a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPauseGamePause*>(), { "remove_didPauseEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoPauseGamePause.add_willResumeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoPauseGamePause::*)(::System::Action*)>(&::GlobalNamespace::NoPauseGamePause::add_willResumeEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59b2abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPauseGamePause*>(), { "add_willResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoPauseGamePause.remove_willResumeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoPauseGamePause::*)(::System::Action*)>(&::GlobalNamespace::NoPauseGamePause::remove_willResumeEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59b2b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPauseGamePause*>(), { "remove_willResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoPauseGamePause.add_didResumeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoPauseGamePause::*)(::System::Action*)>(&::GlobalNamespace::NoPauseGamePause::add_didResumeEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59b2c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPauseGamePause*>(), { "add_didResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoPauseGamePause.remove_didResumeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoPauseGamePause::*)(::System::Action*)>(&::GlobalNamespace::NoPauseGamePause::remove_didResumeEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59b2cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPauseGamePause*>(), { "remove_didResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoPauseGamePause.Pause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoPauseGamePause::*)()>(&::GlobalNamespace::NoPauseGamePause::Pause)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x59b2d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPauseGamePause*>(), { "Pause", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoPauseGamePause.WillResume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoPauseGamePause::*)()>(&::GlobalNamespace::NoPauseGamePause::WillResume)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59b2d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPauseGamePause*>(), { "WillResume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoPauseGamePause.Resume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoPauseGamePause::*)()>(&::GlobalNamespace::NoPauseGamePause::Resume)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59b2dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPauseGamePause*>(), { "Resume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoPauseGamePause._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoPauseGamePause::*)()>(&::GlobalNamespace::NoPauseGamePause::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59b2dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPauseGamePause*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::NoPauseGamePause::__cordl_internal_get_didPauseEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPauseEvent;
}
constexpr ::System::Action* const& GlobalNamespace::NoPauseGamePause::__cordl_internal_get_didPauseEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPauseEvent;
}
constexpr void GlobalNamespace::NoPauseGamePause::__cordl_internal_set_didPauseEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didPauseEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::NoPauseGamePause::__cordl_internal_get_willResumeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___willResumeEvent;
}
constexpr ::System::Action* const& GlobalNamespace::NoPauseGamePause::__cordl_internal_get_willResumeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___willResumeEvent;
}
constexpr void GlobalNamespace::NoPauseGamePause::__cordl_internal_set_willResumeEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___willResumeEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::NoPauseGamePause::__cordl_internal_get_didResumeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didResumeEvent;
}
constexpr ::System::Action* const& GlobalNamespace::NoPauseGamePause::__cordl_internal_get_didResumeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didResumeEvent;
}
constexpr void GlobalNamespace::NoPauseGamePause::__cordl_internal_set_didResumeEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didResumeEvent = value;
}
constexpr bool& GlobalNamespace::NoPauseGamePause::__cordl_internal_get__pause() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pause;
}
constexpr bool const& GlobalNamespace::NoPauseGamePause::__cordl_internal_get__pause() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pause;
}
constexpr void GlobalNamespace::NoPauseGamePause::__cordl_internal_set__pause(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pause = value;
}
inline bool GlobalNamespace::NoPauseGamePause::get_isPaused() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPauseGamePause*>(), { "get_isPaused", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::NoPauseGamePause::add_didPauseEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPauseGamePause*>(), { "add_didPauseEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NoPauseGamePause::remove_didPauseEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPauseGamePause*>(), { "remove_didPauseEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NoPauseGamePause::add_willResumeEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPauseGamePause*>(), { "add_willResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NoPauseGamePause::remove_willResumeEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPauseGamePause*>(), { "remove_willResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NoPauseGamePause::add_didResumeEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPauseGamePause*>(), { "add_didResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NoPauseGamePause::remove_didResumeEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPauseGamePause*>(), { "remove_didResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NoPauseGamePause::Pause() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPauseGamePause*>(), { "Pause", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoPauseGamePause::WillResume() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPauseGamePause*>(), { "WillResume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoPauseGamePause::Resume() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPauseGamePause*>(), { "Resume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoPauseGamePause::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoPauseGamePause*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoPauseGamePause* GlobalNamespace::NoPauseGamePause::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoPauseGamePause*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGamePause"
constexpr GlobalNamespace::NoPauseGamePause::operator ::GlobalNamespace::IGamePause*() noexcept {
  return static_cast<::GlobalNamespace::IGamePause*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGamePause"
constexpr ::GlobalNamespace::IGamePause* GlobalNamespace::NoPauseGamePause::i___GlobalNamespace__IGamePause() noexcept {
  return static_cast<::GlobalNamespace::IGamePause*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoPauseGamePause::NoPauseGamePause() {}
