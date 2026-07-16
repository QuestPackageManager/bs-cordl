#pragma once
// IWYU pragma private; include "GlobalNamespace/QuestSettingsApplicatorSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SettingsApplicatorSO_def.hpp"
CORDL_MODULE_EXPORT(QuestSettingsApplicatorSO)
namespace BeatSaber::Settings {
struct Settings;
}
namespace GlobalNamespace {
struct SceneType;
}
// Forward declare root types
namespace GlobalNamespace {
class QuestSettingsApplicatorSO;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::QuestSettingsApplicatorSO*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::QuestSettingsApplicatorSO*, "", "QuestSettingsApplicatorSO");
// Dependencies SettingsApplicatorSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: QuestSettingsApplicatorSO
class CORDL_TYPE QuestSettingsApplicatorSO : public ::GlobalNamespace::SettingsApplicatorSO {
public:
  // Declarations
  /// @brief Method ApplyGraphicSettings, addr 0x58ff938, size 0x2a4, virtual true, abstract: false, final false
  inline void ApplyGraphicSettings(::by_ref<::BeatSaber::Settings::Settings> settings, ::GlobalNamespace::SceneType sceneType);

  static inline ::GlobalNamespace::QuestSettingsApplicatorSO* New_ctor();

  /// @brief Method .ctor, addr 0x58fff8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuestSettingsApplicatorSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QuestSettingsApplicatorSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuestSettingsApplicatorSO(QuestSettingsApplicatorSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuestSettingsApplicatorSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuestSettingsApplicatorSO(QuestSettingsApplicatorSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6640 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::QuestSettingsApplicatorSO) == 0x68, "Size mismatch!");

} // namespace GlobalNamespace
