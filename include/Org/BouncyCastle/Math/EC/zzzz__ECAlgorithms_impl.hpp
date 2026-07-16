#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/ECAlgorithms.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECAlgorithms_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__ECEndomorphism_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__GlvEndomorphism_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__WNafPreCompInfo_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/Field/zzzz__IFiniteField_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECAlgorithms.IsF2mCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Org::BouncyCastle::Math::EC::ECCurve*)>(&::Org::BouncyCastle::Math::EC::ECAlgorithms::IsF2mCurve)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x351f2cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(), { "IsF2mCurve", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECAlgorithms.IsF2mField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Org::BouncyCastle::Math::Field::IFiniteField*)>(&::Org::BouncyCastle::Math::EC::ECAlgorithms::IsF2mField)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x351f2f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                                                                                           { "IsF2mField", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::Field::IFiniteField*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECAlgorithms.IsFpCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Org::BouncyCastle::Math::EC::ECCurve*)>(&::Org::BouncyCastle::Math::EC::ECAlgorithms::IsFpCurve)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x351f480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(), { "IsFpCurve", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECAlgorithms.IsFpField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Org::BouncyCastle::Math::Field::IFiniteField*)>(&::Org::BouncyCastle::Math::EC::ECAlgorithms::IsFpField)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x351f4a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(), { "IsFpField", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::Field::IFiniteField*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECAlgorithms.SumOfMultiplies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (*)(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>, ::ArrayW<::Org::BouncyCastle::Math::BigInteger*>)>(
        &::Org::BouncyCastle::Math::EC::ECAlgorithms::SumOfMultiplies)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x351f554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                            { "SumOfMultiplies", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECAlgorithms.SumOfTwoMultiplies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (*)(::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Math::BigInteger*,
                                                                                                   ::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::ECAlgorithms::SumOfTwoMultiplies)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x351f7d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                                                             { "SumOfTwoMultiplies",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECAlgorithms.ShamirsTrick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (*)(::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Math::BigInteger*,
                                                                                                   ::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::ECAlgorithms::ShamirsTrick)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x35205b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                                                             { "ShamirsTrick",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECAlgorithms.ImportPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (*)(::Org::BouncyCastle::Math::EC::ECCurve*, ::Org::BouncyCastle::Math::EC::ECPoint*)>(
    &::Org::BouncyCastle::Math::EC::ECAlgorithms::ImportPoint)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x351fa5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                                                { "ImportPoint", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECAlgorithms.MontgomeryTrick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Math::EC::ECAlgorithms::MontgomeryTrick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3520acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                            { "MontgomeryTrick", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECAlgorithms.MontgomeryTrick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*>, int32_t, int32_t, ::Org::BouncyCastle::Math::EC::ECFieldElement*)>(
    &::Org::BouncyCastle::Math::EC::ECAlgorithms::MontgomeryTrick)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x3520ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                                                                                           { "MontgomeryTrick",
                                                                                             {},
                                                                                             { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*>>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECAlgorithms.ReferenceMultiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (*)(::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::ECAlgorithms::ReferenceMultiply)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x3520d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                                                { "ReferenceMultiply", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECAlgorithms.ValidatePoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (*)(::Org::BouncyCastle::Math::EC::ECPoint*)>(
    &::Org::BouncyCastle::Math::EC::ECAlgorithms::ValidatePoint)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3520ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(), { "ValidatePoint", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECAlgorithms.CleanPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (*)(::Org::BouncyCastle::Math::EC::ECCurve*, ::Org::BouncyCastle::Math::EC::ECPoint*)>(
    &::Org::BouncyCastle::Math::EC::ECAlgorithms::CleanPoint)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3520f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                                                { "CleanPoint", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECAlgorithms.ImplCheckResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (*)(::Org::BouncyCastle::Math::EC::ECPoint*)>(
    &::Org::BouncyCastle::Math::EC::ECAlgorithms::ImplCheckResult)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x351fefc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(), { "ImplCheckResult", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECAlgorithms.ImplShamirsTrickJsf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (*)(::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Math::BigInteger*,
                                                                                                   ::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::ECAlgorithms::ImplShamirsTrickJsf)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x352060c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                                                             { "ImplShamirsTrickJsf",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECAlgorithms.ImplShamirsTrickWNaf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (*)(::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Math::BigInteger*,
                                                                                                   ::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::ECAlgorithms::ImplShamirsTrickWNaf)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x3520218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                                                             { "ImplShamirsTrickWNaf",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECAlgorithms.ImplShamirsTrickWNaf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (*)(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*, ::Org::BouncyCastle::Math::EC::ECPoint*,
                                                                                                   ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::ECAlgorithms::ImplShamirsTrickWNaf)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x352176c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                                                             { "ImplShamirsTrickWNaf",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECAlgorithms.ImplShamirsTrickWNaf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (*)(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>, ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>, ::ArrayW<uint8_t>,
                                                            ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>, ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>, ::ArrayW<uint8_t>)>(
        &::Org::BouncyCastle::Math::EC::ECAlgorithms::ImplShamirsTrickWNaf)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x35214b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                                                { "ImplShamirsTrickWNaf",
                                                  {},
                                                  { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>>(),
                                                    ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>>(),
                                                    ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECAlgorithms.ImplSumOfMultiplies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (*)(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>, ::ArrayW<::Org::BouncyCastle::Math::BigInteger*>)>(
        &::Org::BouncyCastle::Math::EC::ECAlgorithms::ImplSumOfMultiplies)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x351ff70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                         { "ImplSumOfMultiplies", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECAlgorithms.ImplSumOfMultipliesGlv
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (*)(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>, ::ArrayW<::Org::BouncyCastle::Math::BigInteger*>,
                                                                                                   ::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism*)>(
    &::Org::BouncyCastle::Math::EC::ECAlgorithms::ImplSumOfMultipliesGlv)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x351fb0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                                                { "ImplSumOfMultipliesGlv",
                                                  {},
                                                  { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECAlgorithms.ImplSumOfMultiplies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (*)(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*, ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>,
                                                            ::ArrayW<::Org::BouncyCastle::Math::BigInteger*>)>(&::Org::BouncyCastle::Math::EC::ECAlgorithms::ImplSumOfMultiplies)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x3521df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                                                { "ImplSumOfMultiplies",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>>(),
                                                    ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECAlgorithms.ImplSumOfMultiplies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (*)(::ArrayW<bool>, ::ArrayW<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*>,
                                                                                                   ::ArrayW<::ArrayW<uint8_t>>)>(&::Org::BouncyCastle::Math::EC::ECAlgorithms::ImplSumOfMultiplies)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x3521ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                                                             { "ImplSumOfMultiplies",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*>>(),
                                                                 ::i2c::type_of<::ArrayW<::ArrayW<uint8_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECAlgorithms.ImplShamirsTrickFixedPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (*)(::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Math::BigInteger*,
                                                                                                   ::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::ECAlgorithms::ImplShamirsTrickFixedPoint)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x3521028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                                                             { "ImplShamirsTrickFixedPoint",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ECAlgorithms._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::ECAlgorithms::*)()>(&::Org::BouncyCastle::Math::EC::ECAlgorithms::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x352229c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool Org::BouncyCastle::Math::EC::ECAlgorithms::IsF2mCurve(::Org::BouncyCastle::Math::EC::ECCurve* c) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(), { "IsF2mCurve", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline bool Org::BouncyCastle::Math::EC::ECAlgorithms::IsF2mField(::Org::BouncyCastle::Math::Field::IFiniteField* field) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(), { "IsF2mField", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::Field::IFiniteField*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, field);
}
inline bool Org::BouncyCastle::Math::EC::ECAlgorithms::IsFpCurve(::Org::BouncyCastle::Math::EC::ECCurve* c) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(), { "IsFpCurve", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline bool Org::BouncyCastle::Math::EC::ECAlgorithms::IsFpField(::Org::BouncyCastle::Math::Field::IFiniteField* field) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(), { "IsFpField", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::Field::IFiniteField*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, field);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECAlgorithms::SumOfMultiplies(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> ps,
                                                                                                          ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> ks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                          { "SumOfMultiplies", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(nullptr, ___internal_method, ps, ks);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECAlgorithms::SumOfTwoMultiplies(::Org::BouncyCastle::Math::EC::ECPoint* P, ::Org::BouncyCastle::Math::BigInteger* a,
                                                                                                             ::Org::BouncyCastle::Math::EC::ECPoint* Q, ::Org::BouncyCastle::Math::BigInteger* b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                                                           { "SumOfTwoMultiplies",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(nullptr, ___internal_method, P, a, Q, b);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECAlgorithms::ShamirsTrick(::Org::BouncyCastle::Math::EC::ECPoint* P, ::Org::BouncyCastle::Math::BigInteger* k,
                                                                                                       ::Org::BouncyCastle::Math::EC::ECPoint* Q, ::Org::BouncyCastle::Math::BigInteger* l) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                                                           { "ShamirsTrick",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(nullptr, ___internal_method, P, k, Q, l);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECAlgorithms::ImportPoint(::Org::BouncyCastle::Math::EC::ECCurve* c, ::Org::BouncyCastle::Math::EC::ECPoint* p) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                                              { "ImportPoint", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(nullptr, ___internal_method, c, p);
}
inline void Org::BouncyCastle::Math::EC::ECAlgorithms::MontgomeryTrick(::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*> zs, int32_t off, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                          { "MontgomeryTrick", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, zs, off, len);
}
inline void Org::BouncyCastle::Math::EC::ECAlgorithms::MontgomeryTrick(::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*> zs, int32_t off, int32_t len,
                                                                       ::Org::BouncyCastle::Math::EC::ECFieldElement* scale) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                                                                                         { "MontgomeryTrick",
                                                                                           {},
                                                                                           { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*>>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, zs, off, len, scale);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECAlgorithms::ReferenceMultiply(::Org::BouncyCastle::Math::EC::ECPoint* p, ::Org::BouncyCastle::Math::BigInteger* k) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                                              { "ReferenceMultiply", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(nullptr, ___internal_method, p, k);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECAlgorithms::ValidatePoint(::Org::BouncyCastle::Math::EC::ECPoint* p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(), { "ValidatePoint", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(nullptr, ___internal_method, p);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECAlgorithms::CleanPoint(::Org::BouncyCastle::Math::EC::ECCurve* c, ::Org::BouncyCastle::Math::EC::ECPoint* p) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                                              { "CleanPoint", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(nullptr, ___internal_method, c, p);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECAlgorithms::ImplCheckResult(::Org::BouncyCastle::Math::EC::ECPoint* p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(), { "ImplCheckResult", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(nullptr, ___internal_method, p);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECAlgorithms::ImplShamirsTrickJsf(::Org::BouncyCastle::Math::EC::ECPoint* P, ::Org::BouncyCastle::Math::BigInteger* k,
                                                                                                              ::Org::BouncyCastle::Math::EC::ECPoint* Q, ::Org::BouncyCastle::Math::BigInteger* l) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                                                           { "ImplShamirsTrickJsf",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(nullptr, ___internal_method, P, k, Q, l);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECAlgorithms::ImplShamirsTrickWNaf(::Org::BouncyCastle::Math::EC::ECPoint* P, ::Org::BouncyCastle::Math::BigInteger* k,
                                                                                                               ::Org::BouncyCastle::Math::EC::ECPoint* Q, ::Org::BouncyCastle::Math::BigInteger* l) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                                                           { "ImplShamirsTrickWNaf",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(nullptr, ___internal_method, P, k, Q, l);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECAlgorithms::ImplShamirsTrickWNaf(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism,
                                                                                                               ::Org::BouncyCastle::Math::EC::ECPoint* P, ::Org::BouncyCastle::Math::BigInteger* k,
                                                                                                               ::Org::BouncyCastle::Math::BigInteger* l) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                                                           { "ImplShamirsTrickWNaf",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(nullptr, ___internal_method, endomorphism, P, k, l);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECAlgorithms::ImplShamirsTrickWNaf(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> preCompP,
                                                                                                               ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> preCompNegP, ::ArrayW<uint8_t> wnafP,
                                                                                                               ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> preCompQ,
                                                                                                               ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> preCompNegQ, ::ArrayW<uint8_t> wnafQ) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                                                           { "ImplShamirsTrickWNaf",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>>(),
                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>>(),
                                                               ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(nullptr, ___internal_method, preCompP, preCompNegP, wnafP, preCompQ, preCompNegQ, wnafQ);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECAlgorithms::ImplSumOfMultiplies(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> ps,
                                                                                                              ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> ks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                          { "ImplSumOfMultiplies", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(nullptr, ___internal_method, ps, ks);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECAlgorithms::ImplSumOfMultipliesGlv(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> ps,
                                                                                                                 ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> ks,
                                                                                                                 ::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism* glvEndomorphism) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                                                           { "ImplSumOfMultipliesGlv",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(nullptr, ___internal_method, ps, ks, glvEndomorphism);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECAlgorithms::ImplSumOfMultiplies(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism,
                                                                                                              ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> ps,
                                                                                                              ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> ks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                                              { "ImplSumOfMultiplies",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>>(),
                                                  ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(nullptr, ___internal_method, endomorphism, ps, ks);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint*
Org::BouncyCastle::Math::EC::ECAlgorithms::ImplSumOfMultiplies(::ArrayW<bool> negs, ::ArrayW<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*> infos, ::ArrayW<::ArrayW<uint8_t>> wnafs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                                                           { "ImplSumOfMultiplies",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*>>(),
                                                               ::i2c::type_of<::ArrayW<::ArrayW<uint8_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(nullptr, ___internal_method, negs, infos, wnafs);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECAlgorithms::ImplShamirsTrickFixedPoint(::Org::BouncyCastle::Math::EC::ECPoint* p,
                                                                                                                     ::Org::BouncyCastle::Math::BigInteger* k,
                                                                                                                     ::Org::BouncyCastle::Math::EC::ECPoint* q,
                                                                                                                     ::Org::BouncyCastle::Math::BigInteger* l) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(),
                                                           { "ImplShamirsTrickFixedPoint",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(nullptr, ___internal_method, p, k, q, l);
}
inline void Org::BouncyCastle::Math::EC::ECAlgorithms::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::ECAlgorithms*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECAlgorithms* Org::BouncyCastle::Math::EC::ECAlgorithms::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::ECAlgorithms*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::ECAlgorithms::ECAlgorithms() {}
