#pragma once
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
// Type: ::EventsTestScenesTransitionSetupDataSO
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13939))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6121))
// CS Name: ::EventsTestScenesTransitionSetupDataSO*
class CORDL_TYPE EventsTestScenesTransitionSetupDataSO : public ::GlobalNamespace::ScenesTransitionSetupDataSO {
public:
  // Declarations
  /// @brief Field _environmentInfo, offset 0x30, size 0x8
  __declspec(property(get = __get__environmentInfo, put = __set__environmentInfo))::GlobalNamespace::EnvironmentInfoSO* _environmentInfo;

  /// @brief Field _eventsTestSceneInfo, offset 0x38, size 0x8
  __declspec(property(get = __get__eventsTestSceneInfo, put = __set__eventsTestSceneInfo))::GlobalNamespace::SceneInfo* _eventsTestSceneInfo;

  /// @brief Field _gameCoreSceneInfo, offset 0x40, size 0x8
  __declspec(property(get = __get__gameCoreSceneInfo, put = __set__gameCoreSceneInfo))::GlobalNamespace::SceneInfo* _gameCoreSceneInfo;

  constexpr ::GlobalNamespace::EnvironmentInfoSO*& __get__environmentInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> const& __get__environmentInfo() const;

  constexpr void __set__environmentInfo(::GlobalNamespace::EnvironmentInfoSO* value);

  constexpr ::GlobalNamespace::SceneInfo*& __get__eventsTestSceneInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SceneInfo*> const& __get__eventsTestSceneInfo() const;

  constexpr void __set__eventsTestSceneInfo(::GlobalNamespace::SceneInfo* value);

  constexpr ::GlobalNamespace::SceneInfo*& __get__gameCoreSceneInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SceneInfo*> const& __get__gameCoreSceneInfo() const;

  constexpr void __set__gameCoreSceneInfo(::GlobalNamespace::SceneInfo* value);

  /// @brief Method Init addr 0x21c9790 size 0x1dc virtual false final false
  inline void Init();

  static inline ::GlobalNamespace::EventsTestScenesTransitionSetupDataSO* New_ctor();

  /// @brief Method .ctor addr 0x21c996c size 0x1008 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EventsTestScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventsTestScenesTransitionSetupDataSO(EventsTestScenesTransitionSetupDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventsTestScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventsTestScenesTransitionSetupDataSO(EventsTestScenesTransitionSetupDataSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventsTestScenesTransitionSetupDataSO();

public:
  /// @brief Field _environmentInfo, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentInfoSO* ____environmentInfo;

  /// @brief Field _eventsTestSceneInfo, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::SceneInfo* ____eventsTestSceneInfo;

  /// @brief Field _gameCoreSceneInfo, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::SceneInfo* ____gameCoreSceneInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EventsTestScenesTransitionSetupDataSO, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestScenesTransitionSetupDataSO, ____environmentInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestScenesTransitionSetupDataSO, ____eventsTestSceneInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestScenesTransitionSetupDataSO, ____gameCoreSceneInfo) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EventsTestScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EventsTestScenesTransitionSetupDataSO*, "", "EventsTestScenesTransitionSetupDataSO");
