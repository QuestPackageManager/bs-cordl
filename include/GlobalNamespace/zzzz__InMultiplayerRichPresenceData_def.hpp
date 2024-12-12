#pragma once
// IWYU pragma private; include "GlobalNamespace/InMultiplayerRichPresenceData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IMultiplayerRichPresenceData_def.hpp"
#include "GlobalNamespace/zzzz__IRichPresenceData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InMultiplayerRichPresenceData)
// Forward declare root types
namespace GlobalNamespace {
class InMultiplayerRichPresenceData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::InMultiplayerRichPresenceData);
// Dependencies IMultiplayerRichPresenceData, IRichPresenceData, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: InMultiplayerRichPresenceData
class CORDL_TYPE InMultiplayerRichPresenceData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <apiName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__apiName_k__BackingField, put = __cordl_internal_set__apiName_k__BackingField)) ::StringW _apiName_k__BackingField;

  /// @brief Field <atMaxPartySize>k__BackingField, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__atMaxPartySize_k__BackingField, put = __cordl_internal_set__atMaxPartySize_k__BackingField)) bool _atMaxPartySize_k__BackingField;

  /// @brief Field <canInvite>k__BackingField, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__canInvite_k__BackingField, put = __cordl_internal_set__canInvite_k__BackingField)) bool _canInvite_k__BackingField;

  /// @brief Field <localizedDescription>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__localizedDescription_k__BackingField,
                      put = __cordl_internal_set__localizedDescription_k__BackingField)) ::StringW _localizedDescription_k__BackingField;

  /// @brief Field <multiplayerSecret>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSecret_k__BackingField, put = __cordl_internal_set__multiplayerSecret_k__BackingField)) ::StringW _multiplayerSecret_k__BackingField;

  __declspec(property(get = get_apiName, put = set_apiName)) ::StringW apiName;

  __declspec(property(get = get_atMaxPartySize, put = set_atMaxPartySize)) bool atMaxPartySize;

  __declspec(property(get = get_canInvite, put = set_canInvite)) bool canInvite;

  __declspec(property(get = get_isJoinable)) bool isJoinable;

  __declspec(property(get = get_localizedDescription, put = set_localizedDescription)) ::StringW localizedDescription;

  __declspec(property(get = get_multiplayerSecret, put = set_multiplayerSecret)) ::StringW multiplayerSecret;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerRichPresenceData"
  constexpr operator ::GlobalNamespace::IMultiplayerRichPresenceData*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IRichPresenceData"
  constexpr operator ::GlobalNamespace::IRichPresenceData*() noexcept;

  static inline ::GlobalNamespace::InMultiplayerRichPresenceData* New_ctor(::StringW multiplayerSecret, bool canInvite, bool atMaxPartySize);

  constexpr ::StringW const& __cordl_internal_get__apiName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__apiName_k__BackingField();

  constexpr bool const& __cordl_internal_get__atMaxPartySize_k__BackingField() const;

  constexpr bool& __cordl_internal_get__atMaxPartySize_k__BackingField();

  constexpr bool const& __cordl_internal_get__canInvite_k__BackingField() const;

  constexpr bool& __cordl_internal_get__canInvite_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__localizedDescription_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__localizedDescription_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__multiplayerSecret_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__multiplayerSecret_k__BackingField();

  constexpr void __cordl_internal_set__apiName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__atMaxPartySize_k__BackingField(bool value);

  constexpr void __cordl_internal_set__canInvite_k__BackingField(bool value);

  constexpr void __cordl_internal_set__localizedDescription_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__multiplayerSecret_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x3b2b340, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::StringW multiplayerSecret, bool canInvite, bool atMaxPartySize);

  /// @brief Method get_apiName, addr 0x3b2b2b0, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_apiName();

  /// @brief Method get_atMaxPartySize, addr 0x3b2b2e0, size 0x8, virtual true, abstract: false, final true
  inline bool get_atMaxPartySize();

  /// @brief Method get_canInvite, addr 0x3b2b2f4, size 0x8, virtual true, abstract: false, final true
  inline bool get_canInvite();

  /// @brief Method get_isJoinable, addr 0x3b2b308, size 0x38, virtual true, abstract: false, final true
  inline bool get_isJoinable();

  /// @brief Method get_localizedDescription, addr 0x3b2b2c0, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_localizedDescription();

  /// @brief Method get_multiplayerSecret, addr 0x3b2b2d0, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_multiplayerSecret();

  /// @brief Convert to "::GlobalNamespace::IMultiplayerRichPresenceData"
  constexpr ::GlobalNamespace::IMultiplayerRichPresenceData* i___GlobalNamespace__IMultiplayerRichPresenceData() noexcept;

  /// @brief Convert to "::GlobalNamespace::IRichPresenceData"
  constexpr ::GlobalNamespace::IRichPresenceData* i___GlobalNamespace__IRichPresenceData() noexcept;

  /// @brief Method set_apiName, addr 0x3b2b2b8, size 0x8, virtual false, abstract: false, final false
  inline void set_apiName(::StringW value);

  /// @brief Method set_atMaxPartySize, addr 0x3b2b2e8, size 0xc, virtual true, abstract: false, final true
  inline void set_atMaxPartySize(bool value);

  /// @brief Method set_canInvite, addr 0x3b2b2fc, size 0xc, virtual true, abstract: false, final true
  inline void set_canInvite(bool value);

  /// @brief Method set_localizedDescription, addr 0x3b2b2c8, size 0x8, virtual false, abstract: false, final false
  inline void set_localizedDescription(::StringW value);

  /// @brief Method set_multiplayerSecret, addr 0x3b2b2d8, size 0x8, virtual true, abstract: false, final true
  inline void set_multiplayerSecret(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InMultiplayerRichPresenceData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InMultiplayerRichPresenceData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InMultiplayerRichPresenceData(InMultiplayerRichPresenceData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InMultiplayerRichPresenceData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InMultiplayerRichPresenceData(InMultiplayerRichPresenceData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5149 };

  /// @brief Field kInMultiplayerLobbyRichPresenceLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kInMultiplayerLobbyRichPresenceLocalizationKey{ u"IN_MULTIPLAYER_LOBBY_PRESENCE" };

  /// @brief Field <apiName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____apiName_k__BackingField;

  /// @brief Field <localizedDescription>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____localizedDescription_k__BackingField;

  /// @brief Field <multiplayerSecret>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____multiplayerSecret_k__BackingField;

  /// @brief Field <atMaxPartySize>k__BackingField, offset: 0x28, size: 0x1, def value: None
  bool ____atMaxPartySize_k__BackingField;

  /// @brief Field <canInvite>k__BackingField, offset: 0x29, size: 0x1, def value: None
  bool ____canInvite_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InMultiplayerRichPresenceData, ____apiName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InMultiplayerRichPresenceData, ____localizedDescription_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InMultiplayerRichPresenceData, ____multiplayerSecret_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InMultiplayerRichPresenceData, ____atMaxPartySize_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InMultiplayerRichPresenceData, ____canInvite_k__BackingField) == 0x29, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InMultiplayerRichPresenceData, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::InMultiplayerRichPresenceData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InMultiplayerRichPresenceData*, "", "InMultiplayerRichPresenceData");
