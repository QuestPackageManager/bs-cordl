#pragma once
// IWYU pragma private; include "GlobalNamespace/QuestSettingsApplicatorSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SettingsApplicatorSO_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
MARK_REF_PTR_T(::GlobalNamespace::QuestSettingsApplicatorSO);
// Type: ::QuestSettingsApplicatorSO
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::QuestSettingsApplicatorSO*
class CORDL_TYPE QuestSettingsApplicatorSO : public ::GlobalNamespace::SettingsApplicatorSO {
public:
  // Declarations
  /// @brief Method ApplyGraphicSettings, addr 0x3ab9f8c, size 0x2a4, virtual true, abstract: false, final false
  inline void ApplyGraphicSettings(ByRef<::BeatSaber::Settings::Settings> settings, ::GlobalNamespace::SceneType sceneType);

  static inline ::GlobalNamespace::QuestSettingsApplicatorSO* New_ctor();

  /// @brief Method .ctor, addr 0x3aba424, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5147 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuestSettingsApplicatorSO, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::QuestSettingsApplicatorSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuestSettingsApplicatorSO*, "", "QuestSettingsApplicatorSO");
