#pragma once
// IWYU pragma private; include "Mono/Math/BigInteger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Math/zzzz__BigInteger_def.hpp"
#include "Mono/Math/zzzz__BigInteger_def.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Math::BigInteger_Sign::BigInteger_Sign(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Math::BigInteger_Sign::BigInteger_Sign() {}
constexpr ::Mono::Math::BigInteger_Sign Mono::Math::BigInteger_Sign::Negative{ static_cast<int32_t>(0xffffffff) };
constexpr ::Mono::Math::BigInteger_Sign Mono::Math::BigInteger_Sign::Zero{ static_cast<int32_t>(0x0) };
constexpr ::Mono::Math::BigInteger_Sign Mono::Math::BigInteger_Sign::Positive{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::Mono::Math::BigInteger_ModulusRing._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Math::BigInteger_ModulusRing::*)(::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger_ModulusRing::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5ac3428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_ModulusRing*>(), { ".ctor", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger_ModulusRing.BarrettReduction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Math::BigInteger_ModulusRing::*)(::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger_ModulusRing::BarrettReduction)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5ac376c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_ModulusRing*>(), { "BarrettReduction", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger_ModulusRing.Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Math::BigInteger* (::Mono::Math::BigInteger_ModulusRing::*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(
    &::Mono::Math::BigInteger_ModulusRing::Multiply)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5ac3d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_ModulusRing*>(),
                                                             { "Multiply", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger_ModulusRing.Difference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Math::BigInteger* (::Mono::Math::BigInteger_ModulusRing::*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(
    &::Mono::Math::BigInteger_ModulusRing::Difference)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5ac3ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_ModulusRing*>(),
                                                             { "Difference", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger_ModulusRing.Pow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Math::BigInteger* (::Mono::Math::BigInteger_ModulusRing::*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(
    &::Mono::Math::BigInteger_ModulusRing::Pow)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5ac34f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_ModulusRing*>(), { "Pow", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger_ModulusRing.Pow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Math::BigInteger* (::Mono::Math::BigInteger_ModulusRing::*)(uint32_t, ::Mono::Math::BigInteger*)>(
    &::Mono::Math::BigInteger_ModulusRing::Pow)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ac4068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_ModulusRing*>(), { "Pow", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
constexpr ::Mono::Math::BigInteger*& Mono::Math::BigInteger_ModulusRing::__cordl_internal_get_mod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mod;
}
constexpr ::Mono::Math::BigInteger* const& Mono::Math::BigInteger_ModulusRing::__cordl_internal_get_mod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mod;
}
constexpr void Mono::Math::BigInteger_ModulusRing::__cordl_internal_set_mod(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mod = value;
}
constexpr ::Mono::Math::BigInteger*& Mono::Math::BigInteger_ModulusRing::__cordl_internal_get_constant() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___constant;
}
constexpr ::Mono::Math::BigInteger* const& Mono::Math::BigInteger_ModulusRing::__cordl_internal_get_constant() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___constant;
}
constexpr void Mono::Math::BigInteger_ModulusRing::__cordl_internal_set_constant(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___constant = value;
}
inline void Mono::Math::BigInteger_ModulusRing::_ctor(::Mono::Math::BigInteger* modulus) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_ModulusRing*>(), { ".ctor", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, modulus);
}
inline void Mono::Math::BigInteger_ModulusRing::BarrettReduction(::Mono::Math::BigInteger* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_ModulusRing*>(), { "BarrettReduction", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger_ModulusRing::Multiply(::Mono::Math::BigInteger* a, ::Mono::Math::BigInteger* b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_ModulusRing*>(), { "Multiply", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*>(this, ___internal_method, a, b);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger_ModulusRing::Difference(::Mono::Math::BigInteger* a, ::Mono::Math::BigInteger* b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_ModulusRing*>(),
                                                           { "Difference", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*>(this, ___internal_method, a, b);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger_ModulusRing::Pow(::Mono::Math::BigInteger* a, ::Mono::Math::BigInteger* k) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_ModulusRing*>(),
                                                                                         { "Pow", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*>(this, ___internal_method, a, k);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger_ModulusRing::Pow(uint32_t b, ::Mono::Math::BigInteger* exp) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_ModulusRing*>(), { "Pow", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*>(this, ___internal_method, b, exp);
}
inline ::Mono::Math::BigInteger_ModulusRing* Mono::Math::BigInteger_ModulusRing::New_ctor(::Mono::Math::BigInteger* modulus) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Math::BigInteger_ModulusRing*>(modulus));
}
// Ctor Parameters []
constexpr ::Mono::Math::BigInteger_ModulusRing::BigInteger_ModulusRing() {}
//  Writing Method size for method: ::Mono::Math::BigInteger_Kernel.Subtract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Math::BigInteger* (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger_Kernel::Subtract)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5ac1944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_Kernel*>(), { "Subtract", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger_Kernel.MinusEq
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger_Kernel::MinusEq)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5ac3ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_Kernel*>(), { "MinusEq", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger_Kernel.PlusEq
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger_Kernel::PlusEq)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5ac3bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_Kernel*>(), { "PlusEq", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger_Kernel.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Math::BigInteger_Sign (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger_Kernel::Compare)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5ac1800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_Kernel*>(), { "Compare", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger_Kernel.SingleByteDivideInPlace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Mono::Math::BigInteger*, uint32_t)>(&::Mono::Math::BigInteger_Kernel::SingleByteDivideInPlace)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ac2ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_Kernel*>(), { "SingleByteDivideInPlace", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger_Kernel.DwordMod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Mono::Math::BigInteger*, uint32_t)>(&::Mono::Math::BigInteger_Kernel::DwordMod)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ac1af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_Kernel*>(), { "DwordMod", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger_Kernel.DwordDivMod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Mono::Math::BigInteger*> (*)(::Mono::Math::BigInteger*, uint32_t)>(&::Mono::Math::BigInteger_Kernel::DwordDivMod)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5ac40dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_Kernel*>(), { "DwordDivMod", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger_Kernel.multiByteDivide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Mono::Math::BigInteger*> (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(
    &::Mono::Math::BigInteger_Kernel::multiByteDivide)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x5ac1b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_Kernel*>(),
                                                             { "multiByteDivide", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger_Kernel.LeftShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Math::BigInteger* (*)(::Mono::Math::BigInteger*, int32_t)>(&::Mono::Math::BigInteger_Kernel::LeftShift)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5ac21a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_Kernel*>(), { "LeftShift", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger_Kernel.RightShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Math::BigInteger* (*)(::Mono::Math::BigInteger*, int32_t)>(&::Mono::Math::BigInteger_Kernel::RightShift)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5ac238c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_Kernel*>(), { "RightShift", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger_Kernel.MultiplyByDword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Math::BigInteger* (*)(::Mono::Math::BigInteger*, uint32_t)>(&::Mono::Math::BigInteger_Kernel::MultiplyByDword)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5ac20b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_Kernel*>(), { "MultiplyByDword", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger_Kernel.Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, uint32_t, uint32_t, ::ArrayW<uint32_t>, uint32_t, uint32_t, ::ArrayW<uint32_t>, uint32_t)>(
    &::Mono::Math::BigInteger_Kernel::Multiply)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5ac1fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_Kernel*>(),
                                                             { "Multiply",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(),
                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger_Kernel.MultiplyMod2p32pmod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, int32_t, int32_t, ::ArrayW<uint32_t>, int32_t, int32_t, ::ArrayW<uint32_t>, int32_t, int32_t)>(
    &::Mono::Math::BigInteger_Kernel::MultiplyMod2p32pmod)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5ac39c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_Kernel*>(),
                                         { "MultiplyMod2p32pmod",
                                           {},
                                           { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(),
                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger_Kernel.modInverse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Mono::Math::BigInteger*, uint32_t)>(&::Mono::Math::BigInteger_Kernel::modInverse)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5ac4270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_Kernel*>(), { "modInverse", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger_Kernel.modInverse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Math::BigInteger* (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger_Kernel::modInverse)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x5ac2f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_Kernel*>(), { "modInverse", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger_Kernel::Subtract(::Mono::Math::BigInteger* big, ::Mono::Math::BigInteger* small) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_Kernel*>(), { "Subtract", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*>(nullptr, ___internal_method, big, small);
}
inline void Mono::Math::BigInteger_Kernel::MinusEq(::Mono::Math::BigInteger* big, ::Mono::Math::BigInteger* small) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_Kernel*>(), { "MinusEq", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, big, small);
}
inline void Mono::Math::BigInteger_Kernel::PlusEq(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_Kernel*>(), { "PlusEq", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bi1, bi2);
}
inline ::Mono::Math::BigInteger_Sign Mono::Math::BigInteger_Kernel::Compare(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_Kernel*>(), { "Compare", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger_Sign>(nullptr, ___internal_method, bi1, bi2);
}
inline uint32_t Mono::Math::BigInteger_Kernel::SingleByteDivideInPlace(::Mono::Math::BigInteger* n, uint32_t d) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_Kernel*>(), { "SingleByteDivideInPlace", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, n, d);
}
inline uint32_t Mono::Math::BigInteger_Kernel::DwordMod(::Mono::Math::BigInteger* n, uint32_t d) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_Kernel*>(), { "DwordMod", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, n, d);
}
inline ::ArrayW<::Mono::Math::BigInteger*> Mono::Math::BigInteger_Kernel::DwordDivMod(::Mono::Math::BigInteger* n, uint32_t d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_Kernel*>(), { "DwordDivMod", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Mono::Math::BigInteger*>>(nullptr, ___internal_method, n, d);
}
inline ::ArrayW<::Mono::Math::BigInteger*> Mono::Math::BigInteger_Kernel::multiByteDivide(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_Kernel*>(),
                                                           { "multiByteDivide", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Mono::Math::BigInteger*>>(nullptr, ___internal_method, bi1, bi2);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger_Kernel::LeftShift(::Mono::Math::BigInteger* bi, int32_t n) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_Kernel*>(), { "LeftShift", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*>(nullptr, ___internal_method, bi, n);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger_Kernel::RightShift(::Mono::Math::BigInteger* bi, int32_t n) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_Kernel*>(), { "RightShift", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*>(nullptr, ___internal_method, bi, n);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger_Kernel::MultiplyByDword(::Mono::Math::BigInteger* n, uint32_t f) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_Kernel*>(), { "MultiplyByDword", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*>(nullptr, ___internal_method, n, f);
}
inline void Mono::Math::BigInteger_Kernel::Multiply(::ArrayW<uint32_t> x, uint32_t xOffset, uint32_t xLen, ::ArrayW<uint32_t> y, uint32_t yOffset, uint32_t yLen, ::ArrayW<uint32_t> d,
                                                    uint32_t dOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_Kernel*>(),
                                                           { "Multiply",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, xOffset, xLen, y, yOffset, yLen, d, dOffset);
}
inline void Mono::Math::BigInteger_Kernel::MultiplyMod2p32pmod(::ArrayW<uint32_t> x, int32_t xOffset, int32_t xLen, ::ArrayW<uint32_t> y, int32_t yOffest, int32_t yLen, ::ArrayW<uint32_t> d,
                                                               int32_t dOffset, int32_t mod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_Kernel*>(),
                                       { "MultiplyMod2p32pmod",
                                         {},
                                         { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(),
                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, xOffset, xLen, y, yOffest, yLen, d, dOffset, mod);
}
inline uint32_t Mono::Math::BigInteger_Kernel::modInverse(::Mono::Math::BigInteger* bi, uint32_t modulus) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_Kernel*>(), { "modInverse", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, bi, modulus);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger_Kernel::modInverse(::Mono::Math::BigInteger* bi, ::Mono::Math::BigInteger* modulus) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger_Kernel*>(), { "modInverse", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*>(nullptr, ___internal_method, bi, modulus);
}
// Ctor Parameters []
constexpr ::Mono::Math::BigInteger_Kernel::BigInteger_Kernel() {}
//  Writing Method size for method: ::Mono::Math::BigInteger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Math::BigInteger::*)(::Mono::Math::BigInteger_Sign, uint32_t)>(&::Mono::Math::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ac1534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { ".ctor", {}, { ::i2c::type_of<::Mono::Math::BigInteger_Sign>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Math::BigInteger::*)(::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5ac15a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { ".ctor", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Math::BigInteger::*)(::Mono::Math::BigInteger*, uint32_t)>(&::Mono::Math::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5ac1654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { ".ctor", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Math::BigInteger::*)(::ArrayW<uint8_t>)>(&::Mono::Math::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5abca54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Math::BigInteger::*)(uint32_t)>(&::Mono::Math::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5ac1780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_Implicit___Mono__Math__BigInteger_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Math::BigInteger* (*)(uint32_t)>(&::Mono::Math::BigInteger::op_Implicit___Mono__Math__BigInteger_)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5abc190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_Implicit", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_Implicit___Mono__Math__BigInteger_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Math::BigInteger* (*)(int32_t)>(&::Mono::Math::BigInteger::op_Implicit___Mono__Math__BigInteger_)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5abc538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_Implicit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Math::BigInteger* (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger::op_Subtraction)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5abc5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_Subtraction", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Mono::Math::BigInteger*, uint32_t)>(&::Mono::Math::BigInteger::op_Modulus)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5abc24c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_Modulus", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Math::BigInteger* (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger::op_Modulus)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5abc728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_Modulus", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Math::BigInteger* (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger::op_Division)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ac0568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_Division", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Math::BigInteger* (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger::op_Multiply)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5abc30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_Multiply", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Math::BigInteger* (*)(::Mono::Math::BigInteger*, int32_t)>(&::Mono::Math::BigInteger::op_Multiply)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5ac042c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_Multiply", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_LeftShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Math::BigInteger* (*)(::Mono::Math::BigInteger*, int32_t)>(&::Mono::Math::BigInteger::op_LeftShift)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ac21a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_LeftShift", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_RightShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Math::BigInteger* (*)(::Mono::Math::BigInteger*, int32_t)>(&::Mono::Math::BigInteger::op_RightShift)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ac2388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_RightShift", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.get_Rng
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RandomNumberGenerator* (*)()>(&::Mono::Math::BigInteger::get_Rng)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5ac250c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "get_Rng", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.GenerateRandom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Math::BigInteger* (*)(int32_t, ::System::Security::Cryptography::RandomNumberGenerator*)>(&::Mono::Math::BigInteger::GenerateRandom)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5ac25b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(),
                                                             { "GenerateRandom", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Security::Cryptography::RandomNumberGenerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.GenerateRandom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Math::BigInteger* (*)(int32_t)>(&::Mono::Math::BigInteger::GenerateRandom)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5ac0084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "GenerateRandom", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.Randomize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Math::BigInteger::*)(::System::Security::Cryptography::RandomNumberGenerator*)>(&::Mono::Math::BigInteger::Randomize)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5ac2720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "Randomize", {}, { ::i2c::type_of<::System::Security::Cryptography::RandomNumberGenerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.Randomize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Math::BigInteger::*)()>(&::Mono::Math::BigInteger::Randomize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5ac00e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "Randomize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.BitCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Math::BigInteger::*)()>(&::Mono::Math::BigInteger::BitCount)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5abc4b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "BitCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.TestBit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Math::BigInteger::*)(uint32_t)>(&::Mono::Math::BigInteger::TestBit)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5ac052c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "TestBit", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.TestBit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Math::BigInteger::*)(int32_t)>(&::Mono::Math::BigInteger::TestBit)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ac28a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "TestBit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.SetBit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Math::BigInteger::*)(uint32_t)>(&::Mono::Math::BigInteger::SetBit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac2938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "SetBit", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.SetBit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Math::BigInteger::*)(uint32_t, bool)>(&::Mono::Math::BigInteger::SetBit)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ac2940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "SetBit", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.LowestSetBit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Math::BigInteger::*)()>(&::Mono::Math::BigInteger::LowestSetBit)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5ac29b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "LowestSetBit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Math::BigInteger::*)()>(&::Mono::Math::BigInteger::GetBytes)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5abd11c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "GetBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Mono::Math::BigInteger*, uint32_t)>(&::Mono::Math::BigInteger::op_Equality)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ac0144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_Equality", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Mono::Math::BigInteger*, uint32_t)>(&::Mono::Math::BigInteger::op_Inequality)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ac0948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_Inequality", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger::op_Equality)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5abc884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_Equality", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger::op_Inequality)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5abc250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_Inequality", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger::op_GreaterThan)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ac2a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_GreaterThan", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger::op_LessThan)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5abc524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_LessThan", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ac01b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(),
                                                             { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ac0588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Math::BigInteger::*)(uint32_t)>(&::Mono::Math::BigInteger::ToString)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ac2a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "ToString", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Math::BigInteger::*)(uint32_t, ::StringW)>(&::Mono::Math::BigInteger::ToString)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5ac2aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "ToString", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.Normalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Math::BigInteger::*)()>(&::Mono::Math::BigInteger::Normalize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ac1728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "Normalize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Math::BigInteger::*)()>(&::Mono::Math::BigInteger::Clear)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5abcd9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Math::BigInteger::*)()>(&::Mono::Math::BigInteger::GetHashCode)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5ac2d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { ::i2c::class_of<::Mono::Math::BigInteger*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Math::BigInteger::*)()>(&::Mono::Math::BigInteger::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac2dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { ::i2c::class_of<::Mono::Math::BigInteger*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Math::BigInteger::*)(::System::Object*)>(&::Mono::Math::BigInteger::Equals)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5ac2de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { ::i2c::class_of<::Mono::Math::BigInteger*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.ModInverse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Math::BigInteger* (::Mono::Math::BigInteger::*)(::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger::ModInverse)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5abc724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "ModInverse", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.ModPow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Math::BigInteger* (::Mono::Math::BigInteger::*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(
    &::Mono::Math::BigInteger::ModPow)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5abcc64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "ModPow", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.IsProbablePrime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Math::BigInteger::*)()>(&::Mono::Math::BigInteger::IsProbablePrime)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5ac0280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "IsProbablePrime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.GeneratePseudoPrime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Math::BigInteger* (*)(int32_t)>(&::Mono::Math::BigInteger::GeneratePseudoPrime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5abc1ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "GeneratePseudoPrime", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.Incr2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Math::BigInteger::*)()>(&::Mono::Math::BigInteger::Incr2)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5ac364c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "Incr2", {}, {} })));
    return ___internal_method;
  }
};
constexpr uint32_t& Mono::Math::BigInteger::__cordl_internal_get_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___length;
}
constexpr uint32_t const& Mono::Math::BigInteger::__cordl_internal_get_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___length;
}
constexpr void Mono::Math::BigInteger::__cordl_internal_set_length(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___length = value;
}
constexpr ::ArrayW<uint32_t>& Mono::Math::BigInteger::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::ArrayW<uint32_t> const& Mono::Math::BigInteger::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void Mono::Math::BigInteger::__cordl_internal_set_data(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
inline void Mono::Math::BigInteger::setStaticF_smallPrimes(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "smallPrimes", ::Mono::Math::BigInteger*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Mono::Math::BigInteger::getStaticF_smallPrimes() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "smallPrimes", ::Mono::Math::BigInteger*>();
}
inline void Mono::Math::BigInteger::setStaticF_rng(::System::Security::Cryptography::RandomNumberGenerator* value) {
  ::cordl_internals::setStaticField<::System::Security::Cryptography::RandomNumberGenerator*, "rng", ::Mono::Math::BigInteger*>(
      std::forward<::System::Security::Cryptography::RandomNumberGenerator*>(value));
}
inline ::System::Security::Cryptography::RandomNumberGenerator* Mono::Math::BigInteger::getStaticF_rng() {
  return ::cordl_internals::getStaticField<::System::Security::Cryptography::RandomNumberGenerator*, "rng", ::Mono::Math::BigInteger*>();
}
inline void Mono::Math::BigInteger::_ctor(::Mono::Math::BigInteger_Sign sign, uint32_t len) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { ".ctor", {}, { ::i2c::type_of<::Mono::Math::BigInteger_Sign>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sign, len);
}
inline void Mono::Math::BigInteger::_ctor(::Mono::Math::BigInteger* bi) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { ".ctor", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bi);
}
inline void Mono::Math::BigInteger::_ctor(::Mono::Math::BigInteger* bi, uint32_t len) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { ".ctor", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bi, len);
}
inline void Mono::Math::BigInteger::_ctor(::ArrayW<uint8_t> inData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inData);
}
inline void Mono::Math::BigInteger::_ctor(uint32_t ui) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ui);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::op_Implicit___Mono__Math__BigInteger_(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_Implicit", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*>(nullptr, ___internal_method, value);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::op_Implicit___Mono__Math__BigInteger_(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_Implicit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*>(nullptr, ___internal_method, value);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::op_Subtraction(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_Subtraction", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*>(nullptr, ___internal_method, bi1, bi2);
}
inline uint32_t Mono::Math::BigInteger::op_Modulus(::Mono::Math::BigInteger* bi, uint32_t ui) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_Modulus", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, bi, ui);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::op_Modulus(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_Modulus", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*>(nullptr, ___internal_method, bi1, bi2);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::op_Division(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_Division", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*>(nullptr, ___internal_method, bi1, bi2);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::op_Multiply(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_Multiply", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*>(nullptr, ___internal_method, bi1, bi2);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::op_Multiply(::Mono::Math::BigInteger* bi, int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_Multiply", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*>(nullptr, ___internal_method, bi, i);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::op_LeftShift(::Mono::Math::BigInteger* bi1, int32_t shiftVal) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_LeftShift", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*>(nullptr, ___internal_method, bi1, shiftVal);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::op_RightShift(::Mono::Math::BigInteger* bi1, int32_t shiftVal) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_RightShift", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*>(nullptr, ___internal_method, bi1, shiftVal);
}
inline ::System::Security::Cryptography::RandomNumberGenerator* Mono::Math::BigInteger::get_Rng() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "get_Rng", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RandomNumberGenerator*>(nullptr, ___internal_method);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::GenerateRandom(int32_t bits, ::System::Security::Cryptography::RandomNumberGenerator* rng) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(),
                                                           { "GenerateRandom", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Security::Cryptography::RandomNumberGenerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*>(nullptr, ___internal_method, bits, rng);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::GenerateRandom(int32_t bits) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "GenerateRandom", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*>(nullptr, ___internal_method, bits);
}
inline void Mono::Math::BigInteger::Randomize(::System::Security::Cryptography::RandomNumberGenerator* rng) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "Randomize", {}, { ::i2c::type_of<::System::Security::Cryptography::RandomNumberGenerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rng);
}
inline void Mono::Math::BigInteger::Randomize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "Randomize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Mono::Math::BigInteger::BitCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "BitCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Mono::Math::BigInteger::TestBit(uint32_t bitNum) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "TestBit", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bitNum);
}
inline bool Mono::Math::BigInteger::TestBit(int32_t bitNum) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "TestBit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bitNum);
}
inline void Mono::Math::BigInteger::SetBit(uint32_t bitNum) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "SetBit", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bitNum);
}
inline void Mono::Math::BigInteger::SetBit(uint32_t bitNum, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "SetBit", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bitNum, value);
}
inline int32_t Mono::Math::BigInteger::LowestSetBit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "LowestSetBit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Mono::Math::BigInteger::GetBytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "GetBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline bool Mono::Math::BigInteger::op_Equality(::Mono::Math::BigInteger* bi1, uint32_t ui) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_Equality", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bi1, ui);
}
inline bool Mono::Math::BigInteger::op_Inequality(::Mono::Math::BigInteger* bi1, uint32_t ui) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_Inequality", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bi1, ui);
}
inline bool Mono::Math::BigInteger::op_Equality(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_Equality", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bi1, bi2);
}
inline bool Mono::Math::BigInteger::op_Inequality(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_Inequality", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bi1, bi2);
}
inline bool Mono::Math::BigInteger::op_GreaterThan(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_GreaterThan", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bi1, bi2);
}
inline bool Mono::Math::BigInteger::op_LessThan(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_LessThan", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bi1, bi2);
}
inline bool Mono::Math::BigInteger::op_GreaterThanOrEqual(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(),
                                                           { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bi1, bi2);
}
inline bool Mono::Math::BigInteger::op_LessThanOrEqual(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bi1, bi2);
}
inline ::StringW Mono::Math::BigInteger::ToString(uint32_t radix) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "ToString", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, radix);
}
inline ::StringW Mono::Math::BigInteger::ToString(uint32_t radix, ::StringW characterSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "ToString", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, radix, characterSet);
}
inline void Mono::Math::BigInteger::Normalize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "Normalize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Math::BigInteger::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Mono::Math::BigInteger::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Math::BigInteger*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Mono::Math::BigInteger::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Math::BigInteger*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Mono::Math::BigInteger::Equals(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Math::BigInteger*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, o);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::ModInverse(::Mono::Math::BigInteger* modulus) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "ModInverse", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*>(this, ___internal_method, modulus);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::ModPow(::Mono::Math::BigInteger* exp, ::Mono::Math::BigInteger* n) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "ModPow", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*>(this, ___internal_method, exp, n);
}
inline bool Mono::Math::BigInteger::IsProbablePrime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "IsProbablePrime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::GeneratePseudoPrime(int32_t bits) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "GeneratePseudoPrime", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*>(nullptr, ___internal_method, bits);
}
inline void Mono::Math::BigInteger::Incr2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::BigInteger*>(), { "Incr2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::New_ctor(::Mono::Math::BigInteger_Sign sign, uint32_t len) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Math::BigInteger*>(sign, len));
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::New_ctor(::Mono::Math::BigInteger* bi) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Math::BigInteger*>(bi));
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::New_ctor(::Mono::Math::BigInteger* bi, uint32_t len) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Math::BigInteger*>(bi, len));
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::New_ctor(::ArrayW<uint8_t> inData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Math::BigInteger*>(inData));
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::New_ctor(uint32_t ui) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Math::BigInteger*>(ui));
}
// Ctor Parameters []
constexpr ::Mono::Math::BigInteger::BigInteger() {}
