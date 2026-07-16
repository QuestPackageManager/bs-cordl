#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Multiplier/WTauNafMultiplier.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__WTauNafMultiplier_def.hpp"
#include "Org/BouncyCastle/Math/EC/Abc/zzzz__ZTauElement_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__IPreCompCallback_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__PreCompInfo_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__WTauNafMultiplier_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mPoint_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback::*)(
    ::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, int8_t)>(&::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x350fdf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), ::i2c::type_of<int8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback.Precompute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* (
    ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback::*)(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback::Precompute)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x350fe68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback*>(),
                                                                                           { "Precompute", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::EC::AbstractF2mPoint*& Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback::__cordl_internal_get_m_p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_p;
}
constexpr ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* const& Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback::__cordl_internal_get_m_p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_p;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback::__cordl_internal_set_m_p(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_p = value;
}
constexpr int8_t& Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback::__cordl_internal_get_m_a() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_a;
}
constexpr int8_t const& Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback::__cordl_internal_get_m_a() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_a;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback::__cordl_internal_set_m_a(int8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_a = value;
}
inline void Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback::_ctor(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, int8_t a) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), ::i2c::type_of<int8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, a);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*
Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback::Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback*>(),
                                                                                         { "Precompute", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>(this, ___internal_method, existing);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback*
Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback::New_ctor(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, int8_t a) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback*>(p, a));
}
/// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
constexpr Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback::operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*
Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback::i___Org__BouncyCastle__Math__EC__Multiplier__IPreCompCallback() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier_WTauNafCallback::WTauNafMultiplier_WTauNafCallback() {}
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier.MultiplyPositive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (
    ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::*)(::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyPositive)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x350f668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier.MultiplyWTnaf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::AbstractF2mPoint* (
    ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::*)(::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement*, int8_t, int8_t)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyWTnaf)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x350f854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*>(),
                                                             { "MultiplyWTnaf",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>(),
                                                                 ::i2c::type_of<int8_t>(), ::i2c::type_of<int8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier.MultiplyFromWTnaf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::AbstractF2mPoint* (*)(::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::ArrayW<int8_t>)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyFromWTnaf)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x350f9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*>(),
                                                             { "MultiplyFromWTnaf", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), ::i2c::type_of<::ArrayW<int8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::*)()>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x350fe64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::setStaticF_PRECOMP_NAME(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "PRECOMP_NAME", ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::getStaticF_PRECOMP_NAME() {
  return ::cordl_internals::getStaticField<::StringW, "PRECOMP_NAME", ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*>();
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyPositive(::Org::BouncyCastle::Math::EC::ECPoint* point,
                                                                                                                            ::Org::BouncyCastle::Math::BigInteger* k) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method, point, k);
}
inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyWTnaf(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p,
                                                                                                                                  ::Org::BouncyCastle::Math::EC::Abc::ZTauElement* lambda, int8_t a,
                                                                                                                                  int8_t mu) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*>(),
                                                           { "MultiplyWTnaf",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>(),
                                                               ::i2c::type_of<int8_t>(), ::i2c::type_of<int8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(this, ___internal_method, p, lambda, a, mu);
}
inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyFromWTnaf(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p,
                                                                                                                                      ::ArrayW<int8_t> u) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*>(),
                                                           { "MultiplyFromWTnaf", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), ::i2c::type_of<::ArrayW<int8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(nullptr, ___internal_method, p, u);
}
inline void Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier* Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::WTauNafMultiplier() {}
