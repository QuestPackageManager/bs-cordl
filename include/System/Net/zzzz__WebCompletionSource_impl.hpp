#pragma once
// IWYU pragma private; include "System\Net\WebCompletionSource.hpp"
#include "System/Net/zzzz__WebCompletionSource_1_impl.hpp"
#include "System/Net/zzzz__WebCompletionSource_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::WebCompletionSource._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebCompletionSource::*)()>(&::System::Net::WebCompletionSource::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6336724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebCompletionSource*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Net::WebCompletionSource::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebCompletionSource*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::WebCompletionSource* System::Net::WebCompletionSource::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebCompletionSource*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebCompletionSource::WebCompletionSource() {}
