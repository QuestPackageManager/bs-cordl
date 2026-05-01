#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/PlatformExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/Platform/Core/zzzz__PlatformExtensions_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatform_def.hpp"
template <typename T> inline void OculusStudios::Platform::Core::PlatformExtensions::SetRichPresenceStatus(::OculusStudios::Platform::Core::IPlatform* platform) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::PlatformExtensions*>::get(), "SetRichPresenceStatus",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::IPlatform*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, platform);
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Core::PlatformExtensions::PlatformExtensions() {}
