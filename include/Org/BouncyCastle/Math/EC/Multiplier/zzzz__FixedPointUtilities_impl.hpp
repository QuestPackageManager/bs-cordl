#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Multiplier/FixedPointUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__FixedPointUtilities_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__FixedPointPreCompInfo_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__FixedPointUtilities_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__IPreCompCallback_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__PreCompInfo_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECLookupTable_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback::*)(::Org::BouncyCastle::Math::EC::ECPoint*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x350b6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback.Precompute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* (
    ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback::*)(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback::Precompute)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x350b71c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback*>(),
                                                                                           { "Precompute", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback.CheckExisting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback::*)(
    ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo*, int32_t)>(&::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback::CheckExisting)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x350bb54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback*>(),
                                                { "CheckExisting", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback.CheckTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback::*)(
    ::Org::BouncyCastle::Math::EC::ECLookupTable*, int32_t)>(&::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback::CheckTable)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x350bb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback*>(),
                                                             { "CheckTable", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECLookupTable*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback::__cordl_internal_get_m_p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_p;
}
constexpr ::Org::BouncyCastle::Math::EC::ECPoint* const& Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback::__cordl_internal_get_m_p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_p;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback::__cordl_internal_set_m_p(::Org::BouncyCastle::Math::EC::ECPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_p = value;
}
inline void Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback::_ctor(::Org::BouncyCastle::Math::EC::ECPoint* p) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*
Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback::Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback*>(),
                                                                                         { "Precompute", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>(this, ___internal_method, existing);
}
inline bool Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback::CheckExisting(::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo* existingFP, int32_t n) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback*>(),
                                              { "CheckExisting", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, existingFP, n);
}
inline bool Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback::CheckTable(::Org::BouncyCastle::Math::EC::ECLookupTable* table, int32_t n) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback*>(),
                                                           { "CheckTable", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECLookupTable*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, table, n);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback*
Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback::New_ctor(::Org::BouncyCastle::Math::EC::ECPoint* p) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback*>(p));
}
/// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
constexpr Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback::operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*
Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback::i___Org__BouncyCastle__Math__EC__Multiplier__IPreCompCallback() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities_FixedPointCallback::FixedPointUtilities_FixedPointCallback() {}
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities.GetCombSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Org::BouncyCastle::Math::EC::ECCurve*)>(&::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities::GetCombSize)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x350b488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities*>(),
                                                                                           { "GetCombSize", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities.GetFixedPointPreCompInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo* (*)(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities::GetFixedPointPreCompInfo)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x350b62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities*>(),
                                                             { "GetFixedPointPreCompInfo", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities.Precompute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo* (*)(::Org::BouncyCastle::Math::EC::ECPoint*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities::Precompute)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x350b4d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities*>(),
                                                                                           { "Precompute", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities::*)()>(
    &::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x350b718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities::setStaticF_PRECOMP_NAME(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "PRECOMP_NAME", ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities::getStaticF_PRECOMP_NAME() {
  return ::cordl_internals::getStaticField<::StringW, "PRECOMP_NAME", ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities*>();
}
inline int32_t Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities::GetCombSize(::Org::BouncyCastle::Math::EC::ECCurve* c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities*>(),
                                                                                         { "GetCombSize", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, c);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo*
Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities::GetFixedPointPreCompInfo(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* preCompInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities*>(),
                                                           { "GetFixedPointPreCompInfo", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo*>(nullptr, ___internal_method, preCompInfo);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo* Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities::Precompute(::Org::BouncyCastle::Math::EC::ECPoint* p) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities*>(),
                                                                                         { "Precompute", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo*>(nullptr, ___internal_method, p);
}
inline void Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities* Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities::FixedPointUtilities() {}
