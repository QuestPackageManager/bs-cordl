#pragma once
// IWYU pragma private; include "UnityEngine/Networking/DownloadHandlerAssetBundle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandler_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DownloadHandlerAssetBundle)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Networking {
class DownloadHandlerAssetBundle_BindingsMarshaller;
}
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
namespace UnityEngine::Networking {
class DownloadHandlerAssetBundle_BindingsMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::DownloadHandlerAssetBundle);
MARK_REF_PTR_T(::UnityEngine::Networking::DownloadHandlerAssetBundle_BindingsMarshaller);
// Dependencies System.Object
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.DownloadHandlerAssetBundle/BindingsMarshaller
class CORDL_TYPE DownloadHandlerAssetBundle_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x6c5b1f8, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::Networking::DownloadHandlerAssetBundle* handler);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DownloadHandlerAssetBundle_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerAssetBundle_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DownloadHandlerAssetBundle_BindingsMarshaller(DownloadHandlerAssetBundle_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerAssetBundle_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DownloadHandlerAssetBundle_BindingsMarshaller(DownloadHandlerAssetBundle_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22845 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::DownloadHandlerAssetBundle_BindingsMarshaller, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Networking
// Dependencies UnityEngine.Networking.DownloadHandler
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.DownloadHandlerAssetBundle
class CORDL_TYPE DownloadHandlerAssetBundle : public ::UnityEngine::Networking::DownloadHandler {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::Networking::DownloadHandlerAssetBundle_BindingsMarshaller;

  __declspec(property(get = get_assetBundle)) ::UnityW<::UnityEngine::AssetBundle> assetBundle;

  __declspec(property(get = get_autoLoadAssetBundle, put = set_autoLoadAssetBundle)) bool autoLoadAssetBundle;

  __declspec(property(get = get_isDownloadComplete)) bool isDownloadComplete;

  /// @brief Method Create, addr 0x6c5aa2c, size 0x144, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create(::UnityEngine::Networking::DownloadHandlerAssetBundle* obj, ::StringW url, uint32_t crc);

  /// @brief Method CreateCached, addr 0x6c5abc4, size 0x1d4, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateCached(::UnityEngine::Networking::DownloadHandlerAssetBundle* obj, ::StringW url, ::StringW name, ::UnityEngine::Hash128 hash, uint32_t crc);

  /// @brief Method CreateCached_Injected, addr 0x6c5ad98, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateCached_Injected(::UnityEngine::Networking::DownloadHandlerAssetBundle* obj, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> url,
                                                       ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> name, ::ByRef<::UnityEngine::Hash128> hash, uint32_t crc);

  /// @brief Method Create_Injected, addr 0x6c5ab70, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create_Injected(::UnityEngine::Networking::DownloadHandlerAssetBundle* obj, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> url, uint32_t crc);

  /// @brief Method GetData, addr 0x6c5ae34, size 0x4c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetData();

  /// @brief Method GetText, addr 0x6c5ae80, size 0x4c, virtual true, abstract: false, final false
  inline ::StringW GetText();

  /// @brief Method InternalCreateAssetBundle, addr 0x6c5ae04, size 0x18, virtual false, abstract: false, final false
  inline void InternalCreateAssetBundle(::StringW url, uint32_t crc);

  /// @brief Method InternalCreateAssetBundleCached, addr 0x6c5ae1c, size 0x18, virtual false, abstract: false, final false
  inline void InternalCreateAssetBundleCached(::StringW url, ::StringW name, ::UnityEngine::Hash128 hash, uint32_t crc);

  static inline ::UnityEngine::Networking::DownloadHandlerAssetBundle* New_ctor(::StringW url, ::UnityEngine::CachedAssetBundle cachedBundle, uint32_t crc);

  static inline ::UnityEngine::Networking::DownloadHandlerAssetBundle* New_ctor(::StringW url, uint32_t crc);

  /// @brief Method .ctor, addr 0x6c5aa04, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW url, ::UnityEngine::CachedAssetBundle cachedBundle, uint32_t crc);

  /// @brief Method .ctor, addr 0x6c5a8e8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::StringW url, uint32_t crc);

  /// @brief Method get_assetBundle, addr 0x6c5aecc, size 0x13c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AssetBundle> get_assetBundle();

  /// @brief Method get_assetBundle_Injected, addr 0x6c5b008, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_assetBundle_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_autoLoadAssetBundle, addr 0x6c5b044, size 0x50, virtual false, abstract: false, final false
  inline bool get_autoLoadAssetBundle();

  /// @brief Method get_autoLoadAssetBundle_Injected, addr 0x6c5b094, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_autoLoadAssetBundle_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isDownloadComplete, addr 0x6c5b16c, size 0x50, virtual false, abstract: false, final false
  inline bool get_isDownloadComplete();

  /// @brief Method get_isDownloadComplete_Injected, addr 0x6c5b1bc, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isDownloadComplete_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_autoLoadAssetBundle, addr 0x6c5b0d0, size 0x58, virtual false, abstract: false, final false
  inline void set_autoLoadAssetBundle(bool value);

  /// @brief Method set_autoLoadAssetBundle_Injected, addr 0x6c5b128, size 0x44, virtual false, abstract: false, final false
  static inline void set_autoLoadAssetBundle_Injected(::System::IntPtr _unity_self, bool value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22846 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::DownloadHandlerAssetBundle, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Networking
NEED_NO_BOX(::UnityEngine::Networking::DownloadHandlerAssetBundle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::DownloadHandlerAssetBundle*, "UnityEngine.Networking", "DownloadHandlerAssetBundle");
NEED_NO_BOX(::UnityEngine::Networking::DownloadHandlerAssetBundle_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::DownloadHandlerAssetBundle_BindingsMarshaller*, "UnityEngine.Networking", "DownloadHandlerAssetBundle/BindingsMarshaller");
