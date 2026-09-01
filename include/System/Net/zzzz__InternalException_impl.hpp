#pragma once
// IWYU pragma private; include "System\Net\InternalException.hpp"
#include "System/zzzz__SystemException_impl.hpp"
#include "System/Net/zzzz__InternalException_def.hpp"
//  Writing Method size for method: ::System::Net::InternalException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::InternalException::*)()>(&::System::Net::InternalException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64086f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::InternalException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Net::InternalException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::InternalException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::InternalException* System::Net::InternalException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::InternalException*>());
}
// Ctor Parameters []
constexpr ::System::Net::InternalException::InternalException() {}
