#pragma once
// IWYU pragma private; include "GlobalNamespace/AddressablesConstants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AddressablesConstants)
// Forward declare root types
namespace GlobalNamespace {
class AddressablesConstants;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AddressablesConstants*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AddressablesConstants*, "", "AddressablesConstants");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AddressablesConstants
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23606 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AddressablesConstants) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
