#pragma once
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
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback::*)(
    ::Org::BouncyCastle::Math::EC::ECCurve*, int32_t)>(&::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1065018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback.Precompute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* (
    ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback::*)(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback::Precompute)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x1066064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback*>::get(),
                                    "Precompute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
constexpr Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback::operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*
Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback::i___Org__BouncyCastle__Math__EC__Multiplier__IPreCompCallback() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Math::EC::ECCurve*& Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback::__cordl_internal_get_m_curve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_curve;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECCurve*> const&
Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback::__cordl_internal_get_m_curve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_curve;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback::__cordl_internal_set_m_curve(::Org::BouncyCastle::Math::EC::ECCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_curve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback::__cordl_internal_get_m_confWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_confWidth;
}
constexpr int32_t const& Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback::__cordl_internal_get_m_confWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_confWidth;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback::__cordl_internal_set_m_confWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_confWidth = value;
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback*
Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback::New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, int32_t confWidth) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback*>(curve, confWidth));
}
inline void Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback::_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, int32_t confWidth) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, curve, confWidth);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*
Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback::Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback*>::get(), "Precompute",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*, false>(this, ___internal_method, existing);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__ConfigureBasepointCallback::__WNafUtilities__ConfigureBasepointCallback() {}
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback::*)(
    ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*, bool, ::Org::BouncyCastle::Math::EC::ECPointMap*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1065ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPointMap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback.Precompute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* (
    ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback::*)(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback::Precompute)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x106621c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback*>::get(), "Precompute",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
constexpr Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback::operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*
Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback::i___Org__BouncyCastle__Math__EC__Multiplier__IPreCompCallback() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*& Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback::__cordl_internal_get_m_infoP() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_infoP;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*> const&
Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback::__cordl_internal_get_m_infoP() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_infoP;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback::__cordl_internal_set_m_infoP(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_infoP)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback::__cordl_internal_get_m_includeNegated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_includeNegated;
}
constexpr bool const& Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback::__cordl_internal_get_m_includeNegated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_includeNegated;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback::__cordl_internal_set_m_includeNegated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_includeNegated = value;
}
constexpr ::Org::BouncyCastle::Math::EC::ECPointMap*& Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback::__cordl_internal_get_m_pointMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_pointMap;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPointMap*> const&
Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback::__cordl_internal_get_m_pointMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_pointMap;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback::__cordl_internal_set_m_pointMap(::Org::BouncyCastle::Math::EC::ECPointMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_pointMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback*
Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback::New_ctor(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* infoP, bool includeNegated,
                                                                                     ::Org::BouncyCastle::Math::EC::ECPointMap* pointMap) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback*>(infoP, includeNegated, pointMap));
}
inline void Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback::_ctor(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* infoP, bool includeNegated,
                                                                                              ::Org::BouncyCastle::Math::EC::ECPointMap* pointMap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPointMap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, infoP, includeNegated, pointMap);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*
Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback::Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback*>::get(), "Precompute",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*, false>(this, ___internal_method, existing);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__MapPointCallback::__WNafUtilities__MapPointCallback() {}
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback::*)(
    ::Org::BouncyCastle::Math::EC::ECPoint*, int32_t, bool)>(&::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1065d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback.Precompute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* (
    ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback::*)(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback::Precompute)> {
  constexpr static std::size_t size = 0x7e4;
  constexpr static std::size_t addrs = 0x1066594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback*>::get(), "Precompute",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback.CheckExisting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback::*)(
    ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*, int32_t, int32_t, bool)>(&::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback::CheckExisting)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x1066d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback*>::get(), "CheckExisting",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback.CheckTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback::*)(
    ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback::CheckTable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1066e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback*>::get(), "CheckTable",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
constexpr Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback::operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*
Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback::i___Org__BouncyCastle__Math__EC__Multiplier__IPreCompCallback() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback::__cordl_internal_get_m_p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_p;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPoint*> const&
Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback::__cordl_internal_get_m_p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_p;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback::__cordl_internal_set_m_p(::Org::BouncyCastle::Math::EC::ECPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_p)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback::__cordl_internal_get_m_minWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_minWidth;
}
constexpr int32_t const& Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback::__cordl_internal_get_m_minWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_minWidth;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback::__cordl_internal_set_m_minWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_minWidth = value;
}
constexpr bool& Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback::__cordl_internal_get_m_includeNegated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_includeNegated;
}
constexpr bool const& Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback::__cordl_internal_get_m_includeNegated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_includeNegated;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback::__cordl_internal_set_m_includeNegated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_includeNegated = value;
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback*
Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback::New_ctor(::Org::BouncyCastle::Math::EC::ECPoint* p, int32_t minWidth, bool includeNegated) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback*>(p, minWidth, includeNegated));
}
inline void Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback::_ctor(::Org::BouncyCastle::Math::EC::ECPoint* p, int32_t minWidth, bool includeNegated) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p, minWidth, includeNegated);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*
Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback::Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback*>::get(), "Precompute",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*, false>(this, ___internal_method, existing);
}
inline bool Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback::CheckExisting(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* existingWNaf, int32_t width,
                                                                                                        int32_t reqPreCompLen, bool includeNegated) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback*>::get(), "CheckExisting",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, existingWNaf, width, reqPreCompLen, includeNegated);
}
inline bool
Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback::CheckTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> table,
                                                                                         int32_t reqLen) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback*>::get(), "CheckTable",
                                 std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>>::get(),
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, table, reqLen);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeCallback::__WNafUtilities__PrecomputeCallback() {}
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback::*)(
    ::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Math::EC::ECPointMap*, ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*, bool)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1065ea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPointMap*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback.Precompute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* (
    ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback::*)(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback::Precompute)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x1066e9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback*>::get(),
                                    "Precompute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback.CheckExisting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback::*)(
    ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*, int32_t, int32_t, bool)>(&::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback::CheckExisting)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x10672a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback*>::get(), "CheckExisting",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback.CheckTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback::*)(
    ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback::CheckTable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1067340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback*>::get(), "CheckTable",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
constexpr Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback::operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*
Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback::i___Org__BouncyCastle__Math__EC__Multiplier__IPreCompCallback() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback::__cordl_internal_get_m_point() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_point;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPoint*> const&
Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback::__cordl_internal_get_m_point() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_point;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback::__cordl_internal_set_m_point(::Org::BouncyCastle::Math::EC::ECPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_point)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::EC::ECPointMap*& Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback::__cordl_internal_get_m_pointMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_pointMap;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPointMap*> const&
Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback::__cordl_internal_get_m_pointMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_pointMap;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback::__cordl_internal_set_m_pointMap(::Org::BouncyCastle::Math::EC::ECPointMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_pointMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*& Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback::__cordl_internal_get_m_fromWNaf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fromWNaf;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*> const&
Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback::__cordl_internal_get_m_fromWNaf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fromWNaf;
}
constexpr void
Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback::__cordl_internal_set_m_fromWNaf(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_fromWNaf)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback::__cordl_internal_get_m_includeNegated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_includeNegated;
}
constexpr bool const& Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback::__cordl_internal_get_m_includeNegated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_includeNegated;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback::__cordl_internal_set_m_includeNegated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_includeNegated = value;
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback*
Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback::New_ctor(::Org::BouncyCastle::Math::EC::ECPoint* point, ::Org::BouncyCastle::Math::EC::ECPointMap* pointMap,
                                                                                                   ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* fromWNaf, bool includeNegated) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback*>(point, pointMap, fromWNaf, includeNegated));
}
inline void Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback::_ctor(::Org::BouncyCastle::Math::EC::ECPoint* point,
                                                                                                            ::Org::BouncyCastle::Math::EC::ECPointMap* pointMap,
                                                                                                            ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* fromWNaf, bool includeNegated) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPointMap*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, point, pointMap, fromWNaf, includeNegated);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*
Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback::Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback*>::get(),
                                  "Precompute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*, false>(this, ___internal_method, existing);
}
inline bool Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback::CheckExisting(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* existingWNaf,
                                                                                                                    int32_t width, int32_t reqPreCompLen, bool includeNegated) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback*>::get(), "CheckExisting",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, existingWNaf, width, reqPreCompLen, includeNegated);
}
inline bool Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback::CheckTable(
    ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> table, int32_t reqLen) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback*>::get(),
                                 "CheckTable", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>>::get(),
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, table, reqLen);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::__WNafUtilities__PrecomputeWithPointMapCallback::__WNafUtilities__PrecomputeWithPointMapCallback() {}
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.ConfigureBasepoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Math::EC::ECPoint*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::ConfigureBasepoint)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1064e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "ConfigureBasepoint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GenerateCompactNaf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateCompactNaf)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x1063cb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "GenerateCompactNaf", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GenerateCompactWindowNaf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (*)(int32_t, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateCompactWindowNaf)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x1064a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "GenerateCompactWindowNaf", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GenerateJsf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateJsf)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x10650cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "GenerateJsf", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GenerateNaf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateNaf)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x10653e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "GenerateNaf", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GenerateWindowNaf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(int32_t, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateWindowNaf)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x1065570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "GenerateWindowNaf", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GetNafWeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetNafWeight)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1065848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "GetNafWeight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GetWNafPreCompInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* (*)(::Org::BouncyCastle::Math::EC::ECPoint*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWNafPreCompInfo)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x10658ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "GetWNafPreCompInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GetWNafPreCompInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* (*)(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*)>(
        &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWNafPreCompInfo)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1065944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "GetWNafPreCompInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GetWindowSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWindowSize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x10648cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "GetWindowSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GetWindowSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWindowSize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1065a74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "GetWindowSize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GetWindowSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, ::ArrayW<int32_t, ::Array<int32_t>*>)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWindowSize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1065ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "GetWindowSize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GetWindowSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, ::ArrayW<int32_t, ::Array<int32_t>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWindowSize)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x10659bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "GetWindowSize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.MapPointWithPrecomp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (*)(::Org::BouncyCastle::Math::EC::ECPoint*, int32_t, bool, ::Org::BouncyCastle::Math::EC::ECPointMap*)>(
        &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::MapPointWithPrecomp)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x1065b54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "MapPointWithPrecomp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPointMap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.Precompute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* (*)(::Org::BouncyCastle::Math::EC::ECPoint*, int32_t, bool)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::Precompute)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x1064930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "Precompute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.PrecomputeWithPointMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* (*)(::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Math::EC::ECPointMap*,
                                                                                ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*, bool)>(
        &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeWithPointMap)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1065d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "PrecomputeWithPointMap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPointMap*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.Trim
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::Trim)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1065364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "Trim", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.Trim
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (*)(::ArrayW<int32_t, ::Array<int32_t>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::Trim)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1065048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "Trim", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.ResizeTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> (*)(
    ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>, int32_t)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::ResizeTable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1065ee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "ResizeTable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::*)()>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x106605c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::setStaticF_PRECOMP_NAME(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "PRECOMP_NAME", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::getStaticF_PRECOMP_NAME() {
  return ::cordl_internals::getStaticField<::StringW, "PRECOMP_NAME", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get>();
}
inline void Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::setStaticF_DEFAULT_WINDOW_SIZE_CUTOFFS(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "DEFAULT_WINDOW_SIZE_CUTOFFS",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::getStaticF_DEFAULT_WINDOW_SIZE_CUTOFFS() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "DEFAULT_WINDOW_SIZE_CUTOFFS",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get>();
}
inline void Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::setStaticF_MAX_WIDTH(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MAX_WIDTH", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::getStaticF_MAX_WIDTH() {
  return ::cordl_internals::getStaticField<int32_t, "MAX_WIDTH", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get>();
}
inline void
Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::setStaticF_EMPTY_POINTS(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>, "EMPTY_POINTS",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get>(
      std::forward<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>>(value));
}
inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::getStaticF_EMPTY_POINTS() {
  return ::cordl_internals::getStaticField<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>, "EMPTY_POINTS",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get>();
}
inline void Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::ConfigureBasepoint(::Org::BouncyCastle::Math::EC::ECPoint* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "ConfigureBasepoint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateCompactNaf(::Org::BouncyCastle::Math::BigInteger* k) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "GenerateCompactNaf", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(nullptr, ___internal_method, k);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateCompactWindowNaf(int32_t width, ::Org::BouncyCastle::Math::BigInteger* k) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "GenerateCompactWindowNaf", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(nullptr, ___internal_method, width, k);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateJsf(::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* h) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "GenerateJsf", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, g, h);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateNaf(::Org::BouncyCastle::Math::BigInteger* k) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "GenerateNaf", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, k);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateWindowNaf(int32_t width, ::Org::BouncyCastle::Math::BigInteger* k) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "GenerateWindowNaf", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, width, k);
}
inline int32_t Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetNafWeight(::Org::BouncyCastle::Math::BigInteger* k) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "GetNafWeight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, k);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWNafPreCompInfo(::Org::BouncyCastle::Math::EC::ECPoint* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "GetWNafPreCompInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*, false>(nullptr, ___internal_method, p);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*
Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWNafPreCompInfo(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* preCompInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "GetWNafPreCompInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*, false>(nullptr, ___internal_method, preCompInfo);
}
inline int32_t Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWindowSize(int32_t bits) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "GetWindowSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, bits);
}
inline int32_t Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWindowSize(int32_t bits, int32_t maxWidth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "GetWindowSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, bits, maxWidth);
}
inline int32_t Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWindowSize(int32_t bits, ::ArrayW<int32_t, ::Array<int32_t>*> windowSizeCutoffs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "GetWindowSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, bits, windowSizeCutoffs);
}
inline int32_t Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWindowSize(int32_t bits, ::ArrayW<int32_t, ::Array<int32_t>*> windowSizeCutoffs, int32_t maxWidth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "GetWindowSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, bits, windowSizeCutoffs, maxWidth);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::MapPointWithPrecomp(::Org::BouncyCastle::Math::EC::ECPoint* p, int32_t minWidth,
                                                                                                                           bool includeNegated, ::Org::BouncyCastle::Math::EC::ECPointMap* pointMap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "MapPointWithPrecomp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPointMap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(nullptr, ___internal_method, p, minWidth, includeNegated, pointMap);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::Precompute(::Org::BouncyCastle::Math::EC::ECPoint* p, int32_t minWidth,
                                                                                                                                      bool includeNegated) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "Precompute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*, false>(nullptr, ___internal_method, p, minWidth, includeNegated);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*
Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeWithPointMap(::Org::BouncyCastle::Math::EC::ECPoint* p, ::Org::BouncyCastle::Math::EC::ECPointMap* pointMap,
                                                                               ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* fromWNaf, bool includeNegated) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "PrecomputeWithPointMap", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPointMap*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*, false>(nullptr, ___internal_method, p, pointMap, fromWNaf, includeNegated);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::Trim(::ArrayW<uint8_t, ::Array<uint8_t>*> a, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "Trim", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, a, length);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::Trim(::ArrayW<int32_t, ::Array<int32_t>*> a, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "Trim", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(nullptr, ___internal_method, a, length);
}
inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>
Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::ResizeTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> a, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(), "ResizeTable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>, false>(nullptr, ___internal_method, a, length);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities* Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>());
}
inline void Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::WNafUtilities() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
