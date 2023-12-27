#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Caching)
namespace UnityEngine {
struct Cache;
}
namespace UnityEngine {
struct Hash128;
}
namespace UnityEngine {
struct CachedAssetBundle;
}
// Forward declare root types
namespace UnityEngine {
class Caching;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Caching);
// Type: UnityEngine::Caching
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10143))
// CS Name: ::UnityEngine::Caching*
class CORDL_TYPE Caching : public ::System::Object {
public:
  // Declarations
  /// @brief Method set_compressionEnabled addr 0x2cc5b44 size 0x3c virtual false final false
  static inline void set_compressionEnabled(bool value);

  /// @brief Method get_ready addr 0x2cc5b80 size 0x28 virtual false final false
  static inline bool get_ready();

  /// @brief Method ClearCachedVersion addr 0x2cc5ba8 size 0x84 virtual false final false
  static inline bool ClearCachedVersion(::StringW assetBundleName, ::UnityEngine::Hash128 hash);

  /// @brief Method ClearCachedVersionInternal addr 0x2cc5c2c size 0x54 virtual false final false
  static inline bool ClearCachedVersionInternal(::StringW assetBundleName, ::UnityEngine::Hash128 hash);

  /// @brief Method ClearOtherCachedVersions addr 0x2cc5cc4 size 0x88 virtual false final false
  static inline bool ClearOtherCachedVersions(::StringW assetBundleName, ::UnityEngine::Hash128 hash);

  /// @brief Method ClearAllCachedVersions addr 0x2cc5da8 size 0x78 virtual false final false
  static inline bool ClearAllCachedVersions(::StringW assetBundleName);

  /// @brief Method ClearCachedVersions addr 0x2cc5d4c size 0x5c virtual false final false
  static inline bool ClearCachedVersions(::StringW assetBundleName, ::UnityEngine::Hash128 hash, bool keepInputVersion);

  /// @brief Method IsVersionCached addr 0x2cc5e74 size 0xa8 virtual false final false
  static inline bool IsVersionCached(::UnityEngine::CachedAssetBundle cachedBundle);

  /// @brief Method IsVersionCached addr 0x2cc5f30 size 0x5c virtual false final false
  static inline bool IsVersionCached(::StringW url, ::StringW assetBundleName, ::UnityEngine::Hash128 hash);

  /// @brief Method AddCache addr 0x2cc5fe0 size 0x254 virtual false final false
  static inline ::UnityEngine::Cache AddCache(::StringW cachePath);

  /// @brief Method AddCache addr 0x2cc62bc size 0x5c virtual false final false
  static inline ::UnityEngine::Cache AddCache(::StringW cachePath, bool isReadonly);

  /// @brief Method GetCacheByPath addr 0x2cc6234 size 0x4c virtual false final false
  static inline ::UnityEngine::Cache GetCacheByPath(::StringW cachePath);

  /// @brief Method get_defaultCache addr 0x2cc63b0 size 0x44 virtual false final false
  static inline ::UnityEngine::Cache get_defaultCache();

  /// @brief Method get_currentCacheForWriting addr 0x2cc6430 size 0x44 virtual false final false
  static inline ::UnityEngine::Cache get_currentCacheForWriting();

  /// @brief Method set_currentCacheForWriting addr 0x2cc64b0 size 0x40 virtual false final false
  static inline void set_currentCacheForWriting(::UnityEngine::Cache value);

  /// @brief Method ClearCachedVersionInternal_Injected addr 0x2cc5c80 size 0x44 virtual false final false
  static inline bool ClearCachedVersionInternal_Injected(::StringW assetBundleName, ByRef<::UnityEngine::Hash128> hash);

  /// @brief Method ClearCachedVersions_Injected addr 0x2cc5e20 size 0x54 virtual false final false
  static inline bool ClearCachedVersions_Injected(::StringW assetBundleName, ByRef<::UnityEngine::Hash128> hash, bool keepInputVersion);

  /// @brief Method IsVersionCached_Injected addr 0x2cc5f8c size 0x54 virtual false final false
  static inline bool IsVersionCached_Injected(::StringW url, ::StringW assetBundleName, ByRef<::UnityEngine::Hash128> hash);

  /// @brief Method AddCache_Injected addr 0x2cc6318 size 0x54 virtual false final false
  static inline void AddCache_Injected(::StringW cachePath, bool isReadonly, ByRef<::UnityEngine::Cache> ret);

  /// @brief Method GetCacheByPath_Injected addr 0x2cc636c size 0x44 virtual false final false
  static inline void GetCacheByPath_Injected(::StringW cachePath, ByRef<::UnityEngine::Cache> ret);

  /// @brief Method get_defaultCache_Injected addr 0x2cc63f4 size 0x3c virtual false final false
  static inline void get_defaultCache_Injected(ByRef<::UnityEngine::Cache> ret);

  /// @brief Method get_currentCacheForWriting_Injected addr 0x2cc6474 size 0x3c virtual false final false
  static inline void get_currentCacheForWriting_Injected(ByRef<::UnityEngine::Cache> ret);

  /// @brief Method set_currentCacheForWriting_Injected addr 0x2cc64f0 size 0x3c virtual false final false
  static inline void set_currentCacheForWriting_Injected(ByRef<::UnityEngine::Cache> value);

  // Ctor Parameters [CppParam { name: "", ty: "Caching", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Caching(Caching&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Caching", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Caching(Caching const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Caching();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Caching, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Caching);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Caching*, "UnityEngine", "Caching");
