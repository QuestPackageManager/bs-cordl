#pragma once
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
// Type: ::ConnectedPlayerHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12604))
// CS Name: ::ConnectedPlayerHelpers*
class CORDL_TYPE ConnectedPlayerHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method WantsToPlayNextLevel, addr 0xe5cca8, size 0xbc, virtual false, abstract: false, final false
  static inline bool WantsToPlayNextLevel(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method WasActiveAtLevelStart, addr 0xe5cd64, size 0xbc, virtual false, abstract: false, final false
  static inline bool WasActiveAtLevelStart(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method IsActive, addr 0xe5ce20, size 0xbc, virtual false, abstract: false, final false
  static inline bool IsActive(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method HasFinishedLevel, addr 0xe5cedc, size 0xbc, virtual false, abstract: false, final false
  static inline bool HasFinishedLevel(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method IsActiveOrFinished, addr 0xe5cf98, size 0x28, virtual false, abstract: false, final false
  static inline bool IsActiveOrFinished(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method IsFailed, addr 0xe5cfc0, size 0xd8, virtual false, abstract: false, final false
  static inline bool IsFailed(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectedPlayerHelpers(ConnectedPlayerHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectedPlayerHelpers(ConnectedPlayerHelpers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectedPlayerHelpers();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConnectedPlayerHelpers, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ConnectedPlayerHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectedPlayerHelpers*, "", "ConnectedPlayerHelpers");
