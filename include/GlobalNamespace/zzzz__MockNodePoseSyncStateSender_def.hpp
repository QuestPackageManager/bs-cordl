#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MockNodePoseSyncStateSender)
namespace GlobalNamespace {
class NodePoseSyncStateNetSerializable;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class IConnectedPlayer;
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
// Type: ::MockNodePoseSyncStateSender
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15510))
// CS Name: ::MockNodePoseSyncStateSender*
class CORDL_TYPE MockNodePoseSyncStateSender : public ::System::Object {
public:
  // Declarations
  /// @brief Field _multiplayerSessionManager, offset 0x10, size 0x8
  __declspec(property(get = __get__multiplayerSessionManager, put = __set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __get__multiplayerSessionManager() const;

  constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  static inline ::GlobalNamespace::MockNodePoseSyncStateSender* New_ctor(::GlobalNamespace::IMultiplayerSessionManager* msm);

  /// @brief Method .ctor addr 0x23e68e0 size 0x17c virtual false final false
  inline void _ctor(::GlobalNamespace::IMultiplayerSessionManager* msm);

  /// @brief Method Dispose addr 0x23e6a5c size 0xc8 virtual true final true
  inline void Dispose();

  /// @brief Method SendPose addr 0x23e6b24 size 0x230 virtual false final false
  inline void SendPose(::GlobalNamespace::PoseSerializable headPose, ::GlobalNamespace::PoseSerializable leftHandPose, ::GlobalNamespace::PoseSerializable rightHandPose);

  /// @brief Method HandleNodePoseSyncStateUpdate addr 0x23e6d54 size 0x4 virtual false final false
  inline void HandleNodePoseSyncStateUpdate(::GlobalNamespace::NodePoseSyncStateNetSerializable* nodePose, ::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  // Ctor Parameters [CppParam { name: "", ty: "MockNodePoseSyncStateSender", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockNodePoseSyncStateSender(MockNodePoseSyncStateSender&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockNodePoseSyncStateSender", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockNodePoseSyncStateSender(MockNodePoseSyncStateSender const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockNodePoseSyncStateSender();

public:
  /// @brief Field _multiplayerSessionManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockNodePoseSyncStateSender, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockNodePoseSyncStateSender);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockNodePoseSyncStateSender*, "", "MockNodePoseSyncStateSender");
