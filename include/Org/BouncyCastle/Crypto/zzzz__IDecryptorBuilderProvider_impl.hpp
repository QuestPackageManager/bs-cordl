#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/IDecryptorBuilderProvider.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDecryptorBuilderProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider.CreateDecryptorBuilder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::ICipherBuilder* (
    ::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider::*)(::System::Object*)>(&::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider::CreateDecryptorBuilder)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider*>::get(), 0));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Crypto::ICipherBuilder* Org::BouncyCastle::Crypto::IDecryptorBuilderProvider::CreateDecryptorBuilder(::System::Object* algorithmDetails) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherBuilder*, false>(this, ___internal_method, algorithmDetails);
}
