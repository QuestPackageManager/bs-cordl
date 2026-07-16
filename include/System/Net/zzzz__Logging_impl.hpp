#pragma once
// IWYU pragma private; include "System/Net/Logging.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__Logging_def.hpp"
//  Writing Method size for method: ::System::Net::Logging.get_On
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Net::Logging::get_On)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x641cc28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Logging*>(), { "get_On", {}, {} })));
    return ___internal_method;
  }
};
inline bool System::Net::Logging::get_On() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Logging*>(), { "get_On", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Logging::Logging() {}
