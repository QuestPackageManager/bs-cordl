#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/AssetReferenceAtlasedSprite.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_impl.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceAtlasedSprite_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::*)(::StringW)>(
    &::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x645ab98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite.ValidateAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::*)(::UnityEngine::Object*)>(
    &::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::ValidateAsset)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x645ac10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite.ValidateAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::*)(::StringW)>(
    &::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::ValidateAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x645ac8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite*>(), 21 }));
    return ___internal_method;
  }
};
inline void UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::_ctor(::StringW guid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, guid);
}
inline bool UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::ValidateAsset(::UnityEngine::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::ValidateAsset(::StringW path) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, path);
}
inline ::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite* UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::New_ctor(::StringW guid) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite*>(guid));
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite::AssetReferenceAtlasedSprite() {}
