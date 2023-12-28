#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MockPlayerGamePoseGenerator)
namespace System {
class Action;
}
namespace GlobalNamespace {
class MockBeatmapData;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class MockNodePoseSyncStateSender;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
struct __LevelCompletionResults__LevelEndStateType;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class MockScoreSyncStateSender;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerGamePoseGenerator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPlayerGamePoseGenerator);
// Type: ::MockPlayerGamePoseGenerator
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15515))
// CS Name: ::MockPlayerGamePoseGenerator*
class CORDL_TYPE MockPlayerGamePoseGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field multiplayerSessionManager, offset 0x10, size 0x8
  __declspec(property(get = __get_multiplayerSessionManager, put = __set_multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;

  /// @brief Field gameplayRpcManager, offset 0x18, size 0x8
  __declspec(property(get = __get_gameplayRpcManager, put = __set_gameplayRpcManager))::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager;

  /// @brief Field leftHanded, offset 0x20, size 0x1
  __declspec(property(get = __get_leftHanded, put = __set_leftHanded)) bool leftHanded;

  /// @brief Field mockNodePoseSyncStateSender, offset 0x28, size 0x8
  __declspec(property(get = __get_mockNodePoseSyncStateSender, put = __set_mockNodePoseSyncStateSender))::GlobalNamespace::MockNodePoseSyncStateSender* mockNodePoseSyncStateSender;

  /// @brief Field mockScoreSyncStateSender, offset 0x30, size 0x8
  __declspec(property(get = __get_mockScoreSyncStateSender, put = __set_mockScoreSyncStateSender))::GlobalNamespace::MockScoreSyncStateSender* mockScoreSyncStateSender;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __get_multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __get_multiplayerSessionManager() const;

  constexpr void __set_multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr ::GlobalNamespace::IGameplayRpcManager*& __get_gameplayRpcManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGameplayRpcManager*> const& __get_gameplayRpcManager() const;

  constexpr void __set_gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager* value);

  constexpr bool& __get_leftHanded();

  constexpr bool const& __get_leftHanded() const;

  constexpr void __set_leftHanded(bool value);

  constexpr ::GlobalNamespace::MockNodePoseSyncStateSender*& __get_mockNodePoseSyncStateSender();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MockNodePoseSyncStateSender*> const& __get_mockNodePoseSyncStateSender() const;

  constexpr void __set_mockNodePoseSyncStateSender(::GlobalNamespace::MockNodePoseSyncStateSender* value);

  constexpr ::GlobalNamespace::MockScoreSyncStateSender*& __get_mockScoreSyncStateSender();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MockScoreSyncStateSender*> const& __get_mockScoreSyncStateSender() const;

  constexpr void __set_mockScoreSyncStateSender(::GlobalNamespace::MockScoreSyncStateSender* value);

  static inline ::GlobalNamespace::MockPlayerGamePoseGenerator* New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager,
                                                                         ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager, bool leftHanded);

  /// @brief Method .ctor addr 0x23e7108 size 0xc0 virtual false final false
  inline void _ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager, bool leftHanded);

  /// @brief Method Dispose addr 0x23e7344 size 0x2c virtual true final false
  inline void Dispose();

  /// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Init(int64_t introStartTime, ::GlobalNamespace::MockBeatmapData* beatmapData, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::System::Action* onSongFinished);

  /// @brief Method Tick addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Tick();

  /// @brief Method SimulateFail addr 0x23e7438 size 0xf0 virtual true final false
  inline void SimulateFail();

  /// @brief Method SimulateGiveUp addr 0x23e7630 size 0xf0 virtual false final false
  inline void SimulateGiveUp();

  /// @brief Method CreateEmptyLevelCompletionResults addr 0x23e7528 size 0x108 virtual false final false
  static inline ::GlobalNamespace::LevelCompletionResults* CreateEmptyLevelCompletionResults(::GlobalNamespace::__LevelCompletionResults__LevelEndStateType levelEndStateType);

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerGamePoseGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlayerGamePoseGenerator(MockPlayerGamePoseGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerGamePoseGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlayerGamePoseGenerator(MockPlayerGamePoseGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlayerGamePoseGenerator();

public:
  /// @brief Field multiplayerSessionManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ___multiplayerSessionManager;

  /// @brief Field gameplayRpcManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IGameplayRpcManager* ___gameplayRpcManager;

  /// @brief Field leftHanded, offset: 0x20, size: 0x1, def value: None
  bool ___leftHanded;

  /// @brief Field mockNodePoseSyncStateSender, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MockNodePoseSyncStateSender* ___mockNodePoseSyncStateSender;

  /// @brief Field mockScoreSyncStateSender, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MockScoreSyncStateSender* ___mockScoreSyncStateSender;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayerGamePoseGenerator, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlayerGamePoseGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerGamePoseGenerator*, "", "MockPlayerGamePoseGenerator");
