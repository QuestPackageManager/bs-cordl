#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentIdFilterExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentIdFilterExtensions_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentIdFilter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnvironmentIdFilterExtensions.ShouldExcludeTutorial
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::EnvironmentIdFilter)>(&::GlobalNamespace::EnvironmentIdFilterExtensions::ShouldExcludeTutorial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x366dfa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentIdFilterExtensions*>::get(),
                        "ShouldExcludeTutorial",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentIdFilter>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentIdFilterExtensions.ShouldExcludeMultiplayer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::EnvironmentIdFilter)>(&::GlobalNamespace::EnvironmentIdFilterExtensions::ShouldExcludeMultiplayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x366dfb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentIdFilterExtensions*>::get(),
                        "ShouldExcludeMultiplayer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentIdFilter>::get()}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::EnvironmentIdFilterExtensions::ShouldExcludeTutorial(::GlobalNamespace::EnvironmentIdFilter  filter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentIdFilterExtensions*>::get(),
                        "ShouldExcludeTutorial",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentIdFilter>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, filter);
}
inline bool GlobalNamespace::EnvironmentIdFilterExtensions::ShouldExcludeMultiplayer(::GlobalNamespace::EnvironmentIdFilter  filter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentIdFilterExtensions*>::get(),
                        "ShouldExcludeMultiplayer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentIdFilter>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, filter);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentIdFilterExtensions::EnvironmentIdFilterExtensions()   {
}
