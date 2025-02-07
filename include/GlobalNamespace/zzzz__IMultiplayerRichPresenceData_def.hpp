#pragma once
// IWYU pragma private; include "GlobalNamespace/IMultiplayerRichPresenceData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IRichPresenceData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IMultiplayerRichPresenceData)
// Forward declare root types
namespace GlobalNamespace {
class IMultiplayerRichPresenceData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IMultiplayerRichPresenceData);
// Dependencies IRichPresenceData
namespace GlobalNamespace {
// Is value type: false
// CS Name: IMultiplayerRichPresenceData
class CORDL_TYPE IMultiplayerRichPresenceData {
public:
  // Declarations
  __declspec(property(get = get_atMaxPartySize, put = set_atMaxPartySize)) bool atMaxPartySize;

  __declspec(property(get = get_canInvite, put = set_canInvite)) bool canInvite;

  __declspec(property(get = get_isJoinable)) bool isJoinable;

  __declspec(property(get = get_multiplayerSecret, put = set_multiplayerSecret)) ::StringW multiplayerSecret;

  /// @brief Convert operator to "::GlobalNamespace::IRichPresenceData"
  constexpr operator ::GlobalNamespace::IRichPresenceData*() noexcept;

  /// @brief Method get_atMaxPartySize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_atMaxPartySize();

  /// @brief Method get_canInvite, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_canInvite();

  /// @brief Method get_isJoinable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_isJoinable();

  /// @brief Method get_multiplayerSecret, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_multiplayerSecret();

  /// @brief Convert to "::GlobalNamespace::IRichPresenceData"
  constexpr ::GlobalNamespace::IRichPresenceData* i___GlobalNamespace__IRichPresenceData() noexcept;

  /// @brief Method set_atMaxPartySize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_atMaxPartySize(bool value);

  /// @brief Method set_canInvite, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_canInvite(bool value);

  /// @brief Method set_multiplayerSecret, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_multiplayerSecret(::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "IMultiplayerRichPresenceData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMultiplayerRichPresenceData(IMultiplayerRichPresenceData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5152 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IMultiplayerRichPresenceData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IMultiplayerRichPresenceData*, "", "IMultiplayerRichPresenceData");
