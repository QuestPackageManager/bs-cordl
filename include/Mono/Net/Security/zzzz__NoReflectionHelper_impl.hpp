#pragma once
// IWYU pragma private; include "Mono\Net\Security\NoReflectionHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Net/Security/zzzz__NoReflectionHelper_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::NoReflectionHelper.GetProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)()>(&::Mono::Net::Security::NoReflectionHelper::GetProvider)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5fdece0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::NoReflectionHelper*>(), { "GetProvider", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Object* Mono::Net::Security::NoReflectionHelper::GetProvider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::NoReflectionHelper*>(), { "GetProvider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::NoReflectionHelper::NoReflectionHelper() {}
