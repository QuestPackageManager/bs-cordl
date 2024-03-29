#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Networking/zzzz__DownloadHandler_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DownloadHandlerAssetBundle)
namespace UnityEngine {
class AssetBundle;
}
namespace UnityEngine {
struct CachedAssetBundle;
}
namespace UnityEngine {
struct Hash128;
}
// Forward declare root types
namespace UnityEngine::Networking {
class DownloadHandlerAssetBundle;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::DownloadHandlerAssetBundle);
// Type: UnityEngine.Networking::DownloadHandlerAssetBundle
// SizeInfo { instance_size: 24, native_size: 8, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: ::UnityEngine.Networking::DownloadHandlerAssetBundle*
class CORDL_TYPE DownloadHandlerAssetBundle : public ::UnityEngine::Networking::DownloadHandler {
public:
  // Declarations
  __declspec(property(get = get_assetBundle))::UnityW<::UnityEngine::AssetBundle> assetBundle;

  __declspec(property(get = get_autoLoadAssetBundle, put = set_autoLoadAssetBundle)) bool autoLoadAssetBundle;

  __declspec(property(get = get_isDownloadComplete)) bool isDownloadComplete;

  /// @brief Method Create, addr 0x3012f50, size 0x54, virtual false, abstract: false, final false
  static inline void* Create(::UnityEngine::Networking::DownloadHandlerAssetBundle* obj, ::StringW url, uint32_t crc);

  /// @brief Method CreateCached, addr 0x3012fa4, size 0x70, virtual false, abstract: false, final false
  static inline void* CreateCached(::UnityEngine::Networking::DownloadHandlerAssetBundle* obj, ::StringW url, ::StringW name, ::UnityEngine::Hash128 hash, uint32_t crc);

  /// @brief Method CreateCached_Injected, addr 0x3013014, size 0x6c, virtual false, abstract: false, final false
  static inline void* CreateCached_Injected(::UnityEngine::Networking::DownloadHandlerAssetBundle* obj, ::StringW url, ::StringW name, ByRef<::UnityEngine::Hash128> hash, uint32_t crc);

  /// @brief Method GetData, addr 0x30130f4, size 0x50, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetData();

  /// @brief Method GetText, addr 0x3013144, size 0x50, virtual true, abstract: false, final false
  inline ::StringW GetText();

  /// @brief Method InternalCreateAssetBundle, addr 0x3013080, size 0x5c, virtual false, abstract: false, final false
  inline void InternalCreateAssetBundle(::StringW url, uint32_t crc);

  /// @brief Method InternalCreateAssetBundleCached, addr 0x30130dc, size 0x18, virtual false, abstract: false, final false
  inline void InternalCreateAssetBundleCached(::StringW url, ::StringW name, ::UnityEngine::Hash128 hash, uint32_t crc);

  static inline ::UnityEngine::Networking::DownloadHandlerAssetBundle* New_ctor(::StringW url, ::UnityEngine::CachedAssetBundle cachedBundle, uint32_t crc);

  static inline ::UnityEngine::Networking::DownloadHandlerAssetBundle* New_ctor(::StringW url, uint32_t crc);

  /// @brief Method .ctor, addr 0x3012ee0, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW url, ::UnityEngine::CachedAssetBundle cachedBundle, uint32_t crc);

  /// @brief Method .ctor, addr 0x3012d8c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::StringW url, uint32_t crc);

  /// @brief Method get_assetBundle, addr 0x3013194, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AssetBundle> get_assetBundle();

  /// @brief Method get_autoLoadAssetBundle, addr 0x30131d0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_autoLoadAssetBundle();

  /// @brief Method get_isDownloadComplete, addr 0x3013250, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isDownloadComplete();

  /// @brief Method set_autoLoadAssetBundle, addr 0x301320c, size 0x44, virtual false, abstract: false, final false
  inline void set_autoLoadAssetBundle(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DownloadHandlerAssetBundle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerAssetBundle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DownloadHandlerAssetBundle(DownloadHandlerAssetBundle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerAssetBundle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DownloadHandlerAssetBundle(DownloadHandlerAssetBundle const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::DownloadHandlerAssetBundle, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Networking
NEED_NO_BOX(::UnityEngine::Networking::DownloadHandlerAssetBundle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::DownloadHandlerAssetBundle*, "UnityEngine.Networking", "DownloadHandlerAssetBundle");
