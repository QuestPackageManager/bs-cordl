#pragma once
// IWYU pragma private; include "Zenject/DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_impl.hpp"
#include "Zenject/zzzz__DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorBindInfo_def.hpp"
//  Writing Method size for method: ::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::*)(::Zenject::SubContainerCreatorBindInfo*, ::Zenject::BindInfo*)>(
    &::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e4bd40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Zenject::SubContainerCreatorBindInfo*>(), ::i2c::type_of<::Zenject::BindInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder.get_SubContainerCreatorBindInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::SubContainerCreatorBindInfo* (::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::*)()>(
    &::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::get_SubContainerCreatorBindInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e4bd4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*>(), { "get_SubContainerCreatorBindInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder.set_SubContainerCreatorBindInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::*)(::Zenject::SubContainerCreatorBindInfo*)>(
    &::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::set_SubContainerCreatorBindInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e4bd54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*>(),
                                                                                           { "set_SubContainerCreatorBindInfo", {}, { ::i2c::type_of<::Zenject::SubContainerCreatorBindInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder.WithDefaultGameObjectParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::*)(::StringW)>(
    &::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::WithDefaultGameObjectParent)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e4bd5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*>(),
                                                                                           { "WithDefaultGameObjectParent", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::Zenject::SubContainerCreatorBindInfo*& Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::__cordl_internal_get__SubContainerCreatorBindInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SubContainerCreatorBindInfo_k__BackingField;
}
constexpr ::Zenject::SubContainerCreatorBindInfo* const& Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::__cordl_internal_get__SubContainerCreatorBindInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SubContainerCreatorBindInfo_k__BackingField;
}
constexpr void Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::__cordl_internal_set__SubContainerCreatorBindInfo_k__BackingField(::Zenject::SubContainerCreatorBindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SubContainerCreatorBindInfo_k__BackingField = value;
}
inline void Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::_ctor(::Zenject::SubContainerCreatorBindInfo* subContainerBindInfo, ::Zenject::BindInfo* bindInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Zenject::SubContainerCreatorBindInfo*>(), ::i2c::type_of<::Zenject::BindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subContainerBindInfo, bindInfo);
}
inline ::Zenject::SubContainerCreatorBindInfo* Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::get_SubContainerCreatorBindInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*>(), { "get_SubContainerCreatorBindInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::SubContainerCreatorBindInfo*>(this, ___internal_method);
}
inline void Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::set_SubContainerCreatorBindInfo(::Zenject::SubContainerCreatorBindInfo* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*>(),
                                                                                         { "set_SubContainerCreatorBindInfo", {}, { ::i2c::type_of<::Zenject::SubContainerCreatorBindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::WithDefaultGameObjectParent(::StringW defaultParentName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*>(),
                                                                                         { "WithDefaultGameObjectParent", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, defaultParentName);
}
inline ::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*
Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::New_ctor(::Zenject::SubContainerCreatorBindInfo* subContainerBindInfo, ::Zenject::BindInfo* bindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*>(subContainerBindInfo, bindInfo));
}
// Ctor Parameters []
constexpr ::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder() {}
