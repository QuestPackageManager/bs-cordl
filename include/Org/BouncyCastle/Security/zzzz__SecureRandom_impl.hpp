#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Security\SecureRandom.hpp"
#include "System/zzzz__Random_impl.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__DigestRandomGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__IRandomGenerator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.NextCounterValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)()>(&::Org::BouncyCastle::Security::SecureRandom::NextCounterValue)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x341ebfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), { "NextCounterValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.get_Master
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Security::SecureRandom* (*)()>(&::Org::BouncyCastle::Security::SecureRandom::get_Master)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x341ec64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), { "get_Master", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.CreatePrng
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator* (*)(::StringW, bool)>(&::Org::BouncyCastle::Security::SecureRandom::CreatePrng)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x341ecc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), { "CreatePrng", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.GetNextBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Security::SecureRandom*, int32_t)>(&::Org::BouncyCastle::Security::SecureRandom::GetNextBytes)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x341d9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(),
                                                             { "GetNextBytes", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Security::SecureRandom* (*)(::StringW)>(&::Org::BouncyCastle::Security::SecureRandom::GetInstance)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x341ee80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), { "GetInstance", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Security::SecureRandom* (*)(::StringW, bool)>(&::Org::BouncyCastle::Security::SecureRandom::GetInstance)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x341eedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), { "GetInstance", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.GetSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(int32_t)>(&::Org::BouncyCastle::Security::SecureRandom::GetSeed)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x341f0d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), { "GetSeed", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Security::SecureRandom::*)()>(&::Org::BouncyCastle::Security::SecureRandom::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3415278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Security::SecureRandom::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Security::SecureRandom::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x341f17c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Security::SecureRandom::*)(::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*)>(
    &::Org::BouncyCastle::Security::SecureRandom::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x341f064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.GenerateSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Security::SecureRandom::*)(int32_t)>(&::Org::BouncyCastle::Security::SecureRandom::GenerateSeed)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x341f21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), { ::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.SetSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Security::SecureRandom::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Security::SecureRandom::SetSeed)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x341f2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), { ::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.SetSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Security::SecureRandom::*)(int64_t)>(&::Org::BouncyCastle::Security::SecureRandom::SetSeed)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x341f374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), { ::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.Next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Security::SecureRandom::*)()>(&::Org::BouncyCastle::Security::SecureRandom::Next)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x341f42c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), { ::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.Next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Security::SecureRandom::*)(int32_t)>(&::Org::BouncyCastle::Security::SecureRandom::Next)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x341f44c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), { ::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.Next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Security::SecureRandom::*)(int32_t, int32_t)>(&::Org::BouncyCastle::Security::SecureRandom::Next)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x341f530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), { ::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.NextBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Security::SecureRandom::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Security::SecureRandom::NextBytes)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x341f5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), { ::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.NextBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Security::SecureRandom::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Security::SecureRandom::NextBytes)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x341f6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), { ::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.NextDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Org::BouncyCastle::Security::SecureRandom::*)()>(&::Org::BouncyCastle::Security::SecureRandom::NextDouble)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x341f778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), { ::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.NextInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Security::SecureRandom::*)()>(&::Org::BouncyCastle::Security::SecureRandom::NextInt)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x341f828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), { ::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::SecureRandom.NextLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Security::SecureRandom::*)()>(&::Org::BouncyCastle::Security::SecureRandom::NextLong)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x341f898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), { ::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), 15 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*& Org::BouncyCastle::Security::SecureRandom::__cordl_internal_get_generator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generator;
}
constexpr ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* const& Org::BouncyCastle::Security::SecureRandom::__cordl_internal_get_generator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generator;
}
constexpr void Org::BouncyCastle::Security::SecureRandom::__cordl_internal_set_generator(::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___generator = value;
}
inline void Org::BouncyCastle::Security::SecureRandom::setStaticF_counter(int64_t value) {
  ::cordl_internals::setStaticField<int64_t, "counter", ::Org::BouncyCastle::Security::SecureRandom*>(std::forward<int64_t>(value));
}
inline int64_t Org::BouncyCastle::Security::SecureRandom::getStaticF_counter() {
  return ::cordl_internals::getStaticField<int64_t, "counter", ::Org::BouncyCastle::Security::SecureRandom*>();
}
inline void Org::BouncyCastle::Security::SecureRandom::setStaticF_master(::Org::BouncyCastle::Security::SecureRandom* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Security::SecureRandom*, "master", ::Org::BouncyCastle::Security::SecureRandom*>(
      std::forward<::Org::BouncyCastle::Security::SecureRandom*>(value));
}
inline ::Org::BouncyCastle::Security::SecureRandom* Org::BouncyCastle::Security::SecureRandom::getStaticF_master() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Security::SecureRandom*, "master", ::Org::BouncyCastle::Security::SecureRandom*>();
}
inline void Org::BouncyCastle::Security::SecureRandom::setStaticF_DoubleScale(double_t value) {
  ::cordl_internals::setStaticField<double_t, "DoubleScale", ::Org::BouncyCastle::Security::SecureRandom*>(std::forward<double_t>(value));
}
inline double_t Org::BouncyCastle::Security::SecureRandom::getStaticF_DoubleScale() {
  return ::cordl_internals::getStaticField<double_t, "DoubleScale", ::Org::BouncyCastle::Security::SecureRandom*>();
}
inline int64_t Org::BouncyCastle::Security::SecureRandom::NextCounterValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), { "NextCounterValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline ::Org::BouncyCastle::Security::SecureRandom* Org::BouncyCastle::Security::SecureRandom::get_Master() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), { "get_Master", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Security::SecureRandom*>(nullptr, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator* Org::BouncyCastle::Security::SecureRandom::CreatePrng(::StringW digestName, bool autoSeed) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), { "CreatePrng", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*>(nullptr, ___internal_method, digestName, autoSeed);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Security::SecureRandom::GetNextBytes(::Org::BouncyCastle::Security::SecureRandom* secureRandom, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(),
                                                           { "GetNextBytes", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, secureRandom, length);
}
inline ::Org::BouncyCastle::Security::SecureRandom* Org::BouncyCastle::Security::SecureRandom::GetInstance(::StringW algorithm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), { "GetInstance", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Security::SecureRandom*>(nullptr, ___internal_method, algorithm);
}
inline ::Org::BouncyCastle::Security::SecureRandom* Org::BouncyCastle::Security::SecureRandom::GetInstance(::StringW algorithm, bool autoSeed) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), { "GetInstance", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Security::SecureRandom*>(nullptr, ___internal_method, algorithm, autoSeed);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Security::SecureRandom::GetSeed(int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), { "GetSeed", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, length);
}
inline void Org::BouncyCastle::Security::SecureRandom::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Security::SecureRandom::_ctor(::ArrayW<uint8_t> seed) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seed);
}
inline void Org::BouncyCastle::Security::SecureRandom::_ctor(::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* generator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, generator);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Security::SecureRandom::GenerateSeed(int32_t length) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, length);
}
inline void Org::BouncyCastle::Security::SecureRandom::SetSeed(::ArrayW<uint8_t> seed) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seed);
}
inline void Org::BouncyCastle::Security::SecureRandom::SetSeed(int64_t seed) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seed);
}
inline int32_t Org::BouncyCastle::Security::SecureRandom::Next() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Security::SecureRandom::Next(int32_t maxValue) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, maxValue);
}
inline int32_t Org::BouncyCastle::Security::SecureRandom::Next(int32_t minValue, int32_t maxValue) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, minValue, maxValue);
}
inline void Org::BouncyCastle::Security::SecureRandom::NextBytes(::ArrayW<uint8_t> buf) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf);
}
inline void Org::BouncyCastle::Security::SecureRandom::NextBytes(::ArrayW<uint8_t> buf, int32_t off, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf, off, len);
}
inline double_t Org::BouncyCastle::Security::SecureRandom::NextDouble() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Security::SecureRandom::NextInt() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Security::SecureRandom::NextLong() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Security::SecureRandom*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Security::SecureRandom* Org::BouncyCastle::Security::SecureRandom::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Security::SecureRandom*>());
}
inline ::Org::BouncyCastle::Security::SecureRandom* Org::BouncyCastle::Security::SecureRandom::New_ctor(::ArrayW<uint8_t> seed) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Security::SecureRandom*>(seed));
}
inline ::Org::BouncyCastle::Security::SecureRandom* Org::BouncyCastle::Security::SecureRandom::New_ctor(::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* generator) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Security::SecureRandom*>(generator));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Security::SecureRandom::SecureRandom() {}
