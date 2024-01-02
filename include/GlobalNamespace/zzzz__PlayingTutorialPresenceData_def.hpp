#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlayingTutorialPresenceData)
namespace GlobalNamespace {
class IRichPresenceData;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayingTutorialPresenceData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayingTutorialPresenceData);
// Type: ::PlayingTutorialPresenceData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4676))
// CS Name: ::PlayingTutorialPresenceData*
class CORDL_TYPE PlayingTutorialPresenceData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <localizedDescription>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__localizedDescription_k__BackingField, put = __set__localizedDescription_k__BackingField))::StringW _localizedDescription_k__BackingField;

  __declspec(property(get = get_apiName))::StringW apiName;

  __declspec(property(get = get_localizedDescription, put = set_localizedDescription))::StringW localizedDescription;

  /// @brief Convert operator to "::GlobalNamespace::IRichPresenceData"
  constexpr operator ::GlobalNamespace::IRichPresenceData*() noexcept;

  constexpr ::StringW& __get__localizedDescription_k__BackingField();

  constexpr ::StringW const& __get__localizedDescription_k__BackingField() const;

  constexpr void __set__localizedDescription_k__BackingField(::StringW value);

  /// @brief Method get_apiName, addr 0x2373dc8, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_apiName();

  /// @brief Method get_localizedDescription, addr 0x2373e08, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_localizedDescription();

  /// @brief Method set_localizedDescription, addr 0x2373e10, size 0x8, virtual false, abstract: false, final false
  inline void set_localizedDescription(::StringW value);

  static inline ::GlobalNamespace::PlayingTutorialPresenceData* New_ctor();

  /// @brief Method .ctor, addr 0x2373e18, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PlayingTutorialPresenceData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayingTutorialPresenceData(PlayingTutorialPresenceData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayingTutorialPresenceData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayingTutorialPresenceData(PlayingTutorialPresenceData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayingTutorialPresenceData();

public:
  /// @brief Field <localizedDescription>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____localizedDescription_k__BackingField;

  /// @brief Field kPlayingCampaignRichPresenceLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kPlayingCampaignRichPresenceLocalizationKey{ u"PLAYING_TUTORIAL_PRESENCE" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayingTutorialPresenceData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayingTutorialPresenceData, ____localizedDescription_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayingTutorialPresenceData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayingTutorialPresenceData*, "", "PlayingTutorialPresenceData");
