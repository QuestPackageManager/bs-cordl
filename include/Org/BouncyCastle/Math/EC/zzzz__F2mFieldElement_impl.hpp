#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Math\EC\F2mFieldElement.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mFieldElement_impl.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__F2mFieldElement_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__LongArray_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::F2mFieldElement::*)(int32_t, int32_t, int32_t, int32_t, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::F2mFieldElement::_ctor)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x3525480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::F2mFieldElement::*)(int32_t, int32_t, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::F2mFieldElement::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3527fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::F2mFieldElement::*)(int32_t, ::ArrayW<int32_t>, ::Org::BouncyCastle::Math::EC::LongArray*)>(
    &::Org::BouncyCastle::Math::EC::F2mFieldElement::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3525e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(),
                                                { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::LongArray*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement.get_BitLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::F2mFieldElement::*)()>(&::Org::BouncyCastle::Math::EC::F2mFieldElement::get_BitLength)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3527fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement.get_IsOne
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Math::EC::F2mFieldElement::*)()>(&::Org::BouncyCastle::Math::EC::F2mFieldElement::get_IsOne)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3528088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement.get_IsZero
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Math::EC::F2mFieldElement::*)()>(&::Org::BouncyCastle::Math::EC::F2mFieldElement::get_IsZero)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x352810c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement.TestBitZero
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Math::EC::F2mFieldElement::*)()>(&::Org::BouncyCastle::Math::EC::F2mFieldElement::TestBitZero)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3528188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement.ToBigInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Math::EC::F2mFieldElement::*)()>(
    &::Org::BouncyCastle::Math::EC::F2mFieldElement::ToBigInteger)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x35281f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement.get_FieldName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Math::EC::F2mFieldElement::*)()>(&::Org::BouncyCastle::Math::EC::F2mFieldElement::get_FieldName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3528418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement.get_FieldSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::F2mFieldElement::*)()>(&::Org::BouncyCastle::Math::EC::F2mFieldElement::get_FieldSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x352845c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement.CheckFieldElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*)>(
    &::Org::BouncyCastle::Math::EC::F2mFieldElement::CheckFieldElements)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x3528464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(),
                            { "CheckFieldElements", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Math::EC::F2mFieldElement::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*)>(&::Org::BouncyCastle::Math::EC::F2mFieldElement::Add)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x35285f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement.AddOne
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (::Org::BouncyCastle::Math::EC::F2mFieldElement::*)()>(
    &::Org::BouncyCastle::Math::EC::F2mFieldElement::AddOne)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3528834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement.Subtract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Math::EC::F2mFieldElement::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*)>(&::Org::BouncyCastle::Math::EC::F2mFieldElement::Subtract)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x35289c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement.Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Math::EC::F2mFieldElement::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*)>(&::Org::BouncyCastle::Math::EC::F2mFieldElement::Multiply)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x35289d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement.MultiplyMinusProduct
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Math::EC::F2mFieldElement::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*)>(
    &::Org::BouncyCastle::Math::EC::F2mFieldElement::MultiplyMinusProduct)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3528f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement.MultiplyPlusProduct
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Math::EC::F2mFieldElement::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*)>(
    &::Org::BouncyCastle::Math::EC::F2mFieldElement::MultiplyPlusProduct)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x3528f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement.Divide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Math::EC::F2mFieldElement::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*)>(&::Org::BouncyCastle::Math::EC::F2mFieldElement::Divide)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x352961c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement.Negate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (::Org::BouncyCastle::Math::EC::F2mFieldElement::*)()>(
    &::Org::BouncyCastle::Math::EC::F2mFieldElement::Negate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x352965c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement.Square
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (::Org::BouncyCastle::Math::EC::F2mFieldElement::*)()>(
    &::Org::BouncyCastle::Math::EC::F2mFieldElement::Square)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3529660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement.SquareMinusProduct
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Math::EC::F2mFieldElement::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*)>(
    &::Org::BouncyCastle::Math::EC::F2mFieldElement::SquareMinusProduct)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3529884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement.SquarePlusProduct
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Math::EC::F2mFieldElement::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Org::BouncyCastle::Math::EC::ECFieldElement*)>(
    &::Org::BouncyCastle::Math::EC::F2mFieldElement::SquarePlusProduct)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x3529894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement.SquarePow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (::Org::BouncyCastle::Math::EC::F2mFieldElement::*)(int32_t)>(
    &::Org::BouncyCastle::Math::EC::F2mFieldElement::SquarePow)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3529b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement.Invert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (::Org::BouncyCastle::Math::EC::F2mFieldElement::*)()>(
    &::Org::BouncyCastle::Math::EC::F2mFieldElement::Invert)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3529d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement.Sqrt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (::Org::BouncyCastle::Math::EC::F2mFieldElement::*)()>(
    &::Org::BouncyCastle::Math::EC::F2mFieldElement::Sqrt)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x352a204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement.get_Representation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::F2mFieldElement::*)()>(&::Org::BouncyCastle::Math::EC::F2mFieldElement::get_Representation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x352a25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { "get_Representation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement.get_M
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::F2mFieldElement::*)()>(&::Org::BouncyCastle::Math::EC::F2mFieldElement::get_M)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x352a264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { "get_M", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement.get_K1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::F2mFieldElement::*)()>(&::Org::BouncyCastle::Math::EC::F2mFieldElement::get_K1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x352a26c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { "get_K1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement.get_K2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::F2mFieldElement::*)()>(&::Org::BouncyCastle::Math::EC::F2mFieldElement::get_K2)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x352a294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { "get_K2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement.get_K3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::F2mFieldElement::*)()>(&::Org::BouncyCastle::Math::EC::F2mFieldElement::get_K3)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x352a2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { "get_K3", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Math::EC::F2mFieldElement::*)(::System::Object*)>(&::Org::BouncyCastle::Math::EC::F2mFieldElement::Equals)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x352a2ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Math::EC::F2mFieldElement::*)(::Org::BouncyCastle::Math::EC::F2mFieldElement*)>(
    &::Org::BouncyCastle::Math::EC::F2mFieldElement::Equals)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x352a3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::F2mFieldElement.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::F2mFieldElement::*)()>(&::Org::BouncyCastle::Math::EC::F2mFieldElement::GetHashCode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x352a470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 2 }));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Math::EC::F2mFieldElement::__cordl_internal_get_representation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___representation;
}
constexpr int32_t const& Org::BouncyCastle::Math::EC::F2mFieldElement::__cordl_internal_get_representation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___representation;
}
constexpr void Org::BouncyCastle::Math::EC::F2mFieldElement::__cordl_internal_set_representation(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___representation = value;
}
constexpr int32_t& Org::BouncyCastle::Math::EC::F2mFieldElement::__cordl_internal_get_m() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m;
}
constexpr int32_t const& Org::BouncyCastle::Math::EC::F2mFieldElement::__cordl_internal_get_m() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m;
}
constexpr void Org::BouncyCastle::Math::EC::F2mFieldElement::__cordl_internal_set_m(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m = value;
}
constexpr ::ArrayW<int32_t>& Org::BouncyCastle::Math::EC::F2mFieldElement::__cordl_internal_get_ks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ks;
}
constexpr ::ArrayW<int32_t> const& Org::BouncyCastle::Math::EC::F2mFieldElement::__cordl_internal_get_ks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ks;
}
constexpr void Org::BouncyCastle::Math::EC::F2mFieldElement::__cordl_internal_set_ks(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ks = value;
}
constexpr ::Org::BouncyCastle::Math::EC::LongArray*& Org::BouncyCastle::Math::EC::F2mFieldElement::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr ::Org::BouncyCastle::Math::EC::LongArray* const& Org::BouncyCastle::Math::EC::F2mFieldElement::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Org::BouncyCastle::Math::EC::F2mFieldElement::__cordl_internal_set_x(::Org::BouncyCastle::Math::EC::LongArray* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
inline void Org::BouncyCastle::Math::EC::F2mFieldElement::_ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3, ::Org::BouncyCastle::Math::BigInteger* x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(),
          { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m, k1, k2, k3, x);
}
inline void Org::BouncyCastle::Math::EC::F2mFieldElement::_ctor(int32_t m, int32_t k, ::Org::BouncyCastle::Math::BigInteger* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m, k, x);
}
inline void Org::BouncyCastle::Math::EC::F2mFieldElement::_ctor(int32_t m, ::ArrayW<int32_t> ks, ::Org::BouncyCastle::Math::EC::LongArray* x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(),
                                              { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::LongArray*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m, ks, x);
}
inline int32_t Org::BouncyCastle::Math::EC::F2mFieldElement::get_BitLength() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Math::EC::F2mFieldElement::get_IsOne() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Math::EC::F2mFieldElement::get_IsZero() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Math::EC::F2mFieldElement::TestBitZero() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::F2mFieldElement::ToBigInteger() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Math::EC::F2mFieldElement::get_FieldName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Math::EC::F2mFieldElement::get_FieldSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Math::EC::F2mFieldElement::CheckFieldElements(::Org::BouncyCastle::Math::EC::ECFieldElement* a, ::Org::BouncyCastle::Math::EC::ECFieldElement* b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(),
                          { "CheckFieldElements", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::F2mFieldElement::Add(::Org::BouncyCastle::Math::EC::ECFieldElement* b) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method, b);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::F2mFieldElement::AddOne() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::F2mFieldElement::Subtract(::Org::BouncyCastle::Math::EC::ECFieldElement* b) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method, b);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::F2mFieldElement::Multiply(::Org::BouncyCastle::Math::EC::ECFieldElement* b) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method, b);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::F2mFieldElement::MultiplyMinusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* b,
                                                                                                                         ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                                                                         ::Org::BouncyCastle::Math::EC::ECFieldElement* y) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method, b, x, y);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::F2mFieldElement::MultiplyPlusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* b,
                                                                                                                        ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                                                                        ::Org::BouncyCastle::Math::EC::ECFieldElement* y) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method, b, x, y);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::F2mFieldElement::Divide(::Org::BouncyCastle::Math::EC::ECFieldElement* b) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method, b);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::F2mFieldElement::Negate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::F2mFieldElement::Square() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::F2mFieldElement::SquareMinusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                                                                       ::Org::BouncyCastle::Math::EC::ECFieldElement* y) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method, x, y);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::F2mFieldElement::SquarePlusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                                                                      ::Org::BouncyCastle::Math::EC::ECFieldElement* y) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method, x, y);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::F2mFieldElement::SquarePow(int32_t pow) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method, pow);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::F2mFieldElement::Invert() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::F2mFieldElement::Sqrt() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Math::EC::F2mFieldElement::get_Representation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { "get_Representation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Math::EC::F2mFieldElement::get_M() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { "get_M", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Math::EC::F2mFieldElement::get_K1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { "get_K1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Math::EC::F2mFieldElement::get_K2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { "get_K2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Math::EC::F2mFieldElement::get_K3() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), { "get_K3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Math::EC::F2mFieldElement::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool Org::BouncyCastle::Math::EC::F2mFieldElement::Equals(::Org::BouncyCastle::Math::EC::F2mFieldElement* other) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline int32_t Org::BouncyCastle::Math::EC::F2mFieldElement::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::F2mFieldElement* Org::BouncyCastle::Math::EC::F2mFieldElement::New_ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3, ::Org::BouncyCastle::Math::BigInteger* x) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(m, k1, k2, k3, x));
}
inline ::Org::BouncyCastle::Math::EC::F2mFieldElement* Org::BouncyCastle::Math::EC::F2mFieldElement::New_ctor(int32_t m, int32_t k, ::Org::BouncyCastle::Math::BigInteger* x) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(m, k, x));
}
inline ::Org::BouncyCastle::Math::EC::F2mFieldElement* Org::BouncyCastle::Math::EC::F2mFieldElement::New_ctor(int32_t m, ::ArrayW<int32_t> ks, ::Org::BouncyCastle::Math::EC::LongArray* x) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::F2mFieldElement*>(m, ks, x));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::F2mFieldElement::F2mFieldElement() {}
