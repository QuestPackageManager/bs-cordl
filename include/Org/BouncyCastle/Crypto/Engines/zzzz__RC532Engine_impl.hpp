#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Engines\RC532Engine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__RC532Engine_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC532Engine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::RC532Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::RC532Engine::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x33ba9c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC532Engine.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Engines::RC532Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::RC532Engine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33ba9d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC532Engine.get_IsPartialBlockOkay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Engines::RC532Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::RC532Engine::get_IsPartialBlockOkay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33baa14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC532Engine.GetBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::RC532Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::RC532Engine::GetBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33baa1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC532Engine.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::RC532Engine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Engines::RC532Engine::Init)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x33baa24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC532Engine.ProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::RC532Engine::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::RC532Engine::ProcessBlock)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x33bae9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC532Engine.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::RC532Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::RC532Engine::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33bb0dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC532Engine.SetKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::RC532Engine::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Engines::RC532Engine::SetKey)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x33bac48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(), { "SetKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC532Engine.EncryptBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::RC532Engine::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::RC532Engine::EncryptBlock)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x33bafd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(),
                                         { "EncryptBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC532Engine.DecryptBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::RC532Engine::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::RC532Engine::DecryptBlock)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x33baec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(),
                                         { "DecryptBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC532Engine.RotateLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::RC532Engine::*)(int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::RC532Engine::RotateLeft)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x33bb0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(), { "RotateLeft", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC532Engine.RotateRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::RC532Engine::*)(int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::RC532Engine::RotateRight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33bb1dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(), { "RotateRight", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC532Engine.BytesToWord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::RC532Engine::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::RC532Engine::BytesToWord)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x33bb0ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(),
                                                                                           { "BytesToWord", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC532Engine.WordToBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::RC532Engine::*)(int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::RC532Engine::WordToBytes)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x33bb15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(),
                                                             { "WordToBytes", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Crypto::Engines::RC532Engine::__cordl_internal_get__noRounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noRounds;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Engines::RC532Engine::__cordl_internal_get__noRounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noRounds;
}
constexpr void Org::BouncyCastle::Crypto::Engines::RC532Engine::__cordl_internal_set__noRounds(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noRounds = value;
}
constexpr ::ArrayW<int32_t>& Org::BouncyCastle::Crypto::Engines::RC532Engine::__cordl_internal_get__S() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____S;
}
constexpr ::ArrayW<int32_t> const& Org::BouncyCastle::Crypto::Engines::RC532Engine::__cordl_internal_get__S() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____S;
}
constexpr void Org::BouncyCastle::Crypto::Engines::RC532Engine::__cordl_internal_set__S(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____S = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Engines::RC532Engine::__cordl_internal_get_forEncryption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr bool const& Org::BouncyCastle::Crypto::Engines::RC532Engine::__cordl_internal_get_forEncryption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr void Org::BouncyCastle::Crypto::Engines::RC532Engine::__cordl_internal_set_forEncryption(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forEncryption = value;
}
inline void Org::BouncyCastle::Crypto::Engines::RC532Engine::setStaticF_P32(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "P32", ::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Engines::RC532Engine::getStaticF_P32() {
  return ::cordl_internals::getStaticField<int32_t, "P32", ::Org::BouncyCastle::Crypto::Engines::RC532Engine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::RC532Engine::setStaticF_Q32(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Q32", ::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Engines::RC532Engine::getStaticF_Q32() {
  return ::cordl_internals::getStaticField<int32_t, "Q32", ::Org::BouncyCastle::Crypto::Engines::RC532Engine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::RC532Engine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Crypto::Engines::RC532Engine::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Engines::RC532Engine::get_IsPartialBlockOkay() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::RC532Engine::GetBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::RC532Engine::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, parameters);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::RC532Engine::ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Engines::RC532Engine::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::RC532Engine::SetKey(::ArrayW<uint8_t> key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(), { "SetKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::RC532Engine::EncryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(),
                                       { "EncryptBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, outBytes, outOff);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::RC532Engine::DecryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(),
                                       { "DecryptBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, outBytes, outOff);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::RC532Engine::RotateLeft(int32_t x, int32_t y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(), { "RotateLeft", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::RC532Engine::RotateRight(int32_t x, int32_t y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(), { "RotateRight", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::RC532Engine::BytesToWord(::ArrayW<uint8_t> src, int32_t srcOff) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(),
                                                                                         { "BytesToWord", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, src, srcOff);
}
inline void Org::BouncyCastle::Crypto::Engines::RC532Engine::WordToBytes(int32_t word, ::ArrayW<uint8_t> dst, int32_t dstOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>(),
                                                           { "WordToBytes", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, word, dst, dstOff);
}
inline ::Org::BouncyCastle::Crypto::Engines::RC532Engine* Org::BouncyCastle::Crypto::Engines::RC532Engine::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::RC532Engine*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr Org::BouncyCastle::Crypto::Engines::RC532Engine::operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* Org::BouncyCastle::Crypto::Engines::RC532Engine::i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::RC532Engine::RC532Engine() {}
