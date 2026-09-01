#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Engines\ThreefishEngine.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__ThreefishEngine_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__ThreefishEngine_def.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__ThreefishEngine_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher::*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33ca22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher.EncryptBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher::*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher::EncryptBlock)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher.DecryptBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher::*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher::DecryptBlock)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint64_t>& Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher::__cordl_internal_get_t() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr ::ArrayW<uint64_t> const& Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher::__cordl_internal_get_t() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr void Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher::__cordl_internal_set_t(::ArrayW<uint64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___t = value;
}
constexpr ::ArrayW<uint64_t>& Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher::__cordl_internal_get_kw() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kw;
}
constexpr ::ArrayW<uint64_t> const& Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher::__cordl_internal_get_kw() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kw;
}
constexpr void Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher::__cordl_internal_set_kw(::ArrayW<uint64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kw = value;
}
inline void Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher::_ctor(::ArrayW<uint64_t> kw, ::ArrayW<uint64_t> t) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, kw, t);
}
inline void Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher::EncryptBlock(::ArrayW<uint64_t> block, ::ArrayW<uint64_t> outWords) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, block, outWords);
}
inline void Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher::DecryptBlock(::ArrayW<uint64_t> block, ::ArrayW<uint64_t> outWords) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, block, outWords);
}
inline ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher* Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher::New_ctor(::ArrayW<uint64_t> kw,
                                                                                                                                                            ::ArrayW<uint64_t> t) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher*>(kw, t));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher::ThreefishEngine_ThreefishCipher() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish256Cipher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish256Cipher::*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish256Cipher::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33c9648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish256Cipher*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish256Cipher.EncryptBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish256Cipher::*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish256Cipher::EncryptBlock)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x33ca234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish256Cipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish256Cipher*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish256Cipher.DecryptBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish256Cipher::*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish256Cipher::DecryptBlock)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x33ca5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish256Cipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish256Cipher*>(), 5 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish256Cipher::_ctor(::ArrayW<uint64_t> kw, ::ArrayW<uint64_t> t) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish256Cipher*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, kw, t);
}
inline void Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish256Cipher::EncryptBlock(::ArrayW<uint64_t> block, ::ArrayW<uint64_t> outWords) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish256Cipher*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, block, outWords);
}
inline void Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish256Cipher::DecryptBlock(::ArrayW<uint64_t> block, ::ArrayW<uint64_t> state) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish256Cipher*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, block, state);
}
inline ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish256Cipher* Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish256Cipher::New_ctor(::ArrayW<uint64_t> kw,
                                                                                                                                                                  ::ArrayW<uint64_t> t) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish256Cipher*>(kw, t));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish256Cipher::ThreefishEngine_Threefish256Cipher() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish512Cipher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish512Cipher::*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish512Cipher::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33c9650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish512Cipher*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish512Cipher.EncryptBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish512Cipher::*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish512Cipher::EncryptBlock)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x33caa18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish512Cipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish512Cipher*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish512Cipher.DecryptBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish512Cipher::*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish512Cipher::DecryptBlock)> {
  constexpr static std::size_t size = 0x6a8;
  constexpr static std::size_t addrs = 0x33caf88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish512Cipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish512Cipher*>(), 5 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish512Cipher::_ctor(::ArrayW<uint64_t> kw, ::ArrayW<uint64_t> t) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish512Cipher*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, kw, t);
}
inline void Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish512Cipher::EncryptBlock(::ArrayW<uint64_t> block, ::ArrayW<uint64_t> outWords) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish512Cipher*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, block, outWords);
}
inline void Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish512Cipher::DecryptBlock(::ArrayW<uint64_t> block, ::ArrayW<uint64_t> state) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish512Cipher*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, block, state);
}
inline ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish512Cipher* Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish512Cipher::New_ctor(::ArrayW<uint64_t> kw,
                                                                                                                                                                  ::ArrayW<uint64_t> t) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish512Cipher*>(kw, t));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish512Cipher::ThreefishEngine_Threefish512Cipher() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish1024Cipher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish1024Cipher::*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish1024Cipher::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33c9658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish1024Cipher*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish1024Cipher.EncryptBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish1024Cipher::*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish1024Cipher::EncryptBlock)> {
  constexpr static std::size_t size = 0x974;
  constexpr static std::size_t addrs = 0x33cb630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish1024Cipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish1024Cipher*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish1024Cipher.DecryptBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish1024Cipher::*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish1024Cipher::DecryptBlock)> {
  constexpr static std::size_t size = 0xc0c;
  constexpr static std::size_t addrs = 0x33cbfa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish1024Cipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish1024Cipher*>(), 5 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish1024Cipher::_ctor(::ArrayW<uint64_t> kw, ::ArrayW<uint64_t> t) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish1024Cipher*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, kw, t);
}
inline void Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish1024Cipher::EncryptBlock(::ArrayW<uint64_t> block, ::ArrayW<uint64_t> outWords) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish1024Cipher*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, block, outWords);
}
inline void Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish1024Cipher::DecryptBlock(::ArrayW<uint64_t> block, ::ArrayW<uint64_t> state) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish1024Cipher*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, block, state);
}
inline ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish1024Cipher* Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish1024Cipher::New_ctor(::ArrayW<uint64_t> kw,
                                                                                                                                                                    ::ArrayW<uint64_t> t) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish1024Cipher*>(kw, t));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_Threefish1024Cipher::ThreefishEngine_Threefish1024Cipher() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::_ctor)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x33c94cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Init)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x33c9660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::*)(bool, ::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Init)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x33c9a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(),
                                                             { "Init", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine.SetKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::*)(::ArrayW<uint64_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::SetKey)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x33c9ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(), { "SetKey", {}, { ::i2c::type_of<::ArrayW<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine.SetTweak
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::*)(::ArrayW<uint64_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::SetTweak)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x33c9c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(), { "SetTweak", {}, { ::i2c::type_of<::ArrayW<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x33c9d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine.get_IsPartialBlockOkay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::get_IsPartialBlockOkay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33c9dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine.GetBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::GetBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33c9dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33c9dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine.ProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::ProcessBlock)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x33c9dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine.ProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::ProcessBlock)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x33c9fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(),
                                                                                           { "ProcessBlock", {}, { ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine.BytesToWord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::BytesToWord)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x33c99a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(),
                                                                                           { "BytesToWord", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine.WordToBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::WordToBytes)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x33ca0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(),
                                                             { "WordToBytes", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine.RotlXor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t, int32_t, uint64_t)>(&::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::RotlXor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x33ca210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(),
                                                                                           { "RotlXor", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine.XorRotr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t, int32_t, uint64_t)>(&::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::XorRotr)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x33ca220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(),
                                                                                           { "XorRotr", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Crypto::Engines::ThreefishEngine::__cordl_internal_get_blocksizeBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blocksizeBytes;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Engines::ThreefishEngine::__cordl_internal_get_blocksizeBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blocksizeBytes;
}
constexpr void Org::BouncyCastle::Crypto::Engines::ThreefishEngine::__cordl_internal_set_blocksizeBytes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blocksizeBytes = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Engines::ThreefishEngine::__cordl_internal_get_blocksizeWords() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blocksizeWords;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Engines::ThreefishEngine::__cordl_internal_get_blocksizeWords() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blocksizeWords;
}
constexpr void Org::BouncyCastle::Crypto::Engines::ThreefishEngine::__cordl_internal_set_blocksizeWords(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blocksizeWords = value;
}
constexpr ::ArrayW<uint64_t>& Org::BouncyCastle::Crypto::Engines::ThreefishEngine::__cordl_internal_get_currentBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentBlock;
}
constexpr ::ArrayW<uint64_t> const& Org::BouncyCastle::Crypto::Engines::ThreefishEngine::__cordl_internal_get_currentBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentBlock;
}
constexpr void Org::BouncyCastle::Crypto::Engines::ThreefishEngine::__cordl_internal_set_currentBlock(::ArrayW<uint64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentBlock = value;
}
constexpr ::ArrayW<uint64_t>& Org::BouncyCastle::Crypto::Engines::ThreefishEngine::__cordl_internal_get_t() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr ::ArrayW<uint64_t> const& Org::BouncyCastle::Crypto::Engines::ThreefishEngine::__cordl_internal_get_t() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr void Org::BouncyCastle::Crypto::Engines::ThreefishEngine::__cordl_internal_set_t(::ArrayW<uint64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___t = value;
}
constexpr ::ArrayW<uint64_t>& Org::BouncyCastle::Crypto::Engines::ThreefishEngine::__cordl_internal_get_kw() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kw;
}
constexpr ::ArrayW<uint64_t> const& Org::BouncyCastle::Crypto::Engines::ThreefishEngine::__cordl_internal_get_kw() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kw;
}
constexpr void Org::BouncyCastle::Crypto::Engines::ThreefishEngine::__cordl_internal_set_kw(::ArrayW<uint64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kw = value;
}
constexpr ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher*& Org::BouncyCastle::Crypto::Engines::ThreefishEngine::__cordl_internal_get_cipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher* const& Org::BouncyCastle::Crypto::Engines::ThreefishEngine::__cordl_internal_get_cipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr void Org::BouncyCastle::Crypto::Engines::ThreefishEngine::__cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cipher = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Engines::ThreefishEngine::__cordl_internal_get_forEncryption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr bool const& Org::BouncyCastle::Crypto::Engines::ThreefishEngine::__cordl_internal_get_forEncryption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr void Org::BouncyCastle::Crypto::Engines::ThreefishEngine::__cordl_internal_set_forEncryption(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forEncryption = value;
}
inline void Org::BouncyCastle::Crypto::Engines::ThreefishEngine::setStaticF_MOD9(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "MOD9", ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Engines::ThreefishEngine::getStaticF_MOD9() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "MOD9", ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::ThreefishEngine::setStaticF_MOD17(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "MOD17", ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Engines::ThreefishEngine::getStaticF_MOD17() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "MOD17", ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::ThreefishEngine::setStaticF_MOD5(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "MOD5", ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Engines::ThreefishEngine::getStaticF_MOD5() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "MOD5", ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::ThreefishEngine::setStaticF_MOD3(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "MOD3", ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Engines::ThreefishEngine::getStaticF_MOD3() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "MOD3", ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::ThreefishEngine::_ctor(int32_t blocksizeBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, blocksizeBits);
}
inline void Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, parameters);
}
inline void Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Init(bool forEncryption, ::ArrayW<uint64_t> key, ::ArrayW<uint64_t> tweak) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(),
                                                           { "Init", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, key, tweak);
}
inline void Org::BouncyCastle::Crypto::Engines::ThreefishEngine::SetKey(::ArrayW<uint64_t> key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(), { "SetKey", {}, { ::i2c::type_of<::ArrayW<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void Org::BouncyCastle::Crypto::Engines::ThreefishEngine::SetTweak(::ArrayW<uint64_t> tweak) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(), { "SetTweak", {}, { ::i2c::type_of<::ArrayW<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tweak);
}
inline ::StringW Org::BouncyCastle::Crypto::Engines::ThreefishEngine::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Engines::ThreefishEngine::get_IsPartialBlockOkay() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::ThreefishEngine::GetBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::ThreefishEngine::ProcessBlock(::ArrayW<uint8_t> inBytes, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, inBytes, inOff, outBytes, outOff);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::ThreefishEngine::ProcessBlock(::ArrayW<uint64_t> inWords, ::ArrayW<uint64_t> outWords) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(),
                                                                                         { "ProcessBlock", {}, { ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, inWords, outWords);
}
inline uint64_t Org::BouncyCastle::Crypto::Engines::ThreefishEngine::BytesToWord(::ArrayW<uint8_t> bytes, int32_t off) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(),
                                                                                         { "BytesToWord", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, bytes, off);
}
inline void Org::BouncyCastle::Crypto::Engines::ThreefishEngine::WordToBytes(uint64_t word, ::ArrayW<uint8_t> bytes, int32_t off) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(),
                                                           { "WordToBytes", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, word, bytes, off);
}
inline uint64_t Org::BouncyCastle::Crypto::Engines::ThreefishEngine::RotlXor(uint64_t x, int32_t n, uint64_t _cordl_xor) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(),
                                                                                         { "RotlXor", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, x, n, _cordl_xor);
}
inline uint64_t Org::BouncyCastle::Crypto::Engines::ThreefishEngine::XorRotr(uint64_t x, int32_t n, uint64_t _cordl_xor) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(),
                                                                                         { "XorRotr", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, x, n, _cordl_xor);
}
inline ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine* Org::BouncyCastle::Crypto::Engines::ThreefishEngine::New_ctor(int32_t blocksizeBits) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*>(blocksizeBits));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr Org::BouncyCastle::Crypto::Engines::ThreefishEngine::operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* Org::BouncyCastle::Crypto::Engines::ThreefishEngine::i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine::ThreefishEngine() {}
