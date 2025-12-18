#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/AssetReferenceTexture3D.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_impl.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceTexture3D_def.hpp"
#include "UnityEngine/zzzz__Texture3D_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AssetReferenceTexture3D._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::AssetReferenceTexture3D::*)(::StringW)>(
    &::UnityEngine::AddressableAssets::AssetReferenceTexture3D::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x62a9c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetReferenceTexture3D*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::AddressableAssets::AssetReferenceTexture3D::_ctor(::StringW guid) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetReferenceTexture3D*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, guid);
}
inline ::UnityEngine::AddressableAssets::AssetReferenceTexture3D* UnityEngine::AddressableAssets::AssetReferenceTexture3D::New_ctor(::StringW guid) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AddressableAssets::AssetReferenceTexture3D*>(guid));
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AssetReferenceTexture3D::AssetReferenceTexture3D() {}
