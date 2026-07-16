#pragma once
// IWYU pragma private; include "Mono/DependencyInjector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/zzzz__DependencyInjector_def.hpp"
#include "Mono/zzzz__ISystemDependencyProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::DependencyInjector.get_SystemProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::ISystemDependencyProvider* (*)()>(&::Mono::DependencyInjector::get_SystemProvider)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5aab0f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::DependencyInjector*>(), { "get_SystemProvider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::DependencyInjector.Register
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mono::ISystemDependencyProvider*)>(&::Mono::DependencyInjector::Register)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5aab41c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::DependencyInjector*>(), { "Register", {}, { ::i2c::type_of<::Mono::ISystemDependencyProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::DependencyInjector.ReflectionLoad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::ISystemDependencyProvider* (*)()>(&::Mono::DependencyInjector::ReflectionLoad)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5aab304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::DependencyInjector*>(), { "ReflectionLoad", {}, {} })));
    return ___internal_method;
  }
};
inline void Mono::DependencyInjector::setStaticF_locker(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "locker", ::Mono::DependencyInjector*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Mono::DependencyInjector::getStaticF_locker() {
  return ::cordl_internals::getStaticField<::System::Object*, "locker", ::Mono::DependencyInjector*>();
}
inline void Mono::DependencyInjector::setStaticF_systemDependency(::Mono::ISystemDependencyProvider* value) {
  ::cordl_internals::setStaticField<::Mono::ISystemDependencyProvider*, "systemDependency", ::Mono::DependencyInjector*>(std::forward<::Mono::ISystemDependencyProvider*>(value));
}
inline ::Mono::ISystemDependencyProvider* Mono::DependencyInjector::getStaticF_systemDependency() {
  return ::cordl_internals::getStaticField<::Mono::ISystemDependencyProvider*, "systemDependency", ::Mono::DependencyInjector*>();
}
inline ::Mono::ISystemDependencyProvider* Mono::DependencyInjector::get_SystemProvider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::DependencyInjector*>(), { "get_SystemProvider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::ISystemDependencyProvider*>(nullptr, ___internal_method);
}
inline void Mono::DependencyInjector::Register(::Mono::ISystemDependencyProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::DependencyInjector*>(), { "Register", {}, { ::i2c::type_of<::Mono::ISystemDependencyProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, provider);
}
inline ::Mono::ISystemDependencyProvider* Mono::DependencyInjector::ReflectionLoad() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::DependencyInjector*>(), { "ReflectionLoad", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::ISystemDependencyProvider*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::DependencyInjector::DependencyInjector() {}
