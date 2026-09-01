#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Generators\BCrypt.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__BCrypt_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::BCrypt._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::BCrypt::*)()>(&::Org::BouncyCastle::Crypto::Generators::BCrypt::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x33d4144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::BCrypt*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::BCrypt.F
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Org::BouncyCastle::Crypto::Generators::BCrypt::*)(uint32_t)>(&::Org::BouncyCastle::Crypto::Generators::BCrypt::F)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x33d41ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::BCrypt*>(), { "F", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::BCrypt.ProcessTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::BCrypt::*)(uint32_t, uint32_t, ::ArrayW<uint32_t>)>(
    &::Org::BouncyCastle::Crypto::Generators::BCrypt::ProcessTable)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x33d4230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::BCrypt*>(),
                                                             { "ProcessTable", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::BCrypt.InitState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::BCrypt::*)()>(&::Org::BouncyCastle::Crypto::Generators::BCrypt::InitState)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x33d4364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::BCrypt*>(), { "InitState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::BCrypt.CyclicXorKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::BCrypt::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Generators::BCrypt::CyclicXorKey)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x33d4468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::BCrypt*>(), { "CyclicXorKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::BCrypt.EncryptMagicString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Generators::BCrypt::*)()>(
    &::Org::BouncyCastle::Crypto::Generators::BCrypt::EncryptMagicString)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x33d44ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::BCrypt*>(), { "EncryptMagicString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::BCrypt.ProcessTableWithSalt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::BCrypt::*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>, uint32_t, uint32_t)>(
    &::Org::BouncyCastle::Crypto::Generators::BCrypt::ProcessTableWithSalt)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x33d47c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::BCrypt*>(),
                            { "ProcessTableWithSalt", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::BCrypt.DeriveRawKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Generators::BCrypt::*)(int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Generators::BCrypt::DeriveRawKey)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x33d4a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::BCrypt*>(),
                                                             { "DeriveRawKey", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::BCrypt.PasswordToByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<char16_t>)>(&::Org::BouncyCastle::Crypto::Generators::BCrypt::PasswordToByteArray)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x33d4d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::BCrypt*>(), { "PasswordToByteArray", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::BCrypt.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Generators::BCrypt::Generate)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x33d4db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::BCrypt*>(),
                                                             { "Generate", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint32_t>& Org::BouncyCastle::Crypto::Generators::BCrypt::__cordl_internal_get_S() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S;
}
constexpr ::ArrayW<uint32_t> const& Org::BouncyCastle::Crypto::Generators::BCrypt::__cordl_internal_get_S() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S;
}
constexpr void Org::BouncyCastle::Crypto::Generators::BCrypt::__cordl_internal_set_S(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___S = value;
}
constexpr ::ArrayW<uint32_t>& Org::BouncyCastle::Crypto::Generators::BCrypt::__cordl_internal_get_P() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___P;
}
constexpr ::ArrayW<uint32_t> const& Org::BouncyCastle::Crypto::Generators::BCrypt::__cordl_internal_get_P() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___P;
}
constexpr void Org::BouncyCastle::Crypto::Generators::BCrypt::__cordl_internal_set_P(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___P = value;
}
inline void Org::BouncyCastle::Crypto::Generators::BCrypt::setStaticF_MAGIC_STRING(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "MAGIC_STRING", ::Org::BouncyCastle::Crypto::Generators::BCrypt*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Crypto::Generators::BCrypt::getStaticF_MAGIC_STRING() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "MAGIC_STRING", ::Org::BouncyCastle::Crypto::Generators::BCrypt*>();
}
inline void Org::BouncyCastle::Crypto::Generators::BCrypt::setStaticF_KP(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "KP", ::Org::BouncyCastle::Crypto::Generators::BCrypt*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Crypto::Generators::BCrypt::getStaticF_KP() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "KP", ::Org::BouncyCastle::Crypto::Generators::BCrypt*>();
}
inline void Org::BouncyCastle::Crypto::Generators::BCrypt::setStaticF_KS0(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "KS0", ::Org::BouncyCastle::Crypto::Generators::BCrypt*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Crypto::Generators::BCrypt::getStaticF_KS0() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "KS0", ::Org::BouncyCastle::Crypto::Generators::BCrypt*>();
}
inline void Org::BouncyCastle::Crypto::Generators::BCrypt::setStaticF_KS1(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "KS1", ::Org::BouncyCastle::Crypto::Generators::BCrypt*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Crypto::Generators::BCrypt::getStaticF_KS1() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "KS1", ::Org::BouncyCastle::Crypto::Generators::BCrypt*>();
}
inline void Org::BouncyCastle::Crypto::Generators::BCrypt::setStaticF_KS2(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "KS2", ::Org::BouncyCastle::Crypto::Generators::BCrypt*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Crypto::Generators::BCrypt::getStaticF_KS2() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "KS2", ::Org::BouncyCastle::Crypto::Generators::BCrypt*>();
}
inline void Org::BouncyCastle::Crypto::Generators::BCrypt::setStaticF_KS3(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "KS3", ::Org::BouncyCastle::Crypto::Generators::BCrypt*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Crypto::Generators::BCrypt::getStaticF_KS3() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "KS3", ::Org::BouncyCastle::Crypto::Generators::BCrypt*>();
}
inline void Org::BouncyCastle::Crypto::Generators::BCrypt::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::BCrypt*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline uint32_t Org::BouncyCastle::Crypto::Generators::BCrypt::F(uint32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::BCrypt*>(), { "F", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, x);
}
inline void Org::BouncyCastle::Crypto::Generators::BCrypt::ProcessTable(uint32_t xl, uint32_t xr, ::ArrayW<uint32_t> table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::BCrypt*>(),
                                                           { "ProcessTable", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xl, xr, table);
}
inline void Org::BouncyCastle::Crypto::Generators::BCrypt::InitState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::BCrypt*>(), { "InitState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Generators::BCrypt::CyclicXorKey(::ArrayW<uint8_t> key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::BCrypt*>(), { "CyclicXorKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Generators::BCrypt::EncryptMagicString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::BCrypt*>(), { "EncryptMagicString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Generators::BCrypt::ProcessTableWithSalt(::ArrayW<uint32_t> table, ::ArrayW<uint32_t> salt32Bit, uint32_t iv1, uint32_t iv2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::BCrypt*>(),
                          { "ProcessTableWithSalt", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table, salt32Bit, iv1, iv2);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Generators::BCrypt::DeriveRawKey(int32_t cost, ::ArrayW<uint8_t> salt, ::ArrayW<uint8_t> psw) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::BCrypt*>(),
                                                           { "DeriveRawKey", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, cost, salt, psw);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Generators::BCrypt::PasswordToByteArray(::ArrayW<char16_t> password) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::BCrypt*>(), { "PasswordToByteArray", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, password);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Generators::BCrypt::Generate(::ArrayW<uint8_t> password, ::ArrayW<uint8_t> salt, int32_t cost) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::BCrypt*>(),
                                                           { "Generate", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, password, salt, cost);
}
inline ::Org::BouncyCastle::Crypto::Generators::BCrypt* Org::BouncyCastle::Crypto::Generators::BCrypt::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Generators::BCrypt*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Generators::BCrypt::BCrypt() {}
