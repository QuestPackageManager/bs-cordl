#pragma once
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_impl.hpp"
#include "Zenject/zzzz__WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorBindInfo_def.hpp"
//  Writing Method size for method: ::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::*)(
    ::Zenject::SubContainerCreatorBindInfo*, ::Zenject::BindInfo*)>(&::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2ede928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SubContainerCreatorBindInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder.WithKernel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (
    ::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::*)()>(&::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernel)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2ede954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder*>::get(), "WithKernel",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Zenject::SubContainerCreatorBindInfo*& Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::__get__subContainerBindInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subContainerBindInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerCreatorBindInfo*> const& Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::__get__subContainerBindInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subContainerBindInfo;
}
constexpr void Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::__set__subContainerBindInfo(::Zenject::SubContainerCreatorBindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____subContainerBindInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder*
Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::New_ctor(::Zenject::SubContainerCreatorBindInfo* subContainerBindInfo, ::Zenject::BindInfo* bindInfo) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder*>(subContainerBindInfo, bindInfo));
}
inline void Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::_ctor(::Zenject::SubContainerCreatorBindInfo* subContainerBindInfo, ::Zenject::BindInfo* bindInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SubContainerCreatorBindInfo*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, subContainerBindInfo, bindInfo);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernel() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder*>::get(), "WithKernel",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method);
}
template <typename TKernel> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernel() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder*>::get(), "WithKernel",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKernel>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKernel>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
