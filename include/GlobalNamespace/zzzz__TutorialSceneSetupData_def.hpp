#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
CORDL_MODULE_EXPORT(TutorialSceneSetupData)
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class ColorScheme;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialSceneSetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TutorialSceneSetupData);
// Type: ::TutorialSceneSetupData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15408))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6059))
// CS Name: ::TutorialSceneSetupData*
class CORDL_TYPE TutorialSceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
  // Declarations
  /// @brief Field colorScheme, offset 0x10, size 0x8
  __declspec(property(get = __get_colorScheme, put = __set_colorScheme))::GlobalNamespace::ColorScheme* colorScheme;

  /// @brief Field playerSpecificSettings, offset 0x18, size 0x8
  __declspec(property(get = __get_playerSpecificSettings, put = __set_playerSpecificSettings))::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  constexpr ::GlobalNamespace::ColorScheme*& __get_colorScheme();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorScheme*> const& __get_colorScheme() const;

  constexpr void __set_colorScheme(::GlobalNamespace::ColorScheme* value);

  constexpr ::GlobalNamespace::PlayerSpecificSettings*& __get_playerSpecificSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> const& __get_playerSpecificSettings() const;

  constexpr void __set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

  static inline ::GlobalNamespace::TutorialSceneSetupData* New_ctor(::GlobalNamespace::ColorScheme* colorScheme, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);

  /// @brief Method .ctor addr 0x231ce68 size 0x2c virtual false final false
  inline void _ctor(::GlobalNamespace::ColorScheme* colorScheme, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);

  // Ctor Parameters [CppParam { name: "", ty: "TutorialSceneSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialSceneSetupData(TutorialSceneSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialSceneSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialSceneSetupData(TutorialSceneSetupData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialSceneSetupData();

public:
  /// @brief Field colorScheme, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::ColorScheme* ___colorScheme;

  /// @brief Field playerSpecificSettings, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* ___playerSpecificSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialSceneSetupData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TutorialSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialSceneSetupData*, "", "TutorialSceneSetupData");
