#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Lifetime/LeaseManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__LeaseManager_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Runtime/Remoting/zzzz__ServerIdentity_def.hpp"
#include "System/Threading/zzzz__Timer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::LeaseManager.SetPollTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Lifetime::LeaseManager::*)(::System::TimeSpan)>(
    &::System::Runtime::Remoting::Lifetime::LeaseManager::SetPollTime)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5b335e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LeaseManager*>(), { "SetPollTime", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::LeaseManager.TrackLifetime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Lifetime::LeaseManager::*)(::System::Runtime::Remoting::ServerIdentity*)>(
    &::System::Runtime::Remoting::Lifetime::LeaseManager::TrackLifetime)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5b336d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LeaseManager*>(),
                                                                                           { "TrackLifetime", {}, { ::i2c::type_of<::System::Runtime::Remoting::ServerIdentity*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::LeaseManager.StartManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Lifetime::LeaseManager::*)()>(&::System::Runtime::Remoting::Lifetime::LeaseManager::StartManager)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5b337fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LeaseManager*>(), { "StartManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::LeaseManager.StopManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Lifetime::LeaseManager::*)()>(&::System::Runtime::Remoting::Lifetime::LeaseManager::StopManager)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b33980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LeaseManager*>(), { "StopManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::LeaseManager.ManageLeases
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Lifetime::LeaseManager::*)(::System::Object*)>(
    &::System::Runtime::Remoting::Lifetime::LeaseManager::ManageLeases)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5b3399c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LeaseManager*>(), { "ManageLeases", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::LeaseManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Lifetime::LeaseManager::*)()>(&::System::Runtime::Remoting::Lifetime::LeaseManager::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b33bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LeaseManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::ArrayList*& System::Runtime::Remoting::Lifetime::LeaseManager::__cordl_internal_get__objects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objects;
}
constexpr ::System::Collections::ArrayList* const& System::Runtime::Remoting::Lifetime::LeaseManager::__cordl_internal_get__objects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objects;
}
constexpr void System::Runtime::Remoting::Lifetime::LeaseManager::__cordl_internal_set__objects(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objects = value;
}
constexpr ::System::Threading::Timer*& System::Runtime::Remoting::Lifetime::LeaseManager::__cordl_internal_get__timer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timer;
}
constexpr ::System::Threading::Timer* const& System::Runtime::Remoting::Lifetime::LeaseManager::__cordl_internal_get__timer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timer;
}
constexpr void System::Runtime::Remoting::Lifetime::LeaseManager::__cordl_internal_set__timer(::System::Threading::Timer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timer = value;
}
inline void System::Runtime::Remoting::Lifetime::LeaseManager::SetPollTime(::System::TimeSpan timeSpan) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LeaseManager*>(), { "SetPollTime", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeSpan);
}
inline void System::Runtime::Remoting::Lifetime::LeaseManager::TrackLifetime(::System::Runtime::Remoting::ServerIdentity* identity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LeaseManager*>(),
                                                                                         { "TrackLifetime", {}, { ::i2c::type_of<::System::Runtime::Remoting::ServerIdentity*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identity);
}
inline void System::Runtime::Remoting::Lifetime::LeaseManager::StartManager() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LeaseManager*>(), { "StartManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Lifetime::LeaseManager::StopManager() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LeaseManager*>(), { "StopManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Lifetime::LeaseManager::ManageLeases(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LeaseManager*>(), { "ManageLeases", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void System::Runtime::Remoting::Lifetime::LeaseManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LeaseManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Lifetime::LeaseManager* System::Runtime::Remoting::Lifetime::LeaseManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Lifetime::LeaseManager*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Lifetime::LeaseManager::LeaseManager() {}
