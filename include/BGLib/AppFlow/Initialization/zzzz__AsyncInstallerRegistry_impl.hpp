#pragma once
// IWYU pragma private; include "BGLib/AppFlow/Initialization/AsyncInstallerRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstallerRegistry_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry.AddMonoInstaller
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncInstallerRegistry::*)(::Zenject::MonoInstaller*)>(
    &::BGLib::AppFlow::Initialization::AsyncInstallerRegistry::AddMonoInstaller)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22679a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>::get(), "AddMonoInstaller", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::MonoInstaller*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry.AddScriptableObjectInstaller
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncInstallerRegistry::*)(::Zenject::ScriptableObjectInstaller*)>(
    &::BGLib::AppFlow::Initialization::AsyncInstallerRegistry::AddScriptableObjectInstaller)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2267a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>::get(), "AddScriptableObjectInstaller",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ScriptableObjectInstaller*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncInstallerRegistry::*)()>(
    &::BGLib::AppFlow::Initialization::AsyncInstallerRegistry::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2267ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry"
constexpr BGLib::AppFlow::Initialization::AsyncInstallerRegistry::operator ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*() noexcept {
  return static_cast<::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*>(static_cast<void*>(this));
}
/// @brief Convert to "::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry"
constexpr ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*
BGLib::AppFlow::Initialization::AsyncInstallerRegistry::i___BGLib__AppFlow__Initialization____AsyncInstaller__IInstallerRegistry() noexcept {
  return static_cast<::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*& BGLib::AppFlow::Initialization::AsyncInstallerRegistry::__cordl_internal_get_monoInstallers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___monoInstallers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*> const&
BGLib::AppFlow::Initialization::AsyncInstallerRegistry::__cordl_internal_get_monoInstallers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___monoInstallers;
}
constexpr void BGLib::AppFlow::Initialization::AsyncInstallerRegistry::__cordl_internal_set_monoInstallers(::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___monoInstallers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>*&
BGLib::AppFlow::Initialization::AsyncInstallerRegistry::__cordl_internal_get_scriptableObjectInstallers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scriptableObjectInstallers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>*> const&
BGLib::AppFlow::Initialization::AsyncInstallerRegistry::__cordl_internal_get_scriptableObjectInstallers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scriptableObjectInstallers;
}
constexpr void
BGLib::AppFlow::Initialization::AsyncInstallerRegistry::__cordl_internal_set_scriptableObjectInstallers(::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scriptableObjectInstallers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BGLib::AppFlow::Initialization::AsyncInstallerRegistry::AddMonoInstaller(::Zenject::MonoInstaller* newMonoInstaller) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>::get(), "AddMonoInstaller", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::MonoInstaller*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newMonoInstaller);
}
inline void BGLib::AppFlow::Initialization::AsyncInstallerRegistry::AddScriptableObjectInstaller(::Zenject::ScriptableObjectInstaller* newScriptableObjectInstaller) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>::get(), "AddScriptableObjectInstaller",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ScriptableObjectInstaller*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newScriptableObjectInstaller);
}
inline ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* BGLib::AppFlow::Initialization::AsyncInstallerRegistry::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>());
}
inline void BGLib::AppFlow::Initialization::AsyncInstallerRegistry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry::AsyncInstallerRegistry() {}
