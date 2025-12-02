#pragma once
// IWYU pragma private; include "GlobalNamespace/MockScoreSyncStateSender.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MockScoreSyncStateSender)
namespace GlobalNamespace {
class IBeatSaberMultiplayerSessionManager;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class StandardScoreSyncStateNetSerializable;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class MockScoreSyncStateSender;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockScoreSyncStateSender);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MockScoreSyncStateSender
class CORDL_TYPE MockScoreSyncStateSender : public ::System::Object {
public:
  // Declarations
  /// @brief Field _multiplayerSessionManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x586ddcc, size 0xc0, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method HandleScoreSyncStateUpdate, addr 0x5873554, size 0x4, virtual false, abstract: false, final false
  inline void HandleScoreSyncStateUpdate(::GlobalNamespace::StandardScoreSyncStateNetSerializable* nodePose, ::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  static inline ::GlobalNamespace::MockScoreSyncStateSender* New_ctor(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager);

  /// @brief Method SendScore, addr 0x5871040, size 0x1ac, virtual false, abstract: false, final false
  inline void SendScore(int32_t modifiedScore, int32_t multipliedScore, int32_t immediateMaxPossibleMultipliedScore, int32_t combo, int32_t multiplier);

  constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value);

  /// @brief Method .ctor, addr 0x586dbf8, size 0x1a8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockScoreSyncStateSender();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockScoreSyncStateSender", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockScoreSyncStateSender(MockScoreSyncStateSender&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockScoreSyncStateSender", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockScoreSyncStateSender(MockScoreSyncStateSender const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22024 };

  /// @brief Field _multiplayerSessionManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* ____multiplayerSessionManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockScoreSyncStateSender, ____multiplayerSessionManager) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockScoreSyncStateSender, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockScoreSyncStateSender);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockScoreSyncStateSender*, "", "MockScoreSyncStateSender");
