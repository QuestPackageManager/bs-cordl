#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AddressablesConstants)
// Forward declare root types
namespace GlobalNamespace {
class AddressablesConstants;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AddressablesConstants);
// Type: ::AddressablesConstants
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AddressablesConstants*
class CORDL_TYPE AddressablesConstants : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AddressablesConstants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AddressablesConstants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AddressablesConstants(AddressablesConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AddressablesConstants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AddressablesConstants(AddressablesConstants const&) = delete;

  /// @brief Field kAllBeatmapCharacteristicsCollectionKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kAllBeatmapCharacteristicsCollectionKey{ u"AllBeatmapCharacteristicsCollection" };

  /// @brief Field kAvatarAdapterInstallerLabel offset 0xffffffff size 0x8
  static constexpr ::ConstString kAvatarAdapterInstallerLabel{ u"AvatarAdapterInstaller" };

  /// @brief Field kColorSchemeLabel offset 0xffffffff size 0x8
  static constexpr ::ConstString kColorSchemeLabel{ u"ColorScheme" };

  /// @brief Field kEnvironmentInfoLabel offset 0xffffffff size 0x8
  static constexpr ::ConstString kEnvironmentInfoLabel{ u"EnvironmentInfo" };

  /// @brief Field kEnvironmentTracksDefinitionLabel offset 0xffffffff size 0x8
  static constexpr ::ConstString kEnvironmentTracksDefinitionLabel{ u"EnvironmentTracksDefinition" };

  /// @brief Field kGameCreditsLabel offset 0xffffffff size 0x8
  static constexpr ::ConstString kGameCreditsLabel{ u"GameCredits" };

  /// @brief Field kMusicPackCreditsLabel offset 0xffffffff size 0x8
  static constexpr ::ConstString kMusicPackCreditsLabel{ u"MusicPackCredits" };

  /// @brief Field kPackDefinitionLabelKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kPackDefinitionLabelKey{ u"PackDefinition" };

  /// @brief Field kResultEnvironmentKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kResultEnvironmentKey{ u"ResultEnvironment" };

  /// @brief Field kTextMeshProFontKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kTextMeshProFontKey{ u"TextMeshProFont" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AddressablesConstants, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AddressablesConstants);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AddressablesConstants*, "", "AddressablesConstants");
