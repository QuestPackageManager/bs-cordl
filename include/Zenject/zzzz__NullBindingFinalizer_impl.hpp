#pragma once
// IWYU pragma private; include "Zenject\NullBindingFinalizer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__NullBindingFinalizer_def.hpp"
#include "Zenject/zzzz__BindingInheritanceMethods_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IBindingFinalizer_def.hpp"
//  Writing Method size for method: ::Zenject::NullBindingFinalizer.get_BindingInheritanceMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::BindingInheritanceMethods (::Zenject::NullBindingFinalizer::*)()>(&::Zenject::NullBindingFinalizer::get_BindingInheritanceMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e632b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::NullBindingFinalizer*>(), { "get_BindingInheritanceMethod", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::NullBindingFinalizer.FinalizeBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::NullBindingFinalizer::*)(::Zenject::DiContainer*)>(&::Zenject::NullBindingFinalizer::FinalizeBinding)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e632bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::NullBindingFinalizer*>(), { "FinalizeBinding", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::NullBindingFinalizer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::NullBindingFinalizer::*)()>(&::Zenject::NullBindingFinalizer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e632c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::NullBindingFinalizer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::Zenject::BindingInheritanceMethods Zenject::NullBindingFinalizer::get_BindingInheritanceMethod() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::NullBindingFinalizer*>(), { "get_BindingInheritanceMethod", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::BindingInheritanceMethods>(this, ___internal_method);
}
inline void Zenject::NullBindingFinalizer::FinalizeBinding(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::NullBindingFinalizer*>(), { "FinalizeBinding", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline void Zenject::NullBindingFinalizer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::NullBindingFinalizer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::NullBindingFinalizer* Zenject::NullBindingFinalizer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::NullBindingFinalizer*>());
}
/// @brief Convert operator to "::Zenject::IBindingFinalizer"
constexpr Zenject::NullBindingFinalizer::operator ::Zenject::IBindingFinalizer*() noexcept {
  return static_cast<::Zenject::IBindingFinalizer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IBindingFinalizer"
constexpr ::Zenject::IBindingFinalizer* Zenject::NullBindingFinalizer::i___Zenject__IBindingFinalizer() noexcept {
  return static_cast<::Zenject::IBindingFinalizer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::NullBindingFinalizer::NullBindingFinalizer() {}
