#pragma once
// IWYU pragma private; include "Oculus/Platform/Entitlements.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__Entitlements_def.hpp"
#include "Oculus/Platform/zzzz__Request_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Entitlements.IsUserEntitledToApplication
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request* (*)()>(&::Oculus::Platform::Entitlements::IsUserEntitledToApplication)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5de5c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Entitlements*>(), { "IsUserEntitledToApplication", {}, {} })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request* Oculus::Platform::Entitlements::IsUserEntitledToApplication() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Entitlements*>(), { "IsUserEntitledToApplication", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Entitlements::Entitlements() {}
