#pragma once
// IWYU pragma private; include "Mono/DependencyInjector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/zzzz__DependencyInjector_def.hpp"
#include "Mono/zzzz__ISystemDependencyProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::DependencyInjector.get_SystemProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::ISystemDependencyProvider* (*)()>(&::Mono::DependencyInjector::get_SystemProvider)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x3c55230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::DependencyInjector*>::get(), "get_SystemProvider",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::DependencyInjector.Register
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Mono::ISystemDependencyProvider*)>(&::Mono::DependencyInjector::Register)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x3c55574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::DependencyInjector*>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::ISystemDependencyProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::DependencyInjector.ReflectionLoad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::ISystemDependencyProvider* (*)()>(&::Mono::DependencyInjector::ReflectionLoad)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x3c55428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::DependencyInjector*>::get(), "ReflectionLoad",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Mono::DependencyInjector::setStaticF_locker(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "locker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::DependencyInjector*>::get>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Mono::DependencyInjector::getStaticF_locker() {
  return ::cordl_internals::getStaticField<::System::Object*, "locker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::DependencyInjector*>::get>();
}
inline void Mono::DependencyInjector::setStaticF_systemDependency(::Mono::ISystemDependencyProvider* value) {
  ::cordl_internals::setStaticField<::Mono::ISystemDependencyProvider*, "systemDependency", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::DependencyInjector*>::get>(
      std::forward<::Mono::ISystemDependencyProvider*>(value));
}
inline ::Mono::ISystemDependencyProvider* Mono::DependencyInjector::getStaticF_systemDependency() {
  return ::cordl_internals::getStaticField<::Mono::ISystemDependencyProvider*, "systemDependency", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::DependencyInjector*>::get>();
}
inline ::Mono::ISystemDependencyProvider* Mono::DependencyInjector::get_SystemProvider() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::DependencyInjector*>::get(), "get_SystemProvider",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Mono::ISystemDependencyProvider*, false>(nullptr, ___internal_method);
}
inline void Mono::DependencyInjector::Register(::Mono::ISystemDependencyProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::DependencyInjector*>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::ISystemDependencyProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, provider);
}
inline ::Mono::ISystemDependencyProvider* Mono::DependencyInjector::ReflectionLoad() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::DependencyInjector*>::get(), "ReflectionLoad",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Mono::ISystemDependencyProvider*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::DependencyInjector::DependencyInjector() {}
