#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentCommandLineArgsProvider_def.hpp"
#include "GlobalNamespace/zzzz__ICommandLineArgsProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnvironmentCommandLineArgsProvider.GetCommandLineArgs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::GlobalNamespace::EnvironmentCommandLineArgsProvider::*)()>(
    &::GlobalNamespace::EnvironmentCommandLineArgsProvider::GetCommandLineArgs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2332e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentCommandLineArgsProvider*>::get(),
                                                                               "GetCommandLineArgs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentCommandLineArgsProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentCommandLineArgsProvider::*)()>(
    &::GlobalNamespace::EnvironmentCommandLineArgsProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2332f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentCommandLineArgsProvider*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::ICommandLineArgsProvider"
constexpr GlobalNamespace::EnvironmentCommandLineArgsProvider::operator ::GlobalNamespace::ICommandLineArgsProvider*() noexcept {
  return static_cast<::GlobalNamespace::ICommandLineArgsProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ICommandLineArgsProvider"
constexpr ::GlobalNamespace::ICommandLineArgsProvider* GlobalNamespace::EnvironmentCommandLineArgsProvider::i___GlobalNamespace__ICommandLineArgsProvider() noexcept {
  return static_cast<::GlobalNamespace::ICommandLineArgsProvider*>(static_cast<void*>(this));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> GlobalNamespace::EnvironmentCommandLineArgsProvider::GetCommandLineArgs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentCommandLineArgsProvider*>::get(),
                                                                             "GetCommandLineArgs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentCommandLineArgsProvider* GlobalNamespace::EnvironmentCommandLineArgsProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EnvironmentCommandLineArgsProvider*>());
}
inline void GlobalNamespace::EnvironmentCommandLineArgsProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentCommandLineArgsProvider*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentCommandLineArgsProvider::EnvironmentCommandLineArgsProvider() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
