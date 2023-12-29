#pragma once
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__WTauNafMultiplier_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__WTauNafMultiplier_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/EC/Abc/zzzz__ZTauElement_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__IPreCompCallback_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__PreCompInfo_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::__WTauNafMultiplier__WTauNafCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::__WTauNafMultiplier__WTauNafCallback::*)(
    ::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, int8_t)>(&::Org::BouncyCastle::Math::EC::Multiplier::__WTauNafMultiplier__WTauNafCallback::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xfc8a14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::__WTauNafMultiplier__WTauNafCallback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::__WTauNafMultiplier__WTauNafCallback.Precompute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* (
    ::Org::BouncyCastle::Math::EC::Multiplier::__WTauNafMultiplier__WTauNafCallback::*)(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::__WTauNafMultiplier__WTauNafCallback::Precompute)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xfc8aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::__WTauNafMultiplier__WTauNafCallback*>::get(), "Precompute", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
constexpr Org::BouncyCastle::Math::EC::Multiplier::__WTauNafMultiplier__WTauNafCallback::operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Math::EC::AbstractF2mPoint*& Org::BouncyCastle::Math::EC::Multiplier::__WTauNafMultiplier__WTauNafCallback::__get_m_p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_p;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*> const&
Org::BouncyCastle::Math::EC::Multiplier::__WTauNafMultiplier__WTauNafCallback::__get_m_p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_p;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::__WTauNafMultiplier__WTauNafCallback::__set_m_p(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_p)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int8_t& Org::BouncyCastle::Math::EC::Multiplier::__WTauNafMultiplier__WTauNafCallback::__get_m_a() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_a;
}
constexpr int8_t const& Org::BouncyCastle::Math::EC::Multiplier::__WTauNafMultiplier__WTauNafCallback::__get_m_a() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_a;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::__WTauNafMultiplier__WTauNafCallback::__set_m_a(int8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_a = value;
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::__WTauNafMultiplier__WTauNafCallback*
Org::BouncyCastle::Math::EC::Multiplier::__WTauNafMultiplier__WTauNafCallback::New_ctor(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, int8_t a) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Math::EC::Multiplier::__WTauNafMultiplier__WTauNafCallback*>(p, a));
}
inline void Org::BouncyCastle::Math::EC::Multiplier::__WTauNafMultiplier__WTauNafCallback::_ctor(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, int8_t a) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::__WTauNafMultiplier__WTauNafCallback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p, a);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*
Org::BouncyCastle::Math::EC::Multiplier::__WTauNafMultiplier__WTauNafCallback::Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::__WTauNafMultiplier__WTauNafCallback*>::get(), "Precompute", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*, false>(this, ___internal_method, existing);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::__WTauNafMultiplier__WTauNafCallback::__WTauNafMultiplier__WTauNafCallback() {}
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier.MultiplyPositive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (
    ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::*)(::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyPositive)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xfc8280;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier.MultiplyWTnaf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::AbstractF2mPoint* (
    ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::*)(::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement*, int8_t, int8_t)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyWTnaf)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xfc8474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*>::get(), "MultiplyWTnaf", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier.MultiplyFromWTnaf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Math::EC::AbstractF2mPoint* (*)(::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::ArrayW<int8_t, ::Array<int8_t>*>)>(
        &::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyFromWTnaf)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0xfc85c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*>::get(), "MultiplyFromWTnaf", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int8_t, ::Array<int8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::*)()>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfc8aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::setStaticF_PRECOMP_NAME(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "PRECOMP_NAME", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::getStaticF_PRECOMP_NAME() {
  return ::cordl_internals::getStaticField<::StringW, "PRECOMP_NAME", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*>::get>();
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyPositive(::Org::BouncyCastle::Math::EC::ECPoint* point,
                                                                                                                            ::Org::BouncyCastle::Math::BigInteger* k) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*>::get(), "MultiplyPositive", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method, point, k);
}
inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyWTnaf(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p,
                                                                                                                                  ::Org::BouncyCastle::Math::EC::Abc::ZTauElement* lambda, int8_t a,
                                                                                                                                  int8_t mu) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*>::get(), "MultiplyWTnaf", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, false>(this, ___internal_method, p, lambda, a, mu);
}
inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyFromWTnaf(::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p,
                                                                                                                                      ::ArrayW<int8_t, ::Array<int8_t>*> u) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*>::get(), "MultiplyFromWTnaf", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int8_t, ::Array<int8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, false>(nullptr, ___internal_method, p, u);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier* Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*>());
}
inline void Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::WTauNafMultiplier() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
