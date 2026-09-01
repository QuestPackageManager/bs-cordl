#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Engines\IdeaEngine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__IdeaEngine_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IdeaEngine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::IdeaEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::IdeaEngine::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33b34b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IdeaEngine.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::IdeaEngine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Engines::IdeaEngine::Init)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x33b34b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IdeaEngine.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Engines::IdeaEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::IdeaEngine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33b35f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IdeaEngine.get_IsPartialBlockOkay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Engines::IdeaEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::IdeaEngine::get_IsPartialBlockOkay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33b363c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IdeaEngine.GetBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::IdeaEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::IdeaEngine::GetBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33b3644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IdeaEngine.ProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::IdeaEngine::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::IdeaEngine::ProcessBlock)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x33b364c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IdeaEngine.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::IdeaEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::IdeaEngine::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33b3a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IdeaEngine.BytesToWord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::IdeaEngine::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::IdeaEngine::BytesToWord)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x33b3a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(),
                                                                                           { "BytesToWord", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IdeaEngine.WordToBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::IdeaEngine::*)(int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::IdeaEngine::WordToBytes)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x33b3a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(),
                                                             { "WordToBytes", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IdeaEngine.Mul
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::IdeaEngine::*)(int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Engines::IdeaEngine::Mul)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x33b3a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(), { "Mul", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IdeaEngine.IdeaFunc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::IdeaEngine::*)(::ArrayW<int32_t>, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::IdeaEngine::IdeaFunc)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x33b3764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(),
                                                                                           { "IdeaFunc",
                                                                                             {},
                                                                                             { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IdeaEngine.ExpandKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Org::BouncyCastle::Crypto::Engines::IdeaEngine::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::IdeaEngine::ExpandKey)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x33b3b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(), { "ExpandKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IdeaEngine.MulInv
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::IdeaEngine::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Engines::IdeaEngine::MulInv)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x33b3d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(), { "MulInv", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IdeaEngine.AddInv
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::IdeaEngine::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Engines::IdeaEngine::AddInv)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x33b3eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(), { "AddInv", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IdeaEngine.InvertKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Org::BouncyCastle::Crypto::Engines::IdeaEngine::*)(::ArrayW<int32_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::IdeaEngine::InvertKey)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x33b3f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(), { "InvertKey", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IdeaEngine.GenerateWorkingKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Org::BouncyCastle::Crypto::Engines::IdeaEngine::*)(bool, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::IdeaEngine::GenerateWorkingKey)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x33b35d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(),
                                                                                           { "GenerateWorkingKey", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& Org::BouncyCastle::Crypto::Engines::IdeaEngine::__cordl_internal_get_workingKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workingKey;
}
constexpr ::ArrayW<int32_t> const& Org::BouncyCastle::Crypto::Engines::IdeaEngine::__cordl_internal_get_workingKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workingKey;
}
constexpr void Org::BouncyCastle::Crypto::Engines::IdeaEngine::__cordl_internal_set_workingKey(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___workingKey = value;
}
inline void Org::BouncyCastle::Crypto::Engines::IdeaEngine::setStaticF_MASK(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MASK", ::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Engines::IdeaEngine::getStaticF_MASK() {
  return ::cordl_internals::getStaticField<int32_t, "MASK", ::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::IdeaEngine::setStaticF_BASE(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "BASE", ::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Engines::IdeaEngine::getStaticF_BASE() {
  return ::cordl_internals::getStaticField<int32_t, "BASE", ::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::IdeaEngine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::IdeaEngine::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, parameters);
}
inline ::StringW Org::BouncyCastle::Crypto::Engines::IdeaEngine::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Engines::IdeaEngine::get_IsPartialBlockOkay() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::IdeaEngine::GetBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::IdeaEngine::ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Engines::IdeaEngine::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::IdeaEngine::BytesToWord(::ArrayW<uint8_t> input, int32_t inOff) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(),
                                                                                         { "BytesToWord", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff);
}
inline void Org::BouncyCastle::Crypto::Engines::IdeaEngine::WordToBytes(int32_t word, ::ArrayW<uint8_t> outBytes, int32_t outOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(),
                                                           { "WordToBytes", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, word, outBytes, outOff);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::IdeaEngine::Mul(int32_t x, int32_t y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(), { "Mul", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline void Org::BouncyCastle::Crypto::Engines::IdeaEngine::IdeaFunc(::ArrayW<int32_t> workingKey, ::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(),
                                                                                         { "IdeaFunc",
                                                                                           {},
                                                                                           { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, workingKey, input, inOff, outBytes, outOff);
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Engines::IdeaEngine::ExpandKey(::ArrayW<uint8_t> uKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(), { "ExpandKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, uKey);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::IdeaEngine::MulInv(int32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(), { "MulInv", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::IdeaEngine::AddInv(int32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(), { "AddInv", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Engines::IdeaEngine::InvertKey(::ArrayW<int32_t> inKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(), { "InvertKey", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, inKey);
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Engines::IdeaEngine::GenerateWorkingKey(bool forEncryption, ::ArrayW<uint8_t> userKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>(),
                                                                                         { "GenerateWorkingKey", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, forEncryption, userKey);
}
inline ::Org::BouncyCastle::Crypto::Engines::IdeaEngine* Org::BouncyCastle::Crypto::Engines::IdeaEngine::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::IdeaEngine*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr Org::BouncyCastle::Crypto::Engines::IdeaEngine::operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* Org::BouncyCastle::Crypto::Engines::IdeaEngine::i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::IdeaEngine::IdeaEngine() {}
