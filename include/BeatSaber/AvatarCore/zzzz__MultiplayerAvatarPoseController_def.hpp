#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/MultiplayerAvatarPoseController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerAvatarPoseController)
namespace BeatSaber::AvatarCore {
class IAvatarPoseRestriction;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class INodePoseSyncStateManager;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class MultiplayerAvatarPoseController;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::MultiplayerAvatarPoseController);
// Type: BeatSaber.AvatarCore::MultiplayerAvatarPoseController
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: ::BeatSaber.AvatarCore::MultiplayerAvatarPoseController*
class CORDL_TYPE MultiplayerAvatarPoseController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _avatarPoseRestriction, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarPoseRestriction, put = __cordl_internal_set__avatarPoseRestriction))::BeatSaber::AvatarCore::IAvatarPoseRestriction* _avatarPoseRestriction;

  /// @brief Field _connectedPlayer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayer, put = __cordl_internal_set__connectedPlayer))::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  /// @brief Field _headTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__headTransform, put = __cordl_internal_set__headTransform))::UnityW<::UnityEngine::Transform> _headTransform;

  /// @brief Field _leftSaberTransform, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__leftSaberTransform, put = __cordl_internal_set__leftSaberTransform))::UnityW<::UnityEngine::Transform> _leftSaberTransform;

  /// @brief Field _nodePoseSyncStateManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__nodePoseSyncStateManager,
                      put = __cordl_internal_set__nodePoseSyncStateManager))::GlobalNamespace::INodePoseSyncStateManager* _nodePoseSyncStateManager;

  /// @brief Field _rightSaberTransform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__rightSaberTransform, put = __cordl_internal_set__rightSaberTransform))::UnityW<::UnityEngine::Transform> _rightSaberTransform;

  __declspec(property(put = set_connectedPlayer))::GlobalNamespace::IConnectedPlayer* connectedPlayer;

  /// @brief Field didUpdatePoseEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_didUpdatePoseEvent, put = __cordl_internal_set_didUpdatePoseEvent))::System::Action_1<::UnityEngine::Vector3>* didUpdatePoseEvent;

  static inline ::BeatSaber::AvatarCore::MultiplayerAvatarPoseController* New_ctor();

  /// @brief Method Start, addr 0x10526bc, size 0x18, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x10526d4, size 0x4dc, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::BeatSaber::AvatarCore::IAvatarPoseRestriction*& __cordl_internal_get__avatarPoseRestriction();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarPoseRestriction*> const& __cordl_internal_get__avatarPoseRestriction() const;

  constexpr ::GlobalNamespace::IConnectedPlayer*& __cordl_internal_get__connectedPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __cordl_internal_get__connectedPlayer() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__headTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__headTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__leftSaberTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__leftSaberTransform();

  constexpr ::GlobalNamespace::INodePoseSyncStateManager*& __cordl_internal_get__nodePoseSyncStateManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INodePoseSyncStateManager*> const& __cordl_internal_get__nodePoseSyncStateManager() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rightSaberTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rightSaberTransform();

  constexpr ::System::Action_1<::UnityEngine::Vector3>*& __cordl_internal_get_didUpdatePoseEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Vector3>*> const& __cordl_internal_get_didUpdatePoseEvent() const;

  constexpr void __cordl_internal_set__avatarPoseRestriction(::BeatSaber::AvatarCore::IAvatarPoseRestriction* value);

  constexpr void __cordl_internal_set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr void __cordl_internal_set__headTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__leftSaberTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__nodePoseSyncStateManager(::GlobalNamespace::INodePoseSyncStateManager* value);

  constexpr void __cordl_internal_set__rightSaberTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_didUpdatePoseEvent(::System::Action_1<::UnityEngine::Vector3>* value);

  /// @brief Method .ctor, addr 0x1052bb0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didUpdatePoseEvent, addr 0x104e100, size 0xb0, virtual false, abstract: false, final false
  inline void add_didUpdatePoseEvent(::System::Action_1<::UnityEngine::Vector3>* value);

  /// @brief Method remove_didUpdatePoseEvent, addr 0x104e280, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didUpdatePoseEvent(::System::Action_1<::UnityEngine::Vector3>* value);

  /// @brief Method set_connectedPlayer, addr 0x10526b4, size 0x8, virtual false, abstract: false, final false
  inline void set_connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerAvatarPoseController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerAvatarPoseController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerAvatarPoseController(MultiplayerAvatarPoseController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerAvatarPoseController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerAvatarPoseController(MultiplayerAvatarPoseController const&) = delete;

  /// @brief Field _leftSaberTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____leftSaberTransform;

  /// @brief Field _rightSaberTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____rightSaberTransform;

  /// @brief Field _headTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____headTransform;

  /// @brief Field _nodePoseSyncStateManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::INodePoseSyncStateManager* ____nodePoseSyncStateManager;

  /// @brief Field _avatarPoseRestriction, offset: 0x38, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::IAvatarPoseRestriction* ____avatarPoseRestriction;

  /// @brief Field _connectedPlayer, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer;

  /// @brief Field didUpdatePoseEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Vector3>* ___didUpdatePoseEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController, 0x50>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::MultiplayerAvatarPoseController, ____leftSaberTransform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::MultiplayerAvatarPoseController, ____rightSaberTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::MultiplayerAvatarPoseController, ____headTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::MultiplayerAvatarPoseController, ____nodePoseSyncStateManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::MultiplayerAvatarPoseController, ____avatarPoseRestriction) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::MultiplayerAvatarPoseController, ____connectedPlayer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::MultiplayerAvatarPoseController, ___didUpdatePoseEvent) == 0x48, "Offset mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::MultiplayerAvatarPoseController);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::MultiplayerAvatarPoseController*, "BeatSaber.AvatarCore", "MultiplayerAvatarPoseController");
