#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Multiplier/WNafUtilities.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__WNafUtilities_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__IPreCompCallback_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__PreCompInfo_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__WNafPreCompInfo_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__WNafUtilities_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPointMap_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback::*)(::Org::BouncyCastle::Math::EC::ECCurve*, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x350d418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback.Precompute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* (
    ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback::*)(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback::Precompute)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x350e3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback*>(),
                                                                                           { "Precompute", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::EC::ECCurve*& Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback::__cordl_internal_get_m_curve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_curve;
}
constexpr ::Org::BouncyCastle::Math::EC::ECCurve* const& Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback::__cordl_internal_get_m_curve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_curve;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback::__cordl_internal_set_m_curve(::Org::BouncyCastle::Math::EC::ECCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_curve = value;
}
constexpr int32_t& Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback::__cordl_internal_get_m_confWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_confWidth;
}
constexpr int32_t const& Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback::__cordl_internal_get_m_confWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_confWidth;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback::__cordl_internal_set_m_confWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_confWidth = value;
}
inline void Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback::_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, int32_t confWidth) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curve, confWidth);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*
Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback::Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback*>(),
                                                                                         { "Precompute", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>(this, ___internal_method, existing);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback*
Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback::New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, int32_t confWidth) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback*>(curve, confWidth));
}
/// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
constexpr Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback::operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*
Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback::i___Org__BouncyCastle__Math__EC__Multiplier__IPreCompCallback() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_ConfigureBasepointCallback::WNafUtilities_ConfigureBasepointCallback() {}
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback::*)(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*,
                                                                                                                                           bool, ::Org::BouncyCastle::Math::EC::ECPointMap*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x350e0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback*>(),
            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPointMap*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback.Precompute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* (
    ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback::*)(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback::Precompute)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x350e574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback*>(),
                                                                                           { "Precompute", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*& Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback::__cordl_internal_get_m_infoP() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_infoP;
}
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* const& Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback::__cordl_internal_get_m_infoP() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_infoP;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback::__cordl_internal_set_m_infoP(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_infoP = value;
}
constexpr bool& Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback::__cordl_internal_get_m_includeNegated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_includeNegated;
}
constexpr bool const& Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback::__cordl_internal_get_m_includeNegated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_includeNegated;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback::__cordl_internal_set_m_includeNegated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_includeNegated = value;
}
constexpr ::Org::BouncyCastle::Math::EC::ECPointMap*& Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback::__cordl_internal_get_m_pointMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_pointMap;
}
constexpr ::Org::BouncyCastle::Math::EC::ECPointMap* const& Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback::__cordl_internal_get_m_pointMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_pointMap;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback::__cordl_internal_set_m_pointMap(::Org::BouncyCastle::Math::EC::ECPointMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_pointMap = value;
}
inline void Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback::_ctor(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* infoP, bool includeNegated,
                                                                                           ::Org::BouncyCastle::Math::EC::ECPointMap* pointMap) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback*>(),
          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPointMap*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, infoP, includeNegated, pointMap);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*
Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback::Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback*>(),
                                                                                         { "Precompute", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>(this, ___internal_method, existing);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback*
Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback::New_ctor(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* infoP, bool includeNegated,
                                                                                  ::Org::BouncyCastle::Math::EC::ECPointMap* pointMap) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback*>(infoP, includeNegated, pointMap));
}
/// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
constexpr Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback::operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*
Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback::i___Org__BouncyCastle__Math__EC__Multiplier__IPreCompCallback() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_MapPointCallback::WNafUtilities_MapPointCallback() {}
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback::*)(::Org::BouncyCastle::Math::EC::ECPoint*, int32_t, bool)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x350e0f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback.Precompute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* (
    ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback::*)(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback::Precompute)> {
  constexpr static std::size_t size = 0x7ac;
  constexpr static std::size_t addrs = 0x350e8e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback*>(),
                                                                                           { "Precompute", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback.CheckExisting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback::*)(
    ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*, int32_t, int32_t, bool)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback::CheckExisting)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x350f090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback*>(),
            { "CheckExisting", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback.CheckTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback::*)(
    ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>, int32_t)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback::CheckTable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x350f194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback*>(),
                                                             { "CheckTable", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback::__cordl_internal_get_m_p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_p;
}
constexpr ::Org::BouncyCastle::Math::EC::ECPoint* const& Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback::__cordl_internal_get_m_p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_p;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback::__cordl_internal_set_m_p(::Org::BouncyCastle::Math::EC::ECPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_p = value;
}
constexpr int32_t& Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback::__cordl_internal_get_m_minWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_minWidth;
}
constexpr int32_t const& Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback::__cordl_internal_get_m_minWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_minWidth;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback::__cordl_internal_set_m_minWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_minWidth = value;
}
constexpr bool& Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback::__cordl_internal_get_m_includeNegated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_includeNegated;
}
constexpr bool const& Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback::__cordl_internal_get_m_includeNegated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_includeNegated;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback::__cordl_internal_set_m_includeNegated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_includeNegated = value;
}
inline void Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback::_ctor(::Org::BouncyCastle::Math::EC::ECPoint* p, int32_t minWidth, bool includeNegated) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, minWidth, includeNegated);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*
Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback::Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback*>(),
                                                                                         { "Precompute", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>(this, ___internal_method, existing);
}
inline bool Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback::CheckExisting(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* existingWNaf, int32_t width,
                                                                                                     int32_t reqPreCompLen, bool includeNegated) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback*>(),
          { "CheckExisting", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, existingWNaf, width, reqPreCompLen, includeNegated);
}
inline bool Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback::CheckTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> table, int32_t reqLen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback*>(),
                                                           { "CheckTable", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, table, reqLen);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback*
Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback::New_ctor(::Org::BouncyCastle::Math::EC::ECPoint* p, int32_t minWidth, bool includeNegated) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback*>(p, minWidth, includeNegated));
}
/// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
constexpr Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback::operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*
Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback::i___Org__BouncyCastle__Math__EC__Multiplier__IPreCompCallback() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeCallback::WNafUtilities_PrecomputeCallback() {}
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback::*)(
    ::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Math::EC::ECPointMap*, ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*, bool)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x350e244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPointMap*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback.Precompute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* (
    ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback::*)(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback::Precompute)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x350f1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback*>(),
                                                                                           { "Precompute", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback.CheckExisting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback::*)(
    ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*, int32_t, int32_t, bool)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback::CheckExisting)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x350f5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback*>(),
            { "CheckExisting", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback.CheckTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback::*)(
    ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>, int32_t)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback::CheckTable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x350f64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback*>(),
                                                             { "CheckTable", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback::__cordl_internal_get_m_point() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_point;
}
constexpr ::Org::BouncyCastle::Math::EC::ECPoint* const& Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback::__cordl_internal_get_m_point() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_point;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback::__cordl_internal_set_m_point(::Org::BouncyCastle::Math::EC::ECPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_point = value;
}
constexpr ::Org::BouncyCastle::Math::EC::ECPointMap*& Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback::__cordl_internal_get_m_pointMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_pointMap;
}
constexpr ::Org::BouncyCastle::Math::EC::ECPointMap* const& Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback::__cordl_internal_get_m_pointMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_pointMap;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback::__cordl_internal_set_m_pointMap(::Org::BouncyCastle::Math::EC::ECPointMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_pointMap = value;
}
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*& Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback::__cordl_internal_get_m_fromWNaf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fromWNaf;
}
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* const&
Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback::__cordl_internal_get_m_fromWNaf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fromWNaf;
}
constexpr void
Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback::__cordl_internal_set_m_fromWNaf(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fromWNaf = value;
}
constexpr bool& Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback::__cordl_internal_get_m_includeNegated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_includeNegated;
}
constexpr bool const& Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback::__cordl_internal_get_m_includeNegated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_includeNegated;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback::__cordl_internal_set_m_includeNegated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_includeNegated = value;
}
inline void Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback::_ctor(::Org::BouncyCastle::Math::EC::ECPoint* point,
                                                                                                         ::Org::BouncyCastle::Math::EC::ECPointMap* pointMap,
                                                                                                         ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* fromWNaf, bool includeNegated) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPointMap*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, point, pointMap, fromWNaf, includeNegated);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*
Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback::Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback*>(),
                                                                                         { "Precompute", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>(this, ___internal_method, existing);
}
inline bool Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback::CheckExisting(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* existingWNaf,
                                                                                                                 int32_t width, int32_t reqPreCompLen, bool includeNegated) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback*>(),
          { "CheckExisting", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, existingWNaf, width, reqPreCompLen, includeNegated);
}
inline bool Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback::CheckTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> table, int32_t reqLen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback*>(),
                                                           { "CheckTable", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, table, reqLen);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback*
Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback::New_ctor(::Org::BouncyCastle::Math::EC::ECPoint* point, ::Org::BouncyCastle::Math::EC::ECPointMap* pointMap,
                                                                                                ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* fromWNaf, bool includeNegated) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback*>(point, pointMap, fromWNaf, includeNegated));
}
/// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
constexpr Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback::operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*
Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback::i___Org__BouncyCastle__Math__EC__Multiplier__IPreCompCallback() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities_PrecomputeWithPointMapCallback::WNafUtilities_PrecomputeWithPointMapCallback() {}
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.ConfigureBasepoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Math::EC::ECPoint*)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::ConfigureBasepoint)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x350d2b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                                                           { "ConfigureBasepoint", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GenerateCompactNaf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)(::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateCompactNaf)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x350c158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                                                           { "GenerateCompactNaf", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GenerateCompactWindowNaf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)(int32_t, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateCompactWindowNaf)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x350cee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                             { "GenerateCompactWindowNaf", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GenerateJsf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateJsf)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x350d4ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                { "GenerateJsf", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GenerateNaf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateNaf)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x350d7cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                                                           { "GenerateNaf", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GenerateWindowNaf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(int32_t, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateWindowNaf)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x350d958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                             { "GenerateWindowNaf", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GetNafWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetNafWeight)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x350dc34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                                                           { "GetNafWeight", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GetWNafPreCompInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* (*)(::Org::BouncyCastle::Math::EC::ECPoint*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWNafPreCompInfo)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x350dc98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                                                           { "GetWNafPreCompInfo", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GetWNafPreCompInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* (*)(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWNafPreCompInfo)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x350dd34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                             { "GetWNafPreCompInfo", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GetWindowSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWindowSize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x350cd48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(), { "GetWindowSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GetWindowSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWindowSize)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x350de78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                                                           { "GetWindowSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GetWindowSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::ArrayW<int32_t>)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWindowSize)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x350deec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                                                           { "GetWindowSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GetWindowSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::ArrayW<int32_t>, int32_t)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWindowSize)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x350ddb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                             { "GetWindowSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.MapPointWithPrecomp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (*)(::Org::BouncyCastle::Math::EC::ECPoint*, int32_t, bool, ::Org::BouncyCastle::Math::EC::ECPointMap*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::MapPointWithPrecomp)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x350df60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                                                           { "MapPointWithPrecomp",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPointMap*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.Precompute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* (*)(::Org::BouncyCastle::Math::EC::ECPoint*, int32_t, bool)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::Precompute)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x350cdb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                             { "Precompute", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.PrecomputeWithPointMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* (*)(::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Math::EC::ECPointMap*,
                                                                                ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*, bool)>(
        &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeWithPointMap)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x350e108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                             { "PrecomputeWithPointMap",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPointMap*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.Trim
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::Trim)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x350d744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                                                           { "Trim", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.Trim
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)(::ArrayW<int32_t>, int32_t)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::Trim)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x350d424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                                                           { "Trim", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.ResizeTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> (*)(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::ResizeTable)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x350e254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                             { "ResizeTable", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::*)()>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x350e3d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::setStaticF_PRECOMP_NAME(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "PRECOMP_NAME", ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::getStaticF_PRECOMP_NAME() {
  return ::cordl_internals::getStaticField<::StringW, "PRECOMP_NAME", ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>();
}
inline void Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::setStaticF_DEFAULT_WINDOW_SIZE_CUTOFFS(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "DEFAULT_WINDOW_SIZE_CUTOFFS", ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::getStaticF_DEFAULT_WINDOW_SIZE_CUTOFFS() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "DEFAULT_WINDOW_SIZE_CUTOFFS", ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>();
}
inline void Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::setStaticF_MAX_WIDTH(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MAX_WIDTH", ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::getStaticF_MAX_WIDTH() {
  return ::cordl_internals::getStaticField<int32_t, "MAX_WIDTH", ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>();
}
inline void Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::setStaticF_EMPTY_POINTS(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>, "EMPTY_POINTS", ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(
      std::forward<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>>(value));
}
inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::getStaticF_EMPTY_POINTS() {
  return ::cordl_internals::getStaticField<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>, "EMPTY_POINTS", ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>();
}
inline void Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::ConfigureBasepoint(::Org::BouncyCastle::Math::EC::ECPoint* p) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                                                         { "ConfigureBasepoint", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p);
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateCompactNaf(::Org::BouncyCastle::Math::BigInteger* k) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                                                         { "GenerateCompactNaf", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method, k);
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateCompactWindowNaf(int32_t width, ::Org::BouncyCastle::Math::BigInteger* k) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                           { "GenerateCompactWindowNaf", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method, width, k);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateJsf(::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* h) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                              { "GenerateJsf", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, g, h);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateNaf(::Org::BouncyCastle::Math::BigInteger* k) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                                                         { "GenerateNaf", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, k);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateWindowNaf(int32_t width, ::Org::BouncyCastle::Math::BigInteger* k) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                           { "GenerateWindowNaf", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, width, k);
}
inline int32_t Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetNafWeight(::Org::BouncyCastle::Math::BigInteger* k) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                                                         { "GetNafWeight", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, k);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWNafPreCompInfo(::Org::BouncyCastle::Math::EC::ECPoint* p) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                                                         { "GetWNafPreCompInfo", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*>(nullptr, ___internal_method, p);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*
Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWNafPreCompInfo(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* preCompInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                                                         { "GetWNafPreCompInfo", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*>(nullptr, ___internal_method, preCompInfo);
}
inline int32_t Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWindowSize(int32_t bits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(), { "GetWindowSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bits);
}
inline int32_t Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWindowSize(int32_t bits, int32_t maxWidth) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                                                         { "GetWindowSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bits, maxWidth);
}
inline int32_t Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWindowSize(int32_t bits, ::ArrayW<int32_t> windowSizeCutoffs) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                                                         { "GetWindowSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bits, windowSizeCutoffs);
}
inline int32_t Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWindowSize(int32_t bits, ::ArrayW<int32_t> windowSizeCutoffs, int32_t maxWidth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                           { "GetWindowSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bits, windowSizeCutoffs, maxWidth);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::MapPointWithPrecomp(::Org::BouncyCastle::Math::EC::ECPoint* p, int32_t minWidth,
                                                                                                                           bool includeNegated, ::Org::BouncyCastle::Math::EC::ECPointMap* pointMap) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                                                         { "MapPointWithPrecomp",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPointMap*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(nullptr, ___internal_method, p, minWidth, includeNegated, pointMap);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::Precompute(::Org::BouncyCastle::Math::EC::ECPoint* p, int32_t minWidth,
                                                                                                                                      bool includeNegated) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                           { "Precompute", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*>(nullptr, ___internal_method, p, minWidth, includeNegated);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*
Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeWithPointMap(::Org::BouncyCastle::Math::EC::ECPoint* p, ::Org::BouncyCastle::Math::EC::ECPointMap* pointMap,
                                                                               ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* fromWNaf, bool includeNegated) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                           { "PrecomputeWithPointMap",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPointMap*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*>(nullptr, ___internal_method, p, pointMap, fromWNaf, includeNegated);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::Trim(::ArrayW<uint8_t> a, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                                                         { "Trim", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, a, length);
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::Trim(::ArrayW<int32_t> a, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                                                         { "Trim", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method, a, length);
}
inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::ResizeTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*> a, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(),
                                                           { "ResizeTable", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*>>(nullptr, ___internal_method, a, length);
}
inline void Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities* Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::WNafUtilities() {}
