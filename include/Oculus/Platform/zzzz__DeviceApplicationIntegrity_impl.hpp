#pragma once
// IWYU pragma private; include "Oculus/Platform/DeviceApplicationIntegrity.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__DeviceApplicationIntegrity_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::DeviceApplicationIntegrity.GetIntegrityToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::StringW>* (*)(::StringW)>(&::Oculus::Platform::DeviceApplicationIntegrity::GetIntegrityToken)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5de5ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::DeviceApplicationIntegrity*>(), { "GetIntegrityToken", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request_1<::StringW>* Oculus::Platform::DeviceApplicationIntegrity::GetIntegrityToken(::StringW challenge_nonce) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::DeviceApplicationIntegrity*>(), { "GetIntegrityToken", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::StringW>*>(nullptr, ___internal_method, challenge_nonce);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::DeviceApplicationIntegrity::DeviceApplicationIntegrity() {}
