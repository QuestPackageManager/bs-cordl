#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentEffectsFilterPresetDropdown.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnvironmentEffectsFilterPreset_def.hpp"
#include "GlobalNamespace/zzzz__ValueDropdownController_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EnvironmentEffectsFilterPresetDropdown)
namespace GlobalNamespace {
struct EnvironmentEffectsFilterPreset;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System {
template <typename T1, typename T2> class Tuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentEffectsFilterPresetDropdown;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*, "", "EnvironmentEffectsFilterPresetDropdown");
// Dependencies EnvironmentEffectsFilterPreset, ValueDropdownController`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnvironmentEffectsFilterPresetDropdown
class CORDL_TYPE EnvironmentEffectsFilterPresetDropdown : public ::GlobalNamespace::ValueDropdownController_1<::GlobalNamespace::EnvironmentEffectsFilterPreset> {
public:
  // Declarations
  /// @brief Method GetNamedValues, addr 0x5a0eb90, size 0x130, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::EnvironmentEffectsFilterPreset, ::StringW>*>* GetNamedValues();

  static inline ::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown* New_ctor();

  /// @brief Method .ctor, addr 0x5a0ecc0, size 0x44, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentEffectsFilterPresetDropdown();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentEffectsFilterPresetDropdown", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentEffectsFilterPresetDropdown(EnvironmentEffectsFilterPresetDropdown&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentEffectsFilterPresetDropdown", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentEffectsFilterPresetDropdown(EnvironmentEffectsFilterPresetDropdown const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6380 };

  /// @brief Field kAllEnvironmentEffectsLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kAllEnvironmentEffectsLocalizationKey{ u"PLAYER_SETTINGS_ALL_ENVIRONMENT_EFFECTS" };

  /// @brief Field kNoEnvironmentEffectsLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kNoEnvironmentEffectsLocalizationKey{ u"PLAYER_SETTINGS_NO_ENVIRONMENT_EFFECTS" };

  /// @brief Field kStrobeLightsReductionLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kStrobeLightsReductionLocalizationKey{ u"PLAYER_SETTINGS_STROBE_LIGHTS_REDUCTION" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
