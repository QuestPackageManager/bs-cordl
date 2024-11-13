#pragma once
// IWYU pragma private; include "UnityEngine/Networking/UnityWebRequestAssetBundle.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAssetBundle_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/zzzz__CachedAssetBundle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequestAssetBundle.GetAssetBundle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequest* (*)(::StringW)>(
    &::UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a7c120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequestAssetBundle*>::get(), "GetAssetBundle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequestAssetBundle.GetAssetBundle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequest* (*)(::System::Uri*)>(
    &::UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a7c1e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequestAssetBundle*>::get(), "GetAssetBundle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequestAssetBundle.GetAssetBundle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequest* (*)(::StringW, uint32_t)>(
    &::UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4a7c128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequestAssetBundle*>::get(), "GetAssetBundle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequestAssetBundle.GetAssetBundle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequest* (*)(::System::Uri*, uint32_t)>(
    &::UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x4a7c1ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequestAssetBundle*>::get(), "GetAssetBundle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequestAssetBundle.GetAssetBundle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequest* (*)(::System::Uri*, ::UnityEngine::CachedAssetBundle, uint32_t)>(
    &::UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x4a7c328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequestAssetBundle*>::get(), "GetAssetBundle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CachedAssetBundle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle(::StringW uri) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequestAssetBundle*>::get(), "GetAssetBundle",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*, false>(nullptr, ___internal_method, uri);
}
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle(::System::Uri* uri) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequestAssetBundle*>::get(), "GetAssetBundle",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*, false>(nullptr, ___internal_method, uri);
}
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle(::StringW uri, uint32_t crc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequestAssetBundle*>::get(), "GetAssetBundle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*, false>(nullptr, ___internal_method, uri, crc);
}
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle(::System::Uri* uri, uint32_t crc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequestAssetBundle*>::get(), "GetAssetBundle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*, false>(nullptr, ___internal_method, uri, crc);
}
/// @param crc: uint32_t (default: static_cast<uint32_t>(0x0u))
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequestAssetBundle::GetAssetBundle(::System::Uri* uri, ::UnityEngine::CachedAssetBundle cachedAssetBundle,
                                                                                                                       uint32_t crc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequestAssetBundle*>::get(), "GetAssetBundle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CachedAssetBundle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*, false>(nullptr, ___internal_method, uri, cachedAssetBundle, crc);
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::UnityWebRequestAssetBundle::UnityWebRequestAssetBundle() {}
