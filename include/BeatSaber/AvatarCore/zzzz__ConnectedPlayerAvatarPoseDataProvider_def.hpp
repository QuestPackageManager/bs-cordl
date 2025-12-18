#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/ConnectedPlayerAvatarPoseDataProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/AvatarCore/zzzz__AvatarPoseData_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ConnectedPlayerAvatarPoseDataProvider)
namespace BeatSaber::AvatarCore {
struct AvatarPoseData;
}
namespace BeatSaber::AvatarCore {
class IAvatarPoseDataProvider;
}
namespace BeatSaber::AvatarCore {
class IAvatarPoseRestriction;
}
namespace GlobalNamespace {
class IBeatSaberConnectedPlayer;
}
namespace GlobalNamespace {
class INodePoseSyncStateManager;
}
namespace System {
template <typename T> class Action_1;
}
namespace Zenject {
class ITickable;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class ConnectedPlayerAvatarPoseDataProvider;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider);
// Dependencies BeatSaber.AvatarCore.AvatarPoseData, System.Object
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: BeatSaber.AvatarCore.ConnectedPlayerAvatarPoseDataProvider
class CORDL_TYPE ConnectedPlayerAvatarPoseDataProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field _avatarPoseRestriction, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarPoseRestriction, put = __cordl_internal_set__avatarPoseRestriction)) ::BeatSaber::AvatarCore::IAvatarPoseRestriction* _avatarPoseRestriction;

  /// @brief Field _connectedPlayer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayer, put = __cordl_internal_set__connectedPlayer)) ::GlobalNamespace::IBeatSaberConnectedPlayer* _connectedPlayer;

  /// @brief Field _currentPose, offset 0x30, size 0x54
  __declspec(property(get = __cordl_internal_get__currentPose, put = __cordl_internal_set__currentPose)) ::BeatSaber::AvatarCore::AvatarPoseData _currentPose;

  /// @brief Field _nodePoseSyncStateManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__nodePoseSyncStateManager,
                      put = __cordl_internal_set__nodePoseSyncStateManager)) ::GlobalNamespace::INodePoseSyncStateManager* _nodePoseSyncStateManager;

  __declspec(property(get = get_currentPose)) ::BeatSaber::AvatarCore::AvatarPoseData currentPose;

  /// @brief Field poseDidChangeEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_poseDidChangeEvent, put = __cordl_internal_set_poseDidChangeEvent)) ::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>* poseDidChangeEvent;

  /// @brief Convert operator to "::BeatSaber::AvatarCore::IAvatarPoseDataProvider"
  constexpr operator ::BeatSaber::AvatarCore::IAvatarPoseDataProvider*() noexcept;

  /// @brief Convert operator to "::Zenject::ITickable"
  constexpr operator ::Zenject::ITickable*() noexcept;

  static inline ::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider* New_ctor(::GlobalNamespace::IBeatSaberConnectedPlayer* connectedPlayer,
                                                                                         ::GlobalNamespace::INodePoseSyncStateManager* nodePoseSyncStateManager,
                                                                                         ::BeatSaber::AvatarCore::IAvatarPoseRestriction* avatarPoseRestriction);

  /// @brief Method Tick, addr 0x319f438, size 0x4f8, virtual true, abstract: false, final true
  inline void Tick();

  constexpr ::BeatSaber::AvatarCore::IAvatarPoseRestriction* const& __cordl_internal_get__avatarPoseRestriction() const;

  constexpr ::BeatSaber::AvatarCore::IAvatarPoseRestriction*& __cordl_internal_get__avatarPoseRestriction();

  constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* const& __cordl_internal_get__connectedPlayer() const;

  constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer*& __cordl_internal_get__connectedPlayer();

  constexpr ::BeatSaber::AvatarCore::AvatarPoseData const& __cordl_internal_get__currentPose() const;

  constexpr ::BeatSaber::AvatarCore::AvatarPoseData& __cordl_internal_get__currentPose();

  constexpr ::GlobalNamespace::INodePoseSyncStateManager* const& __cordl_internal_get__nodePoseSyncStateManager() const;

  constexpr ::GlobalNamespace::INodePoseSyncStateManager*& __cordl_internal_get__nodePoseSyncStateManager();

  constexpr ::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>* const& __cordl_internal_get_poseDidChangeEvent() const;

  constexpr ::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*& __cordl_internal_get_poseDidChangeEvent();

  constexpr void __cordl_internal_set__avatarPoseRestriction(::BeatSaber::AvatarCore::IAvatarPoseRestriction* value);

  constexpr void __cordl_internal_set__connectedPlayer(::GlobalNamespace::IBeatSaberConnectedPlayer* value);

  constexpr void __cordl_internal_set__currentPose(::BeatSaber::AvatarCore::AvatarPoseData value);

  constexpr void __cordl_internal_set__nodePoseSyncStateManager(::GlobalNamespace::INodePoseSyncStateManager* value);

  constexpr void __cordl_internal_set_poseDidChangeEvent(::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>* value);

  /// @brief Method .ctor, addr 0x319f42c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatSaberConnectedPlayer* connectedPlayer, ::GlobalNamespace::INodePoseSyncStateManager* nodePoseSyncStateManager,
                    ::BeatSaber::AvatarCore::IAvatarPoseRestriction* avatarPoseRestriction);

  /// @brief Method add_poseDidChangeEvent, addr 0x319f2ac, size 0xc0, virtual true, abstract: false, final true
  inline void add_poseDidChangeEvent(::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>* value);

  /// @brief Method get_currentPose, addr 0x319f29c, size 0x10, virtual true, abstract: false, final true
  inline ::BeatSaber::AvatarCore::AvatarPoseData get_currentPose();

  /// @brief Convert to "::BeatSaber::AvatarCore::IAvatarPoseDataProvider"
  constexpr ::BeatSaber::AvatarCore::IAvatarPoseDataProvider* i___BeatSaber__AvatarCore__IAvatarPoseDataProvider() noexcept;

  /// @brief Convert to "::Zenject::ITickable"
  constexpr ::Zenject::ITickable* i___Zenject__ITickable() noexcept;

  /// @brief Method remove_poseDidChangeEvent, addr 0x319f36c, size 0xc0, virtual true, abstract: false, final true
  inline void remove_poseDidChangeEvent(::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectedPlayerAvatarPoseDataProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerAvatarPoseDataProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectedPlayerAvatarPoseDataProvider(ConnectedPlayerAvatarPoseDataProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerAvatarPoseDataProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectedPlayerAvatarPoseDataProvider(ConnectedPlayerAvatarPoseDataProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21426 };

  /// @brief Field poseDidChangeEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>* ___poseDidChangeEvent;

  /// @brief Field _connectedPlayer, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IBeatSaberConnectedPlayer* ____connectedPlayer;

  /// @brief Field _nodePoseSyncStateManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::INodePoseSyncStateManager* ____nodePoseSyncStateManager;

  /// @brief Field _avatarPoseRestriction, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::IAvatarPoseRestriction* ____avatarPoseRestriction;

  /// @brief Field _currentPose, offset: 0x30, size: 0x54, def value: None
  ::BeatSaber::AvatarCore::AvatarPoseData ____currentPose;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider, ___poseDidChangeEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider, ____connectedPlayer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider, ____nodePoseSyncStateManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider, ____avatarPoseRestriction) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider, ____currentPose) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider, 0x88>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider*, "BeatSaber.AvatarCore", "ConnectedPlayerAvatarPoseDataProvider");
