#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/IVerifierFactory.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactory_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCalculator_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IVerifierFactory.get_AlgorithmDetails
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::Crypto::IVerifierFactory::*)()>(
    &::Org::BouncyCastle::Crypto::IVerifierFactory::get_AlgorithmDetails)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IVerifierFactory*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IVerifierFactory*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IVerifierFactory.CreateCalculator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IStreamCalculator* (::Org::BouncyCastle::Crypto::IVerifierFactory::*)()>(
    &::Org::BouncyCastle::Crypto::IVerifierFactory::CreateCalculator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IVerifierFactory*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IVerifierFactory*>::get(), 1));
    return ___internal_method;
  }
};
inline ::System::Object* Org::BouncyCastle::Crypto::IVerifierFactory::get_AlgorithmDetails() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IVerifierFactory*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IStreamCalculator* Org::BouncyCastle::Crypto::IVerifierFactory::CreateCalculator() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IVerifierFactory*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IStreamCalculator*, false>(this, ___internal_method);
}
