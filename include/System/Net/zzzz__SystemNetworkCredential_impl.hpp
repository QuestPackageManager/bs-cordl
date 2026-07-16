#pragma once
// IWYU pragma private; include "System/Net/SystemNetworkCredential.hpp"
#include "System/Net/zzzz__NetworkCredential_impl.hpp"
#include "System/Net/zzzz__SystemNetworkCredential_def.hpp"
//  Writing Method size for method: ::System::Net::SystemNetworkCredential._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::SystemNetworkCredential::*)()>(&::System::Net::SystemNetworkCredential::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6406208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::SystemNetworkCredential*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Net::SystemNetworkCredential::setStaticF_defaultCredential(::System::Net::SystemNetworkCredential* value) {
  ::cordl_internals::setStaticField<::System::Net::SystemNetworkCredential*, "defaultCredential", ::System::Net::SystemNetworkCredential*>(
      std::forward<::System::Net::SystemNetworkCredential*>(value));
}
inline ::System::Net::SystemNetworkCredential* System::Net::SystemNetworkCredential::getStaticF_defaultCredential() {
  return ::cordl_internals::getStaticField<::System::Net::SystemNetworkCredential*, "defaultCredential", ::System::Net::SystemNetworkCredential*>();
}
inline void System::Net::SystemNetworkCredential::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::SystemNetworkCredential*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::SystemNetworkCredential* System::Net::SystemNetworkCredential::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::SystemNetworkCredential*>());
}
// Ctor Parameters []
constexpr ::System::Net::SystemNetworkCredential::SystemNetworkCredential() {}
