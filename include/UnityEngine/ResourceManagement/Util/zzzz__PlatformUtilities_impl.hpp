#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/PlatformUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__PlatformUtilities_def.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::PlatformUtilities.PlatformUsesMultiThreading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::RuntimePlatform)>(
    &::UnityEngine::ResourceManagement::Util::PlatformUtilities::PlatformUsesMultiThreading)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x675f270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::PlatformUtilities*>::get(), "PlatformUsesMultiThreading",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RuntimePlatform>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::PlatformUtilities._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Util::PlatformUtilities::*)()>(
    &::UnityEngine::ResourceManagement::Util::PlatformUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x675f27c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::PlatformUtilities*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool UnityEngine::ResourceManagement::Util::PlatformUtilities::PlatformUsesMultiThreading(::UnityEngine::RuntimePlatform platform) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::PlatformUtilities*>::get(), "PlatformUsesMultiThreading",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RuntimePlatform>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, platform);
}
inline void UnityEngine::ResourceManagement::Util::PlatformUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::PlatformUtilities*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Util::PlatformUtilities* UnityEngine::ResourceManagement::Util::PlatformUtilities::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::Util::PlatformUtilities*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::PlatformUtilities::PlatformUtilities() {}
