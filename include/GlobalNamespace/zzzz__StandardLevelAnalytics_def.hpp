#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(StandardLevelAnalytics)
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelAnalytics;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelAnalytics);
// Type: ::StandardLevelAnalytics
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4021))
// CS Name: ::StandardLevelAnalytics*
class CORDL_TYPE StandardLevelAnalytics : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _standardLevelScenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __get__standardLevelScenesTransitionSetupData,
                      put = __set__standardLevelScenesTransitionSetupData))::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* _standardLevelScenesTransitionSetupData;

  /// @brief Field _analyticsModel, offset 0x20, size 0x8
  __declspec(property(get = __get__analyticsModel, put = __set__analyticsModel))::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*& __get__standardLevelScenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*> const& __get__standardLevelScenesTransitionSetupData() const;

  constexpr void __set__standardLevelScenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* value);

  constexpr ::GlobalNamespace::IAnalyticsModel*& __get__analyticsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& __get__analyticsModel() const;

  constexpr void __set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  /// @brief Method Start, addr 0x2225594, size 0x8c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x2225620, size 0x8c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleStandardLevelDidFinishEvent, addr 0x22256ac, size 0x644, virtual false, abstract: false, final false
  inline void HandleStandardLevelDidFinishEvent(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData,
                                                ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  static inline ::GlobalNamespace::StandardLevelAnalytics* New_ctor();

  /// @brief Method .ctor, addr 0x2225cf0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelAnalytics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardLevelAnalytics(StandardLevelAnalytics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelAnalytics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardLevelAnalytics(StandardLevelAnalytics const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelAnalytics();

public:
  /// @brief Field _standardLevelScenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* ____standardLevelScenesTransitionSetupData;

  /// @brief Field _analyticsModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelAnalytics, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelAnalytics, ____standardLevelScenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelAnalytics, ____analyticsModel) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelAnalytics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelAnalytics*, "", "StandardLevelAnalytics");
