#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Endo/EndoUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__EndoUtilities_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__ECEndomorphism_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__EndoPreCompInfo_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__EndoUtilities_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__ScalarSplitParameters_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__IPreCompCallback_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__PreCompInfo_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::EndoUtilities_MapPointCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Endo::EndoUtilities_MapPointCallback::*)(
    ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*, ::Org::BouncyCastle::Math::EC::ECPoint*)>(&::Org::BouncyCastle::Math::EC::Endo::EndoUtilities_MapPointCallback::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x350a52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::EndoUtilities_MapPointCallback*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::EndoUtilities_MapPointCallback.Precompute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* (
    ::Org::BouncyCastle::Math::EC::Endo::EndoUtilities_MapPointCallback::*)(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*)>(
    &::Org::BouncyCastle::Math::EC::Endo::EndoUtilities_MapPointCallback::Precompute)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x350a5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::EndoUtilities_MapPointCallback*>(),
                                                                                           { "Precompute", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::EndoUtilities_MapPointCallback.CheckExisting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Math::EC::Endo::EndoUtilities_MapPointCallback::*)(::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo*,
                                                                                                                                     ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*)>(
    &::Org::BouncyCastle::Math::EC::Endo::EndoUtilities_MapPointCallback::CheckExisting)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x350a794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::EndoUtilities_MapPointCallback*>(),
            { "CheckExisting", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*& Org::BouncyCastle::Math::EC::Endo::EndoUtilities_MapPointCallback::__cordl_internal_get_m_endomorphism() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_endomorphism;
}
constexpr ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* const& Org::BouncyCastle::Math::EC::Endo::EndoUtilities_MapPointCallback::__cordl_internal_get_m_endomorphism() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_endomorphism;
}
constexpr void Org::BouncyCastle::Math::EC::Endo::EndoUtilities_MapPointCallback::__cordl_internal_set_m_endomorphism(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_endomorphism = value;
}
constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& Org::BouncyCastle::Math::EC::Endo::EndoUtilities_MapPointCallback::__cordl_internal_get_m_point() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_point;
}
constexpr ::Org::BouncyCastle::Math::EC::ECPoint* const& Org::BouncyCastle::Math::EC::Endo::EndoUtilities_MapPointCallback::__cordl_internal_get_m_point() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_point;
}
constexpr void Org::BouncyCastle::Math::EC::Endo::EndoUtilities_MapPointCallback::__cordl_internal_set_m_point(::Org::BouncyCastle::Math::EC::ECPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_point = value;
}
inline void Org::BouncyCastle::Math::EC::Endo::EndoUtilities_MapPointCallback::_ctor(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism, ::Org::BouncyCastle::Math::EC::ECPoint* point) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::EndoUtilities_MapPointCallback*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endomorphism, point);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*
Org::BouncyCastle::Math::EC::Endo::EndoUtilities_MapPointCallback::Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::EndoUtilities_MapPointCallback*>(),
                                                                                         { "Precompute", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>(this, ___internal_method, existing);
}
inline bool Org::BouncyCastle::Math::EC::Endo::EndoUtilities_MapPointCallback::CheckExisting(::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo* existingEndo,
                                                                                             ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::EndoUtilities_MapPointCallback*>(),
                       { "CheckExisting", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, existingEndo, endomorphism);
}
inline ::Org::BouncyCastle::Math::EC::Endo::EndoUtilities_MapPointCallback*
Org::BouncyCastle::Math::EC::Endo::EndoUtilities_MapPointCallback::New_ctor(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism, ::Org::BouncyCastle::Math::EC::ECPoint* point) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Endo::EndoUtilities_MapPointCallback*>(endomorphism, point));
}
/// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
constexpr Org::BouncyCastle::Math::EC::Endo::EndoUtilities_MapPointCallback::operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*
Org::BouncyCastle::Math::EC::Endo::EndoUtilities_MapPointCallback::i___Org__BouncyCastle__Math__EC__Multiplier__IPreCompCallback() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Endo::EndoUtilities_MapPointCallback::EndoUtilities_MapPointCallback() {}
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::EndoUtilities.DecomposeScalar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Math::BigInteger*> (*)(
    ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::Endo::EndoUtilities::DecomposeScalar)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x350a0c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::EndoUtilities*>(),
                            { "DecomposeScalar", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::EndoUtilities.MapPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (*)(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*, ::Org::BouncyCastle::Math::EC::ECPoint*)>(
    &::Org::BouncyCastle::Math::EC::Endo::EndoUtilities::MapPoint)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x350a408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::EndoUtilities*>(),
                                         { "MapPoint", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::EndoUtilities.CalculateB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Endo::EndoUtilities::CalculateB)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x350a300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::EndoUtilities*>(),
                            { "CalculateB", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::EndoUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Endo::EndoUtilities::*)()>(&::Org::BouncyCastle::Math::EC::Endo::EndoUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x350a59c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::EndoUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Math::EC::Endo::EndoUtilities::setStaticF_PRECOMP_NAME(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "PRECOMP_NAME", ::Org::BouncyCastle::Math::EC::Endo::EndoUtilities*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Math::EC::Endo::EndoUtilities::getStaticF_PRECOMP_NAME() {
  return ::cordl_internals::getStaticField<::StringW, "PRECOMP_NAME", ::Org::BouncyCastle::Math::EC::Endo::EndoUtilities*>();
}
inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> Org::BouncyCastle::Math::EC::Endo::EndoUtilities::DecomposeScalar(::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* p,
                                                                                                                          ::Org::BouncyCastle::Math::BigInteger* k) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::EndoUtilities*>(),
                          { "DecomposeScalar", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>(nullptr, ___internal_method, p, k);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Endo::EndoUtilities::MapPoint(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism,
                                                                                                          ::Org::BouncyCastle::Math::EC::ECPoint* p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::EndoUtilities*>(),
                                       { "MapPoint", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(nullptr, ___internal_method, endomorphism, p);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::Endo::EndoUtilities::CalculateB(::Org::BouncyCastle::Math::BigInteger* k, ::Org::BouncyCastle::Math::BigInteger* g,
                                                                                                           int32_t t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::EndoUtilities*>(),
                          { "CalculateB", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(nullptr, ___internal_method, k, g, t);
}
inline void Org::BouncyCastle::Math::EC::Endo::EndoUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::EndoUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::Endo::EndoUtilities* Org::BouncyCastle::Math::EC::Endo::EndoUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Endo::EndoUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Endo::EndoUtilities::EndoUtilities() {}
