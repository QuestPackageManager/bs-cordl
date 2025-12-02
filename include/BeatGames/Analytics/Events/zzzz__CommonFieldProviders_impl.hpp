#pragma once
// IWYU pragma private; include "BeatGames/Analytics/Events/CommonFieldProviders.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatGames/Analytics/Events/zzzz__CommonFieldProviders_def.hpp"
//  Writing Method size for method: ::BeatGames::Analytics::Events::CommonFieldProviders.get_RuntimePlatform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::BeatGames::Analytics::Events::CommonFieldProviders::get_RuntimePlatform)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x31616f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::CommonFieldProviders*>::get(),
                                                                               "get_RuntimePlatform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::Events::CommonFieldProviders.get_DeviceType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::BeatGames::Analytics::Events::CommonFieldProviders::get_DeviceType)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3161ab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::CommonFieldProviders*>::get(),
                                                                               "get_DeviceType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::Events::CommonFieldProviders.get_VROSMajorVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::BeatGames::Analytics::Events::CommonFieldProviders::get_VROSMajorVersion)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x31617c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::CommonFieldProviders*>::get(),
                                                                               "get_VROSMajorVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void BeatGames::Analytics::Events::CommonFieldProviders::setStaticF__cachedVROSVersion(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_cachedVROSVersion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::CommonFieldProviders*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t BeatGames::Analytics::Events::CommonFieldProviders::getStaticF__cachedVROSVersion() {
  return ::cordl_internals::getStaticField<int32_t, "_cachedVROSVersion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::CommonFieldProviders*>::get>();
}
inline ::StringW BeatGames::Analytics::Events::CommonFieldProviders::get_RuntimePlatform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::CommonFieldProviders*>::get(),
                                                                             "get_RuntimePlatform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW BeatGames::Analytics::Events::CommonFieldProviders::get_DeviceType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::CommonFieldProviders*>::get(),
                                                                             "get_DeviceType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline int32_t BeatGames::Analytics::Events::CommonFieldProviders::get_VROSMajorVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::CommonFieldProviders*>::get(),
                                                                             "get_VROSMajorVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatGames::Analytics::Events::CommonFieldProviders::CommonFieldProviders() {}
