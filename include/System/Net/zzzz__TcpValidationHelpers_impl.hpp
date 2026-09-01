#pragma once
// IWYU pragma private; include "System\Net\TcpValidationHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__TcpValidationHelpers_def.hpp"
//  Writing Method size for method: ::System::Net::TcpValidationHelpers.ValidatePortNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::System::Net::TcpValidationHelpers::ValidatePortNumber)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x63f987c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::TcpValidationHelpers*>(), { "ValidatePortNumber", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline bool System::Net::TcpValidationHelpers::ValidatePortNumber(int32_t port) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::TcpValidationHelpers*>(), { "ValidatePortNumber", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, port);
}
// Ctor Parameters []
constexpr ::System::Net::TcpValidationHelpers::TcpValidationHelpers() {}
