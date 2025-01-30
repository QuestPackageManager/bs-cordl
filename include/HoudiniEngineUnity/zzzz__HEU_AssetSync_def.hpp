#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_AssetSync.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_BaseSync_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HEU_AssetSync)
namespace HoudiniEngineUnity {
class HEU_AssetSync_AssetSyncCallback;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
class HEU_ThreadedTaskLoadGeo_HEU_LoadCallback;
}
namespace HoudiniEngineUnity {
class HEU_ThreadedTaskLoadGeo_HEU_LoadData;
}
namespace HoudiniEngineUnity {
class HEU_ThreadedTaskLoadGeo;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_AssetSync;
}
namespace HoudiniEngineUnity {
class HEU_AssetSync_AssetSyncCallback;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_AssetSync);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_AssetSync_AssetSyncCallback);
// Dependencies System.MulticastDelegate
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_AssetSync/AssetSyncCallback
class CORDL_TYPE HEU_AssetSync_AssetSyncCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3a5ed20, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::HoudiniEngineUnity::HEU_AssetSync* assetSync, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3a5ed40, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3a5ed0c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::HoudiniEngineUnity::HEU_AssetSync* assetSync);

  static inline ::HoudiniEngineUnity::HEU_AssetSync_AssetSyncCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3a5ec0c, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_AssetSync_AssetSyncCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetSync_AssetSyncCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_AssetSync_AssetSyncCallback(HEU_AssetSync_AssetSyncCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetSync_AssetSyncCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_AssetSync_AssetSyncCallback(HEU_AssetSync_AssetSyncCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11776 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_AssetSync_AssetSyncCallback, 0x80>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies HoudiniEngineUnity.HEU_BaseSync
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_AssetSync
class CORDL_TYPE HEU_AssetSync : public ::HoudiniEngineUnity::HEU_BaseSync {
public:
  // Declarations
  using AssetSyncCallback = ::HoudiniEngineUnity::HEU_AssetSync_AssetSyncCallback;

  /// @brief Field _assetPath, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__assetPath, put = __cordl_internal_set__assetPath)) ::StringW _assetPath;

  /// @brief Field _onAssetLoaded, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__onAssetLoaded, put = __cordl_internal_set__onAssetLoaded)) ::HoudiniEngineUnity::HEU_AssetSync_AssetSyncCallback* _onAssetLoaded;

  /// @brief Method CreateThreadedTask, addr 0x3a5e894, size 0x68, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo* CreateThreadedTask();

  /// @brief Method InitializeAsset, addr 0x3a5e79c, size 0xf8, virtual false, abstract: false, final false
  inline void InitializeAsset(::HoudiniEngineUnity::HEU_SessionBase* session, ::StringW assetPath, ::StringW nodeName, ::UnityEngine::Transform* parent, ::UnityEngine::Vector3 startPosition);

  static inline ::HoudiniEngineUnity::HEU_AssetSync* New_ctor();

  /// @brief Method OnDestroy, addr 0x3a5e790, size 0xc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnEnable, addr 0x3a5e78c, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnLoadComplete, addr 0x3a5e9ac, size 0x34, virtual true, abstract: false, final false
  inline void OnLoadComplete(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData* loadData);

  /// @brief Method Resync, addr 0x3a5ea64, size 0x38, virtual true, abstract: false, final false
  inline void Resync();

  /// @brief Method SetLoadCallback, addr 0x3a5e900, size 0x38, virtual false, abstract: false, final false
  inline void SetLoadCallback(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadCallback* callback);

  /// @brief Method SetupLoadTask, addr 0x3a5e938, size 0x60, virtual true, abstract: false, final false
  inline void SetupLoadTask(::HoudiniEngineUnity::HEU_SessionBase* session);

  constexpr ::StringW const& __cordl_internal_get__assetPath() const;

  constexpr ::StringW& __cordl_internal_get__assetPath();

  constexpr ::HoudiniEngineUnity::HEU_AssetSync_AssetSyncCallback* const& __cordl_internal_get__onAssetLoaded() const;

  constexpr ::HoudiniEngineUnity::HEU_AssetSync_AssetSyncCallback*& __cordl_internal_get__onAssetLoaded();

  constexpr void __cordl_internal_set__assetPath(::StringW value);

  constexpr void __cordl_internal_set__onAssetLoaded(::HoudiniEngineUnity::HEU_AssetSync_AssetSyncCallback* value);

  /// @brief Method .ctor, addr 0x3a5ea9c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_AssetSync();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetSync", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_AssetSync(HEU_AssetSync&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetSync", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_AssetSync(HEU_AssetSync const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11777 };

  /// @brief Field _onAssetLoaded, offset: 0x88, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_AssetSync_AssetSyncCallback* ____onAssetLoaded;

  /// @brief Field _assetPath, offset: 0x90, size: 0x8, def value: None
  ::StringW ____assetPath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetSync, ____onAssetLoaded) == 0x88, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetSync, ____assetPath) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_AssetSync, 0x98>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AssetSync);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetSync*, "HoudiniEngineUnity", "HEU_AssetSync");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AssetSync_AssetSyncCallback);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetSync_AssetSyncCallback*, "HoudiniEngineUnity", "HEU_AssetSync/AssetSyncCallback");
