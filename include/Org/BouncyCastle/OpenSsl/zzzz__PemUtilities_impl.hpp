#pragma once
// IWYU pragma private; include "Org\BouncyCastle\OpenSsl\PemUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/OpenSsl/zzzz__PemUtilities_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/OpenSsl/zzzz__PemUtilities_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg::PemUtilities_PemBaseAlg(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg::PemUtilities_PemBaseAlg() {}
constexpr ::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg::AES_128{ static_cast<int32_t>(0x0) };
constexpr ::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg::AES_192{ static_cast<int32_t>(0x1) };
constexpr ::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg::AES_256{ static_cast<int32_t>(0x2) };
constexpr ::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg::BF{ static_cast<int32_t>(0x3) };
constexpr ::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg::DES{ static_cast<int32_t>(0x4) };
constexpr ::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg::DES_EDE{ static_cast<int32_t>(0x5) };
constexpr ::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg::DES_EDE3{ static_cast<int32_t>(0x6) };
constexpr ::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg::RC2{ static_cast<int32_t>(0x7) };
constexpr ::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg::RC2_40{ static_cast<int32_t>(0x8) };
constexpr ::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg::RC2_64{ static_cast<int32_t>(0x9) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::OpenSsl::PemUtilities_PemMode::PemUtilities_PemMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::OpenSsl::PemUtilities_PemMode::PemUtilities_PemMode() {}
constexpr ::Org::BouncyCastle::OpenSsl::PemUtilities_PemMode Org::BouncyCastle::OpenSsl::PemUtilities_PemMode::CBC{ static_cast<int32_t>(0x0) };
constexpr ::Org::BouncyCastle::OpenSsl::PemUtilities_PemMode Org::BouncyCastle::OpenSsl::PemUtilities_PemMode::CFB{ static_cast<int32_t>(0x1) };
constexpr ::Org::BouncyCastle::OpenSsl::PemUtilities_PemMode Org::BouncyCastle::OpenSsl::PemUtilities_PemMode::ECB{ static_cast<int32_t>(0x2) };
constexpr ::Org::BouncyCastle::OpenSsl::PemUtilities_PemMode Org::BouncyCastle::OpenSsl::PemUtilities_PemMode::OFB{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemUtilities.ParseDekAlgName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::by_ref<::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg>,
                                                                ::by_ref<::Org::BouncyCastle::OpenSsl::PemUtilities_PemMode>)>(&::Org::BouncyCastle::OpenSsl::PemUtilities::ParseDekAlgName)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x35a9578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemUtilities*>(),
                                                             { "ParseDekAlgName",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg>>(),
                                                                 ::i2c::type_of<::by_ref<::Org::BouncyCastle::OpenSsl::PemUtilities_PemMode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemUtilities.Crypt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(bool, ::ArrayW<uint8_t>, ::ArrayW<char16_t>, ::StringW, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::OpenSsl::PemUtilities::Crypt)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0x35a6828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemUtilities*>(),
            { "Crypt", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemUtilities.GetCipherParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (*)(::ArrayW<char16_t>, ::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg,
                                                                                                           ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::OpenSsl::PemUtilities::GetCipherParameters)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x35a98cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemUtilities*>(),
            { "GetCipherParameters", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::OpenSsl::PemUtilities::*)()>(&::Org::BouncyCastle::OpenSsl::PemUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35a9a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::OpenSsl::PemUtilities::ParseDekAlgName(::StringW dekAlgName, ::by_ref<::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg> baseAlg,
                                                                      ::by_ref<::Org::BouncyCastle::OpenSsl::PemUtilities_PemMode> mode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemUtilities*>(),
                                                           { "ParseDekAlgName",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg>>(),
                                                               ::i2c::type_of<::by_ref<::Org::BouncyCastle::OpenSsl::PemUtilities_PemMode>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dekAlgName, baseAlg, mode);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::OpenSsl::PemUtilities::Crypt(bool encrypt, ::ArrayW<uint8_t> bytes, ::ArrayW<char16_t> password, ::StringW dekAlgName, ::ArrayW<uint8_t> iv) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemUtilities*>(),
          { "Crypt", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, encrypt, bytes, password, dekAlgName, iv);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters*
Org::BouncyCastle::OpenSsl::PemUtilities::GetCipherParameters(::ArrayW<char16_t> password, ::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg baseAlg, ::ArrayW<uint8_t> salt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemUtilities*>(),
          { "GetCipherParameters", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*>(nullptr, ___internal_method, password, baseAlg, salt);
}
inline void Org::BouncyCastle::OpenSsl::PemUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::PemUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::OpenSsl::PemUtilities* Org::BouncyCastle::OpenSsl::PemUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::OpenSsl::PemUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::OpenSsl::PemUtilities::PemUtilities() {}
