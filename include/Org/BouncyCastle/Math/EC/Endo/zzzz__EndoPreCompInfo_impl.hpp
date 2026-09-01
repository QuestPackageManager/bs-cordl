#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Math\EC\Endo\EndoPreCompInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__EndoPreCompInfo_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__ECEndomorphism_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__PreCompInfo_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo.get_Endomorphism
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* (::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::*)()>(
    &::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::get_Endomorphism)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x350c428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo.set_Endomorphism
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::*)(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*)>(
    &::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::set_Endomorphism)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x350c430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo.get_MappedPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::*)()>(
    &::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::get_MappedPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x350c438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo.set_MappedPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::*)(::Org::BouncyCastle::Math::EC::ECPoint*)>(
    &::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::set_MappedPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x350c440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::*)()>(&::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x350c448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*& Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::__cordl_internal_get_m_endomorphism() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_endomorphism;
}
constexpr ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* const& Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::__cordl_internal_get_m_endomorphism() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_endomorphism;
}
constexpr void Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::__cordl_internal_set_m_endomorphism(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_endomorphism = value;
}
constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::__cordl_internal_get_m_mappedPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_mappedPoint;
}
constexpr ::Org::BouncyCastle::Math::EC::ECPoint* const& Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::__cordl_internal_get_m_mappedPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_mappedPoint;
}
constexpr void Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::__cordl_internal_set_m_mappedPoint(::Org::BouncyCastle::Math::EC::ECPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_mappedPoint = value;
}
inline ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::get_Endomorphism() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::set_Endomorphism(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::get_MappedPoint() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::set_MappedPoint(::Org::BouncyCastle::Math::EC::ECPoint* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo* Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo"
constexpr Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::operator ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo"
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::i___Org__BouncyCastle__Math__EC__Multiplier__PreCompInfo() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::EndoPreCompInfo() {}
