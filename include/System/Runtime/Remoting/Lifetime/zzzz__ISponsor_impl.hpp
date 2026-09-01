#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Lifetime\ISponsor.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__ISponsor_def.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__ILease_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::ISponsor.Renewal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::Runtime::Remoting::Lifetime::ISponsor::*)(::System::Runtime::Remoting::Lifetime::ILease*)>(
    &::System::Runtime::Remoting::Lifetime::ISponsor::Renewal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::ISponsor*>(), { ::i2c::class_of<::System::Runtime::Remoting::Lifetime::ISponsor*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::TimeSpan System::Runtime::Remoting::Lifetime::ISponsor::Renewal(::System::Runtime::Remoting::Lifetime::ILease* lease) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Lifetime::ISponsor*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method, lease);
}
