#pragma once
// IWYU pragma private; include "GlobalNamespace\MockPause.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockPause_def.hpp"
#include "GlobalNamespace/zzzz__IGamePause_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockPause.get_isPaused
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPause::*)()>(&::GlobalNamespace::MockPause::get_isPaused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59af904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPause*>(), { "get_isPaused", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPause.add_didPauseEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPause::*)(::System::Action*)>(&::GlobalNamespace::MockPause::add_didPauseEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59af90c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPause*>(), { "add_didPauseEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPause.remove_didPauseEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPause::*)(::System::Action*)>(&::GlobalNamespace::MockPause::remove_didPauseEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59af9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPause*>(), { "remove_didPauseEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPause.add_willResumeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPause::*)(::System::Action*)>(&::GlobalNamespace::MockPause::add_willResumeEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59afa64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPause*>(), { "add_willResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPause.remove_willResumeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPause::*)(::System::Action*)>(&::GlobalNamespace::MockPause::remove_willResumeEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59afb10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPause*>(), { "remove_willResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPause.add_didResumeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPause::*)(::System::Action*)>(&::GlobalNamespace::MockPause::add_didResumeEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59afbbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPause*>(), { "add_didResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPause.remove_didResumeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPause::*)(::System::Action*)>(&::GlobalNamespace::MockPause::remove_didResumeEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59afc68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPause*>(), { "remove_didResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPause.Pause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPause::*)()>(&::GlobalNamespace::MockPause::Pause)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59afd14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPause*>(), { "Pause", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPause.WillResume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPause::*)()>(&::GlobalNamespace::MockPause::WillResume)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59afd4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPause*>(), { "WillResume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPause.Resume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPause::*)()>(&::GlobalNamespace::MockPause::Resume)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59afd84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPause*>(), { "Resume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPause._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPause::*)()>(&::GlobalNamespace::MockPause::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59afdbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPause*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::MockPause::__cordl_internal_get_didPauseEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPauseEvent;
}
constexpr ::System::Action* const& GlobalNamespace::MockPause::__cordl_internal_get_didPauseEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPauseEvent;
}
constexpr void GlobalNamespace::MockPause::__cordl_internal_set_didPauseEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didPauseEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::MockPause::__cordl_internal_get_willResumeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___willResumeEvent;
}
constexpr ::System::Action* const& GlobalNamespace::MockPause::__cordl_internal_get_willResumeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___willResumeEvent;
}
constexpr void GlobalNamespace::MockPause::__cordl_internal_set_willResumeEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___willResumeEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::MockPause::__cordl_internal_get_didResumeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didResumeEvent;
}
constexpr ::System::Action* const& GlobalNamespace::MockPause::__cordl_internal_get_didResumeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didResumeEvent;
}
constexpr void GlobalNamespace::MockPause::__cordl_internal_set_didResumeEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didResumeEvent = value;
}
inline bool GlobalNamespace::MockPause::get_isPaused() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPause*>(), { "get_isPaused", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MockPause::add_didPauseEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPause*>(), { "add_didPauseEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MockPause::remove_didPauseEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPause*>(), { "remove_didPauseEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MockPause::add_willResumeEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPause*>(), { "add_willResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MockPause::remove_willResumeEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPause*>(), { "remove_willResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MockPause::add_didResumeEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPause*>(), { "add_didResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MockPause::remove_didResumeEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPause*>(), { "remove_didResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MockPause::Pause() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPause*>(), { "Pause", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockPause::WillResume() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPause*>(), { "WillResume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockPause::Resume() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPause*>(), { "Resume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockPause::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPause*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MockPause* GlobalNamespace::MockPause::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MockPause*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGamePause"
constexpr GlobalNamespace::MockPause::operator ::GlobalNamespace::IGamePause*() noexcept {
  return static_cast<::GlobalNamespace::IGamePause*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGamePause"
constexpr ::GlobalNamespace::IGamePause* GlobalNamespace::MockPause::i___GlobalNamespace__IGamePause() noexcept {
  return static_cast<::GlobalNamespace::IGamePause*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockPause::MockPause() {}
