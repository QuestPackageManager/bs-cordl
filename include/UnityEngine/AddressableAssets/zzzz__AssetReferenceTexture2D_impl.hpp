#pragma once
// IWYU pragma private; include "UnityEngine\AddressableAssets\AssetReferenceTexture2D.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_impl.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceTexture2D_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AssetReferenceTexture2D._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AssetReferenceTexture2D::*)(::StringW)>(
    &::UnityEngine::AddressableAssets::AssetReferenceTexture2D::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6460240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AssetReferenceTexture2D*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::AddressableAssets::AssetReferenceTexture2D::_ctor(::StringW guid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AssetReferenceTexture2D*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, guid);
}
inline ::UnityEngine::AddressableAssets::AssetReferenceTexture2D* UnityEngine::AddressableAssets::AssetReferenceTexture2D::New_ctor(::StringW guid) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AssetReferenceTexture2D*>(guid));
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AssetReferenceTexture2D::AssetReferenceTexture2D() {}
