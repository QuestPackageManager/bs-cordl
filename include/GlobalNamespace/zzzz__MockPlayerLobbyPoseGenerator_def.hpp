#pragma once
// IWYU pragma private; include "GlobalNamespace/MockPlayerLobbyPoseGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MockPlayerLobbyPoseGenerator)
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class MockNodePoseSyncStateSender;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerLobbyPoseGenerator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPlayerLobbyPoseGenerator);
// Dependencies System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MockPlayerLobbyPoseGenerator
class CORDL_TYPE MockPlayerLobbyPoseGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field mockNodePoseSyncStateSender, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mockNodePoseSyncStateSender,
                      put = __cordl_internal_set_mockNodePoseSyncStateSender)) ::GlobalNamespace::MockNodePoseSyncStateSender* mockNodePoseSyncStateSender;

  /// @brief Field multiplayerSessionManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_multiplayerSessionManager,
                      put = __cordl_internal_set_multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x3c2f648, size 0x10, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method Init, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::MockPlayerLobbyPoseGenerator* New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager);

  /// @brief Method Tick, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Tick();

  constexpr ::GlobalNamespace::MockNodePoseSyncStateSender* const& __cordl_internal_get_mockNodePoseSyncStateSender() const;

  constexpr ::GlobalNamespace::MockNodePoseSyncStateSender*& __cordl_internal_get_mockNodePoseSyncStateSender();

  constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& __cordl_internal_get_multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get_multiplayerSessionManager();

  constexpr void __cordl_internal_set_mockNodePoseSyncStateSender(::GlobalNamespace::MockNodePoseSyncStateSender* value);

  constexpr void __cordl_internal_set_multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  /// @brief Method .ctor, addr 0x3c2f5d4, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlayerLobbyPoseGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerLobbyPoseGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlayerLobbyPoseGenerator(MockPlayerLobbyPoseGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerLobbyPoseGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlayerLobbyPoseGenerator(MockPlayerLobbyPoseGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18121 };

  /// @brief Field multiplayerSessionManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ___multiplayerSessionManager;

  /// @brief Field mockNodePoseSyncStateSender, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MockNodePoseSyncStateSender* ___mockNodePoseSyncStateSender;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockPlayerLobbyPoseGenerator, ___multiplayerSessionManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerLobbyPoseGenerator, ___mockNodePoseSyncStateSender) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayerLobbyPoseGenerator, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlayerLobbyPoseGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerLobbyPoseGenerator*, "", "MockPlayerLobbyPoseGenerator");
