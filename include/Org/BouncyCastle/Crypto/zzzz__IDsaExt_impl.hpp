#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/IDsaExt.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDsa_impl.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDsaExt_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IDsaExt.get_Order
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::IDsaExt::*)()>(
    &::Org::BouncyCastle::Crypto::IDsaExt::get_Order)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IDsaExt*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IDsaExt*>::get(), 0));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::IDsaExt::get_Order() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IDsaExt*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method);
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDsa"
constexpr Org::BouncyCastle::Crypto::IDsaExt::operator ::Org::BouncyCastle::Crypto::IDsa*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDsa*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IDsa"
constexpr ::Org::BouncyCastle::Crypto::IDsa* Org::BouncyCastle::Crypto::IDsaExt::i___Org__BouncyCastle__Crypto__IDsa() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDsa*>(static_cast<void*>(this));
}
