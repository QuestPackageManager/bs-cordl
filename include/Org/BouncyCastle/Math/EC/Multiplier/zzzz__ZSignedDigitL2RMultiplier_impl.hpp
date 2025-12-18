#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Multiplier/ZSignedDigitL2RMultiplier.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__ZSignedDigitL2RMultiplier_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier.MultiplyPositive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (
    ::Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier::*)(::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier::MultiplyPositive)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3416780;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier::*)()>(
    &::Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3416884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier::MultiplyPositive(::Org::BouncyCastle::Math::EC::ECPoint* p,
                                                                                                                                    ::Org::BouncyCastle::Math::BigInteger* k) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method, p, k);
}
inline void Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier* Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier::ZSignedDigitL2RMultiplier() {}
