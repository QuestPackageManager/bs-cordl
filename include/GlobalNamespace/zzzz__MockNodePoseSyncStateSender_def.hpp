#pragma once
// IWYU pragma private; include "GlobalNamespace/MockNodePoseSyncStateSender.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MockNodePoseSyncStateSender)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class NodePoseSyncStateNetSerializable;
}
namespace GlobalNamespace {
struct PoseSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class MockNodePoseSyncStateSender;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockNodePoseSyncStateSender);
// Dependencies System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MockNodePoseSyncStateSender
class CORDL_TYPE MockNodePoseSyncStateSender : public ::System::Object {
public:
  // Declarations
  /// @brief Field _multiplayerSessionManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x3c2a09c, size 0xbc, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method HandleNodePoseSyncStateUpdate, addr 0x3c2a388, size 0x4, virtual false, abstract: false, final false
  inline void HandleNodePoseSyncStateUpdate(::GlobalNamespace::NodePoseSyncStateNetSerializable* nodePose, ::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  static inline ::GlobalNamespace::MockNodePoseSyncStateSender* New_ctor(::GlobalNamespace::IMultiplayerSessionManager* msm);

  /// @brief Method SendPose, addr 0x3c2a158, size 0x230, virtual false, abstract: false, final false
  inline void SendPose(::GlobalNamespace::PoseSerializable headPose, ::GlobalNamespace::PoseSerializable leftHandPose, ::GlobalNamespace::PoseSerializable rightHandPose);

  constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  /// @brief Method .ctor, addr 0x3c29f2c, size 0x170, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IMultiplayerSessionManager* msm);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18109 };

  /// @brief Field _multiplayerSessionManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockNodePoseSyncStateSender, ____multiplayerSessionManager) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockNodePoseSyncStateSender, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockNodePoseSyncStateSender);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockNodePoseSyncStateSender*, "", "MockNodePoseSyncStateSender");
