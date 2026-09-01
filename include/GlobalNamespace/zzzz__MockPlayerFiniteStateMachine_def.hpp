#pragma once
// IWYU pragma private; include "GlobalNamespace\MockPlayerFiniteStateMachine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MockPlayerFiniteStateMachine)
namespace BGNet::Core {
class ITaskUtility;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IBeatSaberMultiplayerSessionManager;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class IMenuRpcManager;
}
namespace GlobalNamespace {
class IMockBeatmapDataProvider;
}
namespace GlobalNamespace {
class MockPlayerGamePoseGenerator;
}
namespace GlobalNamespace {
class MockPlayerLobbyPoseGenerator;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerFiniteStateMachine;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MockPlayerFiniteStateMachine*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MockPlayerFiniteStateMachine*, "", "MockPlayerFiniteStateMachine");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MockPlayerFiniteStateMachine
class CORDL_TYPE MockPlayerFiniteStateMachine : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_gamePoseGenerator)) ::GlobalNamespace::MockPlayerGamePoseGenerator* gamePoseGenerator;

  __declspec(property(get = get_inactiveByDefault, put = set_inactiveByDefault)) bool inactiveByDefault;

  __declspec(property(get = get_leftHanded, put = set_leftHanded)) bool leftHanded;

  __declspec(property(get = get_obstaclesColor, put = set_obstaclesColor)) ::UnityEngine::Color obstaclesColor;

  __declspec(property(get = get_saberAColor, put = set_saberAColor)) ::UnityEngine::Color saberAColor;

  __declspec(property(get = get_saberBColor, put = set_saberBColor)) ::UnityEngine::Color saberBColor;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x5a82d24, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::GlobalNamespace::MockPlayerFiniteStateMachine* New_ctor(::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager,
                                                                          ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager, ::GlobalNamespace::IMenuRpcManager* menuRpcManager,
                                                                          ::GlobalNamespace::IMockBeatmapDataProvider* beatmapDataProvider,
                                                                          ::GlobalNamespace::MockPlayerLobbyPoseGenerator* lobbyPoseGenerator,
                                                                          ::GlobalNamespace::MockPlayerGamePoseGenerator* gamePoseGenerator);

  /// @brief Method RecommendBeatmap, addr 0x5a82d2c, size 0x4, virtual false, abstract: false, final false
  inline void RecommendBeatmap(::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::StringW beatmapLevelId);

  /// @brief Method RecommendGameplayModifiers, addr 0x5a82d30, size 0x4, virtual false, abstract: false, final false
  inline void RecommendGameplayModifiers(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method SetIsReady, addr 0x5a82d28, size 0x4, virtual false, abstract: false, final false
  inline void SetIsReady(bool isReady);

  /// @brief Method Tick, addr 0x5a82d20, size 0x4, virtual false, abstract: false, final false
  inline void Tick();

  /// @brief Method .ctor, addr 0x5a82cb4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager,
                    ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager, ::GlobalNamespace::IMenuRpcManager* menuRpcManager, ::GlobalNamespace::IMockBeatmapDataProvider* beatmapDataProvider,
                    ::GlobalNamespace::MockPlayerLobbyPoseGenerator* lobbyPoseGenerator, ::GlobalNamespace::MockPlayerGamePoseGenerator* gamePoseGenerator);

  /// @brief Method get_gamePoseGenerator, addr 0x5a82d18, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MockPlayerGamePoseGenerator* get_gamePoseGenerator();

  /// @brief Method get_inactiveByDefault, addr 0x5a82d0c, size 0x8, virtual false, abstract: false, final false
  inline bool get_inactiveByDefault();

  /// @brief Method get_leftHanded, addr 0x5a82d00, size 0x8, virtual false, abstract: false, final false
  inline bool get_leftHanded();

  /// @brief Method get_obstaclesColor, addr 0x5a82ce8, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_obstaclesColor();

  /// @brief Method get_saberAColor, addr 0x5a82cb8, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_saberAColor();

  /// @brief Method get_saberBColor, addr 0x5a82cd0, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_saberBColor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_inactiveByDefault, addr 0x5a82d14, size 0x4, virtual false, abstract: false, final false
  inline void set_inactiveByDefault(bool value);

  /// @brief Method set_leftHanded, addr 0x5a82d08, size 0x4, virtual false, abstract: false, final false
  inline void set_leftHanded(bool value);

  /// @brief Method set_obstaclesColor, addr 0x5a82cfc, size 0x4, virtual false, abstract: false, final false
  inline void set_obstaclesColor(::UnityEngine::Color value);

  /// @brief Method set_saberAColor, addr 0x5a82ccc, size 0x4, virtual false, abstract: false, final false
  inline void set_saberAColor(::UnityEngine::Color value);

  /// @brief Method set_saberBColor, addr 0x5a82ce4, size 0x4, virtual false, abstract: false, final false
  inline void set_saberBColor(::UnityEngine::Color value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlayerFiniteStateMachine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerFiniteStateMachine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlayerFiniteStateMachine(MockPlayerFiniteStateMachine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerFiniteStateMachine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlayerFiniteStateMachine(MockPlayerFiniteStateMachine const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22229 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MockPlayerFiniteStateMachine) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
