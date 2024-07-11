#pragma once
// IWYU pragma private; include "GlobalNamespace/QuestSettingsApplicatorSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SettingsApplicatorSO_def.hpp"
CORDL_MODULE_EXPORT(QuestSettingsApplicatorSO)
namespace BeatSaber::PerformancePresets {
class PerformancePreset;
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
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::QuestSettingsApplicatorSO*
class CORDL_TYPE QuestSettingsApplicatorSO : public ::GlobalNamespace::SettingsApplicatorSO {
public:
  // Declarations
  /// @brief Method ApplyPerformancePreset, addr 0x26c55ac, size 0x2dc, virtual true, abstract: false, final false
  inline void ApplyPerformancePreset(::BeatSaber::PerformancePresets::PerformancePreset* preset, ::GlobalNamespace::SceneType sceneType);

  static inline ::GlobalNamespace::QuestSettingsApplicatorSO* New_ctor();

  /// @brief Method .ctor, addr 0x26c5a94, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuestSettingsApplicatorSO, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::QuestSettingsApplicatorSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuestSettingsApplicatorSO*, "", "QuestSettingsApplicatorSO");
