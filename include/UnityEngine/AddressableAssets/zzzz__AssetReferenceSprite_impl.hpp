#pragma once
// IWYU pragma private; include "UnityEngine\AddressableAssets\AssetReferenceSprite.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_impl.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceSprite_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AssetReferenceSprite._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AssetReferenceSprite::*)(::StringW)>(&::UnityEngine::AddressableAssets::AssetReferenceSprite::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6460330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AssetReferenceSprite*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AssetReferenceSprite.ValidateAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::AssetReferenceSprite::*)(::StringW)>(
    &::UnityEngine::AddressableAssets::AssetReferenceSprite::ValidateAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64603a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AssetReferenceSprite*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::AssetReferenceSprite*>(), 21 }));
    return ___internal_method;
  }
};
inline void UnityEngine::AddressableAssets::AssetReferenceSprite::_ctor(::StringW guid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AssetReferenceSprite*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, guid);
}
inline bool UnityEngine::AddressableAssets::AssetReferenceSprite::ValidateAsset(::StringW path) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::AssetReferenceSprite*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, path);
}
inline ::UnityEngine::AddressableAssets::AssetReferenceSprite* UnityEngine::AddressableAssets::AssetReferenceSprite::New_ctor(::StringW guid) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AssetReferenceSprite*>(guid));
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AssetReferenceSprite::AssetReferenceSprite() {}
