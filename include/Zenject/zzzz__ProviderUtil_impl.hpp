#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ProviderUtil_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Zenject::ProviderUtil.GetTypeToInstantiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*, ::System::Type*)>(&::Zenject::ProviderUtil::GetTypeToInstantiate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x30195a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ProviderUtil*>::get(), "GetTypeToInstantiate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline ::System::Type* Zenject::ProviderUtil::GetTypeToInstantiate(::System::Type* contractType, ::System::Type* concreteType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ProviderUtil*>::get(), "GetTypeToInstantiate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, contractType, concreteType);
}
// Ctor Parameters []
constexpr ::Zenject::ProviderUtil::ProviderUtil() {}
