#pragma once
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_impl.hpp"
#include "UnityEngine/zzzz__Sprite_impl.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceAtlasedSprite_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::*)(::StringW)>(
    &::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a23c84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite.ValidateAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::*)(::UnityEngine::Object*)>(
    &::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::ValidateAsset)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2a23cdc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite.ValidateAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::*)(::StringW)>(
    &::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::ValidateAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a23d54;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite*>::get(), 21));
    return ___internal_method;
  }
};
inline ::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite* UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::New_ctor(::StringW guid) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite*>(guid));
}
inline void UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::_ctor(::StringW guid) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, guid);
}
inline bool UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::ValidateAsset(::UnityEngine::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline bool UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::ValidateAsset(::StringW path) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, path);
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::AssetReferenceAtlasedSprite() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
