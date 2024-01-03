#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HEU_AssetUpdater)
namespace HoudiniEngineUnity {
class HEU_BaseSync;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_AssetUpdater;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_AssetUpdater);
// Type: HoudiniEngineUnity::HEU_AssetUpdater
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9618))
// CS Name: ::HoudiniEngineUnity::HEU_AssetUpdater*
class CORDL_TYPE HEU_AssetUpdater : public ::System::Object {
public:
  // Declarations
  /// @brief Method OnBeforeAssemblyReload, addr 0x2150a70, size 0x50, virtual false, abstract: false, final false
  static inline void OnBeforeAssemblyReload();

  /// @brief Method Update, addr 0x2150ac0, size 0x4, virtual false, abstract: false, final false
  static inline void Update();

  /// @brief Method AddAssetForUpdate, addr 0x2150ac4, size 0x4, virtual false, abstract: false, final false
  static inline void AddAssetForUpdate(::HoudiniEngineUnity::HEU_HoudiniAsset* asset);

  /// @brief Method RemoveAsset, addr 0x2150ac8, size 0x4, virtual false, abstract: false, final false
  static inline void RemoveAsset(::HoudiniEngineUnity::HEU_HoudiniAsset* asset);

  /// @brief Method AddNodeSyncForUpdate, addr 0x2150acc, size 0x4, virtual false, abstract: false, final false
  static inline void AddNodeSyncForUpdate(::HoudiniEngineUnity::HEU_BaseSync* nodeSync);

  /// @brief Method RemoveNodeSync, addr 0x2150ad0, size 0x4, virtual false, abstract: false, final false
  static inline void RemoveNodeSync(::HoudiniEngineUnity::HEU_BaseSync* nodeSync);

  /// @brief Method OnPrefabInstanceUpdate, addr 0x2150ad4, size 0x4, virtual false, abstract: false, final false
  static inline void OnPrefabInstanceUpdate(::UnityEngine::GameObject* instance);

  static inline ::HoudiniEngineUnity::HEU_AssetUpdater* New_ctor();

  /// @brief Method .ctor, addr 0x2150ad8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_AssetUpdater(HEU_AssetUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_AssetUpdater(HEU_AssetUpdater const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_AssetUpdater();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_AssetUpdater, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AssetUpdater);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetUpdater*, "HoudiniEngineUnity", "HEU_AssetUpdater");
