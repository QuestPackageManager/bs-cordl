#pragma once
// IWYU pragma private; include "GlobalNamespace/EventsTestScenesTransitionSetupDataSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
CORDL_MODULE_EXPORT(EventsTestScenesTransitionSetupDataSO)
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class SceneInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class EventsTestScenesTransitionSetupDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EventsTestScenesTransitionSetupDataSO);
// Dependencies ScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: EventsTestScenesTransitionSetupDataSO
class CORDL_TYPE EventsTestScenesTransitionSetupDataSO : public ::GlobalNamespace::ScenesTransitionSetupDataSO {
public:
  // Declarations
  /// @brief Field _environmentInfo, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentInfo, put = __cordl_internal_set__environmentInfo)) ::UnityW<::GlobalNamespace::EnvironmentInfoSO> _environmentInfo;

  /// @brief Field _eventsTestSceneInfo, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__eventsTestSceneInfo, put = __cordl_internal_set__eventsTestSceneInfo)) ::UnityW<::GlobalNamespace::SceneInfo> _eventsTestSceneInfo;

  /// @brief Field _gameCoreSceneInfo, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__gameCoreSceneInfo, put = __cordl_internal_set__gameCoreSceneInfo)) ::UnityW<::GlobalNamespace::SceneInfo> _gameCoreSceneInfo;

  /// @brief Method Init, addr 0x3b36a74, size 0x1d8, virtual false, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::EventsTestScenesTransitionSetupDataSO* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO> const& __cordl_internal_get__environmentInfo() const;

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO>& __cordl_internal_get__environmentInfo();

  constexpr ::UnityW<::GlobalNamespace::SceneInfo> const& __cordl_internal_get__eventsTestSceneInfo() const;

  constexpr ::UnityW<::GlobalNamespace::SceneInfo>& __cordl_internal_get__eventsTestSceneInfo();

  constexpr ::UnityW<::GlobalNamespace::SceneInfo> const& __cordl_internal_get__gameCoreSceneInfo() const;

  constexpr ::UnityW<::GlobalNamespace::SceneInfo>& __cordl_internal_get__gameCoreSceneInfo();

  constexpr void __cordl_internal_set__environmentInfo(::UnityW<::GlobalNamespace::EnvironmentInfoSO> value);

  constexpr void __cordl_internal_set__eventsTestSceneInfo(::UnityW<::GlobalNamespace::SceneInfo> value);

  constexpr void __cordl_internal_set__gameCoreSceneInfo(::UnityW<::GlobalNamespace::SceneInfo> value);

  /// @brief Method .ctor, addr 0x3b36c4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventsTestScenesTransitionSetupDataSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventsTestScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventsTestScenesTransitionSetupDataSO(EventsTestScenesTransitionSetupDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventsTestScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventsTestScenesTransitionSetupDataSO(EventsTestScenesTransitionSetupDataSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5257 };

  /// @brief Field _environmentInfo, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentInfoSO> ____environmentInfo;

  /// @brief Field _eventsTestSceneInfo, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SceneInfo> ____eventsTestSceneInfo;

  /// @brief Field _gameCoreSceneInfo, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SceneInfo> ____gameCoreSceneInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EventsTestScenesTransitionSetupDataSO, ____environmentInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestScenesTransitionSetupDataSO, ____eventsTestSceneInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestScenesTransitionSetupDataSO, ____gameCoreSceneInfo) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EventsTestScenesTransitionSetupDataSO, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EventsTestScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EventsTestScenesTransitionSetupDataSO*, "", "EventsTestScenesTransitionSetupDataSO");
