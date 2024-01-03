#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__ECMultiplier_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier.Multiply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (
    ::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier::*)(::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier::Multiply)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1035ba8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier.MultiplyPositive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (
    ::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier::*)(::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier::MultiplyPositive)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier.CheckResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (
    ::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier::*)(::Org::BouncyCastle::Math::EC::ECPoint*)>(&::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier::CheckResult)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1035c84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier::*)()>(
    &::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1035c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier"
constexpr Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier::operator ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*>(static_cast<void*>(this));
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier::Multiply(::Org::BouncyCastle::Math::EC::ECPoint* p,
                                                                                                                       ::Org::BouncyCastle::Math::BigInteger* k) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method, p, k);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier::MultiplyPositive(::Org::BouncyCastle::Math::EC::ECPoint* p,
                                                                                                                               ::Org::BouncyCastle::Math::BigInteger* k) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method, p, k);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier::CheckResult(::Org::BouncyCastle::Math::EC::ECPoint* p) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method, p);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier* Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier*>());
}
inline void Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier::AbstractECMultiplier() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
