#pragma once
// IWYU pragma private; include "GlobalNamespace\MockLevelEndActions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockLevelEndActions_def.hpp"
#include "GlobalNamespace/zzzz__ILevelEndActions_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockLevelEndActions.add_levelFinishedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockLevelEndActions::*)(::System::Action*)>(&::GlobalNamespace::MockLevelEndActions::add_levelFinishedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59a97c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockLevelEndActions*>(), { "add_levelFinishedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockLevelEndActions.remove_levelFinishedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockLevelEndActions::*)(::System::Action*)>(&::GlobalNamespace::MockLevelEndActions::remove_levelFinishedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59a9870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockLevelEndActions*>(), { "remove_levelFinishedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockLevelEndActions.add_levelFailedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockLevelEndActions::*)(::System::Action*)>(&::GlobalNamespace::MockLevelEndActions::add_levelFailedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59a991c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockLevelEndActions*>(), { "add_levelFailedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockLevelEndActions.remove_levelFailedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockLevelEndActions::*)(::System::Action*)>(&::GlobalNamespace::MockLevelEndActions::remove_levelFailedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59a99c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockLevelEndActions*>(), { "remove_levelFailedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockLevelEndActions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockLevelEndActions::*)()>(&::GlobalNamespace::MockLevelEndActions::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59a9a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockLevelEndActions*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::MockLevelEndActions::__cordl_internal_get_levelFinishedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelFinishedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::MockLevelEndActions::__cordl_internal_get_levelFinishedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelFinishedEvent;
}
constexpr void GlobalNamespace::MockLevelEndActions::__cordl_internal_set_levelFinishedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelFinishedEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::MockLevelEndActions::__cordl_internal_get_levelFailedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelFailedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::MockLevelEndActions::__cordl_internal_get_levelFailedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelFailedEvent;
}
constexpr void GlobalNamespace::MockLevelEndActions::__cordl_internal_set_levelFailedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelFailedEvent = value;
}
inline void GlobalNamespace::MockLevelEndActions::add_levelFinishedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockLevelEndActions*>(), { "add_levelFinishedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MockLevelEndActions::remove_levelFinishedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockLevelEndActions*>(), { "remove_levelFinishedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MockLevelEndActions::add_levelFailedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockLevelEndActions*>(), { "add_levelFailedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MockLevelEndActions::remove_levelFailedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockLevelEndActions*>(), { "remove_levelFailedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MockLevelEndActions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockLevelEndActions*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MockLevelEndActions* GlobalNamespace::MockLevelEndActions::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MockLevelEndActions*>());
}
/// @brief Convert operator to "::GlobalNamespace::ILevelEndActions"
constexpr GlobalNamespace::MockLevelEndActions::operator ::GlobalNamespace::ILevelEndActions*() noexcept {
  return static_cast<::GlobalNamespace::ILevelEndActions*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILevelEndActions"
constexpr ::GlobalNamespace::ILevelEndActions* GlobalNamespace::MockLevelEndActions::i___GlobalNamespace__ILevelEndActions() noexcept {
  return static_cast<::GlobalNamespace::ILevelEndActions*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockLevelEndActions::MockLevelEndActions() {}
