#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(StandardLevelReturnToMenuController)
namespace GlobalNamespace {
class IReturnToMenuController;
}
namespace GlobalNamespace {
class PrepareLevelCompletionResults;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelReturnToMenuController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelReturnToMenuController);
// Type: ::StandardLevelReturnToMenuController
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5083))
// CS Name: ::StandardLevelReturnToMenuController*
class CORDL_TYPE StandardLevelReturnToMenuController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _standardLevelSceneSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__standardLevelSceneSetupData,
                      put = __cordl_internal_set__standardLevelSceneSetupData))::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> _standardLevelSceneSetupData;

  /// @brief Field _prepareLevelCompletionResults, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__prepareLevelCompletionResults,
                      put = __cordl_internal_set__prepareLevelCompletionResults))::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> _prepareLevelCompletionResults;

  /// @brief Convert operator to "::GlobalNamespace::IReturnToMenuController"
  constexpr operator ::GlobalNamespace::IReturnToMenuController*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IReturnToMenuController"
  constexpr ::GlobalNamespace::IReturnToMenuController* i___GlobalNamespace__IReturnToMenuController() noexcept;

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>& __cordl_internal_get__standardLevelSceneSetupData();

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__standardLevelSceneSetupData() const;

  constexpr void __cordl_internal_set__standardLevelSceneSetupData(::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> value);

  constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults>& __cordl_internal_get__prepareLevelCompletionResults();

  constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> const& __cordl_internal_get__prepareLevelCompletionResults() const;

  constexpr void __cordl_internal_set__prepareLevelCompletionResults(::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> value);

  /// @brief Method ReturnToMenu, addr 0x23cafd0, size 0x40, virtual true, abstract: false, final true
  inline void ReturnToMenu();

  static inline ::GlobalNamespace::StandardLevelReturnToMenuController* New_ctor();

  /// @brief Method .ctor, addr 0x23cb010, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelReturnToMenuController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardLevelReturnToMenuController(StandardLevelReturnToMenuController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelReturnToMenuController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardLevelReturnToMenuController(StandardLevelReturnToMenuController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelReturnToMenuController();

public:
  /// @brief Field _standardLevelSceneSetupData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> ____standardLevelSceneSetupData;

  /// @brief Field _prepareLevelCompletionResults, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> ____prepareLevelCompletionResults;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelReturnToMenuController, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelReturnToMenuController, ____standardLevelSceneSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelReturnToMenuController, ____prepareLevelCompletionResults) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelReturnToMenuController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelReturnToMenuController*, "", "StandardLevelReturnToMenuController");
