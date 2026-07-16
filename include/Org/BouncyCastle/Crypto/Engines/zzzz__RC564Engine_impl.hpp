#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/RC564Engine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__RC564Engine_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC564Engine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::RC564Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::RC564Engine::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x33b8eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC564Engine.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Engines::RC564Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::RC564Engine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33b8ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC564Engine.get_IsPartialBlockOkay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Engines::RC564Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::RC564Engine::get_IsPartialBlockOkay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33b8f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC564Engine.GetBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::RC564Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::RC564Engine::GetBlockSize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x33b8f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC564Engine.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::RC564Engine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Engines::RC564Engine::Init)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x33b8f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC564Engine.ProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::RC564Engine::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::RC564Engine::ProcessBlock)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x33b93b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC564Engine.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::RC564Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::RC564Engine::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33b9724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC564Engine.SetKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::RC564Engine::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Engines::RC564Engine::SetKey)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x33b90f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(), { "SetKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC564Engine.EncryptBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::RC564Engine::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::RC564Engine::EncryptBlock)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x33b9574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(),
                                         { "EncryptBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC564Engine.DecryptBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::RC564Engine::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::RC564Engine::DecryptBlock)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x33b93c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(),
                                         { "DecryptBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC564Engine.RotateLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Crypto::Engines::RC564Engine::*)(int64_t, int64_t)>(
    &::Org::BouncyCastle::Crypto::Engines::RC564Engine::RotateLeft)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x33b9728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(), { "RotateLeft", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC564Engine.RotateRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Crypto::Engines::RC564Engine::*)(int64_t, int64_t)>(
    &::Org::BouncyCastle::Crypto::Engines::RC564Engine::RotateRight)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x33b9928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(), { "RotateRight", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC564Engine.BytesToWord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Crypto::Engines::RC564Engine::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::RC564Engine::BytesToWord)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x33b97ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(),
                                                                                           { "BytesToWord", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC564Engine.WordToBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::RC564Engine::*)(int64_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::RC564Engine::WordToBytes)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x33b9864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(),
                                                             { "WordToBytes", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Crypto::Engines::RC564Engine::__cordl_internal_get__noRounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noRounds;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Engines::RC564Engine::__cordl_internal_get__noRounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noRounds;
}
constexpr void Org::BouncyCastle::Crypto::Engines::RC564Engine::__cordl_internal_set__noRounds(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noRounds = value;
}
constexpr ::ArrayW<int64_t>& Org::BouncyCastle::Crypto::Engines::RC564Engine::__cordl_internal_get__S() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____S;
}
constexpr ::ArrayW<int64_t> const& Org::BouncyCastle::Crypto::Engines::RC564Engine::__cordl_internal_get__S() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____S;
}
constexpr void Org::BouncyCastle::Crypto::Engines::RC564Engine::__cordl_internal_set__S(::ArrayW<int64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____S = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Engines::RC564Engine::__cordl_internal_get_forEncryption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr bool const& Org::BouncyCastle::Crypto::Engines::RC564Engine::__cordl_internal_get_forEncryption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr void Org::BouncyCastle::Crypto::Engines::RC564Engine::__cordl_internal_set_forEncryption(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forEncryption = value;
}
inline void Org::BouncyCastle::Crypto::Engines::RC564Engine::setStaticF_wordSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "wordSize", ::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Engines::RC564Engine::getStaticF_wordSize() {
  return ::cordl_internals::getStaticField<int32_t, "wordSize", ::Org::BouncyCastle::Crypto::Engines::RC564Engine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::RC564Engine::setStaticF_bytesPerWord(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "bytesPerWord", ::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Engines::RC564Engine::getStaticF_bytesPerWord() {
  return ::cordl_internals::getStaticField<int32_t, "bytesPerWord", ::Org::BouncyCastle::Crypto::Engines::RC564Engine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::RC564Engine::setStaticF_P64(int64_t value) {
  ::cordl_internals::setStaticField<int64_t, "P64", ::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(std::forward<int64_t>(value));
}
inline int64_t Org::BouncyCastle::Crypto::Engines::RC564Engine::getStaticF_P64() {
  return ::cordl_internals::getStaticField<int64_t, "P64", ::Org::BouncyCastle::Crypto::Engines::RC564Engine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::RC564Engine::setStaticF_Q64(int64_t value) {
  ::cordl_internals::setStaticField<int64_t, "Q64", ::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(std::forward<int64_t>(value));
}
inline int64_t Org::BouncyCastle::Crypto::Engines::RC564Engine::getStaticF_Q64() {
  return ::cordl_internals::getStaticField<int64_t, "Q64", ::Org::BouncyCastle::Crypto::Engines::RC564Engine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::RC564Engine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Crypto::Engines::RC564Engine::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Engines::RC564Engine::get_IsPartialBlockOkay() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::RC564Engine::GetBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::RC564Engine::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, parameters);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::RC564Engine::ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Engines::RC564Engine::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::RC564Engine::SetKey(::ArrayW<uint8_t> key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(), { "SetKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::RC564Engine::EncryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(),
                                       { "EncryptBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, outBytes, outOff);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::RC564Engine::DecryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(),
                                       { "DecryptBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, outBytes, outOff);
}
inline int64_t Org::BouncyCastle::Crypto::Engines::RC564Engine::RotateLeft(int64_t x, int64_t y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(), { "RotateLeft", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, x, y);
}
inline int64_t Org::BouncyCastle::Crypto::Engines::RC564Engine::RotateRight(int64_t x, int64_t y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(), { "RotateRight", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, x, y);
}
inline int64_t Org::BouncyCastle::Crypto::Engines::RC564Engine::BytesToWord(::ArrayW<uint8_t> src, int32_t srcOff) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(),
                                                                                         { "BytesToWord", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, src, srcOff);
}
inline void Org::BouncyCastle::Crypto::Engines::RC564Engine::WordToBytes(int64_t word, ::ArrayW<uint8_t> dst, int32_t dstOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>(),
                                                           { "WordToBytes", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, word, dst, dstOff);
}
inline ::Org::BouncyCastle::Crypto::Engines::RC564Engine* Org::BouncyCastle::Crypto::Engines::RC564Engine::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::RC564Engine*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr Org::BouncyCastle::Crypto::Engines::RC564Engine::operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* Org::BouncyCastle::Crypto::Engines::RC564Engine::i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::RC564Engine::RC564Engine() {}
