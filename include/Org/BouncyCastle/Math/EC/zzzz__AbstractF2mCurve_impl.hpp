#pragma once
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_impl.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mCurve_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/Field/zzzz__IFiniteField_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractF2mCurve.Inverse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::Org::BouncyCastle::Math::BigInteger* (*)(int32_t, ::ArrayW<int32_t, ::Array<int32_t>*>, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::AbstractF2mCurve::Inverse)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1095dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>::get(), "Inverse", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractF2mCurve.BuildField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::Field::IFiniteField* (*)(int32_t, int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Math::EC::AbstractF2mCurve::BuildField)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1095e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>::get(), "BuildField", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractF2mCurve._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::AbstractF2mCurve::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Math::EC::AbstractF2mCurve::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1096058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractF2mCurve.CreatePoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::AbstractF2mCurve::*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, bool)>(
        &::Org::BouncyCastle::Math::EC::AbstractF2mCurve::CreatePoint)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x109608c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractF2mCurve.IsValidFieldElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Math::EC::AbstractF2mCurve::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::AbstractF2mCurve::IsValidFieldElement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x10961ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractF2mCurve.RandomFieldElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Math::EC::AbstractF2mCurve::*)(::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Math::EC::AbstractF2mCurve::RandomFieldElement)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1096240;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractF2mCurve.RandomFieldElementMult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Math::EC::AbstractF2mCurve::*)(::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Math::EC::AbstractF2mCurve::RandomFieldElementMult)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1096288;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractF2mCurve.DecompressPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (
    ::Org::BouncyCastle::Math::EC::AbstractF2mCurve::*)(int32_t, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::AbstractF2mCurve::DecompressPoint)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x109635c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractF2mCurve.SolveQuadraticEquation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Math::EC::AbstractF2mCurve::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*)>(&::Org::BouncyCastle::Math::EC::AbstractF2mCurve::SolveQuadraticEquation)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x1096570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>::get(), "SolveQuadraticEquation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECFieldElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractF2mCurve.GetSi
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> (
    ::Org::BouncyCastle::Math::EC::AbstractF2mCurve::*)()>(&::Org::BouncyCastle::Math::EC::AbstractF2mCurve::GetSi)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x109685c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractF2mCurve.get_IsKoblitz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Math::EC::AbstractF2mCurve::*)()>(
    &::Org::BouncyCastle::Math::EC::AbstractF2mCurve::get_IsKoblitz)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1096950;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>::get(), 41));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractF2mCurve.ImplRandomFieldElementMult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::Org::BouncyCastle::Security::SecureRandom*, int32_t)>(
    &::Org::BouncyCastle::Math::EC::AbstractF2mCurve::ImplRandomFieldElementMult)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x109631c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>::get(), "ImplRandomFieldElementMult", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*>& Org::BouncyCastle::Math::EC::AbstractF2mCurve::__cordl_internal_get_si() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___si;
}
constexpr ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> const& Org::BouncyCastle::Math::EC::AbstractF2mCurve::__cordl_internal_get_si() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___si;
}
constexpr void Org::BouncyCastle::Math::EC::AbstractF2mCurve::__cordl_internal_set_si(::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___si)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::AbstractF2mCurve::Inverse(int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks, ::Org::BouncyCastle::Math::BigInteger* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>::get(), "Inverse", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(nullptr, ___internal_method, m, ks, x);
}
inline ::Org::BouncyCastle::Math::Field::IFiniteField* Org::BouncyCastle::Math::EC::AbstractF2mCurve::BuildField(int32_t m, int32_t k1, int32_t k2, int32_t k3) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>::get(), "BuildField", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::Field::IFiniteField*, false>(nullptr, ___internal_method, m, k1, k2, k3);
}
inline ::Org::BouncyCastle::Math::EC::AbstractF2mCurve* Org::BouncyCastle::Math::EC::AbstractF2mCurve::New_ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>(m, k1, k2, k3));
}
inline void Org::BouncyCastle::Math::EC::AbstractF2mCurve::_ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, m, k1, k2, k3);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::AbstractF2mCurve::CreatePoint(::Org::BouncyCastle::Math::BigInteger* x, ::Org::BouncyCastle::Math::BigInteger* y,
                                                                                                          bool withCompression) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method, x, y, withCompression);
}
inline bool Org::BouncyCastle::Math::EC::AbstractF2mCurve::IsValidFieldElement(::Org::BouncyCastle::Math::BigInteger* x) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::AbstractF2mCurve::RandomFieldElement(::Org::BouncyCastle::Security::SecureRandom* r) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*, false>(this, ___internal_method, r);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::AbstractF2mCurve::RandomFieldElementMult(::Org::BouncyCastle::Security::SecureRandom* r) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*, false>(this, ___internal_method, r);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::AbstractF2mCurve::DecompressPoint(int32_t yTilde, ::Org::BouncyCastle::Math::BigInteger* X1) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method, yTilde, X1);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::AbstractF2mCurve::SolveQuadraticEquation(::Org::BouncyCastle::Math::EC::ECFieldElement* beta) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>::get(), "SolveQuadraticEquation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECFieldElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*, false>(this, ___internal_method, beta);
}
inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> Org::BouncyCastle::Math::EC::AbstractF2mCurve::GetSi() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*>, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Math::EC::AbstractF2mCurve::get_IsKoblitz() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>::get(), 41)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::AbstractF2mCurve::ImplRandomFieldElementMult(::Org::BouncyCastle::Security::SecureRandom* r, int32_t m) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractF2mCurve*>::get(), "ImplRandomFieldElementMult", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(nullptr, ___internal_method, r, m);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::AbstractF2mCurve::AbstractF2mCurve() {}
