#pragma once
// IWYU pragma private; include "Zenject\IdScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_impl.hpp"
#include "Zenject/zzzz__IdScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
//  Writing Method size for method: ::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder::*)(::Zenject::BindInfo*)>(
    &::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e5cc40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::BindInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder.WithId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder::*)(::System::Object*)>(
    &::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder::WithId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e5cc48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder*>(), { "WithId", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder::_ctor(::Zenject::BindInfo* bindInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::BindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindInfo);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder::WithId(::System::Object* identifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder*>(), { "WithId", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, identifier);
}
inline ::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder::New_ctor(::Zenject::BindInfo* bindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder*>(bindInfo));
}
// Ctor Parameters []
constexpr ::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder::IdScopeConcreteIdArgConditionCopyNonLazyBinder() {}
