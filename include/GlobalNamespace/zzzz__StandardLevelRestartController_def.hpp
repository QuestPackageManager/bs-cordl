#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5187))
// CS Name: ::StandardLevelRestartController*
class CORDL_TYPE StandardLevelRestartController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _standardLevelSceneSetupData, offset 0x18, size 0x8
  __declspec(property(get = __get__standardLevelSceneSetupData, put = __set__standardLevelSceneSetupData))::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* _standardLevelSceneSetupData;

  /// @brief Field _prepareLevelCompletionResults, offset 0x20, size 0x8
  __declspec(property(get = __get__prepareLevelCompletionResults, put = __set__prepareLevelCompletionResults))::GlobalNamespace::PrepareLevelCompletionResults* _prepareLevelCompletionResults;

  /// @brief Convert operator to "::GlobalNamespace::ILevelRestartController"
  constexpr operator ::GlobalNamespace::ILevelRestartController*() noexcept;

  constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*& __get__standardLevelSceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*> const& __get__standardLevelSceneSetupData() const;

  constexpr void __set__standardLevelSceneSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* value);

  constexpr ::GlobalNamespace::PrepareLevelCompletionResults*& __get__prepareLevelCompletionResults();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PrepareLevelCompletionResults*> const& __get__prepareLevelCompletionResults() const;

  constexpr void __set__prepareLevelCompletionResults(::GlobalNamespace::PrepareLevelCompletionResults* value);

  /// @brief Method RestartLevel addr 0x20e9478 size 0x40 virtual true final true
  inline void RestartLevel();

  static inline ::GlobalNamespace::StandardLevelRestartController* New_ctor();

  /// @brief Method .ctor addr 0x20e94b8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelRestartController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardLevelRestartController(StandardLevelRestartController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelRestartController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardLevelRestartController(StandardLevelRestartController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelRestartController();

public:
  /// @brief Field _standardLevelSceneSetupData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* ____standardLevelSceneSetupData;

  /// @brief Field _prepareLevelCompletionResults, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PrepareLevelCompletionResults* ____prepareLevelCompletionResults;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelRestartController, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelRestartController, ____standardLevelSceneSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelRestartController, ____prepareLevelCompletionResults) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelRestartController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelRestartController*, "", "StandardLevelRestartController");
