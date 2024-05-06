#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
CORDL_MODULE_EXPORT(SingleFixedSceneScenesTransitionSetupDataSO)
namespace GlobalNamespace {
class SceneInfo;
}
namespace GlobalNamespace {
class SceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class SingleFixedSceneScenesTransitionSetupDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO);
// Type: ::SingleFixedSceneScenesTransitionSetupDataSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SingleFixedSceneScenesTransitionSetupDataSO*
class CORDL_TYPE SingleFixedSceneScenesTransitionSetupDataSO : public ::GlobalNamespace::ScenesTransitionSetupDataSO {
public:
  // Declarations
  /// @brief Field _sceneInfo, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneInfo, put = __cordl_internal_set__sceneInfo))::UnityW<::GlobalNamespace::SceneInfo> _sceneInfo;

  __declspec(property(get = get_sceneInfo))::UnityW<::GlobalNamespace::SceneInfo> sceneInfo;

  /// @brief Method Init, addr 0x10711b0, size 0xec, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::SceneSetupData* sceneSetupData);

  static inline ::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::SceneInfo> const& __cordl_internal_get__sceneInfo() const;

  constexpr ::UnityW<::GlobalNamespace::SceneInfo>& __cordl_internal_get__sceneInfo();

  constexpr void __cordl_internal_set__sceneInfo(::UnityW<::GlobalNamespace::SceneInfo> value);

  /// @brief Method .ctor, addr 0x1071384, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_sceneInfo, addr 0x1071470, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::SceneInfo> get_sceneInfo();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SingleFixedSceneScenesTransitionSetupDataSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SingleFixedSceneScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SingleFixedSceneScenesTransitionSetupDataSO(SingleFixedSceneScenesTransitionSetupDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SingleFixedSceneScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SingleFixedSceneScenesTransitionSetupDataSO(SingleFixedSceneScenesTransitionSetupDataSO const&) = delete;

  /// @brief Field _sceneInfo, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SceneInfo> ____sceneInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO, ____sceneInfo) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO*, "", "SingleFixedSceneScenesTransitionSetupDataSO");
