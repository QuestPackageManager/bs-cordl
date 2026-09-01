#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\Sig\PreferredAlgorithms.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/Sig/zzzz__PreferredAlgorithms_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacketTag_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms.IntToByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<int32_t>)>(&::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms::IntToByteArray)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x36952b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms*>(), { "IntToByteArray", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms::*)(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag, bool, bool, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3695354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms*>(),
            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms::*)(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag, bool, ::ArrayW<int32_t>)>(
    &::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3695368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms.GetPreferences
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms::*)()>(
    &::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms::GetPreferences)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x36953a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms*>(), { "GetPreferences", {}, {} })));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms::IntToByteArray(::ArrayW<int32_t> v) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms*>(), { "IntToByteArray", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, v);
}
inline void Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms::_ctor(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type, bool critical, bool isLongLength, ::ArrayW<uint8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms*>(),
                       { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, critical, isLongLength, data);
}
inline void Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms::_ctor(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type, bool critical, ::ArrayW<int32_t> preferences) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, critical, preferences);
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms::GetPreferences() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms*>(), { "GetPreferences", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms* Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms::New_ctor(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type, bool critical,
                                                                                                                        bool isLongLength, ::ArrayW<uint8_t> data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms*>(type, critical, isLongLength, data));
}
inline ::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms* Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms::New_ctor(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type, bool critical,
                                                                                                                        ::ArrayW<int32_t> preferences) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms*>(type, critical, preferences));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms::PreferredAlgorithms() {}
