#pragma once
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
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback::*)(
    ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*, ::Org::BouncyCastle::Math::EC::ECPoint*)>(&::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x10a6f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback.Precompute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* (
    ::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback::*)(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*)>(
    &::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback::Precompute)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x10a6fd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback*>::get(), "Precompute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback.CheckExisting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback::*)(
    ::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo*, ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*)>(
    &::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback::CheckExisting)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x10a71d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback*>::get(), "CheckExisting",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
constexpr Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback::operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*
Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback::i___Org__BouncyCastle__Math__EC__Multiplier__IPreCompCallback() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*& Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback::__cordl_internal_get_m_endomorphism() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_endomorphism;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*> const&
Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback::__cordl_internal_get_m_endomorphism() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_endomorphism;
}
constexpr void Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback::__cordl_internal_set_m_endomorphism(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_endomorphism)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback::__cordl_internal_get_m_point() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_point;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPoint*> const&
Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback::__cordl_internal_get_m_point() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_point;
}
constexpr void Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback::__cordl_internal_set_m_point(::Org::BouncyCastle::Math::EC::ECPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_point)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback*
Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback::New_ctor(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism, ::Org::BouncyCastle::Math::EC::ECPoint* point) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback*>(endomorphism, point));
}
inline void Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback::_ctor(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism,
                                                                                        ::Org::BouncyCastle::Math::EC::ECPoint* point) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, endomorphism, point);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*
Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback::Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback*>::get(), "Precompute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*, false>(this, ___internal_method, existing);
}
inline bool Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback::CheckExisting(::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo* existingEndo,
                                                                                                ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback*>::get(), "CheckExisting", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, existingEndo, endomorphism);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback::__EndoUtilities__MapPointCallback() {}
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::EndoUtilities.DecomposeScalar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> (*)(
    ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::Endo::EndoUtilities::DecomposeScalar)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x10a6ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::EndoUtilities*>::get(), "DecomposeScalar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::EndoUtilities.MapPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (*)(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*, ::Org::BouncyCastle::Math::EC::ECPoint*)>(
        &::Org::BouncyCastle::Math::EC::Endo::EndoUtilities::MapPoint)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x10a6e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::EndoUtilities*>::get(), "MapPoint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::EndoUtilities.CalculateB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, int32_t)>(
        &::Org::BouncyCastle::Math::EC::Endo::EndoUtilities::CalculateB)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x10a6d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::EndoUtilities*>::get(), "CalculateB", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::EndoUtilities._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Endo::EndoUtilities::*)()>(
    &::Org::BouncyCastle::Math::EC::Endo::EndoUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10a6fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::EndoUtilities*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Math::EC::Endo::EndoUtilities::setStaticF_PRECOMP_NAME(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "PRECOMP_NAME", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::EndoUtilities*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Math::EC::Endo::EndoUtilities::getStaticF_PRECOMP_NAME() {
  return ::cordl_internals::getStaticField<::StringW, "PRECOMP_NAME", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::EndoUtilities*>::get>();
}
inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*>
Org::BouncyCastle::Math::EC::Endo::EndoUtilities::DecomposeScalar(::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* p, ::Org::BouncyCastle::Math::BigInteger* k) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::EndoUtilities*>::get(), "DecomposeScalar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*>, false>(nullptr, ___internal_method, p, k);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Endo::EndoUtilities::MapPoint(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism,
                                                                                                          ::Org::BouncyCastle::Math::EC::ECPoint* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::EndoUtilities*>::get(), "MapPoint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(nullptr, ___internal_method, endomorphism, p);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::Endo::EndoUtilities::CalculateB(::Org::BouncyCastle::Math::BigInteger* k, ::Org::BouncyCastle::Math::BigInteger* g,
                                                                                                           int32_t t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::EndoUtilities*>::get(), "CalculateB", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(nullptr, ___internal_method, k, g, t);
}
inline ::Org::BouncyCastle::Math::EC::Endo::EndoUtilities* Org::BouncyCastle::Math::EC::Endo::EndoUtilities::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Math::EC::Endo::EndoUtilities*>());
}
inline void Org::BouncyCastle::Math::EC::Endo::EndoUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::EndoUtilities*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Endo::EndoUtilities::EndoUtilities() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
