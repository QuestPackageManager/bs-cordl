#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_AssetUpdater.hpp"
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
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_AssetUpdater
class CORDL_TYPE HEU_AssetUpdater : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddAssetForUpdate, addr 0x3a0b34c, size 0x4, virtual false, abstract: false, final false
  static inline void AddAssetForUpdate(::HoudiniEngineUnity::HEU_HoudiniAsset* asset);

  /// @brief Method AddNodeSyncForUpdate, addr 0x3a0b354, size 0x4, virtual false, abstract: false, final false
  static inline void AddNodeSyncForUpdate(::HoudiniEngineUnity::HEU_BaseSync* nodeSync);

  static inline ::HoudiniEngineUnity::HEU_AssetUpdater* New_ctor();

  /// @brief Method OnBeforeAssemblyReload, addr 0x3a0b2f8, size 0x50, virtual false, abstract: false, final false
  static inline void OnBeforeAssemblyReload();

  /// @brief Method OnPrefabInstanceUpdate, addr 0x3a0b35c, size 0x4, virtual false, abstract: false, final false
  static inline void OnPrefabInstanceUpdate(::UnityEngine::GameObject* instance);

  /// @brief Method RemoveAsset, addr 0x3a0b350, size 0x4, virtual false, abstract: false, final false
  static inline void RemoveAsset(::HoudiniEngineUnity::HEU_HoudiniAsset* asset);

  /// @brief Method RemoveNodeSync, addr 0x3a0b358, size 0x4, virtual false, abstract: false, final false
  static inline void RemoveNodeSync(::HoudiniEngineUnity::HEU_BaseSync* nodeSync);

  /// @brief Method Update, addr 0x3a0b348, size 0x4, virtual false, abstract: false, final false
  static inline void Update();

  /// @brief Method .ctor, addr 0x3a0b360, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_AssetUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_AssetUpdater(HEU_AssetUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_AssetUpdater(HEU_AssetUpdater const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11603 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_AssetUpdater, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AssetUpdater);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetUpdater*, "HoudiniEngineUnity", "HEU_AssetUpdater");
