#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayingCampaignRichPresenceData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlayingCampaignRichPresenceData)
namespace GlobalNamespace {
class IRichPresenceData;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayingCampaignRichPresenceData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayingCampaignRichPresenceData);
// Type: ::PlayingCampaignRichPresenceData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayingCampaignRichPresenceData*
class CORDL_TYPE PlayingCampaignRichPresenceData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _localizedDescription, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__localizedDescription, put = __cordl_internal_set__localizedDescription)) ::StringW _localizedDescription;

  __declspec(property(get = get_apiName)) ::StringW apiName;

  __declspec(property(get = get_localizedDescription)) ::StringW localizedDescription;

  /// @brief Convert operator to "::GlobalNamespace::IRichPresenceData"
  constexpr operator ::GlobalNamespace::IRichPresenceData*() noexcept;

  static inline ::GlobalNamespace::PlayingCampaignRichPresenceData* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__localizedDescription() const;

  constexpr ::StringW& __cordl_internal_get__localizedDescription();

  constexpr void __cordl_internal_set__localizedDescription(::StringW value);

  /// @brief Method .ctor, addr 0x3acc470, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_apiName, addr 0x3acc3d8, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_apiName();

  /// @brief Method get_localizedDescription, addr 0x3acc418, size 0x58, virtual true, abstract: false, final true
  inline ::StringW get_localizedDescription();

  /// @brief Convert to "::GlobalNamespace::IRichPresenceData"
  constexpr ::GlobalNamespace::IRichPresenceData* i___GlobalNamespace__IRichPresenceData() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayingCampaignRichPresenceData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayingCampaignRichPresenceData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayingCampaignRichPresenceData(PlayingCampaignRichPresenceData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayingCampaignRichPresenceData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayingCampaignRichPresenceData(PlayingCampaignRichPresenceData const&) = delete;

  /// @brief Field _localizedDescription, offset: 0x10, size: 0x8, def value: None
  ::StringW ____localizedDescription;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5135 };

  /// @brief Field kPlayingCampaignRichPresenceLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kPlayingCampaignRichPresenceLocalizationKey{ u"PLAYING_CAMPAIGN_PRESENCE" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayingCampaignRichPresenceData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayingCampaignRichPresenceData, ____localizedDescription) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayingCampaignRichPresenceData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayingCampaignRichPresenceData*, "", "PlayingCampaignRichPresenceData");
