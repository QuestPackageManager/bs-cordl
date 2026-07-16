#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/JsonAssetProvider.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__TextDataProvider_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__JsonAssetProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider::*)(::System::Type*, ::StringW)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider::Convert)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x691ab10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x691ab1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Object* UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider::Convert(::System::Type* type, ::StringW text) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, type, text);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider* UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider::JsonAssetProvider() {}
