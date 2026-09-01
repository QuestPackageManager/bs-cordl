#pragma once
// IWYU pragma private; include "Mono\Security\Cryptography\RC4.hpp"
#include "System/Security/Cryptography/zzzz__KeySizes_impl.hpp"
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_impl.hpp"
#include "Mono/Security/Cryptography/zzzz__RC4_def.hpp"
//  Writing Method size for method: ::Mono::Security::Cryptography::RC4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::RC4::*)()>(&::Mono::Security::Cryptography::RC4::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5a9e734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::RC4*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RC4.get_IV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Cryptography::RC4::*)()>(&::Mono::Security::Cryptography::RC4::get_IV)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5aa34c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::RC4*>(), { ::i2c::class_of<::Mono::Security::Cryptography::RC4*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RC4.set_IV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::RC4::*)(::ArrayW<uint8_t>)>(&::Mono::Security::Cryptography::RC4::set_IV)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5aa3508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::RC4*>(), { ::i2c::class_of<::Mono::Security::Cryptography::RC4*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RC4.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::Cryptography::RC4* (*)()>(&::Mono::Security::Cryptography::RC4::Create)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5aa350c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::RC4*>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
inline void Mono::Security::Cryptography::RC4::setStaticF_s_legalBlockSizes(::ArrayW<::System::Security::Cryptography::KeySizes*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Security::Cryptography::KeySizes*>, "s_legalBlockSizes", ::Mono::Security::Cryptography::RC4*>(
      std::forward<::ArrayW<::System::Security::Cryptography::KeySizes*>>(value));
}
inline ::ArrayW<::System::Security::Cryptography::KeySizes*> Mono::Security::Cryptography::RC4::getStaticF_s_legalBlockSizes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Security::Cryptography::KeySizes*>, "s_legalBlockSizes", ::Mono::Security::Cryptography::RC4*>();
}
inline void Mono::Security::Cryptography::RC4::setStaticF_s_legalKeySizes(::ArrayW<::System::Security::Cryptography::KeySizes*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Security::Cryptography::KeySizes*>, "s_legalKeySizes", ::Mono::Security::Cryptography::RC4*>(
      std::forward<::ArrayW<::System::Security::Cryptography::KeySizes*>>(value));
}
inline ::ArrayW<::System::Security::Cryptography::KeySizes*> Mono::Security::Cryptography::RC4::getStaticF_s_legalKeySizes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Security::Cryptography::KeySizes*>, "s_legalKeySizes", ::Mono::Security::Cryptography::RC4*>();
}
inline void Mono::Security::Cryptography::RC4::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::RC4*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::RC4::get_IV() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Cryptography::RC4*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::RC4::set_IV(::ArrayW<uint8_t> value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Cryptography::RC4*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Mono::Security::Cryptography::RC4* Mono::Security::Cryptography::RC4::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::RC4*>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Cryptography::RC4*>(nullptr, ___internal_method);
}
inline ::Mono::Security::Cryptography::RC4* Mono::Security::Cryptography::RC4::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Cryptography::RC4*>());
}
// Ctor Parameters []
constexpr ::Mono::Security::Cryptography::RC4::RC4() {}
