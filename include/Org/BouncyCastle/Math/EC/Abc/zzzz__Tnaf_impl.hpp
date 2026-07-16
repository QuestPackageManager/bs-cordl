#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Abc/Tnaf.hpp"
#include "Org/BouncyCastle/Math/EC/Abc/zzzz__ZTauElement_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Abc/zzzz__Tnaf_def.hpp"
#include "Org/BouncyCastle/Math/EC/Abc/zzzz__SimpleBigDecimal_def.hpp"
#include "Org/BouncyCastle/Math/EC/Abc/zzzz__ZTauElement_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mCurve_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mPoint_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Abc::Tnaf.Norm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(int8_t, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement*)>(
    &::Org::BouncyCastle::Math::EC::Abc::Tnaf::Norm)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x349e748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(),
                                                             { "Norm", {}, { ::i2c::type_of<int8_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Abc::Tnaf.Norm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* (*)(int8_t, ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*, ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*)>(
        &::Org::BouncyCastle::Math::EC::Abc::Tnaf::Norm)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x349e860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(),
                                                                                           { "Norm",
                                                                                             {},
                                                                                             { ::i2c::type_of<int8_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Abc::Tnaf.Round
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Math::EC::Abc::ZTauElement* (*)(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*, ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*, int8_t)>(
        &::Org::BouncyCastle::Math::EC::Abc::Tnaf::Round)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x349e958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(),
                                                                                           { "Round",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*>(), ::i2c::type_of<int8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Abc::Tnaf.ApproximateDivisionByN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* (*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*,
                                                                                                                 ::Org::BouncyCastle::Math::BigInteger*, int8_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Abc::Tnaf::ApproximateDivisionByN)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x349ed24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(),
                                                { "ApproximateDivisionByN",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Abc::Tnaf.TauAdicNaf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int8_t> (*)(int8_t, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement*)>(&::Org::BouncyCastle::Math::EC::Abc::Tnaf::TauAdicNaf)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x349eea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(),
                                                             { "TauAdicNaf", {}, { ::i2c::type_of<int8_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Abc::Tnaf.Tau
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::AbstractF2mPoint* (*)(::Org::BouncyCastle::Math::EC::AbstractF2mPoint*)>(
    &::Org::BouncyCastle::Math::EC::Abc::Tnaf::Tau)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x349f244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(), { "Tau", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Abc::Tnaf.GetMu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::Org::BouncyCastle::Math::EC::AbstractF2mCurve*)>(&::Org::BouncyCastle::Math::EC::Abc::Tnaf::GetMu)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x349f260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(), { "GetMu", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Abc::Tnaf.GetMu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::Org::BouncyCastle::Math::EC::ECFieldElement*)>(&::Org::BouncyCastle::Math::EC::Abc::Tnaf::GetMu)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x349f364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(), { "GetMu", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Abc::Tnaf.GetMu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(int32_t)>(&::Org::BouncyCastle::Math::EC::Abc::Tnaf::GetMu)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x349f394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(), { "GetMu", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Abc::Tnaf.GetLucas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Math::BigInteger*> (*)(int8_t, int32_t, bool)>(&::Org::BouncyCastle::Math::EC::Abc::Tnaf::GetLucas)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x349f3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(),
                                                                                           { "GetLucas", {}, { ::i2c::type_of<int8_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Abc::Tnaf.GetTw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(int8_t, int32_t)>(&::Org::BouncyCastle::Math::EC::Abc::Tnaf::GetTw)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x349f59c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(), { "GetTw", {}, { ::i2c::type_of<int8_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Abc::Tnaf.GetSi
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Math::BigInteger*> (*)(::Org::BouncyCastle::Math::EC::AbstractF2mCurve*)>(
    &::Org::BouncyCastle::Math::EC::Abc::Tnaf::GetSi)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x349f718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(), { "GetSi", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Abc::Tnaf.GetSi
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Math::BigInteger*> (*)(int32_t, int32_t, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::Abc::Tnaf::GetSi)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x349fab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(),
                                                             { "GetSi", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Abc::Tnaf.GetShiftsForCofactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::Abc::Tnaf::GetShiftsForCofactor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x349fa24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(), { "GetShiftsForCofactor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Abc::Tnaf.PartModReduction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Math::EC::Abc::ZTauElement* (*)(::Org::BouncyCastle::Math::BigInteger*, int32_t, int8_t, ::ArrayW<::Org::BouncyCastle::Math::BigInteger*>, int8_t, int8_t)>(
        &::Org::BouncyCastle::Math::EC::Abc::Tnaf::PartModReduction)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x349fd0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(),
                                                             { "PartModReduction",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int8_t>(),
                                                                 ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<int8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Abc::Tnaf.MultiplyRTnaf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::AbstractF2mPoint* (*)(::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::Abc::Tnaf::MultiplyRTnaf)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x349ffac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(),
                                         { "MultiplyRTnaf", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Abc::Tnaf.MultiplyTnaf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Math::EC::AbstractF2mPoint* (*)(::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement*)>(
        &::Org::BouncyCastle::Math::EC::Abc::Tnaf::MultiplyTnaf)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x34a0100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(),
                            { "MultiplyTnaf", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Abc::Tnaf.MultiplyFromTnaf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::AbstractF2mPoint* (*)(::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::ArrayW<int8_t>)>(
    &::Org::BouncyCastle::Math::EC::Abc::Tnaf::MultiplyFromTnaf)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x34a020c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(),
                                                             { "MultiplyFromTnaf", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), ::i2c::type_of<::ArrayW<int8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Abc::Tnaf.TauAdicWNaf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int8_t> (*)(int8_t, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement*, int8_t, ::Org::BouncyCastle::Math::BigInteger*,
                                                                            ::Org::BouncyCastle::Math::BigInteger*, ::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>)>(
    &::Org::BouncyCastle::Math::EC::Abc::Tnaf::TauAdicWNaf)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x34a0408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(),
                                                             { "TauAdicWNaf",
                                                               {},
                                                               { ::i2c::type_of<int8_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>(), ::i2c::type_of<int8_t>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                 ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Abc::Tnaf.GetPreComp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*> (*)(::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, int8_t)>(
    &::Org::BouncyCastle::Math::EC::Abc::Tnaf::GetPreComp)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x34a0800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(),
                                                             { "GetPreComp", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), ::i2c::type_of<int8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Abc::Tnaf._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Abc::Tnaf::*)()>(&::Org::BouncyCastle::Math::EC::Abc::Tnaf::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x34a0fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Math::EC::Abc::Tnaf::setStaticF_MinusOne(::Org::BouncyCastle::Math::BigInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger*, "MinusOne", ::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(std::forward<::Org::BouncyCastle::Math::BigInteger*>(value));
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::Abc::Tnaf::getStaticF_MinusOne() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger*, "MinusOne", ::Org::BouncyCastle::Math::EC::Abc::Tnaf*>();
}
inline void Org::BouncyCastle::Math::EC::Abc::Tnaf::setStaticF_MinusTwo(::Org::BouncyCastle::Math::BigInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger*, "MinusTwo", ::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(std::forward<::Org::BouncyCastle::Math::BigInteger*>(value));
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::Abc::Tnaf::getStaticF_MinusTwo() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger*, "MinusTwo", ::Org::BouncyCastle::Math::EC::Abc::Tnaf*>();
}
inline void Org::BouncyCastle::Math::EC::Abc::Tnaf::setStaticF_MinusThree(::Org::BouncyCastle::Math::BigInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger*, "MinusThree", ::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(std::forward<::Org::BouncyCastle::Math::BigInteger*>(value));
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::Abc::Tnaf::getStaticF_MinusThree() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger*, "MinusThree", ::Org::BouncyCastle::Math::EC::Abc::Tnaf*>();
}
inline void Org::BouncyCastle::Math::EC::Abc::Tnaf::setStaticF_Four(::Org::BouncyCastle::Math::BigInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger*, "Four", ::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(std::forward<::Org::BouncyCastle::Math::BigInteger*>(value));
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::Abc::Tnaf::getStaticF_Four() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger*, "Four", ::Org::BouncyCastle::Math::EC::Abc::Tnaf*>();
}
inline void Org::BouncyCastle::Math::EC::Abc::Tnaf::setStaticF_Alpha0(::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>, "Alpha0", ::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(
      std::forward<::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>>(value));
}
inline ::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*> Org::BouncyCastle::Math::EC::Abc::Tnaf::getStaticF_Alpha0() {
  return ::cordl_internals::getStaticField<::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>, "Alpha0", ::Org::BouncyCastle::Math::EC::Abc::Tnaf*>();
}
inline void Org::BouncyCastle::Math::EC::Abc::Tnaf::setStaticF_Alpha0Tnaf(::ArrayW<::ArrayW<int8_t>> value) {
  ::cordl_internals::setStaticField<::ArrayW<::ArrayW<int8_t>>, "Alpha0Tnaf", ::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(std::forward<::ArrayW<::ArrayW<int8_t>>>(value));
}
inline ::ArrayW<::ArrayW<int8_t>> Org::BouncyCastle::Math::EC::Abc::Tnaf::getStaticF_Alpha0Tnaf() {
  return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<int8_t>>, "Alpha0Tnaf", ::Org::BouncyCastle::Math::EC::Abc::Tnaf*>();
}
inline void Org::BouncyCastle::Math::EC::Abc::Tnaf::setStaticF_Alpha1(::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>, "Alpha1", ::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(
      std::forward<::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>>(value));
}
inline ::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*> Org::BouncyCastle::Math::EC::Abc::Tnaf::getStaticF_Alpha1() {
  return ::cordl_internals::getStaticField<::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>, "Alpha1", ::Org::BouncyCastle::Math::EC::Abc::Tnaf*>();
}
inline void Org::BouncyCastle::Math::EC::Abc::Tnaf::setStaticF_Alpha1Tnaf(::ArrayW<::ArrayW<int8_t>> value) {
  ::cordl_internals::setStaticField<::ArrayW<::ArrayW<int8_t>>, "Alpha1Tnaf", ::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(std::forward<::ArrayW<::ArrayW<int8_t>>>(value));
}
inline ::ArrayW<::ArrayW<int8_t>> Org::BouncyCastle::Math::EC::Abc::Tnaf::getStaticF_Alpha1Tnaf() {
  return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<int8_t>>, "Alpha1Tnaf", ::Org::BouncyCastle::Math::EC::Abc::Tnaf*>();
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::Abc::Tnaf::Norm(int8_t mu, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement* lambda) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(),
                                                           { "Norm", {}, { ::i2c::type_of<int8_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(nullptr, ___internal_method, mu, lambda);
}
inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Org::BouncyCastle::Math::EC::Abc::Tnaf::Norm(int8_t mu, ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* u,
                                                                                                          ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(),
                                                                                         { "Norm",
                                                                                           {},
                                                                                           { ::i2c::type_of<int8_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*>(nullptr, ___internal_method, mu, u, v);
}
inline ::Org::BouncyCastle::Math::EC::Abc::ZTauElement* Org::BouncyCastle::Math::EC::Abc::Tnaf::Round(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* lambda0,
                                                                                                      ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* lambda1, int8_t mu) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(),
                                                                                         { "Round",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*>(), ::i2c::type_of<int8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>(nullptr, ___internal_method, lambda0, lambda1, mu);
}
inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Org::BouncyCastle::Math::EC::Abc::Tnaf::ApproximateDivisionByN(::Org::BouncyCastle::Math::BigInteger* k,
                                                                                                                            ::Org::BouncyCastle::Math::BigInteger* s,
                                                                                                                            ::Org::BouncyCastle::Math::BigInteger* vm, int8_t a, int32_t m, int32_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(),
                                              { "ApproximateDivisionByN",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*>(nullptr, ___internal_method, k, s, vm, a, m, c);
}
inline ::ArrayW<int8_t> Org::BouncyCastle::Math::EC::Abc::Tnaf::TauAdicNaf(int8_t mu, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement* lambda) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(),
                                                           { "TauAdicNaf", {}, { ::i2c::type_of<int8_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int8_t>>(nullptr, ___internal_method, mu, lambda);
}
inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* Org::BouncyCastle::Math::EC::Abc::Tnaf::Tau(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(), { "Tau", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(nullptr, ___internal_method, p);
}
inline int8_t Org::BouncyCastle::Math::EC::Abc::Tnaf::GetMu(::Org::BouncyCastle::Math::EC::AbstractF2mCurve* curve) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(), { "GetMu", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, curve);
}
inline int8_t Org::BouncyCastle::Math::EC::Abc::Tnaf::GetMu(::Org::BouncyCastle::Math::EC::ECFieldElement* curveA) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(), { "GetMu", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, curveA);
}
inline int8_t Org::BouncyCastle::Math::EC::Abc::Tnaf::GetMu(int32_t curveA) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(), { "GetMu", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, curveA);
}
inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> Org::BouncyCastle::Math::EC::Abc::Tnaf::GetLucas(int8_t mu, int32_t k, bool doV) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(),
                                                                                         { "GetLucas", {}, { ::i2c::type_of<int8_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>(nullptr, ___internal_method, mu, k, doV);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::Abc::Tnaf::GetTw(int8_t mu, int32_t w) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(), { "GetTw", {}, { ::i2c::type_of<int8_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(nullptr, ___internal_method, mu, w);
}
inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> Org::BouncyCastle::Math::EC::Abc::Tnaf::GetSi(::Org::BouncyCastle::Math::EC::AbstractF2mCurve* curve) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(), { "GetSi", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>(nullptr, ___internal_method, curve);
}
inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> Org::BouncyCastle::Math::EC::Abc::Tnaf::GetSi(int32_t fieldSize, int32_t curveA, ::Org::BouncyCastle::Math::BigInteger* cofactor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(),
                                                           { "GetSi", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>(nullptr, ___internal_method, fieldSize, curveA, cofactor);
}
inline int32_t Org::BouncyCastle::Math::EC::Abc::Tnaf::GetShiftsForCofactor(::Org::BouncyCastle::Math::BigInteger* h) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(), { "GetShiftsForCofactor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, h);
}
inline ::Org::BouncyCastle::Math::EC::Abc::ZTauElement* Org::BouncyCastle::Math::EC::Abc::Tnaf::PartModReduction(::Org::BouncyCastle::Math::BigInteger* k, int32_t m, int8_t a,
                                                                                                                 ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> s, int8_t mu, int8_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(),
                                                           { "PartModReduction",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int8_t>(),
                                                               ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<int8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>(nullptr, ___internal_method, k, m, a, s, mu, c);
}
inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* Org::BouncyCastle::Math::EC::Abc::Tnaf::MultiplyRTnaf(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p,
                                                                                                              ::Org::BouncyCastle::Math::BigInteger* k) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(),
                                       { "MultiplyRTnaf", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(nullptr, ___internal_method, p, k);
}
inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* Org::BouncyCastle::Math::EC::Abc::Tnaf::MultiplyTnaf(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p,
                                                                                                             ::Org::BouncyCastle::Math::EC::Abc::ZTauElement* lambda) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(),
                          { "MultiplyTnaf", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(nullptr, ___internal_method, p, lambda);
}
inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* Org::BouncyCastle::Math::EC::Abc::Tnaf::MultiplyFromTnaf(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, ::ArrayW<int8_t> u) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(),
                                                           { "MultiplyFromTnaf", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), ::i2c::type_of<::ArrayW<int8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(nullptr, ___internal_method, p, u);
}
inline ::ArrayW<int8_t> Org::BouncyCastle::Math::EC::Abc::Tnaf::TauAdicWNaf(int8_t mu, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement* lambda, int8_t width,
                                                                            ::Org::BouncyCastle::Math::BigInteger* pow2w, ::Org::BouncyCastle::Math::BigInteger* tw,
                                                                            ::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*> alpha) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(),
                                                           { "TauAdicWNaf",
                                                             {},
                                                             { ::i2c::type_of<int8_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>(), ::i2c::type_of<int8_t>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                               ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int8_t>>(nullptr, ___internal_method, mu, lambda, width, pow2w, tw, alpha);
}
inline ::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*> Org::BouncyCastle::Math::EC::Abc::Tnaf::GetPreComp(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, int8_t a) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(),
                                                           { "GetPreComp", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), ::i2c::type_of<int8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>>(nullptr, ___internal_method, p, a);
}
inline void Org::BouncyCastle::Math::EC::Abc::Tnaf::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::Abc::Tnaf* Org::BouncyCastle::Math::EC::Abc::Tnaf::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Abc::Tnaf*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Abc::Tnaf::Tnaf() {}
