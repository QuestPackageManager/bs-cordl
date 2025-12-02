#pragma once
// IWYU pragma private; include "UnityEngine/Caching.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Caching)
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct Cache;
}
namespace UnityEngine {
struct CachedAssetBundle;
}
namespace UnityEngine {
struct Hash128;
}
// Forward declare root types
namespace UnityEngine {
class Caching;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Caching);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Caching
class CORDL_TYPE Caching : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddCache, addr 0x683561c, size 0x218, virtual false, abstract: false, final false
  static inline ::UnityEngine::Cache AddCache(::StringW cachePath);

  /// @brief Method AddCache, addr 0x6835968, size 0x144, virtual false, abstract: false, final false
  static inline ::UnityEngine::Cache AddCache(::StringW cachePath, bool isReadonly);

  /// @brief Method AddCache_Injected, addr 0x6835aac, size 0x54, virtual false, abstract: false, final false
  static inline void AddCache_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> cachePath, bool isReadonly, ::ByRef<::UnityEngine::Cache> ret);

  /// @brief Method ClearAllCachedVersions, addr 0x68352a8, size 0x68, virtual false, abstract: false, final false
  static inline bool ClearAllCachedVersions(::StringW assetBundleName);

  /// @brief Method ClearCachedVersion, addr 0x6834f28, size 0x5c, virtual false, abstract: false, final false
  static inline bool ClearCachedVersion(::StringW assetBundleName, ::UnityEngine::Hash128 hash);

  /// @brief Method ClearCachedVersionInternal, addr 0x6834f84, size 0x138, virtual false, abstract: false, final false
  static inline bool ClearCachedVersionInternal(::StringW assetBundleName, ::UnityEngine::Hash128 hash);

  /// @brief Method ClearCachedVersionInternal_Injected, addr 0x68350bc, size 0x44, virtual false, abstract: false, final false
  static inline bool ClearCachedVersionInternal_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> assetBundleName, ::ByRef<::UnityEngine::Hash128> hash);

  /// @brief Method ClearCachedVersions, addr 0x6835160, size 0x148, virtual false, abstract: false, final false
  static inline bool ClearCachedVersions(::StringW assetBundleName, ::UnityEngine::Hash128 hash, bool keepInputVersion);

  /// @brief Method ClearCachedVersions_Injected, addr 0x6835310, size 0x54, virtual false, abstract: false, final false
  static inline bool ClearCachedVersions_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> assetBundleName, ::ByRef<::UnityEngine::Hash128> hash, bool keepInputVersion);

  /// @brief Method ClearOtherCachedVersions, addr 0x6835100, size 0x60, virtual false, abstract: false, final false
  static inline bool ClearOtherCachedVersions(::StringW assetBundleName, ::UnityEngine::Hash128 hash);

  /// @brief Method GetCacheByPath, addr 0x6835834, size 0x134, virtual false, abstract: false, final false
  static inline ::UnityEngine::Cache GetCacheByPath(::StringW cachePath);

  /// @brief Method GetCacheByPath_Injected, addr 0x6835b00, size 0x44, virtual false, abstract: false, final false
  static inline void GetCacheByPath_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> cachePath, ::ByRef<::UnityEngine::Cache> ret);

  /// @brief Method IsVersionCached, addr 0x6835364, size 0xa4, virtual false, abstract: false, final false
  static inline bool IsVersionCached(::UnityEngine::CachedAssetBundle cachedBundle);

  /// @brief Method IsVersionCached, addr 0x6835408, size 0x1c0, virtual false, abstract: false, final false
  static inline bool IsVersionCached(::StringW url, ::StringW assetBundleName, ::UnityEngine::Hash128 hash);

  /// @brief Method IsVersionCached_Injected, addr 0x68355c8, size 0x54, virtual false, abstract: false, final false
  static inline bool IsVersionCached_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> url, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> assetBundleName,
                                              ::ByRef<::UnityEngine::Hash128> hash);

  /// @brief Method get_currentCacheForWriting, addr 0x6835bc4, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Cache get_currentCacheForWriting();

  /// @brief Method get_currentCacheForWriting_Injected, addr 0x6835c08, size 0x3c, virtual false, abstract: false, final false
  static inline void get_currentCacheForWriting_Injected(::ByRef<::UnityEngine::Cache> ret);

  /// @brief Method get_defaultCache, addr 0x6835b44, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Cache get_defaultCache();

  /// @brief Method get_defaultCache_Injected, addr 0x6835b88, size 0x3c, virtual false, abstract: false, final false
  static inline void get_defaultCache_Injected(::ByRef<::UnityEngine::Cache> ret);

  /// @brief Method get_ready, addr 0x6834f00, size 0x28, virtual false, abstract: false, final false
  static inline bool get_ready();

  /// @brief Method set_compressionEnabled, addr 0x6834ec4, size 0x3c, virtual false, abstract: false, final false
  static inline void set_compressionEnabled(bool value);

  /// @brief Method set_currentCacheForWriting, addr 0x6835c44, size 0x40, virtual false, abstract: false, final false
  static inline void set_currentCacheForWriting(::UnityEngine::Cache value);

  /// @brief Method set_currentCacheForWriting_Injected, addr 0x6835c84, size 0x3c, virtual false, abstract: false, final false
  static inline void set_currentCacheForWriting_Injected(::ByRef<::UnityEngine::Cache> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Caching();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Caching", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Caching(Caching&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Caching", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Caching(Caching const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10053 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Caching, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Caching);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Caching*, "UnityEngine", "Caching");
