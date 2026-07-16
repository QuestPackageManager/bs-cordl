#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Utilities/Dump.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/Utilities/zzzz__Dump_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Utilities::Dump._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Utilities::Dump::*)()>(&::Org::BouncyCastle::Asn1::Utilities::Dump::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3553c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Utilities::Dump*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Utilities::Dump.Main
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::StringW>)>(&::Org::BouncyCastle::Asn1::Utilities::Dump::Main)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x3553c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Utilities::Dump*>(), { "Main", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Utilities::Dump::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Utilities::Dump*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::Utilities::Dump::Main(::ArrayW<::StringW> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Utilities::Dump*>(), { "Main", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, args);
}
inline ::Org::BouncyCastle::Asn1::Utilities::Dump* Org::BouncyCastle::Asn1::Utilities::Dump::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Utilities::Dump*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Utilities::Dump::Dump() {}
