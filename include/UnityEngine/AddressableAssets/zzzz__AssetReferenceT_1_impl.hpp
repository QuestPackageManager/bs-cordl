#pragma once
// IWYU pragma private; include "UnityEngine\AddressableAssets\AssetReferenceT_1.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReference_impl.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
template <typename TObject> inline void UnityEngine::AddressableAssets::AssetReferenceT_1<TObject>::_ctor(::StringW guid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AssetReferenceT_1<TObject>*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, guid);
}
template <typename TObject> inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::AddressableAssets::AssetReferenceT_1<TObject>::LoadAssetAsync() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::AssetReferenceT_1<TObject>*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(this, ___internal_method);
}
template <typename TObject> inline bool UnityEngine::AddressableAssets::AssetReferenceT_1<TObject>::ValidateAsset(::UnityEngine::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::AssetReferenceT_1<TObject>*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
template <typename TObject> inline bool UnityEngine::AddressableAssets::AssetReferenceT_1<TObject>::ValidateAsset(::StringW mainAssetPath) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::AssetReferenceT_1<TObject>*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, mainAssetPath);
}
template <typename TObject> inline ::UnityEngine::AddressableAssets::AssetReferenceT_1<TObject>* UnityEngine::AddressableAssets::AssetReferenceT_1<TObject>::New_ctor(::StringW guid) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AssetReferenceT_1<TObject>*>(guid));
}
// Ctor Parameters []
template <typename TObject> constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<TObject>::AssetReferenceT_1() {}
