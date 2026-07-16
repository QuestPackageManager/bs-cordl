#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkcs/Pkcs12Utilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Pkcs/zzzz__Pkcs12Utilities_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Utilities.ConvertToDefiniteLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Pkcs::Pkcs12Utilities::ConvertToDefiniteLength)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x35b7fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Utilities*>(), { "ConvertToDefiniteLength", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Utilities.ConvertToDefiniteLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<char16_t>)>(&::Org::BouncyCastle::Pkcs::Pkcs12Utilities::ConvertToDefiniteLength)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x35b8054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Utilities*>(),
                                                             { "ConvertToDefiniteLength", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs12Utilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs12Utilities::*)()>(&::Org::BouncyCastle::Pkcs::Pkcs12Utilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35b8470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Utilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> Org::BouncyCastle::Pkcs::Pkcs12Utilities::ConvertToDefiniteLength(::ArrayW<uint8_t> berPkcs12File) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Utilities*>(), { "ConvertToDefiniteLength", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, berPkcs12File);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Pkcs::Pkcs12Utilities::ConvertToDefiniteLength(::ArrayW<uint8_t> berPkcs12File, ::ArrayW<char16_t> passwd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Utilities*>(),
                                                           { "ConvertToDefiniteLength", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, berPkcs12File, passwd);
}
inline void Org::BouncyCastle::Pkcs::Pkcs12Utilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs12Utilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Pkcs::Pkcs12Utilities* Org::BouncyCastle::Pkcs::Pkcs12Utilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkcs::Pkcs12Utilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkcs::Pkcs12Utilities::Pkcs12Utilities() {}
