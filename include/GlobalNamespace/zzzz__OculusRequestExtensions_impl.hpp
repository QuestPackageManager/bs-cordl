#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusRequestExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OculusRequestExtensions_def.hpp"
#include "GlobalNamespace/zzzz__PlatformException_def.hpp"
#include "Oculus/Platform/Models/zzzz__Error_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OculusRequestExtensions.ToPlatformException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::GlobalNamespace::PlatformException* (*)(::Oculus::Platform::Models::Error*, ::GlobalNamespace::PlatformException_ErrorType)>(&::GlobalNamespace::OculusRequestExtensions::ToPlatformException)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2276460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusRequestExtensions*>::get(), "ToPlatformException", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::Error*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformException_ErrorType>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::PlatformException* GlobalNamespace::OculusRequestExtensions::ToPlatformException(::Oculus::Platform::Models::Error* error,
                                                                                                           ::GlobalNamespace::PlatformException_ErrorType errorType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusRequestExtensions*>::get(), "ToPlatformException", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::Error*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformException_ErrorType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlatformException*, false>(nullptr, ___internal_method, error, errorType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusRequestExtensions::OculusRequestExtensions() {}
