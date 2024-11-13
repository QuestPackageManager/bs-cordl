#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformUserModelUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlatformUserModelUtils_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlatformUserModelUtils.ValidateXPlatformAccessToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::PlatformUserModelUtils::ValidateXPlatformAccessToken)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x401dee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformUserModelUtils*>::get(), "ValidateXPlatformAccessToken",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::PlatformUserModelUtils::ValidateXPlatformAccessToken(::StringW token) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformUserModelUtils*>::get(), "ValidateXPlatformAccessToken",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, token);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformUserModelUtils::PlatformUserModelUtils() {}
