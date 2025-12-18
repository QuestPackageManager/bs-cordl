#pragma once
// IWYU pragma private; include "GlobalNamespace/MockNodePoseSyncStateSender.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MockNodePoseSyncStateSender)
namespace GlobalNamespace {
class IBeatSaberMultiplayerSessionManager;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class NodePoseSyncStateNetSerializable;
}
namespace GlobalNamespace {
struct PoseSerializable;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class MockNodePoseSyncStateSender;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockNodePoseSyncStateSender);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MockNodePoseSyncStateSender
class CORDL_TYPE MockNodePoseSyncStateSender : public ::System::Object {
public:
  // Declarations
  /// @brief Field _multiplayerSessionManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x58d3c28, size 0xc0, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method HandleNodePoseSyncStateUpdate, addr 0x58d3ec0, size 0x4, virtual false, abstract: false, final false
  inline void HandleNodePoseSyncStateUpdate(::GlobalNamespace::NodePoseSyncStateNetSerializable* nodePose, ::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  static inline ::GlobalNamespace::MockNodePoseSyncStateSender* New_ctor(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager);

  /// @brief Method SendPose, addr 0x58d3ce8, size 0x1d8, virtual false, abstract: false, final false
  inline void SendPose(::GlobalNamespace::PoseSerializable headPose, ::GlobalNamespace::PoseSerializable leftHandPose, ::GlobalNamespace::PoseSerializable rightHandPose);

  constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value);

  /// @brief Method .ctor, addr 0x58d3a80, size 0x1a8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockNodePoseSyncStateSender();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockNodePoseSyncStateSender", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockNodePoseSyncStateSender(MockNodePoseSyncStateSender&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockNodePoseSyncStateSender", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockNodePoseSyncStateSender(MockNodePoseSyncStateSender const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22003 };

  /// @brief Field _multiplayerSessionManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* ____multiplayerSessionManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockNodePoseSyncStateSender, ____multiplayerSessionManager) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockNodePoseSyncStateSender, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockNodePoseSyncStateSender);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockNodePoseSyncStateSender*, "", "MockNodePoseSyncStateSender");
