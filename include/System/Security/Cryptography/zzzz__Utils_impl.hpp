#pragma once
// IWYU pragma private; include "System/Security/Cryptography/Utils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__Utils_def.hpp"
#include "System/Security/Cryptography/zzzz__RNGCryptoServiceProvider_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::Utils.get_StaticRandomNumberGenerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RNGCryptoServiceProvider* (*)()>(&::System::Security::Cryptography::Utils::get_StaticRandomNumberGenerator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b06270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Utils*>(), { "get_StaticRandomNumberGenerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.GenerateRandom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(int32_t)>(&::System::Security::Cryptography::Utils::GenerateRandom)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b0637c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Utils*>(), { "GenerateRandom", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.HasAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t)>(&::System::Security::Cryptography::Utils::HasAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b05f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Utils*>(), { "HasAlgorithm", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.DiscardWhiteSpaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Security::Cryptography::Utils::DiscardWhiteSpaces)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b004f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Utils*>(), { "DiscardWhiteSpaces", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.DiscardWhiteSpaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, int32_t, int32_t)>(&::System::Security::Cryptography::Utils::DiscardWhiteSpaces)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5b063f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                                                             { "DiscardWhiteSpaces", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.ConvertByteArrayToInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::Utils::ConvertByteArrayToInt)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b06570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Utils*>(), { "ConvertByteArrayToInt", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.ConvertIntToByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(int32_t)>(&::System::Security::Cryptography::Utils::ConvertIntToByteArray)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5b065cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Utils*>(), { "ConvertIntToByteArray", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.FixupKeyParity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::Utils::FixupKeyParity)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5b05c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Utils*>(), { "FixupKeyParity", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.DWORDFromLittleEndian
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t*, int32_t, uint8_t*)>(&::System::Security::Cryptography::Utils::DWORDFromLittleEndian)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5b066f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                                                             { "DWORDFromLittleEndian", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.DWORDToLittleEndian
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::ArrayW<uint32_t>, int32_t)>(&::System::Security::Cryptography::Utils::DWORDToLittleEndian)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5b06740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                                                             { "DWORDToLittleEndian", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.DWORDFromBigEndian
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t*, int32_t, uint8_t*)>(&::System::Security::Cryptography::Utils::DWORDFromBigEndian)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b01d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                                                             { "DWORDFromBigEndian", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.DWORDToBigEndian
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::ArrayW<uint32_t>, int32_t)>(&::System::Security::Cryptography::Utils::DWORDToBigEndian)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5b01c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                                                             { "DWORDToBigEndian", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.QuadWordFromBigEndian
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t*, int32_t, uint8_t*)>(&::System::Security::Cryptography::Utils::QuadWordFromBigEndian)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b0386c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                                                             { "QuadWordFromBigEndian", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.QuadWordToBigEndian
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::ArrayW<uint64_t>, int32_t)>(&::System::Security::Cryptography::Utils::QuadWordToBigEndian)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5b036b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                                                             { "QuadWordToBigEndian", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils._ProduceLegacyHmacValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Security::Cryptography::Utils::_ProduceLegacyHmacValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b06830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Utils*>(), { "_ProduceLegacyHmacValues", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::Utils::setStaticF__rng(::System::Security::Cryptography::RNGCryptoServiceProvider* value) {
  ::cordl_internals::setStaticField<::System::Security::Cryptography::RNGCryptoServiceProvider*, "_rng", ::System::Security::Cryptography::Utils*>(
      std::forward<::System::Security::Cryptography::RNGCryptoServiceProvider*>(value));
}
inline ::System::Security::Cryptography::RNGCryptoServiceProvider* System::Security::Cryptography::Utils::getStaticF__rng() {
  return ::cordl_internals::getStaticField<::System::Security::Cryptography::RNGCryptoServiceProvider*, "_rng", ::System::Security::Cryptography::Utils*>();
}
inline ::System::Security::Cryptography::RNGCryptoServiceProvider* System::Security::Cryptography::Utils::get_StaticRandomNumberGenerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Utils*>(), { "get_StaticRandomNumberGenerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RNGCryptoServiceProvider*>(nullptr, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::Utils::GenerateRandom(int32_t keySize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Utils*>(), { "GenerateRandom", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, keySize);
}
inline bool System::Security::Cryptography::Utils::HasAlgorithm(int32_t dwCalg, int32_t dwKeySize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Utils*>(), { "HasAlgorithm", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dwCalg, dwKeySize);
}
inline ::StringW System::Security::Cryptography::Utils::DiscardWhiteSpaces(::StringW inputBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Utils*>(), { "DiscardWhiteSpaces", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, inputBuffer);
}
inline ::StringW System::Security::Cryptography::Utils::DiscardWhiteSpaces(::StringW inputBuffer, int32_t inputOffset, int32_t inputCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                                                           { "DiscardWhiteSpaces", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, inputBuffer, inputOffset, inputCount);
}
inline int32_t System::Security::Cryptography::Utils::ConvertByteArrayToInt(::ArrayW<uint8_t> input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Utils*>(), { "ConvertByteArrayToInt", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, input);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::Utils::ConvertIntToByteArray(int32_t dwInput) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Utils*>(), { "ConvertIntToByteArray", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, dwInput);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::Utils::FixupKeyParity(::ArrayW<uint8_t> key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Utils*>(), { "FixupKeyParity", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, key);
}
inline void System::Security::Cryptography::Utils::DWORDFromLittleEndian(uint32_t* x, int32_t digits, uint8_t* block) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                                                           { "DWORDFromLittleEndian", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, digits, block);
}
inline void System::Security::Cryptography::Utils::DWORDToLittleEndian(::ArrayW<uint8_t> block, ::ArrayW<uint32_t> x, int32_t digits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                                                           { "DWORDToLittleEndian", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, block, x, digits);
}
inline void System::Security::Cryptography::Utils::DWORDFromBigEndian(uint32_t* x, int32_t digits, uint8_t* block) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                                                           { "DWORDFromBigEndian", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, digits, block);
}
inline void System::Security::Cryptography::Utils::DWORDToBigEndian(::ArrayW<uint8_t> block, ::ArrayW<uint32_t> x, int32_t digits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                                                           { "DWORDToBigEndian", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, block, x, digits);
}
inline void System::Security::Cryptography::Utils::QuadWordFromBigEndian(uint64_t* x, int32_t digits, uint8_t* block) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                                                           { "QuadWordFromBigEndian", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, digits, block);
}
inline void System::Security::Cryptography::Utils::QuadWordToBigEndian(::ArrayW<uint8_t> block, ::ArrayW<uint64_t> x, int32_t digits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                                                           { "QuadWordToBigEndian", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, block, x, digits);
}
inline bool System::Security::Cryptography::Utils::_ProduceLegacyHmacValues() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Utils*>(), { "_ProduceLegacyHmacValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::Utils::Utils() {}
