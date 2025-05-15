#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerUnavailableReasonMethods.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MultiplayerUnavailableReasonMethods)
namespace BGLib::Polyglot {
struct Language;
}
namespace GlobalNamespace {
class MultiplayerStatusData;
}
namespace GlobalNamespace {
struct MultiplayerUnavailableReason;
}
namespace System::Text::RegularExpressions {
class Regex;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerUnavailableReasonMethods;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerUnavailableReasonMethods);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerUnavailableReasonMethods
class CORDL_TYPE MultiplayerUnavailableReasonMethods : public ::System::Object {
public:
  // Declarations
  /// @brief Field kContentVersionRegex, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kContentVersionRegex, put = setStaticF_kContentVersionRegex)) ::System::Text::RegularExpressions::Regex* kContentVersionRegex;

  /// @brief Method ErrorCode, addr 0x26e3864, size 0x80, virtual false, abstract: false, final false
  static inline ::StringW ErrorCode(::GlobalNamespace::MultiplayerUnavailableReason multiplayerUnavailableReason);

  /// @brief Method GetLocalizedMessage, addr 0x26e3c0c, size 0xb0, virtual false, abstract: false, final false
  static inline ::StringW GetLocalizedMessage(::GlobalNamespace::MultiplayerStatusData* data, ::BGLib::Polyglot::Language language);

  /// @brief Method LocalizedKey, addr 0x26e37e0, size 0x84, virtual false, abstract: false, final false
  static inline ::StringW LocalizedKey(::GlobalNamespace::MultiplayerUnavailableReason multiplayerUnavailableReason);

  /// @brief Method TryGetMultiplayerUnavailableReason, addr 0x26e38e4, size 0x160, virtual false, abstract: false, final false
  static inline bool TryGetMultiplayerUnavailableReason(::GlobalNamespace::MultiplayerStatusData* data, ::ByRef<::GlobalNamespace::MultiplayerUnavailableReason> reason);

  /// @brief Method VersionLessThan, addr 0x26e3a44, size 0x1c8, virtual false, abstract: false, final false
  static inline bool VersionLessThan(::StringW currentVersion, ::StringW minVersion);

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_kContentVersionRegex();

  static inline void setStaticF_kContentVersionRegex(::System::Text::RegularExpressions::Regex* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerUnavailableReasonMethods();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerUnavailableReasonMethods", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerUnavailableReasonMethods(MultiplayerUnavailableReasonMethods&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerUnavailableReasonMethods", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerUnavailableReasonMethods(MultiplayerUnavailableReasonMethods const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13116 };

  /// @brief Field kMultiplayerUnavailableMaintenanceMode offset 0xffffffff size 0x8
  static constexpr ::ConstString kMultiplayerUnavailableMaintenanceMode{ u"MULTIPLAYER_UNAVAILABLE_MAINTENANCE_MODE" };

  /// @brief Field kMultiplayerUnavailableServerOffline offset 0xffffffff size 0x8
  static constexpr ::ConstString kMultiplayerUnavailableServerOffline{ u"MULTIPLAYER_UNAVAILABLE_SERVER_OFFLINE" };

  /// @brief Field kMultiplayerUnavailableTryAgain offset 0xffffffff size 0x8
  static constexpr ::ConstString kMultiplayerUnavailableTryAgain{ u"MULTIPLAYER_UNAVAILABLE_TRY_AGAIN" };

  /// @brief Field kMultiplayerUnavailableUpdateRequired offset 0xffffffff size 0x8
  static constexpr ::ConstString kMultiplayerUnavailableUpdateRequired{ u"MULTIPLAYER_UNAVAILABLE_UPDATE_REQUIRED" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerUnavailableReasonMethods, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerUnavailableReasonMethods);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerUnavailableReasonMethods*, "", "MultiplayerUnavailableReasonMethods");
