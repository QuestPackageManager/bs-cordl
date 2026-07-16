#pragma once
// IWYU pragma private; include "Zenject/ConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "Zenject/zzzz__ArgConditionCopyNonLazyBinder_impl.hpp"
#include "Zenject/zzzz__ConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__ArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
//  Writing Method size for method: ::Zenject::ConcreteIdArgConditionCopyNonLazyBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ConcreteIdArgConditionCopyNonLazyBinder::*)(::Zenject::BindInfo*)>(
    &::Zenject::ConcreteIdArgConditionCopyNonLazyBinder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e47a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteIdArgConditionCopyNonLazyBinder*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::BindInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConcreteIdArgConditionCopyNonLazyBinder.WithConcreteId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ArgConditionCopyNonLazyBinder* (::Zenject::ConcreteIdArgConditionCopyNonLazyBinder::*)(::System::Object*)>(
    &::Zenject::ConcreteIdArgConditionCopyNonLazyBinder::WithConcreteId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e47a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteIdArgConditionCopyNonLazyBinder*>(), { "WithConcreteId", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void Zenject::ConcreteIdArgConditionCopyNonLazyBinder::_ctor(::Zenject::BindInfo* bindInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteIdArgConditionCopyNonLazyBinder*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::BindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindInfo);
}
inline ::Zenject::ArgConditionCopyNonLazyBinder* Zenject::ConcreteIdArgConditionCopyNonLazyBinder::WithConcreteId(::System::Object* id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteIdArgConditionCopyNonLazyBinder*>(), { "WithConcreteId", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ArgConditionCopyNonLazyBinder*>(this, ___internal_method, id);
}
inline ::Zenject::ConcreteIdArgConditionCopyNonLazyBinder* Zenject::ConcreteIdArgConditionCopyNonLazyBinder::New_ctor(::Zenject::BindInfo* bindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ConcreteIdArgConditionCopyNonLazyBinder*>(bindInfo));
}
// Ctor Parameters []
constexpr ::Zenject::ConcreteIdArgConditionCopyNonLazyBinder::ConcreteIdArgConditionCopyNonLazyBinder() {}
