#pragma once
// IWYU pragma private; include "System\Security\Cryptography\DSASignatureFormatter.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureFormatter_impl.hpp"
#include "System/Security/Cryptography/zzzz__DSASignatureFormatter_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::DSASignatureFormatter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSASignatureFormatter::*)()>(&::System::Security::Cryptography::DSASignatureFormatter::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5afb214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DSASignatureFormatter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Security::Cryptography::DSASignatureFormatter::__cordl_internal_get__oid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oid;
}
constexpr ::StringW const& System::Security::Cryptography::DSASignatureFormatter::__cordl_internal_get__oid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oid;
}
constexpr void System::Security::Cryptography::DSASignatureFormatter::__cordl_internal_set__oid(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____oid = value;
}
inline void System::Security::Cryptography::DSASignatureFormatter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DSASignatureFormatter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::DSASignatureFormatter* System::Security::Cryptography::DSASignatureFormatter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::DSASignatureFormatter*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::DSASignatureFormatter::DSASignatureFormatter() {}
