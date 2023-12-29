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
class __HEU_AssetSync__AssetSyncCallback;
}
namespace HoudiniEngineUnity {
class HEU_ThreadedTaskLoadGeo;
}
namespace HoudiniEngineUnity {
class __HEU_ThreadedTaskLoadGeo__HEU_LoadCallback;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
namespace HoudiniEngineUnity {
class __HEU_ThreadedTaskLoadGeo__HEU_LoadData;
}
namespace System {
class Object;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9718))
// CS Name: ::HEU_AssetSync::AssetSyncCallback*
class CORDL_TYPE __HEU_AssetSync__AssetSyncCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::HoudiniEngineUnity::__HEU_AssetSync__AssetSyncCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x204eed8 size 0x12c virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x204f004 size 0x14 virtual true final false
  inline void Invoke(::HoudiniEngineUnity::HEU_AssetSync* assetSync);

  /// @brief Method BeginInvoke addr 0x204f018 size 0x20 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(::HoudiniEngineUnity::HEU_AssetSync* assetSync, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x204f038 size 0xc virtual true final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_AssetSync__AssetSyncCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_AssetSync__AssetSyncCallback(__HEU_AssetSync__AssetSyncCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_AssetSync__AssetSyncCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_AssetSync__AssetSyncCallback(__HEU_AssetSync__AssetSyncCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_AssetSync__AssetSyncCallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_AssetSync__AssetSyncCallback, 0x80>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_AssetSync
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9720))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9719))
// CS Name: ::HoudiniEngineUnity::HEU_AssetSync*
class CORDL_TYPE HEU_AssetSync : public ::HoudiniEngineUnity::HEU_BaseSync {
public:
  // Declarations
  using AssetSyncCallback = ::HoudiniEngineUnity::__HEU_AssetSync__AssetSyncCallback;

  /// @brief Field _onAssetLoaded, offset 0x80, size 0x8
  __declspec(property(get = __get__onAssetLoaded, put = __set__onAssetLoaded))::HoudiniEngineUnity::__HEU_AssetSync__AssetSyncCallback* _onAssetLoaded;

  /// @brief Field _assetPath, offset 0x88, size 0x8
  __declspec(property(get = __get__assetPath, put = __set__assetPath))::StringW _assetPath;

  constexpr ::HoudiniEngineUnity::__HEU_AssetSync__AssetSyncCallback*& __get__onAssetLoaded();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::__HEU_AssetSync__AssetSyncCallback*> const& __get__onAssetLoaded() const;

  constexpr void __set__onAssetLoaded(::HoudiniEngineUnity::__HEU_AssetSync__AssetSyncCallback* value);

  constexpr ::StringW& __get__assetPath();

  constexpr ::StringW const& __get__assetPath() const;

  constexpr void __set__assetPath(::StringW value);

  /// @brief Method OnEnable addr 0x204ea54 size 0x4 virtual false final false
  inline void OnEnable();

  /// @brief Method OnDestroy addr 0x204ea58 size 0xc virtual false final false
  inline void OnDestroy();

  /// @brief Method InitializeAsset addr 0x204ea64 size 0xf8 virtual false final false
  inline void InitializeAsset(::HoudiniEngineUnity::HEU_SessionBase* session, ::StringW assetPath, ::StringW nodeName, ::UnityEngine::Transform* parent, ::UnityEngine::Vector3 startPosition);

  /// @brief Method CreateThreadedTask addr 0x204eb5c size 0x68 virtual false final false
  inline ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo* CreateThreadedTask();

  /// @brief Method SetLoadCallback addr 0x204ebc8 size 0x38 virtual false final false
  inline void SetLoadCallback(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback* callback);

  /// @brief Method SetupLoadTask addr 0x204ec00 size 0x60 virtual true final false
  inline void SetupLoadTask(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method OnLoadComplete addr 0x204ec74 size 0x34 virtual true final false
  inline void OnLoadComplete(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData* loadData);

  /// @brief Method Resync addr 0x204ed2c size 0x38 virtual true final false
  inline void Resync();

  static inline ::HoudiniEngineUnity::HEU_AssetSync* New_ctor();

  /// @brief Method .ctor addr 0x204ed64 size 0x4 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetSync", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_AssetSync(HEU_AssetSync&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetSync", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_AssetSync(HEU_AssetSync const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_AssetSync();

public:
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
