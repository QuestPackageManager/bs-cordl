#pragma once
// IWYU pragma private; include "UnityEngine/Caching.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Caching_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Cache_def.hpp"
#include "UnityEngine/zzzz__CachedAssetBundle_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
//  Writing Method size for method: ::UnityEngine::Caching.set_compressionEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Caching::set_compressionEnabled)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a64238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "set_compressionEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Caching.get_ready
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Caching::get_ready)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a64274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "get_ready", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Caching.ClearCachedVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::UnityEngine::Hash128)>(&::UnityEngine::Caching::ClearCachedVersion)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a6429c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "ClearCachedVersion", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Hash128>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Caching.ClearCachedVersionInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::UnityEngine::Hash128)>(&::UnityEngine::Caching::ClearCachedVersionInternal)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6a642f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "ClearCachedVersionInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Hash128>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Caching.ClearOtherCachedVersions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::UnityEngine::Hash128)>(&::UnityEngine::Caching::ClearOtherCachedVersions)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6a64474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "ClearOtherCachedVersions", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Hash128>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Caching.ClearAllCachedVersions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::Caching::ClearAllCachedVersions)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a6461c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "ClearAllCachedVersions", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Caching.ClearCachedVersions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::UnityEngine::Hash128, bool)>(&::UnityEngine::Caching::ClearCachedVersions)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6a644d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(),
                                                             { "ClearCachedVersions", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Hash128>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Caching.IsVersionCached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::CachedAssetBundle)>(&::UnityEngine::Caching::IsVersionCached)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6a646d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "IsVersionCached", {}, { ::i2c::type_of<::UnityEngine::CachedAssetBundle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Caching.IsVersionCached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, ::UnityEngine::Hash128)>(&::UnityEngine::Caching::IsVersionCached)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6a6477c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(),
                                                             { "IsVersionCached", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Hash128>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Caching.AddCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Cache (*)(::StringW)>(&::UnityEngine::Caching::AddCache)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x6a64990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "AddCache", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Caching.AddCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Cache (*)(::StringW, bool)>(&::UnityEngine::Caching::AddCache)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6a64cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "AddCache", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Caching.GetCacheByPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Cache (*)(::StringW)>(&::UnityEngine::Caching::GetCacheByPath)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6a64ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "GetCacheByPath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Caching.get_defaultCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Cache (*)()>(&::UnityEngine::Caching::get_defaultCache)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a64eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "get_defaultCache", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Caching.get_currentCacheForWriting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Cache (*)()>(&::UnityEngine::Caching::get_currentCacheForWriting)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a64f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "get_currentCacheForWriting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Caching.set_currentCacheForWriting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Cache)>(&::UnityEngine::Caching::set_currentCacheForWriting)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6a64fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "set_currentCacheForWriting", {}, { ::i2c::type_of<::UnityEngine::Cache>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Caching.ClearCachedVersionInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Hash128>)>(
    &::UnityEngine::Caching::ClearCachedVersionInternal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a64430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Caching*>(),
            { "ClearCachedVersionInternal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Hash128>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Caching.ClearCachedVersions_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Hash128>, bool)>(
    &::UnityEngine::Caching::ClearCachedVersions_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a64684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "ClearCachedVersions_Injected",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Hash128>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Caching.IsVersionCached_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>,
                                                                ::by_ref<::UnityEngine::Hash128>)>(&::UnityEngine::Caching::IsVersionCached_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a6493c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(),
                                                             { "IsVersionCached_Injected",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Hash128>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Caching.AddCache_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, bool, ::by_ref<::UnityEngine::Cache>)>(
    &::UnityEngine::Caching::AddCache_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a64e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Caching*>(),
            { "AddCache_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Cache>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Caching.GetCacheByPath_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Cache>)>(
    &::UnityEngine::Caching::GetCacheByPath_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a64e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(),
                            { "GetCacheByPath_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Cache>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Caching.get_defaultCache_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Cache>)>(&::UnityEngine::Caching::get_defaultCache_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a64efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "get_defaultCache_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Cache>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Caching.get_currentCacheForWriting_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Cache>)>(&::UnityEngine::Caching::get_currentCacheForWriting_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a64f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "get_currentCacheForWriting_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Cache>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Caching.set_currentCacheForWriting_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Cache>)>(&::UnityEngine::Caching::set_currentCacheForWriting_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a64ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "set_currentCacheForWriting_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Cache>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Caching::set_compressionEnabled(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "set_compressionEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Caching::get_ready() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "get_ready", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Caching::ClearCachedVersion(::StringW assetBundleName, ::UnityEngine::Hash128 hash) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "ClearCachedVersion", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Hash128>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, assetBundleName, hash);
}
inline bool UnityEngine::Caching::ClearCachedVersionInternal(::StringW assetBundleName, ::UnityEngine::Hash128 hash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "ClearCachedVersionInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Hash128>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, assetBundleName, hash);
}
inline bool UnityEngine::Caching::ClearOtherCachedVersions(::StringW assetBundleName, ::UnityEngine::Hash128 hash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "ClearOtherCachedVersions", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Hash128>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, assetBundleName, hash);
}
inline bool UnityEngine::Caching::ClearAllCachedVersions(::StringW assetBundleName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "ClearAllCachedVersions", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, assetBundleName);
}
inline bool UnityEngine::Caching::ClearCachedVersions(::StringW assetBundleName, ::UnityEngine::Hash128 hash, bool keepInputVersion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(),
                                                           { "ClearCachedVersions", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Hash128>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, assetBundleName, hash, keepInputVersion);
}
inline bool UnityEngine::Caching::IsVersionCached(::UnityEngine::CachedAssetBundle cachedBundle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "IsVersionCached", {}, { ::i2c::type_of<::UnityEngine::CachedAssetBundle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cachedBundle);
}
inline bool UnityEngine::Caching::IsVersionCached(::StringW url, ::StringW assetBundleName, ::UnityEngine::Hash128 hash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(),
                                                           { "IsVersionCached", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Hash128>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, url, assetBundleName, hash);
}
inline ::UnityEngine::Cache UnityEngine::Caching::AddCache(::StringW cachePath) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "AddCache", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Cache>(nullptr, ___internal_method, cachePath);
}
inline ::UnityEngine::Cache UnityEngine::Caching::AddCache(::StringW cachePath, bool isReadonly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "AddCache", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Cache>(nullptr, ___internal_method, cachePath, isReadonly);
}
inline ::UnityEngine::Cache UnityEngine::Caching::GetCacheByPath(::StringW cachePath) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "GetCacheByPath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Cache>(nullptr, ___internal_method, cachePath);
}
inline ::UnityEngine::Cache UnityEngine::Caching::get_defaultCache() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "get_defaultCache", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Cache>(nullptr, ___internal_method);
}
inline ::UnityEngine::Cache UnityEngine::Caching::get_currentCacheForWriting() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "get_currentCacheForWriting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Cache>(nullptr, ___internal_method);
}
inline void UnityEngine::Caching::set_currentCacheForWriting(::UnityEngine::Cache value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "set_currentCacheForWriting", {}, { ::i2c::type_of<::UnityEngine::Cache>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Caching::ClearCachedVersionInternal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> assetBundleName, ::by_ref<::UnityEngine::Hash128> hash) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Caching*>(),
          { "ClearCachedVersionInternal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Hash128>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, assetBundleName, hash);
}
inline bool UnityEngine::Caching::ClearCachedVersions_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> assetBundleName, ::by_ref<::UnityEngine::Hash128> hash, bool keepInputVersion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "ClearCachedVersions_Injected",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                                           ::i2c::type_of<::by_ref<::UnityEngine::Hash128>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, assetBundleName, hash, keepInputVersion);
}
inline bool UnityEngine::Caching::IsVersionCached_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> url, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> assetBundleName,
                                                           ::by_ref<::UnityEngine::Hash128> hash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(),
                                                           { "IsVersionCached_Injected",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Hash128>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, url, assetBundleName, hash);
}
inline void UnityEngine::Caching::AddCache_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> cachePath, bool isReadonly, ::by_ref<::UnityEngine::Cache> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Caching*>(),
          { "AddCache_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Cache>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cachePath, isReadonly, ret);
}
inline void UnityEngine::Caching::GetCacheByPath_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> cachePath, ::by_ref<::UnityEngine::Cache> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(),
                          { "GetCacheByPath_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Cache>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cachePath, ret);
}
inline void UnityEngine::Caching::get_defaultCache_Injected(::by_ref<::UnityEngine::Cache> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "get_defaultCache_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Cache>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::Caching::get_currentCacheForWriting_Injected(::by_ref<::UnityEngine::Cache> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "get_currentCacheForWriting_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Cache>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::Caching::set_currentCacheForWriting_Injected(::by_ref<::UnityEngine::Cache> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Caching*>(), { "set_currentCacheForWriting_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Cache>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::Caching::Caching() {}
