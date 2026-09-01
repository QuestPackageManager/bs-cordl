#pragma once
// IWYU pragma private; include "System\Security\Cryptography\SHA1CryptoServiceProvider.hpp"
#include "System/Security/Cryptography/zzzz__SHA1_impl.hpp"
#include "System/Security/Cryptography/zzzz__SHA1CryptoServiceProvider_def.hpp"
#include "System/Security/Cryptography/zzzz__SHA1Internal_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::SHA1CryptoServiceProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SHA1CryptoServiceProvider::*)()>(&::System::Security::Cryptography::SHA1CryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b10fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1CryptoServiceProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA1CryptoServiceProvider.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SHA1CryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::SHA1CryptoServiceProvider::Finalize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b11028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1CryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::SHA1CryptoServiceProvider*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA1CryptoServiceProvider.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SHA1CryptoServiceProvider::*)(bool)>(
    &::System::Security::Cryptography::SHA1CryptoServiceProvider::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b11078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1CryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::SHA1CryptoServiceProvider*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA1CryptoServiceProvider.HashCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SHA1CryptoServiceProvider::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Security::Cryptography::SHA1CryptoServiceProvider::HashCore)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b11088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1CryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::SHA1CryptoServiceProvider*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA1CryptoServiceProvider.HashFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::SHA1CryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::SHA1CryptoServiceProvider::HashFinal)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b110a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1CryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::SHA1CryptoServiceProvider*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SHA1CryptoServiceProvider.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SHA1CryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::SHA1CryptoServiceProvider::Initialize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b110c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1CryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::SHA1CryptoServiceProvider*>(), 18 }));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::SHA1Internal*& System::Security::Cryptography::SHA1CryptoServiceProvider::__cordl_internal_get_sha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sha;
}
constexpr ::System::Security::Cryptography::SHA1Internal* const& System::Security::Cryptography::SHA1CryptoServiceProvider::__cordl_internal_get_sha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sha;
}
constexpr void System::Security::Cryptography::SHA1CryptoServiceProvider::__cordl_internal_set_sha(::System::Security::Cryptography::SHA1Internal* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sha = value;
}
inline void System::Security::Cryptography::SHA1CryptoServiceProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::SHA1CryptoServiceProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::SHA1CryptoServiceProvider::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::SHA1CryptoServiceProvider*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::SHA1CryptoServiceProvider::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::SHA1CryptoServiceProvider*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Security::Cryptography::SHA1CryptoServiceProvider::HashCore(::ArrayW<uint8_t> rgb, int32_t ibStart, int32_t cbSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::SHA1CryptoServiceProvider*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rgb, ibStart, cbSize);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::SHA1CryptoServiceProvider::HashFinal() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::SHA1CryptoServiceProvider*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Security::Cryptography::SHA1CryptoServiceProvider::Initialize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::SHA1CryptoServiceProvider*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::SHA1CryptoServiceProvider* System::Security::Cryptography::SHA1CryptoServiceProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::SHA1CryptoServiceProvider*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::SHA1CryptoServiceProvider::SHA1CryptoServiceProvider() {}
