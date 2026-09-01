#pragma once
// IWYU pragma private; include "Zenject\WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "Zenject/zzzz__DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder_impl.hpp"
#include "Zenject/zzzz__WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorBindInfo_def.hpp"
//  Writing Method size for method: ::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::*)(
    ::Zenject::SubContainerCreatorBindInfo*, ::Zenject::BindInfo*)>(&::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e5d1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Zenject::SubContainerCreatorBindInfo*>(), ::i2c::type_of<::Zenject::BindInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder.WithKernel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* (
    ::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::*)()>(&::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e5fdb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*>(), { "WithKernel", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::_ctor(::Zenject::SubContainerCreatorBindInfo* subContainerBindInfo, ::Zenject::BindInfo* bindInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Zenject::SubContainerCreatorBindInfo*>(), ::i2c::type_of<::Zenject::BindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subContainerBindInfo, bindInfo);
}
inline ::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernel() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*>(), { "WithKernel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method);
}
template <typename TKernel> inline ::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernel() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*>(), { "WithKernel", { ::i2c::class_of<TKernel>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TKernel>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method);
}
inline ::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*
Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::New_ctor(::Zenject::SubContainerCreatorBindInfo* subContainerBindInfo, ::Zenject::BindInfo* bindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*>(subContainerBindInfo, bindInfo));
}
// Ctor Parameters []
constexpr ::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder() {}
