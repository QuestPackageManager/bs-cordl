#pragma once
// IWYU pragma private; include "GlobalNamespace/ConnectedPlayerHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ConnectedPlayerHelpers)
namespace GlobalNamespace {
class IConnectedPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class ConnectedPlayerHelpers;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ConnectedPlayerHelpers);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConnectedPlayerHelpers
class CORDL_TYPE ConnectedPlayerHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method HasFinishedLevel, addr 0x22be838, size 0xbc, virtual false, abstract: false, final false
  static inline bool HasFinishedLevel(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method IsActive, addr 0x22be77c, size 0xbc, virtual false, abstract: false, final false
  static inline bool IsActive(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method IsActiveOrFinished, addr 0x22be8f4, size 0x28, virtual false, abstract: false, final false
  static inline bool IsActiveOrFinished(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method IsFailed, addr 0x22be91c, size 0xd8, virtual false, abstract: false, final false
  static inline bool IsFailed(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method WantsToPlayNextLevel, addr 0x22be604, size 0xbc, virtual false, abstract: false, final false
  static inline bool WantsToPlayNextLevel(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method WasActiveAtLevelStart, addr 0x22be6c0, size 0xbc, virtual false, abstract: false, final false
  static inline bool WasActiveAtLevelStart(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectedPlayerHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectedPlayerHelpers(ConnectedPlayerHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectedPlayerHelpers(ConnectedPlayerHelpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14712 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConnectedPlayerHelpers, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ConnectedPlayerHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectedPlayerHelpers*, "", "ConnectedPlayerHelpers");
