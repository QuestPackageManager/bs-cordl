#pragma once
// IWYU pragma private; include "UnityEngine/Networking/DownloadedTextureParams.hpp"
#include "UnityEngine/Networking/zzzz__DownloadedTextureFlags_impl.hpp"
#include "UnityEngine/Networking/zzzz__DownloadedTextureParams_def.hpp"
#include "UnityEngine/Networking/zzzz__DownloadedTextureFlags_def.hpp"
//  Writing Method size for method: ::UnityEngine::Networking::DownloadedTextureParams.get_Default
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::DownloadedTextureParams (*)()>(
    &::UnityEngine::Networking::DownloadedTextureParams::get_Default)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bf6ddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadedTextureParams>::get(),
                                                                               "get_Default", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadedTextureParams.set_readable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::DownloadedTextureParams::*)(bool)>(
    &::UnityEngine::Networking::DownloadedTextureParams::set_readable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6bf6de4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadedTextureParams>::get(), "set_readable",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::DownloadedTextureParams.SetFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Networking::DownloadedTextureParams::*)(::UnityEngine::Networking::DownloadedTextureFlags, bool)>(&::UnityEngine::Networking::DownloadedTextureParams::SetFlags)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6bf6df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadedTextureParams>::get(), "SetFlags", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::DownloadedTextureFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Networking::DownloadedTextureParams UnityEngine::Networking::DownloadedTextureParams::get_Default() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadedTextureParams>::get(),
                                                                             "get_Default", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::DownloadedTextureParams, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Networking::DownloadedTextureParams::set_readable(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadedTextureParams>::get(), "set_readable",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Networking::DownloadedTextureParams::SetFlags(::UnityEngine::Networking::DownloadedTextureFlags flgs, bool add) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::DownloadedTextureParams>::get(), "SetFlags", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::DownloadedTextureFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, flgs, add);
}
// Ctor Parameters [CppParam { name: "flags", ty: "::UnityEngine::Networking::DownloadedTextureFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "mipmapCount", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }]
constexpr ::UnityEngine::Networking::DownloadedTextureParams::DownloadedTextureParams(::UnityEngine::Networking::DownloadedTextureFlags flags, int32_t mipmapCount) noexcept {
  this->flags = flags;
  this->mipmapCount = mipmapCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::DownloadedTextureParams::DownloadedTextureParams() {}
