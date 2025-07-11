#pragma once
// IWYU pragma private; include "GlobalNamespace/RecordingToolSceneSetupData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
CORDL_MODULE_EXPORT(RecordingToolSceneSetupData)
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolSceneSetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolSceneSetupData);
// Dependencies SceneSetupData
namespace GlobalNamespace {
// Is value type: false
// CS Name: RecordingToolSceneSetupData
class CORDL_TYPE RecordingToolSceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
  // Declarations
  /// @brief Field _nextScenesTransitionSetupData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__nextScenesTransitionSetupData, put = __cordl_internal_set__nextScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>
      _nextScenesTransitionSetupData;

  __declspec(property(get = get_nextScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> nextScenesTransitionSetupData;

  static inline ::GlobalNamespace::RecordingToolSceneSetupData* New_ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData);

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& __cordl_internal_get__nextScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& __cordl_internal_get__nextScenesTransitionSetupData();

  constexpr void __cordl_internal_set__nextScenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x3b3b18c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData);

  /// @brief Method get_nextScenesTransitionSetupData, addr 0x3b3b184, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> get_nextScenesTransitionSetupData();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolSceneSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolSceneSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingToolSceneSetupData(RecordingToolSceneSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolSceneSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingToolSceneSetupData(RecordingToolSceneSetupData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5246 };

  /// @brief Field _nextScenesTransitionSetupData, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> ____nextScenesTransitionSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RecordingToolSceneSetupData, ____nextScenesTransitionSetupData) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolSceneSetupData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolSceneSetupData*, "", "RecordingToolSceneSetupData");
