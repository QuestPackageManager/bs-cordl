#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Math\EC\FpFieldElement.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpFieldElement_impl.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__FpFieldElement_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement.CalculateResidue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::FpFieldElement::CalculateResidue)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x3524728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { "CalculateResidue", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::FpFieldElement::*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::FpFieldElement::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3525ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::FpFieldElement::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::FpFieldElement::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3524adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement.ToBigInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Math::EC::FpFieldElement::*)()>(
    &::Org::BouncyCastle::Math::EC::FpFieldElement::ToBigInteger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3525ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement.get_FieldName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Math::EC::FpFieldElement::*)()>(&::Org::BouncyCastle::Math::EC::FpFieldElement::get_FieldName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3525f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement.get_FieldSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::FpFieldElement::*)()>(&::Org::BouncyCastle::Math::EC::FpFieldElement::get_FieldSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3525f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement.get_Q
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Math::EC::FpFieldElement::*)()>(
    &::Org::BouncyCastle::Math::EC::FpFieldElement::get_Q)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3525f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { "get_Q", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Math::EC::FpFieldElement::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*)>(&::Org::BouncyCastle::Math::EC::FpFieldElement::Add)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3525f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement.AddOne
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (::Org::BouncyCastle::Math::EC::FpFieldElement::*)()>(
    &::Org::BouncyCastle::Math::EC::FpFieldElement::AddOne)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3526018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement.Subtract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Math::EC::FpFieldElement::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*)>(&::Org::BouncyCastle::Math::EC::FpFieldElement::Subtract)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3526108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement.Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Math::EC::FpFieldElement::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*)>(&::Org::BouncyCastle::Math::EC::FpFieldElement::Multiply)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x35261bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement.MultiplyMinusProduct
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Math::EC::FpFieldElement::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*)>(
    &::Org::BouncyCastle::Math::EC::FpFieldElement::MultiplyMinusProduct)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x3526270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement.MultiplyPlusProduct
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Math::EC::FpFieldElement::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*)>(
    &::Org::BouncyCastle::Math::EC::FpFieldElement::MultiplyPlusProduct)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x35263a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement.Divide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Math::EC::FpFieldElement::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*)>(&::Org::BouncyCastle::Math::EC::FpFieldElement::Divide)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3526554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement.Negate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (::Org::BouncyCastle::Math::EC::FpFieldElement::*)()>(
    &::Org::BouncyCastle::Math::EC::FpFieldElement::Negate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3526620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement.Square
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (::Org::BouncyCastle::Math::EC::FpFieldElement::*)()>(
    &::Org::BouncyCastle::Math::EC::FpFieldElement::Square)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x35266c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement.SquareMinusProduct
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Math::EC::FpFieldElement::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*)>(
    &::Org::BouncyCastle::Math::EC::FpFieldElement::SquareMinusProduct)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3526754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement.SquarePlusProduct
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Math::EC::FpFieldElement::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*)>(
    &::Org::BouncyCastle::Math::EC::FpFieldElement::SquarePlusProduct)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x3526864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement.Invert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (::Org::BouncyCastle::Math::EC::FpFieldElement::*)()>(
    &::Org::BouncyCastle::Math::EC::FpFieldElement::Invert)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x35269f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement.Sqrt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (::Org::BouncyCastle::Math::EC::FpFieldElement::*)()>(
    &::Org::BouncyCastle::Math::EC::FpFieldElement::Sqrt)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x3526a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement.CheckSqrt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Math::EC::FpFieldElement::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*)>(&::Org::BouncyCastle::Math::EC::FpFieldElement::CheckSqrt)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3527080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(),
                                                                                           { "CheckSqrt", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement.LucasSequence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Math::BigInteger*> (::Org::BouncyCastle::Math::EC::FpFieldElement::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::FpFieldElement::LucasSequence)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0x35270d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(),
                                                             { "LucasSequence",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement.ModAdd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (
    ::Org::BouncyCastle::Math::EC::FpFieldElement::*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::FpFieldElement::ModAdd)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3527640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement.ModDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Math::EC::FpFieldElement::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::FpFieldElement::ModDouble)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x35276a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement.ModHalf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Math::EC::FpFieldElement::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::FpFieldElement::ModHalf)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3527708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement.ModHalfAbs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Math::EC::FpFieldElement::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::FpFieldElement::ModHalfAbs)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3527768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement.ModInverse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Math::EC::FpFieldElement::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::FpFieldElement::ModInverse)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x35277c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement.ModMult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (
    ::Org::BouncyCastle::Math::EC::FpFieldElement::*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::FpFieldElement::ModMult)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x352789c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement.ModReduce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Math::EC::FpFieldElement::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::FpFieldElement::ModReduce)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x35278d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement.ModSubtract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (
    ::Org::BouncyCastle::Math::EC::FpFieldElement::*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::FpFieldElement::ModSubtract)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3527be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Math::EC::FpFieldElement::*)(::System::Object*)>(&::Org::BouncyCastle::Math::EC::FpFieldElement::Equals)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3527c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Math::EC::FpFieldElement::*)(::Org::BouncyCastle::Math::EC::FpFieldElement*)>(
    &::Org::BouncyCastle::Math::EC::FpFieldElement::Equals)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3527ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::FpFieldElement.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::FpFieldElement::*)()>(&::Org::BouncyCastle::Math::EC::FpFieldElement::GetHashCode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3527d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Math::EC::FpFieldElement::__cordl_internal_get_q() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___q;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Math::EC::FpFieldElement::__cordl_internal_get_q() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___q;
}
constexpr void Org::BouncyCastle::Math::EC::FpFieldElement::__cordl_internal_set_q(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___q = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Math::EC::FpFieldElement::__cordl_internal_get_r() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Math::EC::FpFieldElement::__cordl_internal_get_r() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr void Org::BouncyCastle::Math::EC::FpFieldElement::__cordl_internal_set_r(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___r = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Math::EC::FpFieldElement::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Math::EC::FpFieldElement::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Org::BouncyCastle::Math::EC::FpFieldElement::__cordl_internal_set_x(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::FpFieldElement::CalculateResidue(::Org::BouncyCastle::Math::BigInteger* p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { "CalculateResidue", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(nullptr, ___internal_method, p);
}
inline void Org::BouncyCastle::Math::EC::FpFieldElement::_ctor(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, q, x);
}
inline void Org::BouncyCastle::Math::EC::FpFieldElement::_ctor(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* r, ::Org::BouncyCastle::Math::BigInteger* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, q, r, x);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::FpFieldElement::ToBigInteger() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Math::EC::FpFieldElement::get_FieldName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Math::EC::FpFieldElement::get_FieldSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::FpFieldElement::get_Q() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { "get_Q", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::FpFieldElement::Add(::Org::BouncyCastle::Math::EC::ECFieldElement* b) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method, b);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::FpFieldElement::AddOne() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::FpFieldElement::Subtract(::Org::BouncyCastle::Math::EC::ECFieldElement* b) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method, b);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::FpFieldElement::Multiply(::Org::BouncyCastle::Math::EC::ECFieldElement* b) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method, b);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::FpFieldElement::MultiplyMinusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* b,
                                                                                                                        ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                                                                        ::Org::BouncyCastle::Math::EC::ECFieldElement* y) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method, b, x, y);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::FpFieldElement::MultiplyPlusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* b,
                                                                                                                       ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                                                                       ::Org::BouncyCastle::Math::EC::ECFieldElement* y) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method, b, x, y);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::FpFieldElement::Divide(::Org::BouncyCastle::Math::EC::ECFieldElement* b) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method, b);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::FpFieldElement::Negate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::FpFieldElement::Square() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::FpFieldElement::SquareMinusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                                                                      ::Org::BouncyCastle::Math::EC::ECFieldElement* y) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method, x, y);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::FpFieldElement::SquarePlusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                                                                     ::Org::BouncyCastle::Math::EC::ECFieldElement* y) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method, x, y);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::FpFieldElement::Invert() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::FpFieldElement::Sqrt() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::FpFieldElement::CheckSqrt(::Org::BouncyCastle::Math::EC::ECFieldElement* z) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), { "CheckSqrt", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method, z);
}
inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> Org::BouncyCastle::Math::EC::FpFieldElement::LucasSequence(::Org::BouncyCastle::Math::BigInteger* P, ::Org::BouncyCastle::Math::BigInteger* Q,
                                                                                                                   ::Org::BouncyCastle::Math::BigInteger* k) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(),
                                                           { "LucasSequence",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>(this, ___internal_method, P, Q, k);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::FpFieldElement::ModAdd(::Org::BouncyCastle::Math::BigInteger* x1, ::Org::BouncyCastle::Math::BigInteger* x2) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method, x1, x2);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::FpFieldElement::ModDouble(::Org::BouncyCastle::Math::BigInteger* x) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method, x);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::FpFieldElement::ModHalf(::Org::BouncyCastle::Math::BigInteger* x) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method, x);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::FpFieldElement::ModHalfAbs(::Org::BouncyCastle::Math::BigInteger* x) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method, x);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::FpFieldElement::ModInverse(::Org::BouncyCastle::Math::BigInteger* x) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method, x);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::FpFieldElement::ModMult(::Org::BouncyCastle::Math::BigInteger* x1, ::Org::BouncyCastle::Math::BigInteger* x2) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method, x1, x2);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::FpFieldElement::ModReduce(::Org::BouncyCastle::Math::BigInteger* x) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method, x);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::FpFieldElement::ModSubtract(::Org::BouncyCastle::Math::BigInteger* x1, ::Org::BouncyCastle::Math::BigInteger* x2) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method, x1, x2);
}
inline bool Org::BouncyCastle::Math::EC::FpFieldElement::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool Org::BouncyCastle::Math::EC::FpFieldElement::Equals(::Org::BouncyCastle::Math::EC::FpFieldElement* other) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline int32_t Org::BouncyCastle::Math::EC::FpFieldElement::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::FpFieldElement*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::FpFieldElement* Org::BouncyCastle::Math::EC::FpFieldElement::New_ctor(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* x) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::FpFieldElement*>(q, x));
}
inline ::Org::BouncyCastle::Math::EC::FpFieldElement* Org::BouncyCastle::Math::EC::FpFieldElement::New_ctor(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* r,
                                                                                                            ::Org::BouncyCastle::Math::BigInteger* x) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::FpFieldElement*>(q, r, x));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::FpFieldElement::FpFieldElement() {}
