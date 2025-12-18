#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatSaberNetworkUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatSaberNetworkUtility_def.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatSaberNetworkUtility.GetHashedUserId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::GlobalNamespace::AuthenticationToken_PlatformType)>(
    &::GlobalNamespace::BeatSaberNetworkUtility::GetHashedUserId)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x31d2edc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberNetworkUtility*>::get(), "GetHashedUserId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AuthenticationToken_PlatformType>::get() })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::BeatSaberNetworkUtility::GetHashedUserId(::StringW userId, ::GlobalNamespace::AuthenticationToken_PlatformType platform) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberNetworkUtility*>::get(), "GetHashedUserId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AuthenticationToken_PlatformType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, userId, platform);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatSaberNetworkUtility::BeatSaberNetworkUtility() {}
