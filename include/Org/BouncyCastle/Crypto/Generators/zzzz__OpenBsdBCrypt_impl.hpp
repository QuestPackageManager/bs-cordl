#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Generators\OpenBsdBCrypt.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__OpenBsdBCrypt_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt::*)()>(&::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33dfa38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt.CreateBcryptString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt::CreateBcryptString)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x33dfa3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt*>(),
                            { "CreateBcryptString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<char16_t>, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt::Generate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x33e005c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt*>(),
                                                             { "Generate", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::ArrayW<char16_t>, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt::Generate)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x33e00d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt*>(),
                                         { "Generate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt.CheckPassword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::ArrayW<char16_t>)>(&::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt::CheckPassword)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x33e0474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt*>(),
                                                                                           { "CheckPassword", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt.EncodeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt::EncodeData)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x33dfd0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt*>(), { "EncodeData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt.DecodeSaltString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt::DecodeSaltString)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x33e094c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt*>(), { "DecodeSaltString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt::setStaticF_EncodingTable(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "EncodingTable", ::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt::getStaticF_EncodingTable() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "EncodingTable", ::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt*>();
}
inline void Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt::setStaticF_DecodingTable(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "DecodingTable", ::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt::getStaticF_DecodingTable() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "DecodingTable", ::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt*>();
}
inline void Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt::setStaticF_DefaultVersion(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DefaultVersion", ::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt::getStaticF_DefaultVersion() {
  return ::cordl_internals::getStaticField<::StringW, "DefaultVersion", ::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt*>();
}
inline void Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt::setStaticF_AllowedVersions(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Utilities::Collections::ISet*, "AllowedVersions", ::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt*>(
      std::forward<::Org::BouncyCastle::Utilities::Collections::ISet*>(value));
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt::getStaticF_AllowedVersions() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Utilities::Collections::ISet*, "AllowedVersions", ::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt*>();
}
inline void Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt::CreateBcryptString(::StringW version, ::ArrayW<uint8_t> password, ::ArrayW<uint8_t> salt, int32_t cost) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt*>(),
                          { "CreateBcryptString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, version, password, salt, cost);
}
inline ::StringW Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt::Generate(::ArrayW<char16_t> password, ::ArrayW<uint8_t> salt, int32_t cost) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt*>(),
                                                           { "Generate", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, password, salt, cost);
}
inline ::StringW Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt::Generate(::StringW version, ::ArrayW<char16_t> password, ::ArrayW<uint8_t> salt, int32_t cost) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt*>(),
                                       { "Generate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, version, password, salt, cost);
}
inline bool Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt::CheckPassword(::StringW bcryptString, ::ArrayW<char16_t> password) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt*>(),
                                                                                         { "CheckPassword", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bcryptString, password);
}
inline ::StringW Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt::EncodeData(::ArrayW<uint8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt*>(), { "EncodeData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, data);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt::DecodeSaltString(::StringW saltString) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt*>(), { "DecodeSaltString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, saltString);
}
inline ::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt* Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt::OpenBsdBCrypt() {}
