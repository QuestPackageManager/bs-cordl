#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_BaseSync_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_AssetSync)
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
class HEU_ThreadedTaskLoadGeo;
}
namespace HoudiniEngineUnity {
class __HEU_AssetSync__AssetSyncCallback;
}
namespace HoudiniEngineUnity {
class __HEU_ThreadedTaskLoadGeo__HEU_LoadCallback;
}
namespace HoudiniEngineUnity {
class __HEU_ThreadedTaskLoadGeo__HEU_LoadData;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
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
class __HEU_AssetSync__AssetSyncCallback;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_AssetSync);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_AssetSync__AssetSyncCallback);
// Type: ::AssetSyncCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HEU_AssetSync::AssetSyncCallback*
class CORDL_TYPE __HEU_AssetSync__AssetSyncCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2490c20, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::HoudiniEngineUnity::HEU_AssetSync* assetSync, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2490c40, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2490c0c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::HoudiniEngineUnity::HEU_AssetSync* assetSync);

  static inline ::HoudiniEngineUnity::__HEU_AssetSync__AssetSyncCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2490ae0, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_AssetSync__AssetSyncCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HEU_AssetSync__AssetSyncCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_AssetSync__AssetSyncCallback(__HEU_AssetSync__AssetSyncCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_AssetSync__AssetSyncCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_AssetSync__AssetSyncCallback(__HEU_AssetSync__AssetSyncCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_AssetSync__AssetSyncCallback, 0x80>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_AssetSync
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_AssetSync*
class CORDL_TYPE HEU_AssetSync : public ::HoudiniEngineUnity::HEU_BaseSync {
public:
  // Declarations
  using AssetSyncCallback = ::HoudiniEngineUnity::__HEU_AssetSync__AssetSyncCallback;

  /// @brief Field _assetPath, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__assetPath, put = __cordl_internal_set__assetPath))::StringW _assetPath;

  /// @brief Field _onAssetLoaded, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__onAssetLoaded, put = __cordl_internal_set__onAssetLoaded))::HoudiniEngineUnity::__HEU_AssetSync__AssetSyncCallback* _onAssetLoaded;

  /// @brief Method CreateThreadedTask, addr 0x2490764, size 0x68, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo* CreateThreadedTask();

  /// @brief Method InitializeAsset, addr 0x249066c, size 0xf8, virtual false, abstract: false, final false
  inline void InitializeAsset(::HoudiniEngineUnity::HEU_SessionBase* session, ::StringW assetPath, ::StringW nodeName, ::UnityEngine::Transform* parent, ::UnityEngine::Vector3 startPosition);

  static inline ::HoudiniEngineUnity::HEU_AssetSync* New_ctor();

  /// @brief Method OnDestroy, addr 0x2490660, size 0xc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnEnable, addr 0x249065c, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnLoadComplete, addr 0x249087c, size 0x34, virtual true, abstract: false, final false
  inline void OnLoadComplete(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData* loadData);

  /// @brief Method Resync, addr 0x2490934, size 0x38, virtual true, abstract: false, final false
  inline void Resync();

  /// @brief Method SetLoadCallback, addr 0x24907d0, size 0x38, virtual false, abstract: false, final false
  inline void SetLoadCallback(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback* callback);

  /// @brief Method SetupLoadTask, addr 0x2490808, size 0x60, virtual true, abstract: false, final false
  inline void SetupLoadTask(::HoudiniEngineUnity::HEU_SessionBase* session);

  constexpr ::StringW const& __cordl_internal_get__assetPath() const;

  constexpr ::StringW& __cordl_internal_get__assetPath();

  constexpr ::HoudiniEngineUnity::__HEU_AssetSync__AssetSyncCallback*& __cordl_internal_get__onAssetLoaded();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::__HEU_AssetSync__AssetSyncCallback*> const& __cordl_internal_get__onAssetLoaded() const;

  constexpr void __cordl_internal_set__assetPath(::StringW value);

  constexpr void __cordl_internal_set__onAssetLoaded(::HoudiniEngineUnity::__HEU_AssetSync__AssetSyncCallback* value);

  /// @brief Method .ctor, addr 0x249096c, size 0x4, virtual false, abstract: false, final false
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

  /// @brief Field _onAssetLoaded, offset: 0x80, size: 0x8, def value: None
  ::HoudiniEngineUnity::__HEU_AssetSync__AssetSyncCallback* ____onAssetLoaded;

  /// @brief Field _assetPath, offset: 0x88, size: 0x8, def value: None
  ::StringW ____assetPath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_AssetSync, 0x90>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetSync, ____onAssetLoaded) == 0x80, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetSync, ____assetPath) == 0x88, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AssetSync);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetSync*, "HoudiniEngineUnity", "HEU_AssetSync");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_AssetSync__AssetSyncCallback);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_AssetSync__AssetSyncCallback*, "HoudiniEngineUnity", "HEU_AssetSync/AssetSyncCallback");
