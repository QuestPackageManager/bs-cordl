#pragma once
#include "Zenject/zzzz__DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder_impl.hpp"
#include "Zenject/zzzz__WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorBindInfo_def.hpp"
//  Writing Method size for method: ::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::*)(
    ::Zenject::SubContainerCreatorBindInfo*, ::Zenject::BindInfo*)>(&::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x342874c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SubContainerCreatorBindInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder.WithKernel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* (
    ::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::*)()>(&::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernel)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x342b83c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*>::get(),
                                                 "WithKernel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*
Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::New_ctor(::Zenject::SubContainerCreatorBindInfo* subContainerBindInfo, ::Zenject::BindInfo* bindInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*>(subContainerBindInfo, bindInfo));
}
inline void Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::_ctor(::Zenject::SubContainerCreatorBindInfo* subContainerBindInfo, ::Zenject::BindInfo* bindInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SubContainerCreatorBindInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, subContainerBindInfo, bindInfo);
}
inline ::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernel() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*>::get(),
                                               "WithKernel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method);
}
template <typename TKernel> inline ::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernel() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*>::get(), "WithKernel",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKernel>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKernel>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder() {}
