#pragma once
// IWYU pragma private; include "System\Security\Cryptography\Rijndael.hpp"
#include "System/Security/Cryptography/zzzz__KeySizes_impl.hpp"
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_impl.hpp"
#include "System/Security/Cryptography/zzzz__Rijndael_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::Rijndael._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::Rijndael::*)()>(&::System::Security::Cryptography::Rijndael::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5afd378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Rijndael*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::Rijndael::setStaticF_s_legalBlockSizes(::ArrayW<::System::Security::Cryptography::KeySizes*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Security::Cryptography::KeySizes*>, "s_legalBlockSizes", ::System::Security::Cryptography::Rijndael*>(
      std::forward<::ArrayW<::System::Security::Cryptography::KeySizes*>>(value));
}
inline ::ArrayW<::System::Security::Cryptography::KeySizes*> System::Security::Cryptography::Rijndael::getStaticF_s_legalBlockSizes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Security::Cryptography::KeySizes*>, "s_legalBlockSizes", ::System::Security::Cryptography::Rijndael*>();
}
inline void System::Security::Cryptography::Rijndael::setStaticF_s_legalKeySizes(::ArrayW<::System::Security::Cryptography::KeySizes*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Security::Cryptography::KeySizes*>, "s_legalKeySizes", ::System::Security::Cryptography::Rijndael*>(
      std::forward<::ArrayW<::System::Security::Cryptography::KeySizes*>>(value));
}
inline ::ArrayW<::System::Security::Cryptography::KeySizes*> System::Security::Cryptography::Rijndael::getStaticF_s_legalKeySizes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Security::Cryptography::KeySizes*>, "s_legalKeySizes", ::System::Security::Cryptography::Rijndael*>();
}
inline void System::Security::Cryptography::Rijndael::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Rijndael*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::Rijndael* System::Security::Cryptography::Rijndael::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::Rijndael*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::Rijndael::Rijndael() {}
