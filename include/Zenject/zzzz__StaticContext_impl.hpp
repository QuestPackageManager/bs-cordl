#pragma once
// IWYU pragma private; include "Zenject\StaticContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__StaticContext_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::Zenject::StaticContext.NoDomainReloadInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Zenject::StaticContext::NoDomainReloadInit)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e757ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::StaticContext*>(), { "NoDomainReloadInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::StaticContext.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Zenject::StaticContext::Clear)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e75838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::StaticContext*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::StaticContext.get_HasContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Zenject::StaticContext::get_HasContainer)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e75884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::StaticContext*>(), { "get_HasContainer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::StaticContext.get_Container
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::DiContainer* (*)()>(&::Zenject::StaticContext::get_Container)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e71320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::StaticContext*>(), { "get_Container", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::StaticContext::setStaticF__container(::Zenject::DiContainer* value) {
  ::cordl_internals::setStaticField<::Zenject::DiContainer*, "_container", ::Zenject::StaticContext*>(std::forward<::Zenject::DiContainer*>(value));
}
inline ::Zenject::DiContainer* Zenject::StaticContext::getStaticF__container() {
  return ::cordl_internals::getStaticField<::Zenject::DiContainer*, "_container", ::Zenject::StaticContext*>();
}
inline void Zenject::StaticContext::NoDomainReloadInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::StaticContext*>(), { "NoDomainReloadInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Zenject::StaticContext::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::StaticContext*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Zenject::StaticContext::get_HasContainer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::StaticContext*>(), { "get_HasContainer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::Zenject::DiContainer* Zenject::StaticContext::get_Container() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::StaticContext*>(), { "get_Container", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::StaticContext::StaticContext() {}
