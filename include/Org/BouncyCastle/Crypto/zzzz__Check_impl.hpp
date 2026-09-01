#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Check.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__Check_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Check.DataLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::StringW)>(&::Org::BouncyCastle::Crypto::Check::DataLength)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x349ee70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Check*>(), { "DataLength", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Check.DataLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, int32_t, ::StringW)>(&::Org::BouncyCastle::Crypto::Check::DataLength)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x349eeb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Check*>(),
                                                { "DataLength", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Check.OutputLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, int32_t, ::StringW)>(&::Org::BouncyCastle::Crypto::Check::OutputLength)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x349ef1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Check*>(),
                                                { "OutputLength", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Check._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Check::*)()>(&::Org::BouncyCastle::Crypto::Check::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x349ef84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Check*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Check::DataLength(bool condition, ::StringW msg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Check*>(), { "DataLength", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, msg);
}
inline void Org::BouncyCastle::Crypto::Check::DataLength(::ArrayW<uint8_t> buf, int32_t off, int32_t len, ::StringW msg) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Check*>(),
                                              { "DataLength", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buf, off, len, msg);
}
inline void Org::BouncyCastle::Crypto::Check::OutputLength(::ArrayW<uint8_t> buf, int32_t off, int32_t len, ::StringW msg) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Check*>(),
                                              { "OutputLength", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buf, off, len, msg);
}
inline void Org::BouncyCastle::Crypto::Check::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Check*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Check* Org::BouncyCastle::Crypto::Check::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Check*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Check::Check() {}
