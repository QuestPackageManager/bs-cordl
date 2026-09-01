#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Engines\SeedEngine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__SeedEngine_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SeedEngine.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SeedEngine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Engines::SeedEngine::Init)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x33c0e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SeedEngine.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Engines::SeedEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::SeedEngine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33c1060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SeedEngine.get_IsPartialBlockOkay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Engines::SeedEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::SeedEngine::get_IsPartialBlockOkay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33c10a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SeedEngine.GetBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::SeedEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::SeedEngine::GetBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33c10ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SeedEngine.ProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::SeedEngine::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SeedEngine::ProcessBlock)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x33c10b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SeedEngine.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SeedEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::SeedEngine::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33c13b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SeedEngine.createWorkingKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Org::BouncyCastle::Crypto::Engines::SeedEngine::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::SeedEngine::createWorkingKey)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x33c0ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), { "createWorkingKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SeedEngine.extractW1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::SeedEngine::*)(int64_t)>(&::Org::BouncyCastle::Crypto::Engines::SeedEngine::extractW1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33c13bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), { "extractW1", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SeedEngine.extractW0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::SeedEngine::*)(int64_t)>(&::Org::BouncyCastle::Crypto::Engines::SeedEngine::extractW0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33c13b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), { "extractW0", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SeedEngine.rotateLeft8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Crypto::Engines::SeedEngine::*)(int64_t)>(&::Org::BouncyCastle::Crypto::Engines::SeedEngine::rotateLeft8)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33c14bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), { "rotateLeft8", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SeedEngine.rotateRight8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Crypto::Engines::SeedEngine::*)(int64_t)>(&::Org::BouncyCastle::Crypto::Engines::SeedEngine::rotateRight8)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33c14b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), { "rotateRight8", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SeedEngine.bytesToLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Crypto::Engines::SeedEngine::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SeedEngine::bytesToLong)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x33c12a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(),
                                                                                           { "bytesToLong", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SeedEngine.longToBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SeedEngine::*)(::ArrayW<uint8_t>, int32_t, int64_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SeedEngine::longToBytes)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x33c1358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(),
                                                             { "longToBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SeedEngine.G
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::SeedEngine::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Engines::SeedEngine::G)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x33c13c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), { "G", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SeedEngine.F
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Crypto::Engines::SeedEngine::*)(int32_t, int32_t, int64_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SeedEngine::F)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x33c12f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(),
                                                                                           { "F", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SeedEngine.phaseCalc1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::SeedEngine::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SeedEngine::phaseCalc1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x33c1500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(),
                                                             { "phaseCalc1", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SeedEngine.phaseCalc2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::SeedEngine::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SeedEngine::phaseCalc2)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x33c14c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(),
                                                             { "phaseCalc2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SeedEngine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SeedEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::SeedEngine::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33c16b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& Org::BouncyCastle::Crypto::Engines::SeedEngine::__cordl_internal_get_wKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wKey;
}
constexpr ::ArrayW<int32_t> const& Org::BouncyCastle::Crypto::Engines::SeedEngine::__cordl_internal_get_wKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wKey;
}
constexpr void Org::BouncyCastle::Crypto::Engines::SeedEngine::__cordl_internal_set_wKey(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wKey = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Engines::SeedEngine::__cordl_internal_get_forEncryption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr bool const& Org::BouncyCastle::Crypto::Engines::SeedEngine::__cordl_internal_get_forEncryption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr void Org::BouncyCastle::Crypto::Engines::SeedEngine::__cordl_internal_set_forEncryption(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forEncryption = value;
}
inline void Org::BouncyCastle::Crypto::Engines::SeedEngine::setStaticF_SS0(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "SS0", ::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Crypto::Engines::SeedEngine::getStaticF_SS0() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "SS0", ::Org::BouncyCastle::Crypto::Engines::SeedEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::SeedEngine::setStaticF_SS1(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "SS1", ::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Crypto::Engines::SeedEngine::getStaticF_SS1() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "SS1", ::Org::BouncyCastle::Crypto::Engines::SeedEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::SeedEngine::setStaticF_SS2(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "SS2", ::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Crypto::Engines::SeedEngine::getStaticF_SS2() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "SS2", ::Org::BouncyCastle::Crypto::Engines::SeedEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::SeedEngine::setStaticF_SS3(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "SS3", ::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Crypto::Engines::SeedEngine::getStaticF_SS3() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "SS3", ::Org::BouncyCastle::Crypto::Engines::SeedEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::SeedEngine::setStaticF_KC(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "KC", ::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Crypto::Engines::SeedEngine::getStaticF_KC() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "KC", ::Org::BouncyCastle::Crypto::Engines::SeedEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::SeedEngine::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, parameters);
}
inline ::StringW Org::BouncyCastle::Crypto::Engines::SeedEngine::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Engines::SeedEngine::get_IsPartialBlockOkay() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::SeedEngine::GetBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::SeedEngine::ProcessBlock(::ArrayW<uint8_t> inBuf, int32_t inOff, ::ArrayW<uint8_t> outBuf, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, inBuf, inOff, outBuf, outOff);
}
inline void Org::BouncyCastle::Crypto::Engines::SeedEngine::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Engines::SeedEngine::createWorkingKey(::ArrayW<uint8_t> inKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), { "createWorkingKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, inKey);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::SeedEngine::extractW1(int64_t lVal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), { "extractW1", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, lVal);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::SeedEngine::extractW0(int64_t lVal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), { "extractW0", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, lVal);
}
inline int64_t Org::BouncyCastle::Crypto::Engines::SeedEngine::rotateLeft8(int64_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), { "rotateLeft8", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, x);
}
inline int64_t Org::BouncyCastle::Crypto::Engines::SeedEngine::rotateRight8(int64_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), { "rotateRight8", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, x);
}
inline int64_t Org::BouncyCastle::Crypto::Engines::SeedEngine::bytesToLong(::ArrayW<uint8_t> src, int32_t srcOff) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(),
                                                                                         { "bytesToLong", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, src, srcOff);
}
inline void Org::BouncyCastle::Crypto::Engines::SeedEngine::longToBytes(::ArrayW<uint8_t> dest, int32_t destOff, int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(),
                                                           { "longToBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dest, destOff, value);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::SeedEngine::G(int32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), { "G", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline int64_t Org::BouncyCastle::Crypto::Engines::SeedEngine::F(int32_t ki0, int32_t ki1, int64_t r) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(),
                                                                                         { "F", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, ki0, ki1, r);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::SeedEngine::phaseCalc1(int32_t r0, int32_t ki0, int32_t r1, int32_t ki1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(),
                                                           { "phaseCalc1", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, r0, ki0, r1, ki1);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::SeedEngine::phaseCalc2(int32_t r0, int32_t ki0, int32_t r1, int32_t ki1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(),
                                                           { "phaseCalc2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, r0, ki0, r1, ki1);
}
inline void Org::BouncyCastle::Crypto::Engines::SeedEngine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Engines::SeedEngine* Org::BouncyCastle::Crypto::Engines::SeedEngine::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::SeedEngine*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr Org::BouncyCastle::Crypto::Engines::SeedEngine::operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* Org::BouncyCastle::Crypto::Engines::SeedEngine::i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::SeedEngine::SeedEngine() {}
