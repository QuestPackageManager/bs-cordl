#pragma once
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
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4018))
// CS Name: ::MissionLevelAnalytics*
class CORDL_TYPE MissionLevelAnalytics : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _missionLevelScenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __get__missionLevelScenesTransitionSetupData,
                      put = __set__missionLevelScenesTransitionSetupData))::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* _missionLevelScenesTransitionSetupData;

  /// @brief Field _analyticsModel, offset 0x20, size 0x8
  __declspec(property(get = __get__analyticsModel, put = __set__analyticsModel))::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*& __get__missionLevelScenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*> const& __get__missionLevelScenesTransitionSetupData() const;

  constexpr void __set__missionLevelScenesTransitionSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* value);

  constexpr ::GlobalNamespace::IAnalyticsModel*& __get__analyticsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& __get__analyticsModel() const;

  constexpr void __set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  /// @brief Method Start, addr 0x222415c, size 0x8c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x22241e8, size 0x8c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleMissionLevelDidFinishEvent, addr 0x2224274, size 0x21c, virtual false, abstract: false, final false
  inline void HandleMissionLevelDidFinishEvent(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData,
                                               ::GlobalNamespace::MissionCompletionResults* missionCompletionResults);

  static inline ::GlobalNamespace::MissionLevelAnalytics* New_ctor();

  /// @brief Method .ctor, addr 0x2224490, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelAnalytics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionLevelAnalytics(MissionLevelAnalytics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelAnalytics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionLevelAnalytics(MissionLevelAnalytics const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionLevelAnalytics();

public:
  /// @brief Field _missionLevelScenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* ____missionLevelScenesTransitionSetupData;

  /// @brief Field _analyticsModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionLevelAnalytics, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelAnalytics, ____missionLevelScenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelAnalytics, ____analyticsModel) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionLevelAnalytics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelAnalytics*, "", "MissionLevelAnalytics");
