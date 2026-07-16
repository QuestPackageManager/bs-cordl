#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapCharacteristicAsyncInstaller.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__ScriptableObjectReferenceAsyncInstaller_1_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicAsyncInstaller_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollectionSO_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicAsyncInstaller.get_assetRuntimeKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BeatmapCharacteristicAsyncInstaller::*)()>(
    &::GlobalNamespace::BeatmapCharacteristicAsyncInstaller::get_assetRuntimeKey)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x37689a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicAsyncInstaller*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicAsyncInstaller*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicAsyncInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicAsyncInstaller::*)()>(&::GlobalNamespace::BeatmapCharacteristicAsyncInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x37689ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicAsyncInstaller*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicAsyncInstaller*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicAsyncInstaller.LoadCharacteristicCollectionAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicCollectionSO>> (*)()>(
        &::GlobalNamespace::BeatmapCharacteristicAsyncInstaller::LoadCharacteristicCollectionAsync)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3768a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicAsyncInstaller*>(), { "LoadCharacteristicCollectionAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicAsyncInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicAsyncInstaller::*)()>(&::GlobalNamespace::BeatmapCharacteristicAsyncInstaller::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3768b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicAsyncInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::BeatmapCharacteristicAsyncInstaller::get_assetRuntimeKey() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicAsyncInstaller*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapCharacteristicAsyncInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicAsyncInstaller*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicCollectionSO>>
GlobalNamespace::BeatmapCharacteristicAsyncInstaller::LoadCharacteristicCollectionAsync() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicAsyncInstaller*>(), { "LoadCharacteristicCollectionAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicCollectionSO>>>(
      nullptr, ___internal_method);
}
inline void GlobalNamespace::BeatmapCharacteristicAsyncInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicAsyncInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapCharacteristicAsyncInstaller* GlobalNamespace::BeatmapCharacteristicAsyncInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapCharacteristicAsyncInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapCharacteristicAsyncInstaller::BeatmapCharacteristicAsyncInstaller() {}
