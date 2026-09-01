#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Math\EC\Multiplier\WTauNafPreCompInfo.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mPoint_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__WTauNafPreCompInfo_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__PreCompInfo_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mPoint_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo.get_PreComp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*> (::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::*)()>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::get_PreComp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35122e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo.set_PreComp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::*)(::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::set_PreComp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35122e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::*)()>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35122dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>& Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::__cordl_internal_get_m_preComp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_preComp;
}
constexpr ::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*> const& Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::__cordl_internal_get_m_preComp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_preComp;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::__cordl_internal_set_m_preComp(::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_preComp = value;
}
inline ::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*> Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::get_PreComp() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::set_PreComp(::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*> value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo* Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo"
constexpr Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::operator ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo"
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::i___Org__BouncyCastle__Math__EC__Multiplier__PreCompInfo() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::WTauNafPreCompInfo() {}
