#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Lifetime\LifetimeServices.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__LifetimeServices_def.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__LeaseManager_def.hpp"
#include "System/Runtime/Remoting/zzzz__ServerIdentity_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::LifetimeServices.get_LeaseManagerPollTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)()>(&::System::Runtime::Remoting::Lifetime::LifetimeServices::get_LeaseManagerPollTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b3646c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LifetimeServices*>(), { "get_LeaseManagerPollTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::LifetimeServices.set_LeaseManagerPollTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::TimeSpan)>(&::System::Runtime::Remoting::Lifetime::LifetimeServices::set_LeaseManagerPollTime)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5b364c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LifetimeServices*>(), { "set_LeaseManagerPollTime", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::LifetimeServices.get_LeaseTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)()>(&::System::Runtime::Remoting::Lifetime::LifetimeServices::get_LeaseTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b36540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LifetimeServices*>(), { "get_LeaseTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::LifetimeServices.set_LeaseTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::TimeSpan)>(&::System::Runtime::Remoting::Lifetime::LifetimeServices::set_LeaseTime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b3659c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LifetimeServices*>(), { "set_LeaseTime", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::LifetimeServices.get_RenewOnCallTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)()>(&::System::Runtime::Remoting::Lifetime::LifetimeServices::get_RenewOnCallTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b365fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LifetimeServices*>(), { "get_RenewOnCallTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::LifetimeServices.set_RenewOnCallTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::TimeSpan)>(&::System::Runtime::Remoting::Lifetime::LifetimeServices::set_RenewOnCallTime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b36658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LifetimeServices*>(), { "set_RenewOnCallTime", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::LifetimeServices.get_SponsorshipTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)()>(&::System::Runtime::Remoting::Lifetime::LifetimeServices::get_SponsorshipTimeout)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b366b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LifetimeServices*>(), { "get_SponsorshipTimeout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::LifetimeServices.set_SponsorshipTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::TimeSpan)>(&::System::Runtime::Remoting::Lifetime::LifetimeServices::set_SponsorshipTimeout)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b36714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LifetimeServices*>(), { "set_SponsorshipTimeout", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::LifetimeServices.TrackLifetime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Remoting::ServerIdentity*)>(&::System::Runtime::Remoting::Lifetime::LifetimeServices::TrackLifetime)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b2e4c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LifetimeServices*>(),
                                                                                           { "TrackLifetime", {}, { ::i2c::type_of<::System::Runtime::Remoting::ServerIdentity*>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Lifetime::LifetimeServices::setStaticF__leaseManagerPollTime(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "_leaseManagerPollTime", ::System::Runtime::Remoting::Lifetime::LifetimeServices*>(std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan System::Runtime::Remoting::Lifetime::LifetimeServices::getStaticF__leaseManagerPollTime() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "_leaseManagerPollTime", ::System::Runtime::Remoting::Lifetime::LifetimeServices*>();
}
inline void System::Runtime::Remoting::Lifetime::LifetimeServices::setStaticF__leaseTime(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "_leaseTime", ::System::Runtime::Remoting::Lifetime::LifetimeServices*>(std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan System::Runtime::Remoting::Lifetime::LifetimeServices::getStaticF__leaseTime() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "_leaseTime", ::System::Runtime::Remoting::Lifetime::LifetimeServices*>();
}
inline void System::Runtime::Remoting::Lifetime::LifetimeServices::setStaticF__renewOnCallTime(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "_renewOnCallTime", ::System::Runtime::Remoting::Lifetime::LifetimeServices*>(std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan System::Runtime::Remoting::Lifetime::LifetimeServices::getStaticF__renewOnCallTime() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "_renewOnCallTime", ::System::Runtime::Remoting::Lifetime::LifetimeServices*>();
}
inline void System::Runtime::Remoting::Lifetime::LifetimeServices::setStaticF__sponsorshipTimeout(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "_sponsorshipTimeout", ::System::Runtime::Remoting::Lifetime::LifetimeServices*>(std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan System::Runtime::Remoting::Lifetime::LifetimeServices::getStaticF__sponsorshipTimeout() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "_sponsorshipTimeout", ::System::Runtime::Remoting::Lifetime::LifetimeServices*>();
}
inline void System::Runtime::Remoting::Lifetime::LifetimeServices::setStaticF__leaseManager(::System::Runtime::Remoting::Lifetime::LeaseManager* value) {
  ::cordl_internals::setStaticField<::System::Runtime::Remoting::Lifetime::LeaseManager*, "_leaseManager", ::System::Runtime::Remoting::Lifetime::LifetimeServices*>(
      std::forward<::System::Runtime::Remoting::Lifetime::LeaseManager*>(value));
}
inline ::System::Runtime::Remoting::Lifetime::LeaseManager* System::Runtime::Remoting::Lifetime::LifetimeServices::getStaticF__leaseManager() {
  return ::cordl_internals::getStaticField<::System::Runtime::Remoting::Lifetime::LeaseManager*, "_leaseManager", ::System::Runtime::Remoting::Lifetime::LifetimeServices*>();
}
inline ::System::TimeSpan System::Runtime::Remoting::Lifetime::LifetimeServices::get_LeaseManagerPollTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LifetimeServices*>(), { "get_LeaseManagerPollTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method);
}
inline void System::Runtime::Remoting::Lifetime::LifetimeServices::set_LeaseManagerPollTime(::System::TimeSpan value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LifetimeServices*>(), { "set_LeaseManagerPollTime", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::TimeSpan System::Runtime::Remoting::Lifetime::LifetimeServices::get_LeaseTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LifetimeServices*>(), { "get_LeaseTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method);
}
inline void System::Runtime::Remoting::Lifetime::LifetimeServices::set_LeaseTime(::System::TimeSpan value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LifetimeServices*>(), { "set_LeaseTime", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::TimeSpan System::Runtime::Remoting::Lifetime::LifetimeServices::get_RenewOnCallTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LifetimeServices*>(), { "get_RenewOnCallTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method);
}
inline void System::Runtime::Remoting::Lifetime::LifetimeServices::set_RenewOnCallTime(::System::TimeSpan value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LifetimeServices*>(), { "set_RenewOnCallTime", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::TimeSpan System::Runtime::Remoting::Lifetime::LifetimeServices::get_SponsorshipTimeout() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LifetimeServices*>(), { "get_SponsorshipTimeout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method);
}
inline void System::Runtime::Remoting::Lifetime::LifetimeServices::set_SponsorshipTimeout(::System::TimeSpan value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LifetimeServices*>(), { "set_SponsorshipTimeout", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void System::Runtime::Remoting::Lifetime::LifetimeServices::TrackLifetime(::System::Runtime::Remoting::ServerIdentity* identity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LifetimeServices*>(),
                                                                                         { "TrackLifetime", {}, { ::i2c::type_of<::System::Runtime::Remoting::ServerIdentity*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, identity);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Lifetime::LifetimeServices::LifetimeServices() {}
