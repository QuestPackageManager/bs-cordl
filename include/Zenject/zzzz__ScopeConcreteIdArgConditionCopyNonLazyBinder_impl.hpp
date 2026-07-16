#pragma once
// IWYU pragma private; include "Zenject/ScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "Zenject/zzzz__ConcreteIdArgConditionCopyNonLazyBinder_impl.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__ConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
//  Writing Method size for method: ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder::*)(::Zenject::BindInfo*)>(
    &::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e59638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::BindInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder.AsCached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder::*)()>(
    &::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder::AsCached)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e59768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(), { "AsCached", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder.AsSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder::*)()>(
    &::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder::AsSingle)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e59784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(), { "AsSingle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder.AsTransient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder::*)()>(
    &::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder::AsTransient)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e597a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(), { "AsTransient", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder::_ctor(::Zenject::BindInfo* bindInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::BindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindInfo);
}
inline ::Zenject::ConcreteIdArgConditionCopyNonLazyBinder* Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder::AsCached() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(), { "AsCached", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method);
}
inline ::Zenject::ConcreteIdArgConditionCopyNonLazyBinder* Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder::AsSingle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(), { "AsSingle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method);
}
inline ::Zenject::ConcreteIdArgConditionCopyNonLazyBinder* Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder::AsTransient() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(), { "AsTransient", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder::New_ctor(::Zenject::BindInfo* bindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(bindInfo));
}
// Ctor Parameters []
constexpr ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder::ScopeConcreteIdArgConditionCopyNonLazyBinder() {}
