#pragma once
// IWYU pragma private; include "Zenject\IBindingFinalizer.hpp"
#include "Zenject/zzzz__IBindingFinalizer_def.hpp"
#include "Zenject/zzzz__BindingInheritanceMethods_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::Zenject::IBindingFinalizer.get_BindingInheritanceMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::BindingInheritanceMethods (::Zenject::IBindingFinalizer::*)()>(&::Zenject::IBindingFinalizer::get_BindingInheritanceMethod)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::IBindingFinalizer*>(), { ::i2c::class_of<::Zenject::IBindingFinalizer*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IBindingFinalizer.FinalizeBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::IBindingFinalizer::*)(::Zenject::DiContainer*)>(&::Zenject::IBindingFinalizer::FinalizeBinding)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::IBindingFinalizer*>(), { ::i2c::class_of<::Zenject::IBindingFinalizer*>(), 1 }));
    return ___internal_method;
  }
};
inline ::Zenject::BindingInheritanceMethods Zenject::IBindingFinalizer::get_BindingInheritanceMethod() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IBindingFinalizer*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::BindingInheritanceMethods>(this, ___internal_method);
}
inline void Zenject::IBindingFinalizer::FinalizeBinding(::Zenject::DiContainer* container) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IBindingFinalizer*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
