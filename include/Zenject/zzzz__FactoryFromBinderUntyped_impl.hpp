#pragma once
// IWYU pragma private; include "Zenject\FactoryFromBinderUntyped.hpp"
#include "Zenject/zzzz__FactoryFromBinderBase_impl.hpp"
#include "Zenject/zzzz__FactoryFromBinderUntyped_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
//  Writing Method size for method: ::Zenject::FactoryFromBinderUntyped._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FactoryFromBinderUntyped::*)(::Zenject::DiContainer*, ::System::Type*, ::Zenject::BindInfo*, ::Zenject::FactoryBindInfo*)>(
    &::Zenject::FactoryFromBinderUntyped::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e4f2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Zenject::FactoryFromBinderUntyped*>(),
            { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::FactoryBindInfo*>() } })));
    return ___internal_method;
  }
};
inline void Zenject::FactoryFromBinderUntyped::_ctor(::Zenject::DiContainer* bindContainer, ::System::Type* contractType, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Zenject::FactoryFromBinderUntyped*>(),
          { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::FactoryBindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindContainer, contractType, bindInfo, factoryBindInfo);
}
inline ::Zenject::FactoryFromBinderUntyped* Zenject::FactoryFromBinderUntyped::New_ctor(::Zenject::DiContainer* bindContainer, ::System::Type* contractType, ::Zenject::BindInfo* bindInfo,
                                                                                        ::Zenject::FactoryBindInfo* factoryBindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FactoryFromBinderUntyped*>(bindContainer, contractType, bindInfo, factoryBindInfo));
}
// Ctor Parameters []
constexpr ::Zenject::FactoryFromBinderUntyped::FactoryFromBinderUntyped() {}
