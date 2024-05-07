#pragma once
// IWYU pragma private; include "GlobalNamespace/StandardLevelRestartController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(StandardLevelRestartController)
namespace GlobalNamespace {
class ILevelRestartController;
}
namespace GlobalNamespace {
class PrepareLevelCompletionResults;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelRestartController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelRestartController);
// Type: ::StandardLevelRestartController
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::StandardLevelRestartController*
class CORDL_TYPE StandardLevelRestartController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _prepareLevelCompletionResults, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__prepareLevelCompletionResults,
                      put = __cordl_internal_set__prepareLevelCompletionResults))::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> _prepareLevelCompletionResults;

  /// @brief Field _standardLevelSceneSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__standardLevelSceneSetupData,
                      put = __cordl_internal_set__standardLevelSceneSetupData))::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> _standardLevelSceneSetupData;

  /// @brief Convert operator to "::GlobalNamespace::ILevelRestartController"
  constexpr operator ::GlobalNamespace::ILevelRestartController*() noexcept;

  static inline ::GlobalNamespace::StandardLevelRestartController* New_ctor();

  /// @brief Method RestartLevel, addr 0x26ea600, size 0x40, virtual true, abstract: false, final true
  inline void RestartLevel();

  constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> const& __cordl_internal_get__prepareLevelCompletionResults() const;

  constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults>& __cordl_internal_get__prepareLevelCompletionResults();

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__standardLevelSceneSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>& __cordl_internal_get__standardLevelSceneSetupData();

  constexpr void __cordl_internal_set__prepareLevelCompletionResults(::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> value);

  constexpr void __cordl_internal_set__standardLevelSceneSetupData(::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x26ea640, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::ILevelRestartController"
  constexpr ::GlobalNamespace::ILevelRestartController* i___GlobalNamespace__ILevelRestartController() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelRestartController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelRestartController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardLevelRestartController(StandardLevelRestartController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelRestartController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardLevelRestartController(StandardLevelRestartController const&) = delete;

  /// @brief Field _standardLevelSceneSetupData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> ____standardLevelSceneSetupData;

  /// @brief Field _prepareLevelCompletionResults, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> ____prepareLevelCompletionResults;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelRestartController, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelRestartController, ____standardLevelSceneSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelRestartController, ____prepareLevelCompletionResults) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelRestartController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelRestartController*, "", "StandardLevelRestartController");
