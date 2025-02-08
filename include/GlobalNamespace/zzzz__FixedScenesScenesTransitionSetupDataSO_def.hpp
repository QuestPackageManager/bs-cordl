#pragma once
// IWYU pragma private; include "GlobalNamespace/FixedScenesScenesTransitionSetupDataSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
CORDL_MODULE_EXPORT(FixedScenesScenesTransitionSetupDataSO)
namespace GlobalNamespace {
class SceneInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class FixedScenesScenesTransitionSetupDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO);
// Dependencies ScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: FixedScenesScenesTransitionSetupDataSO
class CORDL_TYPE FixedScenesScenesTransitionSetupDataSO : public ::GlobalNamespace::ScenesTransitionSetupDataSO {
public:
  // Declarations
  /// @brief Field _sceneInfos, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneInfos,
                      put = __cordl_internal_set__sceneInfos)) ::ArrayW<::UnityW<::GlobalNamespace::SceneInfo>, ::Array<::UnityW<::GlobalNamespace::SceneInfo>>*>
      _sceneInfos;

  /// @brief Method Init, addr 0x229c170, size 0xc, virtual false, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO* New_ctor();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::SceneInfo>, ::Array<::UnityW<::GlobalNamespace::SceneInfo>>*> const& __cordl_internal_get__sceneInfos() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::SceneInfo>, ::Array<::UnityW<::GlobalNamespace::SceneInfo>>*>& __cordl_internal_get__sceneInfos();

  constexpr void __cordl_internal_set__sceneInfos(::ArrayW<::UnityW<::GlobalNamespace::SceneInfo>, ::Array<::UnityW<::GlobalNamespace::SceneInfo>>*> value);

  /// @brief Method .ctor, addr 0x229c17c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedScenesScenesTransitionSetupDataSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FixedScenesScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedScenesScenesTransitionSetupDataSO(FixedScenesScenesTransitionSetupDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedScenesScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedScenesScenesTransitionSetupDataSO(FixedScenesScenesTransitionSetupDataSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17632 };

  /// @brief Field _sceneInfos, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::SceneInfo>, ::Array<::UnityW<::GlobalNamespace::SceneInfo>>*> ____sceneInfos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO, ____sceneInfos) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO*, "", "FixedScenesScenesTransitionSetupDataSO");
