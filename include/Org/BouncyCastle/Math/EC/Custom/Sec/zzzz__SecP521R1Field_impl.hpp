#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Math\EC\Custom\Sec\SecP521R1Field.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Custom/Sec/zzzz__SecP521R1Field_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>, ::ArrayW<uint32_t>)>(&::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Add)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x34d6cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                                             { "Add", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field.AddOne
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>)>(&::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::AddOne)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x34d6de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                                                                           { "AddOne", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field.FromBigInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint32_t> (*)(::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::FromBigInteger)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x34d6edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                                                                           { "FromBigInteger", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field.Half
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>)>(&::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Half)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x34d6f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                                                                           { "Half", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field.Inv
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>)>(&::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Inv)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x34d6fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                                                                           { "Inv", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field.IsZero
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint32_t>)>(&::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::IsZero)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x34d72a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(), { "IsZero", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field.Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>, ::ArrayW<uint32_t>)>(&::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Multiply)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x34d7378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                                { "Multiply", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field.Negate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>)>(&::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Negate)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x34d7694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                                                                           { "Negate", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field.Random
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Security::SecureRandom*, ::ArrayW<uint32_t>)>(
    &::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Random)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x34d6678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                                             { "Random", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field.RandomMult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Security::SecureRandom*, ::ArrayW<uint32_t>)>(
    &::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::RandomMult)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x34d6818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                                             { "RandomMult", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field.Reduce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>)>(&::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Reduce)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x34d7574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                                                                           { "Reduce", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field.Reduce23
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>)>(&::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Reduce23)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x34d7750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(), { "Reduce23", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field.Square
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>)>(&::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Square)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x34d72f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                                                                           { "Square", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field.SquareN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, int32_t, ::ArrayW<uint32_t>)>(&::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::SquareN)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x34d7408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                                             { "SquareN", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field.Subtract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>, ::ArrayW<uint32_t>)>(&::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Subtract)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x34d78b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                                { "Subtract", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field.Twice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>)>(&::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Twice)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x34d7950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                                                                           { "Twice", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field.ImplMultiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>, ::ArrayW<uint32_t>)>(
    &::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::ImplMultiply)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x34d74d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                                { "ImplMultiply", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field.ImplSquare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>)>(&::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::ImplSquare)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x34d7838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                                                                           { "ImplSquare", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::*)()>(&::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x34d7a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::setStaticF_P(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "P", ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::getStaticF_P() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "P", ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>();
}
inline void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Add(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                                           { "Add", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, y, z);
}
inline void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::AddOne(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                                                                         { "AddOne", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, z);
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                                                                         { "FromBigInteger", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint32_t>>(nullptr, ___internal_method, x);
}
inline void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Half(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                                                                         { "Half", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, z);
}
inline void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Inv(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                                                                         { "Inv", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, z);
}
inline int32_t Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::IsZero(::ArrayW<uint32_t> x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(), { "IsZero", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x);
}
inline void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Multiply(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                                           { "Multiply", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, y, z);
}
inline void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Negate(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                                                                         { "Negate", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, z);
}
inline void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Random(::Org::BouncyCastle::Security::SecureRandom* r, ::ArrayW<uint32_t> z) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                                           { "Random", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, r, z);
}
inline void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::RandomMult(::Org::BouncyCastle::Security::SecureRandom* r, ::ArrayW<uint32_t> z) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                                           { "RandomMult", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, r, z);
}
inline void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Reduce(::ArrayW<uint32_t> xx, ::ArrayW<uint32_t> z) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                                                                         { "Reduce", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, xx, z);
}
inline void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Reduce23(::ArrayW<uint32_t> z) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(), { "Reduce23", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, z);
}
inline void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Square(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                                                                         { "Square", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, z);
}
inline void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::SquareN(::ArrayW<uint32_t> x, int32_t n, ::ArrayW<uint32_t> z) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                                           { "SquareN", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, n, z);
}
inline void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Subtract(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                                           { "Subtract", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, y, z);
}
inline void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Twice(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                                                                         { "Twice", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, z);
}
inline void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::ImplMultiply(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> zz) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                              { "ImplMultiply", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, y, zz);
}
inline void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::ImplSquare(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> zz) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(),
                                                                                         { "ImplSquare", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, zz);
}
inline void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field* Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::SecP521R1Field() {}
