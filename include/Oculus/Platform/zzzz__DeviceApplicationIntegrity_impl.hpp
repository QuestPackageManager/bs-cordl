#pragma once
// IWYU pragma private; include "Oculus/Platform/DeviceApplicationIntegrity.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__DeviceApplicationIntegrity_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::DeviceApplicationIntegrity.GetIntegrityToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::StringW>* (*)(::StringW)>(
    &::Oculus::Platform::DeviceApplicationIntegrity::GetIntegrityToken)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2b06cb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::DeviceApplicationIntegrity*>::get(), "GetIntegrityToken",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request_1<::StringW>* Oculus::Platform::DeviceApplicationIntegrity::GetIntegrityToken(::StringW challenge_nonce) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::DeviceApplicationIntegrity*>::get(), "GetIntegrityToken",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::StringW>*, false>(nullptr, ___internal_method, challenge_nonce);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::DeviceApplicationIntegrity::DeviceApplicationIntegrity() {}
