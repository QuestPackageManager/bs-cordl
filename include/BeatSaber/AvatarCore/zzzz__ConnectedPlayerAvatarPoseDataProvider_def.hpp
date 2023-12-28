#pragma once
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
namespace System {
template <typename T> class Action_1;
}
namespace BeatSaber::AvatarCore {
class IAvatarPoseRestriction;
}
namespace GlobalNamespace {
class INodePoseSyncStateManager;
}
namespace Zenject {
class ITickable;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class ConnectedPlayerAvatarPoseDataProvider;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider);
// Type: BeatSaber.AvatarCore::ConnectedPlayerAvatarPoseDataProvider
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 132, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15174))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15187))
// CS Name: ::BeatSaber.AvatarCore::ConnectedPlayerAvatarPoseDataProvider*
class CORDL_TYPE ConnectedPlayerAvatarPoseDataProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field poseDidChangeEvent, offset 0x10, size 0x8
  __declspec(property(get = __get_poseDidChangeEvent, put = __set_poseDidChangeEvent))::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>* poseDidChangeEvent;

  /// @brief Field _connectedPlayer, offset 0x18, size 0x8
  __declspec(property(get = __get__connectedPlayer, put = __set__connectedPlayer))::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  /// @brief Field _nodePoseSyncStateManager, offset 0x20, size 0x8
  __declspec(property(get = __get__nodePoseSyncStateManager, put = __set__nodePoseSyncStateManager))::GlobalNamespace::INodePoseSyncStateManager* _nodePoseSyncStateManager;

  /// @brief Field _avatarPoseRestriction, offset 0x28, size 0x8
  __declspec(property(get = __get__avatarPoseRestriction, put = __set__avatarPoseRestriction))::BeatSaber::AvatarCore::IAvatarPoseRestriction* _avatarPoseRestriction;

  /// @brief Field _currentPose, offset 0x30, size 0x54
  __declspec(property(get = __get__currentPose, put = __set__currentPose))::BeatSaber::AvatarCore::AvatarPoseData _currentPose;

  __declspec(property(get = get_currentPose))::BeatSaber::AvatarCore::AvatarPoseData currentPose;

  /// @brief Convert operator to "::BeatSaber::AvatarCore::IAvatarPoseDataProvider"
  constexpr operator ::BeatSaber::AvatarCore::IAvatarPoseDataProvider*() noexcept;

  /// @brief Convert operator to "::Zenject::ITickable"
  constexpr operator ::Zenject::ITickable*() noexcept;

  constexpr ::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*& __get_poseDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*> const& __get_poseDidChangeEvent() const;

  constexpr void __set_poseDidChangeEvent(::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>* value);

  constexpr ::GlobalNamespace::IConnectedPlayer*& __get__connectedPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __get__connectedPlayer() const;

  constexpr void __set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr ::GlobalNamespace::INodePoseSyncStateManager*& __get__nodePoseSyncStateManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INodePoseSyncStateManager*> const& __get__nodePoseSyncStateManager() const;

  constexpr void __set__nodePoseSyncStateManager(::GlobalNamespace::INodePoseSyncStateManager* value);

  constexpr ::BeatSaber::AvatarCore::IAvatarPoseRestriction*& __get__avatarPoseRestriction();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarPoseRestriction*> const& __get__avatarPoseRestriction() const;

  constexpr void __set__avatarPoseRestriction(::BeatSaber::AvatarCore::IAvatarPoseRestriction* value);

  constexpr ::BeatSaber::AvatarCore::AvatarPoseData& __get__currentPose();

  constexpr ::BeatSaber::AvatarCore::AvatarPoseData const& __get__currentPose() const;

  constexpr void __set__currentPose(::BeatSaber::AvatarCore::AvatarPoseData value);

  /// @brief Method get_currentPose addr 0xe0ed6c size 0x10 virtual true final true
  inline ::BeatSaber::AvatarCore::AvatarPoseData get_currentPose();

  /// @brief Method add_poseDidChangeEvent addr 0xe0ed7c size 0xb0 virtual true final true
  inline void add_poseDidChangeEvent(::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>* value);

  /// @brief Method remove_poseDidChangeEvent addr 0xe0ee2c size 0xb0 virtual true final true
  inline void remove_poseDidChangeEvent(::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>* value);

  static inline ::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider* New_ctor(::GlobalNamespace::IConnectedPlayer* connectedPlayer,
                                                                                         ::GlobalNamespace::INodePoseSyncStateManager* nodePoseSyncStateManager,
                                                                                         ::BeatSaber::AvatarCore::IAvatarPoseRestriction* avatarPoseRestriction);

  /// @brief Method .ctor addr 0xe0eedc size 0x3c virtual false final false
  inline void _ctor(::GlobalNamespace::IConnectedPlayer* connectedPlayer, ::GlobalNamespace::INodePoseSyncStateManager* nodePoseSyncStateManager,
                    ::BeatSaber::AvatarCore::IAvatarPoseRestriction* avatarPoseRestriction);

  /// @brief Method Tick addr 0xe0ef18 size 0x564 virtual true final true
  inline void Tick();

  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerAvatarPoseDataProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectedPlayerAvatarPoseDataProvider(ConnectedPlayerAvatarPoseDataProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerAvatarPoseDataProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectedPlayerAvatarPoseDataProvider(ConnectedPlayerAvatarPoseDataProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectedPlayerAvatarPoseDataProvider();

public:
  /// @brief Field poseDidChangeEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>* ___poseDidChangeEvent;

  /// @brief Field _connectedPlayer, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer;

  /// @brief Field _nodePoseSyncStateManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::INodePoseSyncStateManager* ____nodePoseSyncStateManager;

  /// @brief Field _avatarPoseRestriction, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::IAvatarPoseRestriction* ____avatarPoseRestriction;

  /// @brief Field _currentPose, offset: 0x30, size: 0x54, def value: None
  ::BeatSaber::AvatarCore::AvatarPoseData ____currentPose;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider, 0x88>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider*, "BeatSaber.AvatarCore", "ConnectedPlayerAvatarPoseDataProvider");
