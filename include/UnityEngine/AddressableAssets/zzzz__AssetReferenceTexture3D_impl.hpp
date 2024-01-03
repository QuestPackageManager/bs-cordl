#pragma once
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_impl.hpp"
#include "UnityEngine/zzzz__Texture3D_impl.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceTexture3D_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AssetReferenceTexture3D._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::AssetReferenceTexture3D::*)(::StringW)>(
    &::UnityEngine::AddressableAssets::AssetReferenceTexture3D::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a23bcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetReferenceTexture3D*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::AddressableAssets::AssetReferenceTexture3D* UnityEngine::AddressableAssets::AssetReferenceTexture3D::New_ctor(::StringW guid) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::AddressableAssets::AssetReferenceTexture3D*>(guid));
}
inline void UnityEngine::AddressableAssets::AssetReferenceTexture3D::_ctor(::StringW guid) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetReferenceTexture3D*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, guid);
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AssetReferenceTexture3D::AssetReferenceTexture3D() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
