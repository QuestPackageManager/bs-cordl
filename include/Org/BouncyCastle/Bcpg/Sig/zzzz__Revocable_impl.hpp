#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\Sig\Revocable.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/Sig/zzzz__Revocable_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::Revocable.BooleanToByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(bool)>(&::Org::BouncyCastle::Bcpg::Sig::Revocable::BooleanToByteArray)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3695530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::Revocable*>(), { "BooleanToByteArray", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::Revocable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::Sig::Revocable::*)(bool, bool, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Bcpg::Sig::Revocable::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x36955a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::Revocable*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::Revocable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::Sig::Revocable::*)(bool, bool)>(&::Org::BouncyCastle::Bcpg::Sig::Revocable::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x36955b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::Revocable*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::Revocable.IsRevocable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Bcpg::Sig::Revocable::*)()>(&::Org::BouncyCastle::Bcpg::Sig::Revocable::IsRevocable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x36955f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::Revocable*>(), { "IsRevocable", {}, {} })));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::Sig::Revocable::BooleanToByteArray(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::Revocable*>(), { "BooleanToByteArray", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, value);
}
inline void Org::BouncyCastle::Bcpg::Sig::Revocable::_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::Revocable*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critical, isLongLength, data);
}
inline void Org::BouncyCastle::Bcpg::Sig::Revocable::_ctor(bool critical, bool isRevocable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::Revocable*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critical, isRevocable);
}
inline bool Org::BouncyCastle::Bcpg::Sig::Revocable::IsRevocable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::Revocable*>(), { "IsRevocable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::Sig::Revocable* Org::BouncyCastle::Bcpg::Sig::Revocable::New_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::Sig::Revocable*>(critical, isLongLength, data));
}
inline ::Org::BouncyCastle::Bcpg::Sig::Revocable* Org::BouncyCastle::Bcpg::Sig::Revocable::New_ctor(bool critical, bool isRevocable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::Sig::Revocable*>(critical, isRevocable));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::Sig::Revocable::Revocable() {}
