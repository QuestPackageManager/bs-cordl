#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Lifetime\ILease.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__ILease_def.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__LeaseState_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::ILease.get_CurrentLeaseTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::Runtime::Remoting::Lifetime::ILease::*)()>(&::System::Runtime::Remoting::Lifetime::ILease::get_CurrentLeaseTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::ILease*>(), { ::i2c::class_of<::System::Runtime::Remoting::Lifetime::ILease*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::ILease.get_CurrentState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Lifetime::LeaseState (::System::Runtime::Remoting::Lifetime::ILease::*)()>(
    &::System::Runtime::Remoting::Lifetime::ILease::get_CurrentState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::ILease*>(), { ::i2c::class_of<::System::Runtime::Remoting::Lifetime::ILease*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::ILease.get_RenewOnCallTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::Runtime::Remoting::Lifetime::ILease::*)()>(&::System::Runtime::Remoting::Lifetime::ILease::get_RenewOnCallTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::ILease*>(), { ::i2c::class_of<::System::Runtime::Remoting::Lifetime::ILease*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::ILease.Renew
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::Runtime::Remoting::Lifetime::ILease::*)(::System::TimeSpan)>(
    &::System::Runtime::Remoting::Lifetime::ILease::Renew)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::ILease*>(), { ::i2c::class_of<::System::Runtime::Remoting::Lifetime::ILease*>(), 3 }));
    return ___internal_method;
  }
};
inline ::System::TimeSpan System::Runtime::Remoting::Lifetime::ILease::get_CurrentLeaseTime() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Lifetime::ILease*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Lifetime::LeaseState System::Runtime::Remoting::Lifetime::ILease::get_CurrentState() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Lifetime::ILease*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Lifetime::LeaseState>(this, ___internal_method);
}
inline ::System::TimeSpan System::Runtime::Remoting::Lifetime::ILease::get_RenewOnCallTime() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Lifetime::ILease*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline ::System::TimeSpan System::Runtime::Remoting::Lifetime::ILease::Renew(::System::TimeSpan renewalTime) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Lifetime::ILease*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method, renewalTime);
}
