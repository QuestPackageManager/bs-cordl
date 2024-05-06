#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerLevelAnalytics)
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MultiplayerResultsData;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLevelAnalytics;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLevelAnalytics);
// Type: ::MultiplayerLevelAnalytics
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerLevelAnalytics*
class CORDL_TYPE MultiplayerLevelAnalytics : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _analyticsModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__analyticsModel, put = __cordl_internal_set__analyticsModel))::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field _multiplayerLevelScenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__multiplayerLevelScenesTransitionSetupData,
      put = __cordl_internal_set__multiplayerLevelScenesTransitionSetupData))::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> _multiplayerLevelScenesTransitionSetupData;

  /// @brief Method HandleMultiplayerLevelDidFinish, addr 0x25fd6d0, size 0x480, virtual false, abstract: false, final false
  inline void HandleMultiplayerLevelDidFinish(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData,
                                              ::GlobalNamespace::MultiplayerResultsData* multiplayerResultsData);

  static inline ::GlobalNamespace::MultiplayerLevelAnalytics* New_ctor();

  /// @brief Method OnDestroy, addr 0x25fd644, size 0x8c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x25fd5b8, size 0x8c, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::IAnalyticsModel*& __cordl_internal_get__analyticsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& __cordl_internal_get__analyticsModel() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__multiplayerLevelScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>& __cordl_internal_get__multiplayerLevelScenesTransitionSetupData();

  constexpr void __cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr void __cordl_internal_set__multiplayerLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x25fdb50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLevelAnalytics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelAnalytics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLevelAnalytics(MultiplayerLevelAnalytics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelAnalytics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLevelAnalytics(MultiplayerLevelAnalytics const&) = delete;

  /// @brief Field _multiplayerLevelScenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> ____multiplayerLevelScenesTransitionSetupData;

  /// @brief Field _analyticsModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLevelAnalytics, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelAnalytics, ____multiplayerLevelScenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelAnalytics, ____analyticsModel) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLevelAnalytics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLevelAnalytics*, "", "MultiplayerLevelAnalytics");
