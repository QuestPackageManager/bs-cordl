#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Math\Raw\Nat512.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/Raw/zzzz__Nat512_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::Raw::Nat512.Mul
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>, ::ArrayW<uint32_t>)>(&::Org::BouncyCastle::Math::Raw::Nat512::Mul)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x35651e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Raw::Nat512*>(),
                                                             { "Mul", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Raw::Nat512.Square
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>)>(&::Org::BouncyCastle::Math::Raw::Nat512::Square)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3565324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Raw::Nat512*>(),
                                                                                           { "Square", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Raw::Nat512._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::Raw::Nat512::*)()>(&::Org::BouncyCastle::Math::Raw::Nat512::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x356541c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Raw::Nat512*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Math::Raw::Nat512::Mul(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> zz) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Raw::Nat512*>(),
                                                           { "Mul", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, y, zz);
}
inline void Org::BouncyCastle::Math::Raw::Nat512::Square(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> zz) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Raw::Nat512*>(), { "Square", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, zz);
}
inline void Org::BouncyCastle::Math::Raw::Nat512::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Raw::Nat512*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::Raw::Nat512* Org::BouncyCastle::Math::Raw::Nat512::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::Raw::Nat512*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::Raw::Nat512::Nat512() {}
