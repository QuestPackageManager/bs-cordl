#pragma once
// IWYU pragma private; include "Zenject/NonLazyBinder.hpp"
#include "Zenject/zzzz__IfNotBoundBinder_impl.hpp"
#include "Zenject/zzzz__NonLazyBinder_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__IfNotBoundBinder_def.hpp"
//  Writing Method size for method: ::Zenject::NonLazyBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::NonLazyBinder::*)(::Zenject::BindInfo*)>(&::Zenject::NonLazyBinder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e5972c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::NonLazyBinder*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::BindInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::NonLazyBinder.NonLazy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IfNotBoundBinder* (::Zenject::NonLazyBinder::*)()>(&::Zenject::NonLazyBinder::NonLazy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e59734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::NonLazyBinder*>(), { "NonLazy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::NonLazyBinder.Lazy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IfNotBoundBinder* (::Zenject::NonLazyBinder::*)()>(&::Zenject::NonLazyBinder::Lazy)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e59750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::NonLazyBinder*>(), { "Lazy", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::NonLazyBinder::_ctor(::Zenject::BindInfo* bindInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::NonLazyBinder*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::BindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindInfo);
}
inline ::Zenject::IfNotBoundBinder* Zenject::NonLazyBinder::NonLazy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::NonLazyBinder*>(), { "NonLazy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IfNotBoundBinder*>(this, ___internal_method);
}
inline ::Zenject::IfNotBoundBinder* Zenject::NonLazyBinder::Lazy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::NonLazyBinder*>(), { "Lazy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IfNotBoundBinder*>(this, ___internal_method);
}
inline ::Zenject::NonLazyBinder* Zenject::NonLazyBinder::New_ctor(::Zenject::BindInfo* bindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::NonLazyBinder*>(bindInfo));
}
// Ctor Parameters []
constexpr ::Zenject::NonLazyBinder::NonLazyBinder() {}
