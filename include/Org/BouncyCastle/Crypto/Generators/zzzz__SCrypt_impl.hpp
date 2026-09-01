#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Generators\SCrypt.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__SCrypt_def.hpp"
#include "System/zzzz__Array_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::SCrypt.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Generators::SCrypt::Generate)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x33e47a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::SCrypt*>(),
                                                                                           { "Generate",
                                                                                             {},
                                                                                             { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::SCrypt.MFcrypt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Generators::SCrypt::MFcrypt)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x33e4aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::SCrypt*>(),
                                                                                           { "MFcrypt",
                                                                                             {},
                                                                                             { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::SCrypt.SingleIterationPBKDF2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Generators::SCrypt::SingleIterationPBKDF2)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x33e4c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::SCrypt*>(),
                                                { "SingleIterationPBKDF2", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::SCrypt.SMix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, int32_t, int32_t, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Generators::SCrypt::SMix)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x33e4db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::SCrypt*>(),
                            { "SMix", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::SCrypt.BlockMix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>, ::ArrayW<uint32_t>, ::ArrayW<uint32_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Generators::SCrypt::BlockMix)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x33e5184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::SCrypt*>(),
                                                             { "BlockMix",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(),
                                                                 ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::SCrypt.Xor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>, int32_t, ::ArrayW<uint32_t>)>(&::Org::BouncyCastle::Crypto::Generators::SCrypt::Xor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x33e52a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::SCrypt*>(),
                            { "Xor", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::SCrypt.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Array*)>(&::Org::BouncyCastle::Crypto::Generators::SCrypt::Clear)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x33e532c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::SCrypt*>(), { "Clear", {}, { ::i2c::type_of<::System::Array*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::SCrypt.ClearAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Array*>)>(&::Org::BouncyCastle::Crypto::Generators::SCrypt::ClearAll)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x33e535c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::SCrypt*>(), { "ClearAll", {}, { ::i2c::type_of<::ArrayW<::System::Array*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::SCrypt.IsPowerOf2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Org::BouncyCastle::Crypto::Generators::SCrypt::IsPowerOf2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x33e4a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::SCrypt*>(), { "IsPowerOf2", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::SCrypt._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::SCrypt::*)()>(&::Org::BouncyCastle::Crypto::Generators::SCrypt::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33e53b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::SCrypt*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Generators::SCrypt::Generate(::ArrayW<uint8_t> P, ::ArrayW<uint8_t> S, int32_t N, int32_t r, int32_t p, int32_t dkLen) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::SCrypt*>(),
                                                                                         { "Generate",
                                                                                           {},
                                                                                           { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, P, S, N, r, p, dkLen);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Generators::SCrypt::MFcrypt(::ArrayW<uint8_t> P, ::ArrayW<uint8_t> S, int32_t N, int32_t r, int32_t p, int32_t dkLen) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::SCrypt*>(),
                                                                                         { "MFcrypt",
                                                                                           {},
                                                                                           { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, P, S, N, r, p, dkLen);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Generators::SCrypt::SingleIterationPBKDF2(::ArrayW<uint8_t> P, ::ArrayW<uint8_t> S, int32_t dkLen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::SCrypt*>(),
                                                           { "SingleIterationPBKDF2", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, P, S, dkLen);
}
inline void Org::BouncyCastle::Crypto::Generators::SCrypt::SMix(::ArrayW<uint32_t> B, int32_t BOff, int32_t N, int32_t d, int32_t r) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::SCrypt*>(),
                          { "SMix", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, B, BOff, N, d, r);
}
inline void Org::BouncyCastle::Crypto::Generators::SCrypt::BlockMix(::ArrayW<uint32_t> B, ::ArrayW<uint32_t> X1, ::ArrayW<uint32_t> X2, ::ArrayW<uint32_t> Y, int32_t r) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::SCrypt*>(),
                                                           { "BlockMix",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(),
                                                               ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, B, X1, X2, Y, r);
}
inline void Org::BouncyCastle::Crypto::Generators::SCrypt::Xor(::ArrayW<uint32_t> a, ::ArrayW<uint32_t> b, int32_t bOff, ::ArrayW<uint32_t> output) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::SCrypt*>(),
                          { "Xor", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b, bOff, output);
}
inline void Org::BouncyCastle::Crypto::Generators::SCrypt::Clear(::System::Array* array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::SCrypt*>(), { "Clear", {}, { ::i2c::type_of<::System::Array*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array);
}
inline void Org::BouncyCastle::Crypto::Generators::SCrypt::ClearAll(::ArrayW<::System::Array*> arrays) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::SCrypt*>(), { "ClearAll", {}, { ::i2c::type_of<::ArrayW<::System::Array*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, arrays);
}
inline bool Org::BouncyCastle::Crypto::Generators::SCrypt::IsPowerOf2(int32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::SCrypt*>(), { "IsPowerOf2", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x);
}
inline void Org::BouncyCastle::Crypto::Generators::SCrypt::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::SCrypt*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Generators::SCrypt* Org::BouncyCastle::Crypto::Generators::SCrypt::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Generators::SCrypt*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Generators::SCrypt::SCrypt() {}
