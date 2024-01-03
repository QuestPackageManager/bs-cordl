#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MultiplayerUnavailableReasonMethods)
namespace GlobalNamespace {
class MultiplayerStatusData;
}
namespace Polyglot {
struct Language;
}
namespace GlobalNamespace {
struct MultiplayerUnavailableReason;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerUnavailableReasonMethods;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerUnavailableReasonMethods);
// Type: ::MultiplayerUnavailableReasonMethods
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4516))
// CS Name: ::MultiplayerUnavailableReasonMethods*
class CORDL_TYPE MultiplayerUnavailableReasonMethods : public ::System::Object {
public:
  // Declarations
  /// @brief Method LocalizedKey, addr 0x2362fb4, size 0x84, virtual false, abstract: false, final false
  static inline ::StringW LocalizedKey(::GlobalNamespace::MultiplayerUnavailableReason multiplayerUnavailableReason);

  /// @brief Method ErrorCode, addr 0x2363038, size 0x80, virtual false, abstract: false, final false
  static inline ::StringW ErrorCode(::GlobalNamespace::MultiplayerUnavailableReason multiplayerUnavailableReason);

  /// @brief Method TryGetMultiplayerUnavailableReason, addr 0x23630b8, size 0x108, virtual false, abstract: false, final false
  static inline bool TryGetMultiplayerUnavailableReason(::GlobalNamespace::MultiplayerStatusData* data, ByRef<::GlobalNamespace::MultiplayerUnavailableReason> reason);

  /// @brief Method GetLocalizedMessage, addr 0x23633c8, size 0xb0, virtual false, abstract: false, final false
  static inline ::StringW GetLocalizedMessage(::GlobalNamespace::MultiplayerStatusData* data, ::Polyglot::Language language);

  /// @brief Method VersionLessThan, addr 0x23631c0, size 0x208, virtual false, abstract: false, final false
  static inline bool VersionLessThan(::StringW currentVersion, ::StringW minVersion);

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerUnavailableReasonMethods", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerUnavailableReasonMethods(MultiplayerUnavailableReasonMethods&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerUnavailableReasonMethods", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerUnavailableReasonMethods(MultiplayerUnavailableReasonMethods const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerUnavailableReasonMethods();

public:
  /// @brief Field kMultiplayerUnavailableServerOffline offset 0xffffffff size 0x8
  static constexpr ::ConstString kMultiplayerUnavailableServerOffline{ u"MULTIPLAYER_UNAVAILABLE_SERVER_OFFLINE" };

  /// @brief Field kMultiplayerUnavailableUpdateRequired offset 0xffffffff size 0x8
  static constexpr ::ConstString kMultiplayerUnavailableUpdateRequired{ u"MULTIPLAYER_UNAVAILABLE_UPDATE_REQUIRED" };

  /// @brief Field kMultiplayerUnavailableMaintenanceMode offset 0xffffffff size 0x8
  static constexpr ::ConstString kMultiplayerUnavailableMaintenanceMode{ u"MULTIPLAYER_UNAVAILABLE_MAINTENANCE_MODE" };

  /// @brief Field kMultiplayerUnavailableTryAgain offset 0xffffffff size 0x8
  static constexpr ::ConstString kMultiplayerUnavailableTryAgain{ u"MULTIPLAYER_UNAVAILABLE_TRY_AGAIN" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerUnavailableReasonMethods, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerUnavailableReasonMethods);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerUnavailableReasonMethods*, "", "MultiplayerUnavailableReasonMethods");
