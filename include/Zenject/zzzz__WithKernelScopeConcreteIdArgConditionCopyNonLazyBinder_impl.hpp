#pragma once
// IWYU pragma private; include "Zenject\WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_impl.hpp"
#include "Zenject/zzzz__WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorBindInfo_def.hpp"
//  Writing Method size for method: ::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::*)(::Zenject::SubContainerCreatorBindInfo*, ::Zenject::BindInfo*)>(
    &::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e5fdd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Zenject::SubContainerCreatorBindInfo*>(), ::i2c::type_of<::Zenject::BindInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder.WithKernel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::*)()>(
    &::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e5fde0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder*>(), { "WithKernel", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::SubContainerCreatorBindInfo*& Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::__cordl_internal_get__subContainerBindInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subContainerBindInfo;
}
constexpr ::Zenject::SubContainerCreatorBindInfo* const& Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::__cordl_internal_get__subContainerBindInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subContainerBindInfo;
}
constexpr void Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::__cordl_internal_set__subContainerBindInfo(::Zenject::SubContainerCreatorBindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____subContainerBindInfo = value;
}
inline void Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::_ctor(::Zenject::SubContainerCreatorBindInfo* subContainerBindInfo, ::Zenject::BindInfo* bindInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Zenject::SubContainerCreatorBindInfo*>(), ::i2c::type_of<::Zenject::BindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subContainerBindInfo, bindInfo);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernel() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder*>(), { "WithKernel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method);
}
template <typename TKernel> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernel() {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder*>(), { "WithKernel", { ::i2c::class_of<TKernel>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TKernel>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method);
}
inline ::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder*
Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::New_ctor(::Zenject::SubContainerCreatorBindInfo* subContainerBindInfo, ::Zenject::BindInfo* bindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder*>(subContainerBindInfo, bindInfo));
}
// Ctor Parameters []
constexpr ::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder() {}
