#pragma once
// IWYU pragma private; include "Zenject/ConcreteIdBinderNonGeneric.hpp"
#include "Zenject/zzzz__ConcreteBinderNonGeneric_impl.hpp"
#include "Zenject/zzzz__ConcreteIdBinderNonGeneric_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__BindStatement_def.hpp"
#include "Zenject/zzzz__ConcreteBinderNonGeneric_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::Zenject::ConcreteIdBinderNonGeneric._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ConcreteIdBinderNonGeneric::*)(::Zenject::DiContainer*, ::Zenject::BindInfo*, ::Zenject::BindStatement*)>(
    &::Zenject::ConcreteIdBinderNonGeneric::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e479f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteIdBinderNonGeneric*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::BindStatement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConcreteIdBinderNonGeneric.WithId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ConcreteBinderNonGeneric* (::Zenject::ConcreteIdBinderNonGeneric::*)(::System::Object*)>(
    &::Zenject::ConcreteIdBinderNonGeneric::WithId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e47a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteIdBinderNonGeneric*>(), { "WithId", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void Zenject::ConcreteIdBinderNonGeneric::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteIdBinderNonGeneric*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::BindStatement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindContainer, bindInfo, bindStatement);
}
inline ::Zenject::ConcreteBinderNonGeneric* Zenject::ConcreteIdBinderNonGeneric::WithId(::System::Object* identifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ConcreteIdBinderNonGeneric*>(), { "WithId", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConcreteBinderNonGeneric*>(this, ___internal_method, identifier);
}
inline ::Zenject::ConcreteIdBinderNonGeneric* Zenject::ConcreteIdBinderNonGeneric::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                            ::Zenject::BindStatement* bindStatement) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ConcreteIdBinderNonGeneric*>(bindContainer, bindInfo, bindStatement));
}
// Ctor Parameters []
constexpr ::Zenject::ConcreteIdBinderNonGeneric::ConcreteIdBinderNonGeneric() {}
