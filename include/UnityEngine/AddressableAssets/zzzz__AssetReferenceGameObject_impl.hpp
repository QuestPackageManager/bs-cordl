#pragma once
// IWYU pragma private; include "UnityEngine\AddressableAssets\AssetReferenceGameObject.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_impl.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceGameObject_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AssetReferenceGameObject._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AssetReferenceGameObject::*)(::StringW)>(
    &::UnityEngine::AddressableAssets::AssetReferenceGameObject::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6460150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AssetReferenceGameObject*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::AddressableAssets::AssetReferenceGameObject::_ctor(::StringW guid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AssetReferenceGameObject*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, guid);
}
inline ::UnityEngine::AddressableAssets::AssetReferenceGameObject* UnityEngine::AddressableAssets::AssetReferenceGameObject::New_ctor(::StringW guid) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AssetReferenceGameObject*>(guid));
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AssetReferenceGameObject::AssetReferenceGameObject() {}
