#pragma once
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_impl.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpCurve_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractFpCurve._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::AbstractFpCurve::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::AbstractFpCurve::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xfcbca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractFpCurve*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractFpCurve.IsValidFieldElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Math::EC::AbstractFpCurve::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::AbstractFpCurve::IsValidFieldElement)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xfcbd24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractFpCurve*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractFpCurve*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractFpCurve.RandomFieldElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Math::EC::AbstractFpCurve::*)(::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Math::EC::AbstractFpCurve::RandomFieldElement)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xfcbe08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractFpCurve*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractFpCurve*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractFpCurve.RandomFieldElementMult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Math::EC::AbstractFpCurve::*)(::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Math::EC::AbstractFpCurve::RandomFieldElementMult)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xfcbf80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractFpCurve*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractFpCurve*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractFpCurve.DecompressPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (
    ::Org::BouncyCastle::Math::EC::AbstractFpCurve::*)(int32_t, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::AbstractFpCurve::DecompressPoint)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xfcc128;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractFpCurve*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractFpCurve*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractFpCurve.ImplRandomFieldElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::Org::BouncyCastle::Security::SecureRandom*, ::Org::BouncyCastle::Math::BigInteger*)>(
        &::Org::BouncyCastle::Math::EC::AbstractFpCurve::ImplRandomFieldElement)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xfcbf28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractFpCurve*>::get(), "ImplRandomFieldElement", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractFpCurve.ImplRandomFieldElementMult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::Org::BouncyCastle::Security::SecureRandom*, ::Org::BouncyCastle::Math::BigInteger*)>(
        &::Org::BouncyCastle::Math::EC::AbstractFpCurve::ImplRandomFieldElementMult)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xfcc0a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractFpCurve*>::get(), "ImplRandomFieldElementMult", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Math::EC::AbstractFpCurve* Org::BouncyCastle::Math::EC::AbstractFpCurve::New_ctor(::Org::BouncyCastle::Math::BigInteger* q) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Math::EC::AbstractFpCurve*>(q));
}
inline void Org::BouncyCastle::Math::EC::AbstractFpCurve::_ctor(::Org::BouncyCastle::Math::BigInteger* q) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractFpCurve*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, q);
}
inline bool Org::BouncyCastle::Math::EC::AbstractFpCurve::IsValidFieldElement(::Org::BouncyCastle::Math::BigInteger* x) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractFpCurve*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::AbstractFpCurve::RandomFieldElement(::Org::BouncyCastle::Security::SecureRandom* r) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractFpCurve*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*, false>(this, ___internal_method, r);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::AbstractFpCurve::RandomFieldElementMult(::Org::BouncyCastle::Security::SecureRandom* r) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractFpCurve*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*, false>(this, ___internal_method, r);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::AbstractFpCurve::DecompressPoint(int32_t yTilde, ::Org::BouncyCastle::Math::BigInteger* X1) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractFpCurve*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method, yTilde, X1);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::AbstractFpCurve::ImplRandomFieldElement(::Org::BouncyCastle::Security::SecureRandom* r,
                                                                                                                   ::Org::BouncyCastle::Math::BigInteger* p) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractFpCurve*>::get(), "ImplRandomFieldElement", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(nullptr, ___internal_method, r, p);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::AbstractFpCurve::ImplRandomFieldElementMult(::Org::BouncyCastle::Security::SecureRandom* r,
                                                                                                                       ::Org::BouncyCastle::Math::BigInteger* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractFpCurve*>::get(), "ImplRandomFieldElementMult", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(nullptr, ___internal_method, r, p);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::AbstractFpCurve::AbstractFpCurve() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
