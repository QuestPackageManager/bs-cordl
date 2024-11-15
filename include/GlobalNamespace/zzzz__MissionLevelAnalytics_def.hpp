#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionLevelAnalytics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MissionLevelAnalytics)
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class MissionCompletionResults;
}
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionLevelAnalytics;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionLevelAnalytics);
// Type: ::MissionLevelAnalytics
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionLevelAnalytics*
class CORDL_TYPE MissionLevelAnalytics : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _analyticsModel, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__analyticsModel, put = __cordl_internal_set__analyticsModel)) ::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field _missionLevelScenesTransitionSetupData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__missionLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__missionLevelScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>
      _missionLevelScenesTransitionSetupData;

  /// @brief Method HandleMissionLevelDidFinishEvent, addr 0x3a74de0, size 0x21c, virtual false, abstract: false, final false
  inline void HandleMissionLevelDidFinishEvent(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData,
                                               ::GlobalNamespace::MissionCompletionResults* missionCompletionResults);

  static inline ::GlobalNamespace::MissionLevelAnalytics* New_ctor();

  /// @brief Method OnDestroy, addr 0x3a74d50, size 0x90, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3a74cc0, size 0x90, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::IAnalyticsModel*& __cordl_internal_get__analyticsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& __cordl_internal_get__analyticsModel() const;

  constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__missionLevelScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>& __cordl_internal_get__missionLevelScenesTransitionSetupData();

  constexpr void __cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr void __cordl_internal_set__missionLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x3a74ffc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionLevelAnalytics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelAnalytics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionLevelAnalytics(MissionLevelAnalytics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelAnalytics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionLevelAnalytics(MissionLevelAnalytics const&) = delete;

  /// @brief Field _missionLevelScenesTransitionSetupData, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> ____missionLevelScenesTransitionSetupData;

  /// @brief Field _analyticsModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3978 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionLevelAnalytics, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelAnalytics, ____missionLevelScenesTransitionSetupData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelAnalytics, ____analyticsModel) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionLevelAnalytics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelAnalytics*, "", "MissionLevelAnalytics");
